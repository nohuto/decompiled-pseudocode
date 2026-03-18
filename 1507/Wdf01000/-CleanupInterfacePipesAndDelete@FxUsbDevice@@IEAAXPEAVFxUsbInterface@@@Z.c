/*
 * XREFs of ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C008B888
 * Callers:
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008CEA8 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C008F984 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00291CC (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C00291EC (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C008DA54 (-_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z @ 0x1C008F2EC (-CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z.c)
 */

void __fastcall FxUsbDevice::CleanupInterfacePipesAndDelete(FxUsbDevice *this, _FX_DRIVER_GLOBALS *UsbInterface)
{
  FxWaitLockInternal *p_m_InterfaceIterationLock; // r14
  unsigned int v4; // ebx
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // r8
  unsigned int i; // r15d
  FxUsbPipe **Blink; // rax
  FxVerifierLock *m_OwningThread; // rcx
  unsigned __int8 v11; // dl
  FxUsbPipe *v12; // rcx
  _FX_DRIVER_GLOBALS *v13; // rdx
  int v14; // [rsp+20h] [rbp-30h]
  _LIST_ENTRY pendHead; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int8 wait; // [rsp+88h] [rbp+38h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+90h] [rbp+40h] BYREF

  pendHead.Blink = &pendHead;
  p_m_InterfaceIterationLock = &this->m_InterfaceIterationLock;
  v4 = 0;
  pendHead.Flink = &pendHead;
  sentHead.Next = 0LL;
  FxWaitLockInternal::AcquireLock(&this->m_InterfaceIterationLock, UsbInterface, 0LL);
  FxNonPagedObject::Lock(this, &irql, v6);
  for ( i = 0; i < BYTE1(UsbInterface->FxPoolFrameworks.PagedLock.m_Lock.Count); ++i )
  {
    Blink = (FxUsbPipe **)UsbInterface->FxPoolFrameworks.NonPagedHead.Blink;
    wait = 0;
    LOBYTE(v14) = 1;
    Blink[i]->GotoRemoveState(Blink[i], WdfIoTargetDeleted, &pendHead, &sentHead, v14, &wait);
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (m_OwningThread = (FxVerifierLock *)this[-1].m_InterfaceIterationLock.m_OwningThread) != 0LL )
  {
    FxVerifierLock::Unlock(m_OwningThread, irql, v7);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  FxUsbDevice::_CleanupPipesRequests(&pendHead, &sentHead);
  if ( BYTE1(UsbInterface->FxPoolFrameworks.PagedLock.m_Lock.Count) )
  {
    do
    {
      v12 = (FxUsbPipe *)*((_QWORD *)&UsbInterface->FxPoolFrameworks.NonPagedHead.Blink->Flink + v4);
      v12->WaitForSentIoToComplete(v12);
      ++v4;
    }
    while ( v4 < BYTE1(UsbInterface->FxPoolFrameworks.PagedLock.m_Lock.Count) );
  }
  FxUsbInterface::CleanUpAndDelete((FxUsbInterface *)UsbInterface, v11);
  FxWaitLockInternal::ReleaseLock(p_m_InterfaceIterationLock, v13);
}
