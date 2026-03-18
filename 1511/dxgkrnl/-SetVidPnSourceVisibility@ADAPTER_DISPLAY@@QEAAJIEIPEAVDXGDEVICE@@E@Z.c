/*
 * XREFs of ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C009B578
 * Callers:
 *     ?ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIPEAVDXGDEVICE@@E@Z @ 0x1C001D070 (-ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIPEAVDXGDEVICE@@E@Z.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C008E7E8 (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C008F004 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C009A900 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C009AD40 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00C5508 (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CB234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00CBC48 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00CC590 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C0125730 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01298A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C015F108 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0176C80 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?ClearDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXI@Z @ 0x1C00023AC (-ClearDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007BDC (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0099628 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x1C0099A58 (-DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        __int64 a3,
        int a4,
        struct DXGDEVICE *a5,
        unsigned __int8 a6)
{
  __int64 Value; // rcx
  BOOLEAN v8; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rcx
  bool v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  char v34; // [rsp+30h] [rbp-38h]
  _DXGKARG_SETVIDPNSOURCEVISIBILITY v35; // [rsp+38h] [rbp-30h] BYREF
  int v36; // [rsp+40h] [rbp-28h]
  struct _DXGKARG_SETPOINTERPOSITION v37; // [rsp+48h] [rbp-20h] BYREF

  v37.VidPnSourceId = 0;
  v37.X = 0;
  v37.Y = 0;
  Value = 0LL;
  v8 = a3;
  v35 = 0LL;
  v9 = *((_QWORD *)this + 17);
  v10 = a2;
  v11 = 1016LL * a2;
  v37.Flags.Value = 0;
  v36 = a4;
  v34 = *(_BYTE *)(v9 + v11 + 697);
  if ( a2 >= *((_DWORD *)this + 26) )
  {
    v27 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v27 + 24) = 11197LL;
    WdLogEvent5_WdAssertion(v27);
    Value = v37.Flags.Value;
  }
  if ( v8 && a5 )
  {
    v28 = WdLogNewEntry5_WdAssertion(Value);
    *(_QWORD *)(v28 + 24) = 11198LL;
    WdLogEvent5_WdAssertion(v28);
    LODWORD(Value) = v37.Flags.0;
  }
  v37.VidPnSourceId = v10;
  v35.VidPnSourceId = v10;
  v35.Visible = v8;
  v37.Flags.Value = ((unsigned __int8)Value ^ v8) & 1 ^ Value;
  v12 = *((_QWORD *)this + 2);
  v13 = *(_DWORD *)(v12 + 260) != 32902 || *(int *)(v12 + 1656) >= 4864;
  if ( *(_QWORD *)(v12 + 1992) && v13 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v12) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v29 + 24) = 11223LL;
      WdLogEvent5_WdAssertion(v29);
    }
    ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 1992LL), 6, v10, 1);
  }
  if ( !v8 )
  {
    if ( a5 )
      DXGDEVICE::ClearDisplayedAllMultiPlaneOverlays(a5, v10);
    if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v37, a3) < 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v32 + 24) = 11268LL;
      WdLogEvent5_WdAssertion(v32);
    }
    v17 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v35, v16);
    v21 = v17;
    if ( v17 >= 0 )
      goto LABEL_17;
LABEL_36:
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v33[3] = v10;
    v33[4] = *((_QWORD *)this + 2);
    v33[5] = v21;
    WdLogEvent5_WdError(v33);
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)this, v10, 1);
    goto LABEL_20;
  }
  v24 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v35, a3);
  v21 = v24;
  if ( v24 < 0 )
    goto LABEL_36;
  if ( (unsigned int)v10 >= *((_DWORD *)this + 26) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v30 + 24) = 3838LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v25 = *((_QWORD *)this + 17);
  if ( *(_BYTE *)(v25 + v11 + 700) )
  {
    v37.X = *(_DWORD *)(v25 + v11 + 704);
    v37.Y = *(_DWORD *)(v25 + v11 + 708);
    LODWORD(v21) = ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v37, v19);
    if ( (int)v21 >= 0 )
      goto LABEL_17;
    v31 = WdLogNewEntry5_WdAssertion(v26);
    *(_QWORD *)(v31 + 24) = 11250LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( (int)v21 >= 0 )
  {
LABEL_17:
    LOBYTE(v20) = v8;
    LOBYTE(v19) = v34;
    DisplayScenarioJournalVidPnSourceVisibility(
      *(_QWORD *)(*((_QWORD *)this + 2) + 252LL),
      (unsigned int)v10,
      v19,
      v20,
      v36);
  }
  if ( a6 )
    *(_BYTE *)(*((_QWORD *)this + 17) + v11 + 696) = v8;
LABEL_20:
  v22 = *(_QWORD *)(*((_QWORD *)this + 2) + 1992LL);
  if ( v22 && v13 )
    ADAPTER_RENDER::FlushScheduler(v22, 7, v10, 1);
  return (unsigned int)v21;
}
