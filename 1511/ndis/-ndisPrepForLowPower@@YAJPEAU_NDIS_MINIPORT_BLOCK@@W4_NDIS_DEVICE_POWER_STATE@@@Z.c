/*
 * XREFs of ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0012550
 * Callers:
 *     ndisSetDevicePower @ 0x1C001227C (ndisSetDevicePower.c)
 *     ndisSetSystemPower @ 0x1C0097BD0 (ndisSetSystemPower.c)
 * Callees:
 *     ndisMSwapOpenHandlers @ 0x1C0019720 (ndisMSwapOpenHandlers.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C0097EBC (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C0097EE8 (ndisIssueNetEventSetPowerEvent.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C0097F64 (ndisNotifyDevicePowerStateChange.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A29C8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A24 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A4F78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisRequestWaitWake @ 0x1C00AC8D0 (ndisRequestWaitWake.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DD09C (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisPrepForLowPower(struct _NDIS_MINIPORT_BLOCK *Context, enum _NDIS_DEVICE_POWER_STATE a2)
{
  unsigned int v3; // edi
  unsigned int FilterPnPFlags; // edx
  KIRQL v5; // al
  __int64 v6; // rdx
  KIRQL v7; // bp
  unsigned int PnPFlags; // ecx
  _QWORD v10[20]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = 0;
  ndisNotifyDevicePowerStateChange();
  if ( (Context->PnPFlags & 0x20) != 0 )
    ndisIssueNetEventSetPowerEvent(Context);
  FilterPnPFlags = Context->FilterPnPFlags;
  if ( (FilterPnPFlags & 0x80u) == 0 || (Context->PnPFlags & 0x20) == 0 )
  {
    Context->FilterPnPFlags = FilterPnPFlags | 0x100;
    Ndis::BindEngine::BeginPolicyUpdates(&Context->BindEngine);
    if ( Ndis::BindState::SetPause(&Context->Bindings.Miniport, DatapathPaused, PauseReason_LowPower)
      && (unsigned __int8)byte_1C0083723 >= 4u )
    {
      ndisGetBindLinkNameForTracing(Context, (struct NDIS_PNPTRACE_LOCALS *)v10);
      WPP_SF_Zq(87LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10[1], v10[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates(&Context->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&Context->BindEngine, RunSynchronous);
  }
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(&Context->MiniportOwner, 1LL);
  if ( (Context->PnPFlags & 0x20) != 0 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&Context->Lock);
    LOBYTE(v6) = 4;
    Context->MiniportThread = KeGetCurrentThread();
    v7 = v5;
    Context->LockDbg = 1706983;
    ndisMSwapOpenHandlers(Context, v6);
    if ( Context->WaitWakeIrp )
      Context->PnPFlags &= ~0x400u;
    Context->MiniportThread = 0LL;
    Context->LockDbg = 0;
    KeReleaseSpinLock(&Context->Lock, v7);
    PnPFlags = Context->PnPFlags;
    if ( (PnPFlags & 0x400) != 0 && (Context->Flags & 0x80u) == 0 )
    {
      Context->PnPFlags = PnPFlags & 0xFFFFFBFF;
      if ( (unsigned __int8)byte_1C0083715 >= 4u )
        WPP_SF_q(88LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, Context);
      v3 = ndisRequestWaitWake(Context, ndisGenericWaitWakeCallback);
      if ( (unsigned __int8)byte_1C0083715 >= 4u )
        WPP_SF_qq(89LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, Context, Context->WaitWakeIrp);
    }
  }
  return v3;
}
