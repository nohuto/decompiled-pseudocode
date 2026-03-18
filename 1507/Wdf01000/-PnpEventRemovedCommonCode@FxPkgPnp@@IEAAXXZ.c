/*
 * XREFs of ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C009A6D0
 * Callers:
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C00996A0 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?PnpEventFdoRemovedOverload@FxPkgFdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C009FB20 (-PnpEventFdoRemovedOverload@FxPkgFdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C000B100 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C0015898 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C0015EE0 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@@Z @ 0x1C002903C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxPkgPnp::PnpEventRemovedCommonCode(FxPkgPnp *this, __int64 a2, unsigned int a3, unsigned __int16 a4)
{
  unsigned __int8 v5; // r8
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  FxObject *m_ParentObject; // rbx
  unsigned __int8 v8; // r8
  char m_ObjectFlags; // al
  FxVerifierLock *Blink; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  __int64 v12; // rdx
  unsigned __int8 v13; // r8
  _LIST_ENTRY *p_m_ChildListHead; // rbx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v16; // rax
  FxObject *p_Blink; // rcx
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF

  FxPkgIo::StopProcessingForPower((FxPkgIo *)this->m_DeviceBase[3].m_ChildListHead.Blink, 3, a3, a4);
  m_SelfManagedIoMachine = this->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
    FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, (_FX_DRIVER_GLOBALS *)2);
  m_ParentObject = this->m_DeviceBase[3].m_ParentObject;
  FxNonPagedObject::Lock((FxNonPagedObject *)m_ParentObject, &PreviousIrql, v5);
  m_ObjectFlags = m_ParentObject->m_ObjectFlags;
  HIDWORD(m_ParentObject[1].m_ChildListHead.Flink) = 3;
  if ( m_ObjectFlags < 0 && (Blink = (FxVerifierLock *)m_ParentObject[-1].m_ChildEntry.Blink) != 0LL )
    FxVerifierLock::Unlock(Blink, PreviousIrql, v8);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)&m_ParentObject[1].m_Type, PreviousIrql);
  m_DeviceBase = this->m_DeviceBase;
  this->m_PnpStateAndCaps.Value = this->m_PnpStateAndCaps.Value & 0xFFFFFCFF | 0x100;
  FxObject::EarlyDispose(m_DeviceBase);
  p_m_ChildListHead = &this->m_DeviceBase->m_ChildListHead;
  while ( p_m_ChildListHead->Flink != p_m_ChildListHead )
  {
    Flink = p_m_ChildListHead->Flink;
    v16 = p_m_ChildListHead->Flink->Flink;
    if ( p_m_ChildListHead->Flink->Blink != p_m_ChildListHead || v16->Blink != Flink )
      __fastfail(3u);
    p_m_ChildListHead->Flink = v16;
    p_Blink = (FxObject *)&Flink[-5].Blink;
    v16->Blink = p_m_ChildListHead;
    p_Blink->m_ChildEntry.Blink = &p_Blink->m_ChildEntry;
    p_Blink->m_ChildEntry.Flink = &p_Blink->m_ChildEntry;
    FxObject::ParentDeleteEvent(p_Blink);
  }
  FxDisposeList::WaitForEmpty(this->m_DeviceBase->m_DisposeList, v12, v13);
}
