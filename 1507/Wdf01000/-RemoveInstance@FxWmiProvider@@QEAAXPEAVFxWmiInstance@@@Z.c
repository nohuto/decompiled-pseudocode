/*
 * XREFs of ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C0068F24
 * Callers:
 *     ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0019028 (-UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0019068 (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C001AFB4 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     imp_WdfWmiInstanceDeregister @ 0x1C0068630 (imp_WdfWmiInstanceDeregister.c)
 *     ?Dispose@FxWmiInstance@@UEAAEXZ @ 0x1C0069170 (-Dispose@FxWmiInstance@@UEAAEXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C0069F44 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C006A118 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 */

void __fastcall FxWmiProvider::RemoveInstance(FxWmiProvider *this, FxWmiInstance *Instance, unsigned __int8 a3)
{
  unsigned __int8 updated; // bp
  unsigned __int8 v6; // r8
  _LIST_ENTRY *p_m_ListEntry; // rbx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  FxWmiIrpHandler *m_Parent; // rcx
  FxWmiIrpHandler *v11; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  updated = 0;
  FxNonPagedObject::Lock(this->m_Parent, &irql, a3);
  p_m_ListEntry = &Instance->m_ListEntry;
  if ( p_m_ListEntry->Flink != p_m_ListEntry )
  {
    Flink = p_m_ListEntry->Flink;
    Blink = p_m_ListEntry->Blink;
    if ( p_m_ListEntry->Flink->Blink != p_m_ListEntry || Blink->Flink != p_m_ListEntry )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    p_m_ListEntry->Blink = p_m_ListEntry;
    p_m_ListEntry->Flink = p_m_ListEntry;
    --this->m_NumInstances;
    m_Parent = this->m_Parent;
    if ( m_Parent->m_RegisteredState == WmiRegistered )
    {
      if ( !this->m_NumInstances && (this->m_Flags & 2) == 0 )
        this->m_RemoveGuid = 1;
      updated = FxWmiIrpHandler::DeferUpdateLocked(m_Parent, irql);
    }
  }
  v11 = this->m_Parent;
  if ( SLOBYTE(v11->m_ObjectFlags) < 0 && *(_QWORD *)&v11[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized )
    FxVerifierLock::Unlock(*(FxVerifierLock **)&v11[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized, irql, v6);
  else
    KeReleaseSpinLock(&v11->m_NPLock.m_Lock, irql);
  if ( updated )
    FxWmiIrpHandler::UpdateGuids(this->m_Parent);
}
