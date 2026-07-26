/*
 * XREFs of ndisIMInitializeDeviceInstance @ 0x1C00CE44C
 * Callers:
 *     ndisStartDeviceSynchronous @ 0x1C00AC4C4 (ndisStartDeviceSynchronous.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00CDEB0 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C009B078 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00A109C (ndisMSetMiniportReadyForBinding.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A3254 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisPnPStartDevice @ 0x1C00AC324 (ndisPnPStartDevice.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F68 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisReinitializeMiniportBlock @ 0x1C00F4BF8 (ndisReinitializeMiniportBlock.c)
 */

__int64 __fastcall ndisIMInitializeDeviceInstance(struct _NDIS_MINIPORT_BLOCK *DeferredContext, void *a2)
{
  __int64 v4; // r8
  unsigned int v5; // edi
  _QWORD v7[20]; // [rsp+30h] [rbp-A8h] BYREF

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x23u, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, DeferredContext, a2);
  ndisReinitializeMiniportBlock(DeferredContext);
  if ( DeferredContext->MajorNdisVersion < 6u )
  {
    DeferredContext->CurrentDevicePowerState = PowerDeviceUnspecified;
    DeferredContext->DriverPowerState = PowerDeviceUnspecified;
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&DeferredContext->MiniportOwner);
    Ndis::BindEngine::BeginPolicyUpdates(&DeferredContext->BindEngine);
    if ( Ndis::BindState::SetPause(&DeferredContext->Bindings.Miniport, DatapathRunning, PauseReason_LowPower)
      && (unsigned __int8)byte_1C0085323 >= 4u )
    {
      ndisGetBindLinkNameForTracing(DeferredContext, (struct NDIS_PNPTRACE_LOCALS *)v7);
      WPP_SF_Zq(0x24u, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, (__int64 *)v7[1], v7[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates(&DeferredContext->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&DeferredContext->BindEngine, RunSynchronous);
  }
  DeferredContext->DeviceContext = a2;
  v5 = ndisPnPStartDevice((char *)DeferredContext, 0LL, v4);
  if ( v5 )
    v5 = -1073741823;
  else
    ndisMSetMiniportReadyForBinding(DeferredContext, 1, Reason_RemovingMiniport|Reason_DriverNotReady, RunSynchronous);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqd(0x25u, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, DeferredContext, a2, v5);
  return v5;
}
