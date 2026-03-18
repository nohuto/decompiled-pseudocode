/*
 * XREFs of ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04
 * Callers:
 *     DxgkCreateDevice @ 0x1C0079090 (DxgkCreateDevice.c)
 *     DxgkQueryAdapterInfo @ 0x1C0090400 (DxgkQueryAdapterInfo.c)
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
 *     DxgkGetPresentStats @ 0x1C0172E90 (DxgkGetPresentStats.c)
 *     DxgkSetStablePowerState @ 0x1C0174380 (DxgkSetStablePowerState.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C017E584 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 *     DxgkCreateOutputDupl @ 0x1C017E790 (DxgkCreateOutputDupl.c)
 *     ?CreateVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C01A7550 (-CreateVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z.c)
 *     ?CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C01A76B0 (-CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z.c)
 *     ?ReleaseVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C01A7860 (-ReleaseVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIQEAUD3DKMDT_HVIDPN__@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

DXGADAPTERBYHANDLE *__fastcall DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
        DXGADAPTERBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGADAPTER **a4)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  _BYTE v14[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+30h] [rbp-18h]

  *(_QWORD *)this = 0LL;
  if ( a4 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct DXGPROCESS *)((char *)a3 + 184), (bool)a3);
    DXGPUSHLOCK::AcquireShared(v15);
    v16 = 1;
    v8 = (a2 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v8 < *((_DWORD *)a3 + 56)
      && (v9 = *((_QWORD *)a3 + 26),
          v10 = *(_DWORD *)(v9 + 16LL * (unsigned int)v8 + 8),
          ((a2 >> 26) & 0x30) == (*(_BYTE *)(v9 + 16LL * (unsigned int)v8 + 8) & 0x30))
      && (v10 & 0x1000) == 0
      && (v10 & 0xF) != 0
      && (v11 = 2 * v8, (*(_BYTE *)(v9 + 8 * v11 + 8) & 0xF) == 1) )
    {
      v12 = *(_QWORD *)(v9 + 8 * v11);
    }
    else
    {
      v12 = 0LL;
    }
    *(_QWORD *)this = v12;
    if ( v12 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
      *((_QWORD *)this + 1) = -1LL;
    }
    *a4 = *(struct DXGADAPTER **)this;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  }
  return this;
}
