/*
 * XREFs of ?Reset@FxPowerIdleMachine@@QEAAXXZ @ 0x1C00172A4
 * Callers:
 *     ?Init@FxPowerPolicyOwnerSettings@@QEAAJXZ @ 0x1C0027B60 (-Init@FxPowerPolicyOwnerSettings@@QEAAJXZ.c)
 *     ?PnpEventPdoRestart@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0099FC0 (-PnpEventPdoRestart@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C00187A0 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ??0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C007A758 (--0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z.c)
 */

void __fastcall FxPowerIdleMachine::Reset(FxPowerIdleMachine *this)
{
  _SINGLE_LIST_ENTRY *Next; // rdx
  _SINGLE_LIST_ENTRY *v3; // rdi
  _SINGLE_LIST_ENTRY *v4; // rax
  unsigned __int8 v5; // r8
  signed __int8 m_Flags; // al
  char v7; // cl
  FxObject *v8; // rbp
  unsigned __int8 v9; // si
  FxTagTracker *v10; // rax
  _SINGLE_LIST_ENTRY *v11; // rcx
  void *Caller; // [rsp+28h] [rbp-10h]
  _LIST_ENTRY *retaddr; // [rsp+38h] [rbp+0h]

  this->m_IoCount = 0;
  Next = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
  this->m_Flags = 0;
  v3 = Next[2].Next;
  v4 = v3[10].Next;
  if ( v4 )
  {
    v7 = (char)v4[56].Next;
    if ( v7 )
    {
      v8 = (FxObject *)Next[12].Next;
      v9 = v7 == 2;
      v10 = (FxTagTracker *)FxPoolAllocator(
                              (_FX_DRIVER_GLOBALS *)v3,
                              (_LIST_ENTRY *)&v3[13],
                              ExDefaultNonPagedPoolType,
                              0x500uLL,
                              HIDWORD(v3[8].Next),
                              retaddr);
      if ( v10 )
        FxTagTracker::FxTagTracker(v10, (_FX_DRIVER_GLOBALS *)v3, FxTagTrackerTypePower, v9, v8, Caller);
      if ( v10 )
        this->m_TagTracker = v10;
      else
        WPP_IFR_SF_d((_FX_DRIVER_GLOBALS *)v3, 2u, 0x12u, 0xAu, WPP_FxTagTracker_hpp_Traceguids, -1073741670);
    }
  }
  KeSetEvent(&this->m_D0NotificationEvent.m_Event.m_Event, 0, 0);
  m_Flags = this->m_Flags;
  if ( m_Flags < 0 )
  {
    v11 = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
    this->m_Flags = m_Flags & 0x7F;
    FxPkgPnp::PnpProcessEvent((FxPkgPnp *)v11, PnpEventDeviceInD0, v5);
  }
}
