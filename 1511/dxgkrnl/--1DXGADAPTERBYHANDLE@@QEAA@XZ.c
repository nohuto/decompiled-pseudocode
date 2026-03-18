/*
 * XREFs of ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 *     DxgkCreateDevice @ 0x1C008B790 (DxgkCreateDevice.c)
 *     DxgkQueryAdapterInfo @ 0x1C008BD90 (DxgkQueryAdapterInfo.c)
 *     DxgkGetPresentHistory @ 0x1C00956B0 (DxgkGetPresentHistory.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1C00B6DC0 (DxgkCheckVidPnExclusiveOwnership.c)
 *     DxgkCheckMonitorPowerState @ 0x1C00B7320 (DxgkCheckMonitorPowerState.c)
 *     DxgkGetDisplayModeList @ 0x1C00B9A30 (DxgkGetDisplayModeList.c)
 *     DxgkFlushHeapTransitions @ 0x1C00BFED0 (DxgkFlushHeapTransitions.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00C2190 (DxgkGetPresentHistoryReadyEvent.c)
 *     DxgkFlushPresentHistory @ 0x1C00C64C0 (DxgkFlushPresentHistory.c)
 *     DxgkGetScanLine @ 0x1C00C8510 (DxgkGetScanLine.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C00C97F0 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C00C9B60 (DxgkFreeGpuVirtualAddress.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z @ 0x1C012AA68 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C012BDB0 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C012D090 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C0130060 (DxgkAdjustFullscreenGamma.c)
 *     DxgkQueryClockCalibration @ 0x1C0131630 (DxgkQueryClockCalibration.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C01323C0 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkSetVidPnSourceHwProtection @ 0x1C0132720 (DxgkSetVidPnSourceHwProtection.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C01336B0 (DxgkChangeVideoMemoryReservation.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C0134490 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkGetMultisampleMethodList @ 0x1C0142370 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1C0142810 (DxgkInvalidateActiveVidPn.c)
 *     DxgkGetPresentStats @ 0x1C014D0C0 (DxgkGetPresentStats.c)
 *     DxgkSetStablePowerState @ 0x1C014E7D0 (DxgkSetStablePowerState.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01595CC (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 *     DxgkCreateOutputDupl @ 0x1C0159800 (DxgkCreateOutputDupl.c)
 *     ?CreateVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C017E1E0 (-CreateVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z.c)
 *     ?CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C017E330 (-CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z.c)
 *     ?ReleaseVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C017E4C0 (-ReleaseVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIQEAUD3DKMDT_HVIDPN__@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(DXGADAPTER **this)
{
  DXGADAPTER *v1; // rcx

  v1 = *this;
  if ( v1 )
    DXGADAPTER::ReleaseReference(v1);
}
