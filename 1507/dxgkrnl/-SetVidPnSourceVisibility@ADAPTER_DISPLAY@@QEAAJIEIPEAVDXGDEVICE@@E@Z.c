/*
 * XREFs of ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C00B6870
 * Callers:
 *     ?ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIPEAVDXGDEVICE@@E@Z @ 0x1C001CD60 (-ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIPEAVDXGDEVICE@@E@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00B5A5C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B5D3C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00B5DE8 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00B5EC8 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00B89C4 (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8CFC (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C00B9520 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BCBD4 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00BD1F0 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C011FC00 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C015ADE4 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0172400 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000AF88 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?ClearDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXI@Z @ 0x1C000B5D0 (-ClearDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00956F8 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x1C00B5660 (-DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct DXGDEVICE *a5,
        unsigned __int8 a6)
{
  __int64 Value; // rcx
  BOOLEAN v8; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  bool v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  int v39; // eax
  _QWORD *v40; // rax
  char v41; // [rsp+30h] [rbp-38h]
  _DXGKARG_SETVIDPNSOURCEVISIBILITY v42; // [rsp+38h] [rbp-30h] BYREF
  int v43; // [rsp+40h] [rbp-28h]
  struct _DXGKARG_SETPOINTERPOSITION v44; // [rsp+48h] [rbp-20h] BYREF

  v44.VidPnSourceId = 0;
  v44.X = 0;
  v44.Y = 0;
  Value = 0LL;
  v8 = a3;
  v42 = 0LL;
  v9 = *((_QWORD *)this + 14);
  v10 = (unsigned int)a2;
  v11 = 1008LL * (unsigned int)a2;
  v44.Flags.Value = 0;
  v43 = a4;
  v41 = *(_BYTE *)(v9 + v11 + 697);
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = 10852LL;
    WdLogEvent5_WdAssertion(v12);
    Value = v44.Flags.Value;
  }
  if ( v8 && a5 )
  {
    v13 = WdLogNewEntry5_WdAssertion(Value, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = 10853LL;
    WdLogEvent5_WdAssertion(v13);
    LODWORD(Value) = v44.Flags.0;
  }
  v44.VidPnSourceId = v10;
  v42.VidPnSourceId = v10;
  v42.Visible = v8;
  v44.Flags.Value = ((unsigned __int8)Value ^ v8) & 1 ^ Value;
  v14 = *((_QWORD *)this + 2);
  v15 = *(_DWORD *)(v14 + 260) != 32902 || *(int *)(v14 + 1648) >= 4864;
  if ( *(_QWORD *)(v14 + 1984) && v15 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v14) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      *(_QWORD *)(v20 + 24) = 10878LL;
      WdLogEvent5_WdAssertion(v20);
    }
    ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 1984LL), 6, v10, 1);
  }
  if ( !v8 )
  {
    if ( a5 )
      DXGDEVICE::ClearDisplayedAllMultiPlaneOverlays(a5, v10);
    if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v44, a3) < 0 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
      *(_QWORD *)(v38 + 24) = 10923LL;
      WdLogEvent5_WdAssertion(v38);
    }
    v39 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v42, v36);
    v26 = v39;
    if ( v39 >= 0 )
      goto LABEL_23;
LABEL_35:
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v40[3] = v10;
    v40[4] = *((_QWORD *)this + 2);
    v40[5] = v26;
    WdLogEvent5_WdError(v40);
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)this, v10, 1);
    goto LABEL_26;
  }
  v21 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v42, a3);
  v26 = v21;
  if ( v21 < 0 )
    goto LABEL_35;
  if ( (unsigned int)v10 >= *((_DWORD *)this + 20) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
    *(_QWORD *)(v27 + 24) = 3699LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v28 = *((_QWORD *)this + 14);
  if ( !*(_BYTE *)(v28 + v11 + 700) )
  {
LABEL_22:
    if ( (int)v26 < 0 )
      goto LABEL_24;
    goto LABEL_23;
  }
  v44.X = *(_DWORD *)(v28 + v11 + 704);
  v44.Y = *(_DWORD *)(v28 + v11 + 708);
  LODWORD(v26) = ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v44, v24);
  if ( (int)v26 < 0 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v30, v29, v24, v25);
    *(_QWORD *)(v31 + 24) = 10905LL;
    WdLogEvent5_WdAssertion(v31);
    goto LABEL_22;
  }
LABEL_23:
  LOBYTE(v25) = v8;
  LOBYTE(v24) = v41;
  DisplayScenarioJournalVidPnSourceVisibility(
    *(_QWORD *)(*((_QWORD *)this + 2) + 252LL),
    (unsigned int)v10,
    v24,
    v25,
    v43);
LABEL_24:
  if ( a6 )
    *(_BYTE *)(*((_QWORD *)this + 14) + v11 + 696) = v8;
LABEL_26:
  v32 = *(_QWORD *)(*((_QWORD *)this + 2) + 1984LL);
  if ( v32 && v15 )
    ADAPTER_RENDER::FlushScheduler(v32, 7, v10, 1);
  return (unsigned int)v26;
}
