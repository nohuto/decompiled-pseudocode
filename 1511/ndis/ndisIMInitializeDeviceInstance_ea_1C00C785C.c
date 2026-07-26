/*
 * XREFs of ndisIMInitializeDeviceInstance @ 0x1C00C785C
 * Callers:
 *     ndisStartDeviceSynchronous @ 0x1C00AA688 (ndisStartDeviceSynchronous.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00C72C0 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A29C8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A24 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A4F78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A6AD0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00A6E98 (ndisMSetMiniportReadyForBinding.c)
 *     ndisPnPStartDevice @ 0x1C00AA734 (ndisPnPStartDevice.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DD09C (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisReinitializeMiniportBlock @ 0x1C00EED58 (ndisReinitializeMiniportBlock.c)
 */

__int64 __fastcall ndisIMInitializeDeviceInstance(struct _NDIS_MINIPORT_BLOCK *DeferredContext, void *a2)
{
  __int64 v4; // r8
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx
  unsigned int v6; // edi
  _QWORD v8[20]; // [rsp+30h] [rbp-A8h] BYREF

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
      && (unsigned __int8)byte_1C0083723 >= 4u )
    {
      ndisGetBindLinkNameForTracing(DeferredContext, (struct NDIS_PNPTRACE_LOCALS *)v8);
      WPP_SF_Zq(0x24u, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, (__int64 *)v8[1], v8[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates(&DeferredContext->BindEngine, v5);
    Ndis::BindEngine::ApplyBindChanges(&DeferredContext->BindEngine, RunSynchronous);
  }
  DeferredContext->DeviceContext = a2;
  v6 = ndisPnPStartDevice((char *)DeferredContext, 0LL, v4);
  if ( v6 )
    v6 = -1073741823;
  else
    ndisMSetMiniportReadyForBinding(DeferredContext, 1, Reason_RemovingMiniport|Reason_DriverNotReady, RunSynchronous);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqd(0x25u, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, DeferredContext, a2, v6);
  return v6;
}
