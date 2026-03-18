/*
 * XREFs of DmmCacheDisplayModeChangeRequest @ 0x1C00C5F78
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0094560 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00C3DC0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DmmCacheInvalidDisplayModeChangeRequest @ 0x1C01A3488 (DmmCacheInvalidDisplayModeChangeRequest.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0005EBC (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
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
  __int64 v14; // rcx
  __int64 ProcessImageFileName; // rax
  __int64 CurrentProcess; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v18 + 24) = 0LL;
    goto LABEL_10;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v19);
  }
  v12 = *((_QWORD *)a1 + 266);
  if ( !v12 )
  {
    v18 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v18 + 24) = a1;
LABEL_10:
    WdLogEvent5_WdError(v18);
    return 3223191554LL;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v21, *(_QWORD *)(v12 + 88));
    ProcessImageFileName = a7;
    if ( !a7 )
    {
      CurrentProcess = PsGetCurrentProcess(v14);
      ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
    }
    VIDPN_MGR::CacheDisplayModeChangeRequest(
      v13,
      a2,
      a3,
      a4,
      a5,
      a6,
      *(_DWORD *)(*((_QWORD *)a1 + 266) + 240LL),
      ProcessImageFileName);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v21 + 40));
    return 0LL;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v20 + 24) = a1;
    WdLogEvent5_WdError(v20);
    return 3223192373LL;
  }
}
