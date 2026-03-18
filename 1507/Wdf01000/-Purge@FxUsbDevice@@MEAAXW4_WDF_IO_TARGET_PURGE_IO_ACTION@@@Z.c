/*
 * XREFs of ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C008CC80
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00291CC (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C00291EC (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00839C8 (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C0084300 (-Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0084B9C (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 */

void __fastcall FxUsbDevice::Purge(FxUsbDevice *this, __int64 Action)
{
  _WDF_IO_TARGET_PURGE_IO_ACTION v2; // r15d
  _FX_DRIVER_GLOBALS *v4; // rdx
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8
  __int64 i; // rsi
  FxUsbInterface *v8; // rdi
  __int64 j; // r14
  FxUsbPipe *v10; // rcx
  FxVerifierLock *m_OwningThread; // rcx
  _FX_DRIVER_GLOBALS *v12; // rdx
  __int64 k; // rdi
  FxUsbInterface *v14; // rsi
  __int64 m; // r14
  FxUsbPipe *v16; // rcx
  int v17; // [rsp+28h] [rbp-28h]
  _LIST_ENTRY pendedHead; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 wait; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int8 irql; // [rsp+98h] [rbp+48h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+A0h] [rbp+50h] BYREF

  sentHead.Next = 0LL;
  v2 = (int)Action;
  FxIoTarget::Purge(this, Action);
  if ( v2 != WdfIoTargetPurgeIo )
    FxWaitLockInternal::AcquireLock(&this->m_InterfaceIterationLock, v4, 0LL);
  FxNonPagedObject::Lock(this, &irql, v5);
  for ( i = 0LL; (unsigned int)i < this->m_NumInterfaces; i = (unsigned int)(i + 1) )
  {
    v8 = this->m_Interfaces[i];
    if ( v8->m_ConfiguredPipes )
    {
      for ( j = 0LL; (unsigned int)j < v8->m_NumberOfConfiguredPipes; j = (unsigned int)(j + 1) )
      {
        v10 = v8->m_ConfiguredPipes[j];
        if ( v10 )
        {
          wait = 0;
          LOBYTE(v17) = 1;
          pendedHead.Blink = &pendedHead;
          pendedHead.Flink = &pendedHead;
          v10->GotoPurgeState(v10, v2, &pendedHead, &sentHead, &wait, v17);
          FxIoTarget::CompletePendedRequestList(v8->m_ConfiguredPipes[j], &pendedHead);
        }
      }
    }
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (m_OwningThread = (FxVerifierLock *)this[-1].m_InterfaceIterationLock.m_OwningThread) != 0LL )
  {
    FxVerifierLock::Unlock(m_OwningThread, irql, v6);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  FxIoTarget::_CancelSentRequests(&sentHead);
  for ( k = 0LL; (unsigned int)k < this->m_NumInterfaces; k = (unsigned int)(k + 1) )
  {
    v14 = this->m_Interfaces[k];
    if ( v14->m_ConfiguredPipes )
    {
      for ( m = 0LL; (unsigned int)m < v14->m_NumberOfConfiguredPipes; m = (unsigned int)(m + 1) )
      {
        v16 = v14->m_ConfiguredPipes[m];
        if ( v16 )
          v16->WaitForSentIoToComplete(v16);
      }
    }
  }
  if ( v2 != WdfIoTargetPurgeIo )
    FxWaitLockInternal::ReleaseLock(&this->m_InterfaceIterationLock, v12);
}
