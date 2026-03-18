/*
 * XREFs of ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8
 * Callers:
 *     DxgkDisplayOnOff @ 0x1C0071620 (DxgkDisplayOnOff.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0087360 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00877A4 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z @ 0x1C00881A8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C009FB04 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C009FBB8 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00C3DC0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     DxgkFlushPresentHistory @ 0x1C00DB1D0 (DxgkFlushPresentHistory.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00DDEF0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C00E09D0 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E1A24 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1B9C (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 *     DpiPowerArbiterThread @ 0x1C00FBF50 (DpiPowerArbiterThread.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C0144FE0 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01463D8 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01468D0 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C014943C (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01496A0 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01497D4 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01499C8 (-SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C0156010 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C016A130 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C01A0534 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     Template_pqq @ 0x1C001E8AC (Template_pqq.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00912FC (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0091370 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C009FD58 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushScheduler(__int64 a1, int a2, unsigned int a3, int a4)
{
  __int64 v5; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  bool v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebp
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rcx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // ebx
  __int64 v34; // rax
  __int64 v35; // rax
  _DWORD *v36; // rax
  __int64 v37; // rax
  _DWORD *v38; // rax
  __int64 v39; // rax

  v5 = a3;
  v7 = a2;
  v10 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(a1 + 16)) != 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_pqq(v8, &Dxgk_FlushScheduler, v9, v8, v7, v5);
  v11 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v11 + 24) = v7;
  *(_QWORD *)(v11 + 32) = v5;
  WdLogEvent5_WdEvent(v11);
  v16 = 1;
  if ( (int)v7 > 6 )
  {
    if ( (_DWORD)v7 == 7 )
      goto LABEL_20;
    if ( (_DWORD)v7 == 8 )
    {
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        v37 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v37 + 24) = 2357LL;
        WdLogEvent5_WdAssertion(v37);
      }
      if ( !v10 )
      {
        LODWORD(v38) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
        if ( (*v38 & 0x10) != 0 )
          return 0LL;
      }
      v18 = 1LL;
      LOBYTE(v15) = a4 != 0;
      goto LABEL_10;
    }
    v13 = (unsigned int)(v7 - 9);
    if ( (_DWORD)v7 != 9 )
    {
      if ( (_DWORD)v7 == 10 )
      {
LABEL_20:
        if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
        {
          v39 = WdLogNewEntry5_WdAssertion(v21);
          *(_QWORD *)(v39 + 24) = 2352LL;
          WdLogEvent5_WdAssertion(v39);
        }
        LOBYTE(v12) = a4 != 0;
        ADAPTER_RENDER::ResumeScheduler((ADAPTER_RENDER *)a1, v12, (_DWORD)v7 == 10);
        return 0LL;
      }
LABEL_40:
      v28 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v28 + 24) = 2383LL;
      WdLogEvent5_WdAssertion(v28);
      goto LABEL_41;
    }
LABEL_13:
    if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v20);
      *(_QWORD *)(v35 + 24) = 2311LL;
      WdLogEvent5_WdAssertion(v35);
    }
    if ( v10 )
    {
      if ( (_DWORD)v5 == -1 )
      {
LABEL_18:
        LOBYTE(v14) = (_DWORD)v7 == 9;
        ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)a1, a4 != 0, v14);
        return 0LL;
      }
    }
    else
    {
      LODWORD(v36) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
      if ( (*v36 & 0x10) != 0 )
        goto LABEL_18;
    }
    LOBYTE(v15) = a4 != 0;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) + 672LL))(
      *(_QWORD *)(a1 + 384),
      1LL,
      (unsigned int)v5,
      v15);
    goto LABEL_18;
  }
  if ( (_DWORD)v7 == 6 )
    goto LABEL_13;
  v22 = v7 - 1;
  if ( !v22 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v27 + 24) = 2293LL;
      WdLogEvent5_WdAssertion(v27);
    }
    LOBYTE(v15) = a4 != 0;
    v18 = 0LL;
LABEL_10:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) + 672LL))(
      *(_QWORD *)(a1 + 384),
      v18,
      (unsigned int)v5,
      v15);
    return 0LL;
  }
  v24 = v22 - 1;
  if ( v24 )
  {
    v25 = v24 - 1;
    if ( !v25 )
    {
      v16 = 6;
      goto LABEL_41;
    }
    v26 = v25 - 1;
    if ( !v26 )
    {
      v16 = 7;
      goto LABEL_41;
    }
    if ( v26 == 1 )
    {
      v16 = 15;
      goto LABEL_41;
    }
    goto LABEL_40;
  }
LABEL_41:
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16))
    && *(_DWORD *)(*(_QWORD *)(a1 + 16) + 152LL) != 2 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v29);
    *(_QWORD *)(v30 + 24) = 2399LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) + 48LL))(
          *(_QWORD *)(a1 + 384),
          (unsigned int)v16);
  v33 = v31;
  if ( v16 >= 6 && v31 < 0 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v32);
    *(_QWORD *)(v34 + 24) = 2406LL;
    WdLogEvent5_WdAssertion(v34);
  }
  return v33;
}
