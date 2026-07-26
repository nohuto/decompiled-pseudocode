/*
 * XREFs of ndisIMInitializeDeviceInstance @ 0x1C00CD13C
 * Callers:
 *     ndisStartDeviceSynchronous @ 0x1C009EAEC (ndisStartDeviceSynchronous.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00CCBA0 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C009EB9C (ndisMSetMiniportReadyForBinding.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A3B24 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A6CF0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisPnPStartDevice @ 0x1C00ACA60 (ndisPnPStartDevice.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30E0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ndisReinitializeMiniportBlock @ 0x1C00F59E8 (ndisReinitializeMiniportBlock.c)
 */

__int64 __fastcall ndisIMInitializeDeviceInstance(struct _NDIS_MINIPORT_BLOCK *DeferredContext, void *a2)
{
  __int64 v4; // r8
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx
  unsigned int v6; // edi
  _QWORD v8[20]; // [rsp+30h] [rbp-A8h] BYREF

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x23u, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, DeferredContext, a2);
  ndisReinitializeMiniportBlock(DeferredContext);
  if ( DeferredContext->MajorNdisVersion < 6u )
  {
    DeferredContext->CurrentDevicePowerState = PowerDeviceUnspecified;
    DeferredContext->DriverPowerState = PowerDeviceUnspecified;
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&DeferredContext->MiniportOwner);
    Ndis::BindEngine::BeginPolicyUpdates(&DeferredContext->BindEngine);
    if ( Ndis::BindState::SetPause(&DeferredContext->Bindings.Miniport, DatapathRunning, PauseReason_LowPower)
      && (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(DeferredContext, (struct NDIS_PNPTRACE_LOCALS *)v8);
      WPP_SF_Zq(0x24u, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, (unsigned __int16 *)v8[1], v8[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates(&DeferredContext->BindEngine, v5);
    Ndis::BindEngine::ApplyBindChanges(&DeferredContext->BindEngine, RunSynchronous, 0);
  }
  DeferredContext->DeviceContext = a2;
  v6 = ndisPnPStartDevice((char *)DeferredContext, 0LL, v4);
  if ( v6 )
    v6 = -1073741823;
  else
    ndisMSetMiniportReadyForBinding(DeferredContext, 1, Reason_RemovingMiniport|Reason_DriverNotReady, RunSynchronous);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqd(0x25u, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, DeferredContext, a2, v6);
  return v6;
}
