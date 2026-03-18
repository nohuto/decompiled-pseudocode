/*
 * XREFs of DmmCacheDisplayModeChangeRequest @ 0x1C00AE9B0
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C006C7E8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00AE440 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkSetDisplayMode @ 0x1C00AF380 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0004B84 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DmmCacheDisplayModeChangeRequest(
        DXGADAPTER *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 ProcessImageFileName; // rax
  __int64 CurrentProcess; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v17 + 24) = 0LL;
    goto LABEL_10;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v18);
  }
  v12 = *((_QWORD *)a1 + 248);
  if ( !v12 )
  {
    v17 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v17 + 24) = a1;
LABEL_10:
    WdLogEvent5_WdError(v17);
    return 3223191554LL;
  }
  v13 = *(_QWORD *)(v12 + 112);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v20, *(_QWORD *)(v12 + 112));
    ProcessImageFileName = a7;
    if ( !a7 )
    {
      CurrentProcess = PsGetCurrentProcess();
      ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
    }
    VIDPN_MGR::CacheDisplayModeChangeRequest(
      v13,
      a2,
      a3,
      a4,
      a5,
      a6,
      *(_DWORD *)(*((_QWORD *)a1 + 248) + 312LL),
      ProcessImageFileName);
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v20 + 40));
    return 0LL;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v19 + 24) = a1;
    WdLogEvent5_WdError(v19);
    return 3223192373LL;
  }
}
