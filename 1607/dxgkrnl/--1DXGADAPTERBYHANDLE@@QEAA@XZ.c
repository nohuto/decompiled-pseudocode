/*
 * XREFs of ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4
 * Callers:
 *     DxgkCreateDevice @ 0x1C0079090 (DxgkCreateDevice.c)
 *     DxgkQueryAdapterInfo @ 0x1C0090400 (DxgkQueryAdapterInfo.c)
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 *     DxgkGetPresentHistory @ 0x1C00CA740 (DxgkGetPresentHistory.c)
 *     DxgkCheckMonitorPowerState @ 0x1C00CB110 (DxgkCheckMonitorPowerState.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1C00CB590 (DxgkCheckVidPnExclusiveOwnership.c)
 *     DxgkFlushHeapTransitions @ 0x1C00D6540 (DxgkFlushHeapTransitions.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00D81F0 (DxgkGetPresentHistoryReadyEvent.c)
 *     DxgkFlushPresentHistory @ 0x1C00DB1D0 (DxgkFlushPresentHistory.c)
 *     DxgkGetDisplayModeList @ 0x1C00DC6F0 (DxgkGetDisplayModeList.c)
 *     DxgkGetScanLine @ 0x1C00DD610 (DxgkGetScanLine.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C00DE920 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C00DECA0 (DxgkFreeGpuVirtualAddress.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C014DA00 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014DE48 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C014E650 (DxgkAdjustFullscreenGamma.c)
 *     DxgkQueryClockCalibration @ 0x1C014FAA0 (DxgkQueryClockCalibration.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C0150830 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkSetVidPnSourceHwProtection @ 0x1C0150B60 (DxgkSetVidPnSourceHwProtection.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C01529E0 (DxgkChangeVideoMemoryReservation.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C0153870 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkGetMultisampleMethodList @ 0x1C0163DD0 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1C0164290 (DxgkInvalidateActiveVidPn.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C01686FC (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     DxgkGetPresentStats @ 0x1C0172E90 (DxgkGetPresentStats.c)
 *     DxgkSetStablePowerState @ 0x1C0174380 (DxgkSetStablePowerState.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C017E584 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 *     DxgkCreateOutputDupl @ 0x1C017E790 (DxgkCreateOutputDupl.c)
 *     ?CreateVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C01A7550 (-CreateVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z.c)
 *     ?CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C01A76B0 (-CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z.c)
 *     ?ReleaseVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C01A7860 (-ReleaseVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIQEAUD3DKMDT_HVIDPN__@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(DXGADAPTER **this, unsigned __int64 a2)
{
  DXGADAPTER *v2; // rcx

  v2 = *this;
  if ( v2 )
    DXGADAPTER::ReleaseReference(v2, a2);
}
