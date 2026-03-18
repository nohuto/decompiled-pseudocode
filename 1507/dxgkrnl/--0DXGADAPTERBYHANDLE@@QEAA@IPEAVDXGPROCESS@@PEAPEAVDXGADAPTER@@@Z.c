/*
 * XREFs of ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58
 * Callers:
 *     DxgkCreateDevice @ 0x1C008E3F0 (DxgkCreateDevice.c)
 *     DxgkQueryAdapterInfo @ 0x1C00908E0 (DxgkQueryAdapterInfo.c)
 *     DxgkGetPresentHistory @ 0x1C00A3390 (DxgkGetPresentHistory.c)
 *     DxgkCheckMonitorPowerState @ 0x1C00A4930 (DxgkCheckMonitorPowerState.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1C00A4BD0 (DxgkCheckVidPnExclusiveOwnership.c)
 *     DxgkGetDisplayModeList @ 0x1C00A7020 (DxgkGetDisplayModeList.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00AE490 (DxgkGetPresentHistoryReadyEvent.c)
 *     DxgkGetScanLine @ 0x1C00B2CE0 (DxgkGetScanLine.c)
 *     DxgkFlushPresentHistory @ 0x1C00DD220 (DxgkFlushPresentHistory.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C0125C10 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C0126EB8 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C01299D0 (DxgkAdjustFullscreenGamma.c)
 *     DxgkQueryClockCalibration @ 0x1C012B090 (DxgkQueryClockCalibration.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C012BE70 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkSetVidPnSourceHwProtection @ 0x1C012C1D0 (DxgkSetVidPnSourceHwProtection.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C012E080 (DxgkChangeVideoMemoryReservation.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C012E5B0 (DxgkFreeGpuVirtualAddress.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C012F410 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C012FB60 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkGetMultisampleMethodList @ 0x1C013BF40 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1C013C3E0 (DxgkInvalidateActiveVidPn.c)
 *     DxgkGetPresentStats @ 0x1C0149440 (DxgkGetPresentStats.c)
 *     DxgkSetStablePowerState @ 0x1C014A4E0 (DxgkSetStablePowerState.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01552E8 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 *     DxgkCreateOutputDupl @ 0x1C0155520 (DxgkCreateOutputDupl.c)
 *     ?CreateVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0179D80 (-CreateVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z.c)
 *     ?CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0179ED0 (-CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z.c)
 *     ?ReleaseVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C017A060 (-ReleaseVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIQEAUD3DKMDT_HVIDPN__@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 */

DXGADAPTERBYHANDLE *__fastcall DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
        DXGADAPTERBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGADAPTER **a4)
{
  char *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  struct _KTHREAD *v12; // r8
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v21; // [rsp+28h] [rbp-20h]
  int v22; // [rsp+30h] [rbp-18h]

  *(_QWORD *)this = 0LL;
  if ( a4 )
  {
    v8 = (char *)(a3 + 24);
    v21 = (char *)(a3 + 24);
    if ( a3 != (struct _KTHREAD **)-192LL && a3[25] == KeGetCurrentThread() )
    {
      v17 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v17 + 24) = 1135LL;
      WdLogEvent5_WdAssertion(v17);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v18 = *((unsigned int *)v8 + 4);
        if ( (_DWORD)v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v9, &EventBlockThread, v10, v18);
      }
      ExAcquirePushLockSharedEx(v8, 0LL);
    }
    v11 = (a2 >> 6) & 0xFFFFFF;
    v22 = 1;
    if ( (unsigned int)v11 < *((_DWORD *)a3 + 58)
      && (v12 = a3[27],
          v13 = *((_DWORD *)v12 + 4 * (unsigned int)v11 + 2),
          ((a2 >> 26) & 0x30) == (*((_BYTE *)v12 + 16 * (unsigned int)v11 + 8) & 0x30))
      && (v13 & 0x1000) == 0
      && (v13 & 0xF) != 0
      && (v14 = 2 * v11, (*((_BYTE *)v12 + 8 * v14 + 8) & 0xF) == 1) )
    {
      v15 = *((_QWORD *)v12 + v14);
    }
    else
    {
      v15 = 0LL;
    }
    *(_QWORD *)this = v15;
    if ( v15 && _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24)) <= 0 )
    {
      v19 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v19 + 24) = 1050LL;
      WdLogEvent5_WdAssertion(v19);
    }
    *a4 = *(struct DXGADAPTER **)this;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  }
  return this;
}
