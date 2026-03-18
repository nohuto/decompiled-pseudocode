/*
 * XREFs of ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C007A060 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C007A10C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C009A900 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C009AD40 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C009B578 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00AE440 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkDisplayOnOff @ 0x1C00AF0F0 (DxgkDisplayOnOff.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     DxgkFlushPresentHistory @ 0x1C00C64C0 (DxgkFlushPresentHistory.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C00CC154 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00CC590 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DpiPowerArbiterThread @ 0x1C00E8F50 (DpiPowerArbiterThread.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXXZ @ 0x1C0125154 (-AcquireLocksForStop@DXGADAPTER@@QEAAXXZ.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C0125730 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01298A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012EA44 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012ED94 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C012F070 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C012F574 (-Stop@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012F81C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 *     ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C012FA54 (-SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C0136BA0 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0146794 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0176C80 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     Template_pqq @ 0x1C001C1F0 (Template_pqq.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C006A824 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJE@Z @ 0x1C006A884 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJE@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C007A2D4 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushScheduler(__int64 a1, int a2, unsigned int a3, int a4)
{
  __int64 v5; // r15
  __int64 v7; // rdi
  char v8; // bl
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // r12
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  int v15; // ebp
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  int v22; // edi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _DWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // edi
  __int64 v40; // rax
  __int64 v41; // rax

  v5 = a3;
  v7 = a2;
  v8 = 0;
  v11 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(a1 + 16)) != 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_pqq(v9, &Dxgk_FlushScheduler, v10, v9, v7, v5);
  v12 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v12 + 24) = v7;
  *(_QWORD *)(v12 + 32) = v5;
  WdLogEvent5_WdEvent(v12);
  v15 = 1;
  v16 = v7 - 1;
  if ( !v16 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v41 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v41 + 24) = 21885LL;
      WdLogEvent5_WdAssertion(v41);
    }
    LOBYTE(v14) = a4 != 0;
    v24 = 0LL;
LABEL_15:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 400) + 8LL) + 672LL))(
      *(_QWORD *)(a1 + 408),
      v24,
      (unsigned int)v5,
      v14);
    return 0LL;
  }
  v17 = v16 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( !v18 )
    {
      v15 = 6;
      goto LABEL_42;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v15 = 7;
      goto LABEL_42;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      v15 = 15;
      goto LABEL_42;
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( !v22 )
      {
        if ( a4 )
        {
          v8 = 1;
        }
        else if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
        {
          v32 = WdLogNewEntry5_WdAssertion(v26);
          *(_QWORD *)(v32 + 24) = 21942LL;
          WdLogEvent5_WdAssertion(v32);
        }
        ADAPTER_RENDER::ResumeScheduler((ADAPTER_RENDER *)a1, v8);
        return 0LL;
      }
      if ( v22 == 1 )
      {
        if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
        {
          v30 = WdLogNewEntry5_WdAssertion(v23);
          *(_QWORD *)(v30 + 24) = 21947LL;
          WdLogEvent5_WdAssertion(v30);
        }
        if ( !v11 )
        {
          LODWORD(v31) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
          if ( (*v31 & 0x10) != 0 )
            return 0LL;
        }
        v24 = 1LL;
        LOBYTE(v14) = a4 != 0;
        goto LABEL_15;
      }
      v29 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v29 + 24) = 21973LL;
      WdLogEvent5_WdAssertion(v29);
      goto LABEL_42;
    }
    if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v27);
      *(_QWORD *)(v33 + 24) = 21902LL;
      WdLogEvent5_WdAssertion(v33);
    }
    if ( v11 )
    {
      if ( (_DWORD)v5 == -1 )
      {
LABEL_26:
        ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)a1, a4 != 0);
        return 0LL;
      }
    }
    else
    {
      LODWORD(v34) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
      if ( (*v34 & 0x10) != 0 )
        goto LABEL_26;
    }
    LOBYTE(v14) = a4 != 0;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 400) + 8LL) + 672LL))(
      *(_QWORD *)(a1 + 408),
      1LL,
      (unsigned int)v5,
      v14);
    goto LABEL_26;
  }
LABEL_42:
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16))
    && *(_DWORD *)(*(_QWORD *)(a1 + 16) + 136LL) != 2 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v35);
    *(_QWORD *)(v36 + 24) = 21989LL;
    WdLogEvent5_WdAssertion(v36);
  }
  v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 400) + 8LL) + 48LL))(
          *(_QWORD *)(a1 + 408),
          (unsigned int)v15);
  v39 = v37;
  if ( v15 >= 6 && v37 < 0 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v38);
    *(_QWORD *)(v40 + 24) = 21996LL;
    WdLogEvent5_WdAssertion(v40);
  }
  return v39;
}
