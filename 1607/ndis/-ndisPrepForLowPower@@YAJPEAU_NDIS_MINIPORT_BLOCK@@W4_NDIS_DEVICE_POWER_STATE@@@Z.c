/*
 * XREFs of ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C00114C4
 * Callers:
 *     ndisSetDevicePower @ 0x1C0011174 (ndisSetDevicePower.c)
 *     ndisSetSystemPower @ 0x1C009C3F4 (ndisSetSystemPower.c)
 * Callees:
 *     ndisMSwapOpenHandlers @ 0x1C001FB1C (ndisMSwapOpenHandlers.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C009C6F4 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C009C754 (ndisNotifyDevicePowerStateChange.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C009C88C (ndisIssueNetEventSetPowerEvent.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A6CF0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisRequestWaitWake @ 0x1C00B2CB4 (ndisRequestWaitWake.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30E0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
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
      && (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(Context, (struct NDIS_PNPTRACE_LOCALS *)v10);
      WPP_SF_Zq(88LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, v10[1], v10[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates(&Context->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&Context->BindEngine, RunSynchronous, 0);
  }
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(&Context->MiniportOwner);
  if ( (Context->PnPFlags & 0x20) != 0 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&Context->Lock);
    LOBYTE(v6) = 4;
    Context->MiniportThread = KeGetCurrentThread();
    v7 = v5;
    Context->LockDbg = 1706973;
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
      if ( (unsigned __int8)byte_1C00895D5 >= 4u )
        WPP_SF_q(89LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, Context);
      v3 = ndisRequestWaitWake(Context, ndisGenericWaitWakeCallback);
      if ( (unsigned __int8)byte_1C00895D5 >= 4u )
        WPP_SF_qq(90LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, Context, Context->WaitWakeIrp);
    }
  }
  return v3;
}
