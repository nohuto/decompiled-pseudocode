/*
 * XREFs of ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z @ 0x1C00881A8
 * Callers:
 *     ?ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIPEAVDXGDEVICE@@EE@Z @ 0x1C000F2C0 (-ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIPEAVDXGDEVICE@@EE@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008388C (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C00840B4 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0087360 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00877A4 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00D9D3C (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00DDEF0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E1A24 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1B9C (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_D.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00E287C (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C0184AB0 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C01A0534 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0006874 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?ClearDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXI@Z @ 0x1C0007F28 (-ClearDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x1C00861DC (-DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C008637C (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        __int64 a3,
        int a4,
        struct _KTHREAD **a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  BOOLEAN v7; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rax
  char v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  char v37; // [rsp+30h] [rbp-38h]
  _DXGKARG_SETVIDPNSOURCEVISIBILITY v38; // [rsp+38h] [rbp-30h] BYREF
  int v39; // [rsp+40h] [rbp-28h]
  struct _DXGKARG_SETPOINTERPOSITION v40; // [rsp+48h] [rbp-20h] BYREF

  *(_QWORD *)&v40.VidPnSourceId = 0LL;
  v7 = a3;
  *(_QWORD *)&v40.Y = 0LL;
  v38 = 0LL;
  v9 = *((_QWORD *)this + 14);
  v10 = a2;
  v11 = 1016LL * a2;
  v39 = a4;
  v37 = *(_BYTE *)(v9 + v11 + 705);
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v28 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v28 + 24) = 936LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( v7 && a5 )
  {
    v29 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v29 + 24) = 937LL;
    WdLogEvent5_WdAssertion(v29);
  }
  v40.VidPnSourceId = v10;
  v38.VidPnSourceId = v10;
  v38.Visible = v7;
  v40.Flags.Value ^= (*(_BYTE *)&v40.Flags.0 ^ v7) & 1;
  if ( a7 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v27);
      *(_QWORD *)(v30 + 24) = 952LL;
      WdLogEvent5_WdAssertion(v30);
    }
    goto LABEL_35;
  }
  v12 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v12 + 276) == 32902 && *(int *)(v12 + 1792) < 4864 )
  {
LABEL_35:
    v13 = 0;
    goto LABEL_7;
  }
  v13 = 1;
LABEL_7:
  v14 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v14 + 2136) && v13 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v14) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v31 + 24) = 976LL;
      WdLogEvent5_WdAssertion(v31);
    }
    ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 2136LL), 6LL, (unsigned int)v10);
  }
  if ( !v7 )
  {
    if ( a5 )
      DXGDEVICE::ClearDisplayedAllMultiPlaneOverlays(a5, v10);
    if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v40, a3) < 0 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v36 + 24) = 1029LL;
      WdLogEvent5_WdAssertion(v36);
    }
    v18 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v38, v17);
    v22 = v18;
    if ( v18 >= 0 )
      goto LABEL_18;
LABEL_38:
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v32[3] = v10;
    v32[4] = *((_QWORD *)this + 2);
    v32[5] = v22;
    WdLogEvent5_WdError(v32);
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)this, v10, 1);
    goto LABEL_21;
  }
  v25 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v38, a3);
  v22 = v25;
  if ( v25 < 0 )
    goto LABEL_38;
  if ( (unsigned int)v10 >= *((_DWORD *)this + 20) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v33 + 24) = 3995LL;
    WdLogEvent5_WdAssertion(v33);
  }
  v26 = *((_QWORD *)this + 14);
  if ( *(_BYTE *)(v26 + v11 + 708) )
  {
    v40.X = *(_DWORD *)(v26 + v11 + 712);
    v40.Y = *(_DWORD *)(v26 + v11 + 716);
    LODWORD(v22) = ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v40, v20);
    if ( (int)v22 >= 0 )
      goto LABEL_18;
    v35 = WdLogNewEntry5_WdAssertion(v34);
    *(_QWORD *)(v35 + 24) = 1011LL;
    WdLogEvent5_WdAssertion(v35);
  }
  if ( (int)v22 >= 0 )
  {
LABEL_18:
    LOBYTE(v21) = v7;
    LOBYTE(v20) = v37;
    DisplayScenarioJournalVidPnSourceVisibility(
      *(_QWORD *)(*((_QWORD *)this + 2) + 268LL),
      (unsigned int)v10,
      v20,
      v21,
      v39);
  }
  if ( a6 )
    *(_BYTE *)(*((_QWORD *)this + 14) + v11 + 704) = v7;
LABEL_21:
  v23 = *(_QWORD *)(*((_QWORD *)this + 2) + 2136LL);
  if ( v23 && v13 )
    ADAPTER_RENDER::FlushScheduler(v23, 7LL, (unsigned int)v10);
  return (unsigned int)v22;
}
