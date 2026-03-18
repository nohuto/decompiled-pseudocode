/*
 * XREFs of ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C005F540 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0078A80 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0078B3C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00B5A5C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B5D3C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00B5DE8 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00B5EC8 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C00B6870 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     DxgkDisplayOnOff @ 0x1C00BA1C0 (DxgkDisplayOnOff.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXH@Z @ 0x1C00BD548 (-AcquireLocksForStop@DXGADAPTER@@QEAAXH@Z.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C00BD5B8 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     DxgkFlushPresentHistory @ 0x1C00DD220 (DxgkFlushPresentHistory.c)
 *     DpiPowerArbiterThread @ 0x1C00DE0A0 (DpiPowerArbiterThread.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C011FC00 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0128548 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01288A0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0128AB8 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0128F10 (-Stop@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012919C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 *     ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01293BC (-SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C01320D0 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0140238 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0172400 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     Template_pqq @ 0x1C001B818 (Template_pqq.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0078CB8 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0093E6C (-ResumeScheduler@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJE@Z @ 0x1C0093ECC (-SuspendScheduler@ADAPTER_RENDER@@QEAAJE@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushScheduler(__int64 a1, int a2, unsigned int a3, int a4)
{
  __int64 v5; // r15
  __int64 v7; // rdi
  char v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebp
  int v20; // edi
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned int v57; // edi
  __int64 v58; // rax
  __int64 v59; // rax
  BOOL v60; // [rsp+68h] [rbp+10h] BYREF

  v5 = a3;
  v7 = a2;
  v8 = 0;
  v13 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(a1 + 16)) != 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_pqq(v10, &Dxgk_FlushScheduler, v11, v10, v7, v5);
  v14 = WdLogNewEntry5_WdEvent(v10, v9, v11, v12);
  *(_QWORD *)(v14 + 24) = v7;
  *(_QWORD *)(v14 + 32) = v5;
  WdLogEvent5_WdEvent(v14);
  v19 = 1;
  v20 = v7 - 1;
  if ( !v20 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v59 = WdLogNewEntry5_WdAssertion(v41, v40, v42, v18);
      *(_QWORD *)(v59 + 24) = 21368LL;
      WdLogEvent5_WdAssertion(v59);
    }
    LOBYTE(v18) = a4 != 0;
    v31 = 0LL;
LABEL_19:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) + 672LL))(
      *(_QWORD *)(a1 + 384),
      v31,
      (unsigned int)v5,
      v18);
    return 0LL;
  }
  v21 = v20 - 1;
  if ( v21 )
  {
    v22 = v21 - 1;
    if ( !v22 )
    {
      v19 = 4;
      goto LABEL_43;
    }
    v23 = v22 - 1;
    if ( !v23 )
    {
      v19 = 5;
      goto LABEL_43;
    }
    v24 = v23 - 1;
    if ( !v24 )
    {
      v19 = 13;
      goto LABEL_43;
    }
    v25 = v24 - 1;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( !v26 )
      {
        if ( a4 )
        {
          v8 = 1;
        }
        else if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
        {
          v45 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
          *(_QWORD *)(v45 + 24) = 21436LL;
          WdLogEvent5_WdAssertion(v45);
        }
        ADAPTER_RENDER::ResumeScheduler((ADAPTER_RENDER *)a1, v8);
        return 0LL;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
        if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
        {
          v44 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v18);
          *(_QWORD *)(v44 + 24) = 21441LL;
          WdLogEvent5_WdAssertion(v44);
        }
        if ( !v13 && (*DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16), &v60) & 0x10) != 0 )
          return 0LL;
        v31 = 1LL;
        LOBYTE(v18) = a4 != 0;
        goto LABEL_19;
      }
      if ( v27 == 1 )
      {
        v19 = v13 ? 15 : 13;
      }
      else
      {
        v43 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
        *(_QWORD *)(v43 + 24) = 21467LL;
        WdLogEvent5_WdAssertion(v43);
      }
      goto LABEL_43;
    }
    if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v46 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v18);
      *(_QWORD *)(v46 + 24) = 21396LL;
      WdLogEvent5_WdAssertion(v46);
    }
    if ( v13 )
    {
      if ( (_DWORD)v5 == -1 )
        goto LABEL_25;
    }
    else if ( (*DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16), &v60) & 0x10) != 0 )
    {
LABEL_25:
      ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)a1, a4 != 0);
      return 0LL;
    }
    LOBYTE(v18) = a4 != 0;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) + 672LL))(
      *(_QWORD *)(a1 + 384),
      1LL,
      (unsigned int)v5,
      v18);
    goto LABEL_25;
  }
LABEL_43:
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16))
    && *(_DWORD *)(*(_QWORD *)(a1 + 16) + 136LL) != 2 )
  {
    v51 = WdLogNewEntry5_WdAssertion(v48, v47, v49, v50);
    *(_QWORD *)(v51 + 24) = 21483LL;
    WdLogEvent5_WdAssertion(v51);
  }
  v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) + 48LL))(
          *(_QWORD *)(a1 + 384),
          (unsigned int)v19);
  v57 = v52;
  if ( v19 >= 4 && v52 < 0 )
  {
    v58 = WdLogNewEntry5_WdAssertion(v54, v53, v55, v56);
    *(_QWORD *)(v58 + 24) = 21490LL;
    WdLogEvent5_WdAssertion(v58);
  }
  return v57;
}
