/*
 * XREFs of ?Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x1C007CC50
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0011238 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0011258 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x1C0076220 (-Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C007676C (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 */

void __fastcall FxUsbDevice::Stop(FxUsbDevice *this, __int64 Action)
{
  _WDF_IO_TARGET_SENT_IO_ACTION v2; // r14d
  _FX_DRIVER_GLOBALS *v4; // rdx
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8
  __int64 i; // rdi
  FxUsbInterface *v8; // rsi
  __int64 j; // rbp
  FxUsbPipe *v10; // rcx
  _FX_DRIVER_GLOBALS *v11; // rdx
  __int64 k; // rdi
  FxUsbInterface *v13; // rsi
  __int64 m; // rbp
  FxUsbPipe *v15; // rcx
  int v16; // [rsp+20h] [rbp-38h]
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 wait; // [rsp+68h] [rbp+10h] BYREF
  _SINGLE_LIST_ENTRY head; // [rsp+70h] [rbp+18h] BYREF

  head.Next = 0LL;
  v2 = (int)Action;
  FxIoTarget::Stop(this, Action);
  if ( v2 != WdfIoTargetLeaveSentIoPending )
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
          v10->GotoStopState(v10, v2, &head, &wait, v16);
        }
      }
    }
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  if ( head.Next )
    FxIoTarget::_CancelSentRequests(&head);
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
  if ( v2 != WdfIoTargetLeaveSentIoPending )
    FxWaitLockInternal::ReleaseLock(&this->m_InterfaceIterationLock, v11);
}
