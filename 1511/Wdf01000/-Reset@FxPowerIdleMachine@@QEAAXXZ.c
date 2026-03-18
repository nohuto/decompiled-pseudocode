/*
 * XREFs of ?Reset@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0012D34
 * Callers:
 *     ?Init@FxPowerPolicyOwnerSettings@@QEAAJXZ @ 0x1C0012720 (-Init@FxPowerPolicyOwnerSettings@@QEAAJXZ.c)
 *     ?PnpEventPdoRestart@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084EF0 (-PnpEventPdoRestart@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0013AF0 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C006E960 (-CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAV.c)
 */

void __fastcall FxPowerIdleMachine::Reset(FxPowerIdleMachine *this)
{
  _SINGLE_LIST_ENTRY *Next; // r8
  _FX_DRIVER_GLOBALS *v3; // rdx
  FxDriverGlobalsDebugExtension *DebugExtension; // rax
  unsigned __int8 v5; // r8
  signed __int8 m_Flags; // al
  FxTrackPowerOption TrackPower; // cl
  _SINGLE_LIST_ENTRY *v8; // rcx
  void *v9; // [rsp+28h] [rbp-10h]

  this->m_IoCount = 0;
  Next = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
  this->m_Flags = 0;
  v3 = (_FX_DRIVER_GLOBALS *)Next[2].Next;
  DebugExtension = v3->DebugExtension;
  if ( DebugExtension )
  {
    TrackPower = DebugExtension->TrackPower;
    if ( TrackPower )
      FxTagTracker::CreateAndInitialize(
        &this->m_TagTracker,
        v3,
        FxTagTrackerTypePower,
        TrackPower == FxTrackPowerRefsAndStack,
        (FxObject *)Next[12].Next,
        v9);
  }
  KeSetEvent(&this->m_D0NotificationEvent.m_Event.m_Event, 0, 0);
  m_Flags = this->m_Flags;
  if ( m_Flags < 0 )
  {
    v8 = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
    this->m_Flags = m_Flags & 0x7F;
    FxPkgPnp::PnpProcessEvent((FxPkgPnp *)v8, PnpEventDeviceInD0, v5);
  }
}
