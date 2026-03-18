/*
 * XREFs of ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C008EDEC
 * Callers:
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C009024C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C009165C (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0032B70 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0090DD0 (-_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z @ 0x1C0091004 (-CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z.c)
 */

void __fastcall FxUsbDevice::CleanupInterfacePipesAndDelete(FxUsbDevice *this, _FX_DRIVER_GLOBALS *UsbInterface)
{
  FxWaitLockInternal *p_m_InterfaceIterationLock; // rsi
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8
  __int64 i; // r14
  FxUsbPipe **Blink; // rax
  unsigned __int8 v9; // dl
  __int64 j; // rdi
  FxUsbPipe *v11; // rcx
  int v12; // [rsp+20h] [rbp-30h]
  _LIST_ENTRY pendHead; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 wait; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int8 irql; // [rsp+88h] [rbp+38h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+90h] [rbp+40h] BYREF

  sentHead.Next = 0LL;
  pendHead.Blink = &pendHead;
  p_m_InterfaceIterationLock = &this->m_InterfaceIterationLock;
  pendHead.Flink = &pendHead;
  FxWaitLockInternal::AcquireLock(&this->m_InterfaceIterationLock, UsbInterface, 0LL);
  FxNonPagedObject::Lock(this, &irql, v5);
  for ( i = 0LL; (unsigned int)i < BYTE1(UsbInterface->FxPoolFrameworks.PagedLock.m_Lock.Count); i = (unsigned int)(i + 1) )
  {
    Blink = (FxUsbPipe **)UsbInterface->FxPoolFrameworks.NonPagedHead.Blink;
    wait = 0;
    LOBYTE(v12) = 1;
    Blink[i]->GotoRemoveState(Blink[i], WdfIoTargetDeleted, &pendHead, &sentHead, v12, &wait);
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  FxUsbDevice::_CleanupPipesRequests(&pendHead, &sentHead);
  for ( j = 0LL; (unsigned int)j < BYTE1(UsbInterface->FxPoolFrameworks.PagedLock.m_Lock.Count); j = (unsigned int)(j + 1) )
  {
    v11 = (FxUsbPipe *)*((_QWORD *)&UsbInterface->FxPoolFrameworks.NonPagedHead.Blink->Flink + j);
    v11->WaitForSentIoToComplete(v11);
  }
  FxUsbInterface::CleanUpAndDelete((FxUsbInterface *)UsbInterface, v9);
  p_m_InterfaceIterationLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_InterfaceIterationLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
