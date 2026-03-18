/*
 * XREFs of ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C008C110
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002CA28 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C002CA48 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00837AC (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C0083F90 (-Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C008470C (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
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
  _FX_DRIVER_GLOBALS *v11; // rdx
  __int64 k; // rdi
  FxUsbInterface *v13; // rsi
  __int64 m; // r14
  FxUsbPipe *v15; // rcx
  int v16; // [rsp+28h] [rbp-28h]
  _LIST_ENTRY pendedHead; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int8 wait; // [rsp+98h] [rbp+48h] BYREF
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
          LOBYTE(v16) = 1;
          pendedHead.Blink = &pendedHead;
          pendedHead.Flink = &pendedHead;
          v10->GotoPurgeState(v10, v2, &pendedHead, &sentHead, &wait, v16);
          FxIoTarget::CompletePendedRequestList(v8->m_ConfiguredPipes[j], &pendedHead);
        }
      }
    }
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  FxIoTarget::_CancelSentRequests(&sentHead);
  for ( k = 0LL; (unsigned int)k < this->m_NumInterfaces; k = (unsigned int)(k + 1) )
  {
    v13 = this->m_Interfaces[k];
    if ( v13->m_ConfiguredPipes )
    {
      for ( m = 0LL; (unsigned int)m < v13->m_NumberOfConfiguredPipes; m = (unsigned int)(m + 1) )
      {
        v15 = v13->m_ConfiguredPipes[m];
        if ( v15 )
          v15->WaitForSentIoToComplete(v15);
      }
    }
  }
  if ( v2 != WdfIoTargetPurgeIo )
    FxWaitLockInternal::ReleaseLock(&this->m_InterfaceIterationLock, v11);
}
