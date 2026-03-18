/*
 * XREFs of ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88
 * Callers:
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
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00035C0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 */

DXGADAPTERBYHANDLE *__fastcall DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
        DXGADAPTERBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGADAPTER **a4)
{
  __int64 v8; // rcx
  struct _KTHREAD *v9; // r8
  int v10; // edx
  __int64 v11; // rcx
  DXGADAPTER *v12; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+30h] [rbp-18h]

  *(_QWORD *)this = 0LL;
  if ( a4 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, a3 + 24);
    DXGPUSHLOCK::AcquireShared(v15);
    v16 = 1;
    v8 = (a2 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v8 < *((_DWORD *)a3 + 58)
      && (v9 = a3[27],
          v10 = *((_DWORD *)v9 + 4 * (unsigned int)v8 + 2),
          ((a2 >> 26) & 0x30) == (*((_BYTE *)v9 + 16 * (unsigned int)v8 + 8) & 0x30))
      && (v10 & 0x1000) == 0
      && (v10 & 0xF) != 0
      && (v11 = 2 * v8, (*((_BYTE *)v9 + 8 * v11 + 8) & 0xF) == 1) )
    {
      v12 = (DXGADAPTER *)*((_QWORD *)v9 + v11);
    }
    else
    {
      v12 = 0LL;
    }
    *(_QWORD *)this = v12;
    if ( v12 )
      DXGADAPTER::AcquireReference(v12);
    *a4 = *(struct DXGADAPTER **)this;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  }
  return this;
}
