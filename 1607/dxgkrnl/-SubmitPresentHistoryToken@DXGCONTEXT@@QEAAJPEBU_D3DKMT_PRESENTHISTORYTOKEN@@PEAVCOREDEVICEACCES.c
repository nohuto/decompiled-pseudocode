/*
 * XREFs of ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B27C0
 * Callers:
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00A77A0 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00B0FB0 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00B15B0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00B4080 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     DxgkPresent @ 0x1C00C8CB0 (DxgkPresent.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00016F4 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0009F8C (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     Template_ppqqx @ 0x1C0011BFC (Template_ppqqx.c)
 *     Template_ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq @ 0x1C0011CA0 (Template_ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??1KOBJECTREF@@QEAA@XZ @ 0x1C001D2C0 (--1KOBJECTREF@@QEAA@XZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C0025E50 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C009F940 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00AF070 (-PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C00B3F40 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@.c)
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C00CAEA4 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C015DE20 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentHistoryToken(
        struct _EX_RUNDOWN_REF *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct CWin32kLocks *a5,
        char a6,
        union _LARGE_INTEGER *a7,
        struct DXGK_PRESENT_PARAMS *a8,
        struct VIDSCH_SUBMIT_DATA_BASE *a9)
{
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v22; // rcx
  __int64 v23; // r12
  unsigned int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  char *v28; // rsi
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  NTSTATUS v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rbx
  unsigned int v45; // ebx
  __int64 v46; // rbx
  _QWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  union _SLIST_HEADER *v51; // r12
  PSLIST_ENTRY v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r9
  PSLIST_ENTRY v55; // r14
  PSLIST_ENTRY v56; // rsi
  ULONG_PTR Count; // rax
  __int64 v58; // r15
  __int64 v59; // rdx
  int v60; // r8d
  unsigned int v61; // eax
  __int64 v62; // rax
  int v63; // r8d
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rax
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v67; // rdx
  unsigned __int64 v68; // r8
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // eax
  __int64 v70; // rax
  unsigned int v71; // ebx
  __int64 v72; // rax
  int v73; // eax
  UINT NumRects; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int64 v76; // rax
  volatile signed __int32 *v77; // rbx
  unsigned int v78; // eax
  struct _D3DKMT_PRESENT *v79; // r12
  __int64 v80; // rcx
  int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // r15
  __int64 v84; // rax
  struct CRefCountedBuffer *v85; // rax
  __int64 v86; // rcx
  int Next; // r10d
  int Next_high; // r15d
  __int64 v89; // r8
  unsigned int *v90; // rcx
  __int64 v91; // rdx
  struct _SLIST_ENTRY v92; // xmm0
  struct _SLIST_ENTRY *v93; // rax
  int v94; // eax
  unsigned int v95; // r11d
  __int64 v96; // r9
  int v97; // eax
  ULONG BroadcastContextCount; // r8d
  __int64 v99; // rdx
  int v100; // r8d
  unsigned int v101; // r15d
  signed __int64 v102; // rax
  DXGDEVICE *v103; // rcx
  __int64 v104; // rcx
  __int64 v105; // rax
  unsigned __int64 v106; // r14
  _QWORD *v107; // r10
  _BYTE *PoolWithTag; // r10
  __int64 v109; // rdx
  __int64 v110; // r9
  _QWORD *v111; // r8
  ULONG_PTR v112; // rax
  __int64 v113; // rax
  struct _D3DKMT_PRESENT *v114; // rbx
  __int64 v115; // r12
  struct VIDMM_ALLOC **v116; // r9
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rax
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-148h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-140h]
  int v128; // [rsp+F0h] [rbp-80h]
  int v129; // [rsp+F0h] [rbp-80h]
  PRKSEMAPHORE Semaphore; // [rsp+F8h] [rbp-78h]
  unsigned int v131; // [rsp+100h] [rbp-70h]
  char Srca; // [rsp+108h] [rbp-68h]
  struct _SLIST_ENTRY *v134; // [rsp+110h] [rbp-60h]
  DXGPRESENTHISTORYTOKENQUEUE *v135; // [rsp+118h] [rbp-58h]
  DXGPRESENTHISTORYTOKENQUEUE *v136; // [rsp+118h] [rbp-58h]
  struct _SLIST_ENTRY v137; // [rsp+120h] [rbp-50h]
  struct CRefCountedBuffer *v138; // [rsp+130h] [rbp-40h] BYREF
  __int64 v139; // [rsp+138h] [rbp-38h]
  signed __int64 v140; // [rsp+140h] [rbp-30h] BYREF
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+148h] [rbp-28h] BYREF
  struct _D3DKMT_PRESENT *v142; // [rsp+150h] [rbp-20h]
  __int128 v143; // [rsp+158h] [rbp-18h]
  __int128 v144; // [rsp+168h] [rbp-8h]
  struct _SLIST_ENTRY *v145[2]; // [rsp+178h] [rbp+8h] BYREF
  int v146; // [rsp+188h] [rbp+18h]
  PRKSEMAPHORE v147; // [rsp+190h] [rbp+20h] BYREF
  PVOID Object[2]; // [rsp+198h] [rbp+28h] BYREF
  char v149[8]; // [rsp+1A8h] [rbp+38h] BYREF
  __int64 v150; // [rsp+1B0h] [rbp+40h]
  int v151; // [rsp+1B8h] [rbp+48h]
  _BYTE *v152; // [rsp+1C0h] [rbp+50h] BYREF
  _BYTE v153[64]; // [rsp+1C8h] [rbp+58h] BYREF
  int v154; // [rsp+208h] [rbp+98h]
  _BYTE v156[64]; // [rsp+220h] [rbp+B0h] BYREF
  _BYTE v157[64]; // [rsp+260h] [rbp+F0h] BYREF
  char v158[64]; // [rsp+2A0h] [rbp+130h] BYREF
  _DWORD v159[16]; // [rsp+2E0h] [rbp+170h] BYREF

  v142 = (struct _D3DKMT_PRESENT *)a8;
  v12 = *(_QWORD *)(this[2].Count + 16);
  v139 = v12;
  v13 = *(_QWORD *)(v12 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 144)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 1742LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = v12 + 592;
  v150 = v12 + 592;
  if ( v12 != -592 && *(struct _KTHREAD **)(v12 + 600) == KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v16 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 592, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v19 = *(_DWORD *)(v12 + 608);
      if ( v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v17, &EventBlockThread, v18, v19);
    }
    ExAcquirePushLockSharedEx(v12 + 592, 0LL);
  }
  v151 = 1;
  CurrentProcess = PsGetCurrentProcess(v17);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  if ( ProcessSessionId >= *(_DWORD *)(v12 + 616)
    || (v22 = 8LL * ProcessSessionId, !*(_QWORD *)(v22 + *(_QWORD *)(v12 + 624)))
    || (_mm_lfence(), v23 = *(_QWORD *)(v22 + *(_QWORD *)(v12 + 624)),
                      (v135 = (DXGPRESENTHISTORYTOKENQUEUE *)v23) == 0LL) )
  {
    v124 = WdLogNewEntry5_WdEvent(v22);
    *(_QWORD *)(v124 + 24) = this;
    WdLogEvent5_WdEvent(v124);
    v45 = -1073741811;
    goto LABEL_178;
  }
  Semaphore = *(PRKSEMAPHORE *)(v23 + 64);
  v147 = Semaphore;
  ObfReferenceObject(Semaphore);
  v24 = 0;
  v151 = 0;
  ExReleasePushLockSharedEx(v15, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_BYTE *)a3 + 80) )
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 40));
  v28 = (char *)a3 + 8;
  if ( !*((_BYTE *)a3 + 32) )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25, v27);
    v29[3] = 275LL;
    v29[4] = 4LL;
    v29[5] = v28;
    v29[6] = 0LL;
    v29[7] = 0LL;
    WdLogEvent5_WdCriticalError(v29);
  }
  v30 = *((_QWORD *)a3 + 3);
  *((_BYTE *)a3 + 32) = 0;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v30 + 160) )
    DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v30);
  if ( *((_BYTE *)a4 + 16) )
  {
    v31 = *((_QWORD *)a4 + 1) + 120LL;
    *((_BYTE *)a4 + 16) = 0;
    ExReleasePushLockSharedEx(v31, 0LL);
    KeLeaveCriticalRegion();
    v32 = *((_QWORD *)a4 + 1);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v32 + 16), (struct DXGADAPTER *)v32);
  }
  if ( a5 )
  {
    v33 = *((_QWORD *)a5 + 7);
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v33 + 160)
      || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v33 + 144)) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v33);
      *(_QWORD *)(v34 + 24) = 733LL;
      WdLogEvent5_WdAssertion(v34);
    }
    if ( *((_QWORD *)a5 + 2) )
    {
      (*(void (**)(void))(*((_QWORD *)a5 + 3) + 24LL))();
      *((_QWORD *)a5 + 2) = 0LL;
    }
    if ( *(_QWORD *)a5 )
    {
      v35 = *((_QWORD *)a5 + 5);
      if ( v35 )
      {
        if ( *((_DWORD *)a5 + 13) )
          (*(void (__fastcall **)(__int64, bool))(*((_QWORD *)a5 + 4) + 288LL))(v35, *((_DWORD *)a5 + 12) == 0);
        (*(void (**)(void))(*((_QWORD *)a5 + 4) + 272LL))();
        *((_QWORD *)a5 + 5) = 0LL;
        *((_QWORD *)a5 + 6) = 0LL;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a5 + 3) + 296LL))(*(_QWORD *)a5, 0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a5 + 3) + 64LL))(*(_QWORD *)a5, *((_QWORD *)a5 + 1));
      *(_QWORD *)a5 = 0LL;
    }
  }
  Object[0] = (PVOID)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) + 2104LL);
  Object[1] = Semaphore;
  v36 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, a7, 0LL);
  if ( !v36 )
  {
    v40 = WdLogNewEntry5_WdEvent(v38);
    *(_QWORD *)(v40 + 24) = this;
    goto LABEL_45;
  }
  if ( v36 != 258 )
  {
    if ( !*((_BYTE *)a4 + 16) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a4 + 1) + 24LL));
      v46 = *((_QWORD *)a4 + 1);
      *(_QWORD *)a4 = -1LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v46 + 120, 0LL);
      *((_BYTE *)a4 + 16) = 1;
    }
    if ( *((_BYTE *)a3 + 32) )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v37, v39);
      v47[3] = 275LL;
      v47[4] = 4LL;
      v47[5] = v28;
      v47[6] = 0LL;
      v47[7] = 0LL;
      WdLogEvent5_WdCriticalError(v47);
    }
    v48 = *((_QWORD *)a3 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v48 + 160) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v48 + 48)) )
        KeWaitForSingleObject((PVOID)(*((_QWORD *)a3 + 3) + 48LL), Executive, 0, 0, 0LL);
      DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a3 + 3));
    }
    *((_BYTE *)a3 + 32) = 1;
    if ( *(_DWORD *)(*((_QWORD *)a3 + 9) + 376LL) != 1 )
      goto LABEL_59;
    if ( *((_BYTE *)a3 + 80) )
    {
      COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a3 + 40));
      if ( *(_DWORD *)(*((_QWORD *)a3 + 7) + 176LL) != 1 )
      {
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 40));
LABEL_59:
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 8));
        KeReleaseSemaphore(Semaphore, 0, 1, 0);
        v50 = WdLogNewEntry5_WdEvent(v49);
        v45 = -1073741130;
        *(_QWORD *)(v50 + 24) = -1073741130LL;
        *(_QWORD *)(v50 + 32) = this;
        WdLogEvent5_WdEvent(v50);
        KOBJECTREF::~KOBJECTREF((PVOID *)&v147);
        goto LABEL_178;
      }
    }
    v51 = (union _SLIST_HEADER *)(v23 + 48);
    v52 = ExpInterlockedPopEntrySList(v51);
    if ( !v52
      && (!DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(v135) || (v52 = ExpInterlockedPopEntrySList(v51)) == 0LL)
      || (v55 = v52 + 1, v52 == (PSLIST_ENTRY)-16LL) )
    {
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v123 = WdLogNewEntry5_WdLowResource(v122);
      *(_QWORD *)(v123 + 24) = -1073741801LL;
      *(_QWORD *)(v123 + 32) = this;
      WdLogEvent5_WdLowResource(v123);
      v45 = -1073741801;
      KOBJECTREF::~KOBJECTREF((PVOID *)&v147);
      goto LABEL_178;
    }
    v56 = 0LL;
    Count = this[2].Count;
    LOBYTE(v53) = a9 == 0LL;
    v145[0] = 0LL;
    v58 = *(_QWORD *)(Count + 16);
    v145[1] = (struct _SLIST_ENTRY *)v58;
    if ( !a9 )
    {
      ++*(_DWORD *)(v58 + 964);
      v56 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v58 + 944));
      if ( !v56 )
      {
        ++*(_DWORD *)(v58 + 968);
        v56 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v58 + 992))(
                              *(unsigned int *)(v58 + 980),
                              *(unsigned int *)(v58 + 988),
                              *(unsigned int *)(v58 + 984),
                              v58 + 944);
      }
      v145[0] = v56;
      if ( v56 )
      {
        v59 = *(_QWORD *)(v58 + 16);
        v60 = *(int *)(v59 + 1792) < 0x2000 ? 1 : *(_DWORD *)(v59 + 248);
        v61 = *(int *)(v59 + 1792) >= 0x2000 || *(_BYTE *)(v59 + 2076)
            ? *(_DWORD *)(v59 + 2000) * (48 * v60 + ((8 * v60 + 167) & 0xFFFFFFF8)) + 8 * (v60 + 55)
            : 936;
        memset(v56, 0, v61);
        v62 = *(_QWORD *)(v58 + 16);
        v53 = *(unsigned int *)(v62 + 1792);
        v63 = (int)v53 < 0x2000 ? 1 : *(_DWORD *)(v62 + 248);
        LOBYTE(v53) = (int)v53 >= 0x2000 || *(_BYTE *)(v62 + 2076);
        v54 = *(unsigned int *)(v62 + 2000);
        *((_BYTE *)&v56[21].Next + 12) = v53;
        if ( (_BYTE)v53 )
        {
          *((_DWORD *)&v56[26].Next + 3) = v54;
          LODWORD(v56[27].Next) = v63;
          v53 = (unsigned int)v54 * (48 * v63 + ((8 * v63 + 167) & 0xFFFFFFF8)) + 16;
          HIDWORD(v56[27].Next) = v53;
          v64 = v54 * (48 * v63 + ((8 * v63 + 167) & 0xFFFFFFF8)) + 440;
          LODWORD(v56[26].Next) = v64;
          HIDWORD(v56[26].Next) = 8 * v63 + v64;
        }
      }
    }
    if ( a9 )
    {
      v56 = (PSLIST_ENTRY)a9;
    }
    else if ( !v56 )
    {
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v66 = WdLogNewEntry5_WdLowResource(v65);
      *(_QWORD *)(v66 + 24) = 1830LL;
      WdLogEvent5_WdLowResource(v66);
      CVidSchSubmitData::~CVidSchSubmitData(v145);
      v45 = -1073741801;
      KOBJECTREF::~KOBJECTREF((PVOID *)&v147);
      goto LABEL_178;
    }
    v67 = a2;
    v68 = 0x1C0000000uLL;
    v131 = 1;
    switch ( a2->Model )
    {
      case D3DKMT_PM_REDIRECTED_GDI:
        FlipInterval = a2->Token.Flip.FlipInterval;
        if ( (unsigned int)FlipInterval > 0x10 )
        {
          v70 = WdLogNewEntry5_WdAssertion(v53);
          *(_QWORD *)(v70 + 24) = 52LL;
          goto LABEL_91;
        }
        v73 = 16 * FlipInterval + 60;
        goto LABEL_102;
      case D3DKMT_PM_REDIRECTED_FLIP:
        NumRects = a2->Token.Flip.DirtyRegions.NumRects;
        if ( NumRects > 0x10 )
        {
          v70 = WdLogNewEntry5_WdAssertion(v53);
          *(_QWORD *)(v70 + 24) = 62LL;
          goto LABEL_91;
        }
        v73 = 16 * NumRects + 824;
        goto LABEL_102;
      case D3DKMT_PM_REDIRECTED_BLT:
        VidPnSourceId = a2->Token.Flip.VidPnSourceId;
        if ( VidPnSourceId > 0x10 )
        {
          v70 = WdLogNewEntry5_WdAssertion(v53);
          *(_QWORD *)(v70 + 24) = 72LL;
LABEL_91:
          WdLogEvent5_WdAssertion(v70);
          v71 = 0;
LABEL_92:
          v72 = WdLogNewEntry5_WdWarning(v53, v67, v68, v54);
          *(_QWORD *)(v72 + 24) = v71;
          WdLogEvent5_WdWarning(v72);
          CVidSchSubmitData::~CVidSchSubmitData(v145);
          v45 = -1073741811;
          KOBJECTREF::~KOBJECTREF((PVOID *)&v147);
          goto LABEL_178;
        }
        v73 = 16 * VidPnSourceId + 44;
LABEL_102:
        v71 = (v73 + 7) & 0xFFFFFFF8;
        if ( v71 - 1 > 0x437 )
          goto LABEL_92;
        memmove(v55, v67, v71);
        if ( !(*(unsigned int (__fastcall **)(PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(this[2].Count + 40) + 72LL) + 256LL))(v55) )
        {
          LODWORD(v83) = -1071775733;
          ExpInterlockedPushEntrySList(v51, v55 - 1);
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          v121 = WdLogNewEntry5_WdWarning(v118, v117, v119, v120);
          *(_QWORD *)(v121 + 24) = -1071775733LL;
          *(_QWORD *)(v121 + 32) = this;
          WdLogEvent5_WdWarning(v121);
          goto LABEL_175;
        }
        v77 = 0LL;
        v78 = (__int64)v56->Next & 0xFFFFFFDF;
        v79 = v142;
        *((_QWORD *)&v56[6].Next + 1) = v55;
        HIDWORD(v56[7].Next) = -1;
        v56[6].Next = (struct _SLIST_ENTRY *)v135;
        LODWORD(v56->Next) = v78 | (32 * (a6 & 1 | 0x2000));
        v138 = 0LL;
        v136 = 0LL;
        if ( !v79 )
          goto LABEL_111;
        v80 = *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL);
        if ( *(int *)(v80 + 1792) < 0x2000 && !*(_BYTE *)(v80 + 2076) )
          goto LABEL_111;
        v81 = ReadPresentPrivateDriverData((struct DXGADAPTER *)v80, v79, &v138);
        v83 = v81;
        v128 = v81;
        if ( v81 < 0 )
        {
          v84 = WdLogNewEntry5_WdError(v82);
          *(_QWORD *)(v84 + 24) = v83;
          WdLogEvent5_WdError(v84);
          goto LABEL_162;
        }
        v85 = v138;
        if ( v138 )
        {
          HIDWORD(v56->Next) |= 1u;
          v77 = (volatile signed __int32 *)v85;
          v136 = v85;
          *((_QWORD *)&v56[1].Next + 1) = v85;
        }
LABEL_111:
        LODWORD(v83) = DXGCONTEXT::PrepareIndependentFlipToken(
                         this,
                         (struct _EX_RUNDOWN_REF *)v55,
                         (struct DXGK_PRESENT_PARAMS *)v79,
                         (struct VIDSCH_SUBMIT_DATA_BASE *)v56);
        v128 = v83;
        if ( (int)v83 < 0 )
          goto LABEL_163;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_139;
        Next = (int)v55->Next;
        Next_high = HIDWORD(v55->Next);
        v137 = 0LL;
        v134 = 0LL;
        LOBYTE(v129) = 0;
        Srca = 0;
        v144 = 0LL;
        v143 = 0LL;
        switch ( Next )
        {
          case 1:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
            v89 = (__int64)v55[1].Next;
            break;
          case 2:
            v89 = *((_QWORD *)&v55[1].Next + 1);
            break;
          default:
            v89 = 0LL;
            break;
        }
        switch ( Next )
        {
          case 1:
            v90 = (unsigned int *)(&v55[3].Next + 1);
            break;
          case 2:
            v90 = (unsigned int *)&v55[51].Next + 1;
            break;
          case 3:
            v90 = (unsigned int *)(&v55[2].Next + 1);
            break;
          default:
            v90 = 0LL;
            break;
        }
        v91 = (unsigned int)(Next - 1);
        if ( Next == 1 )
        {
          v92 = v55[2];
          v93 = v55[3].Next;
        }
        else
        {
          if ( Next != 2 )
          {
LABEL_129:
            if ( Next == 2 )
            {
              v129 = HIDWORD(v55[47].Next);
              v94 = *((_DWORD *)&v55[47].Next + 2);
              v144 = *(__int128 *)((char *)&v55[46] + 4);
              Srca = v94;
              v143 = *(__int128 *)((char *)&v55[47] + 12);
            }
            if ( v90 )
            {
              v95 = 16;
              if ( *v90 < 0x10 )
                v95 = *v90;
              if ( v95 )
              {
                v90 += 3;
                v96 = v95;
                v91 = 0LL;
                do
                {
                  v97 = *(v90 - 2);
                  v90 += 4;
                  *(_DWORD *)((char *)v159 + v91) = v97;
                  v91 += 4LL;
                  *(_DWORD *)&v157[v91 + 60] = *(v90 - 4);
                  *(_DWORD *)&v156[v91 + 60] = *(v90 - 5);
                  *(_DWORD *)&v156[v91 - 4] = *(v90 - 3);
                  --v96;
                }
                while ( v96 );
              }
              Template_ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq(
                (__int64)v90,
                v91,
                v89,
                v139,
                (char)v55,
                Next,
                Next_high,
                v89,
                (char)v137.Next,
                *((char *)&v137.Next + 8),
                SBYTE4(v137.Next),
                *((char *)&v137.Next + 12),
                (char)v134,
                SBYTE4(v134),
                v95,
                (__int64)v159,
                (__int64)v158,
                (__int64)v157,
                (__int64)v156,
                v144,
                SBYTE8(v144),
                SBYTE4(v144),
                SBYTE12(v144),
                v129,
                Srca,
                v143,
                SBYTE8(v143),
                SBYTE4(v143),
                SBYTE12(v143));
            }
            else
            {
              LODWORD(Timeout) = Next_high;
              *(_DWORD *)Alertable = Next;
              Template_ppqqx(0LL, &EventSubmitPresentHistory, v89, v139, v55, *(_QWORD *)Alertable, Timeout, v89);
            }
LABEL_139:
            if ( !v79 )
              goto LABEL_159;
            BroadcastContextCount = v79->BroadcastContextCount;
            LOBYTE(v79[1].hWindow) = (BYTE3(v56->Next) & 1) == 0;
            if ( !BroadcastContextCount
              || !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
            {
              goto LABEL_159;
            }
            v101 = v100 + 1;
            v131 = v100 + 1;
            v102 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v99 + 2896), 1uLL);
            v103 = (DXGDEVICE *)this[2].Count;
            v140 = v102 + 1;
            BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(v103);
            if ( !BroadcastPresentSyncObject )
            {
              v105 = WdLogNewEntry5_WdError(v104);
              *(_QWORD *)(v105 + 24) = -1073741801LL;
              *(_QWORD *)(v105 + 32) = 1917LL;
              WdLogEvent5_WdError(v105);
              LODWORD(v83) = -1073741801;
              v128 = -1073741801;
LABEL_163:
              KeReleaseSemaphore(Semaphore, 0, 1, 0);
              if ( (BYTE3(v56->Next) & 1) != 0 && v131 )
              {
                v114 = v142;
                v115 = 0LL;
                do
                {
                  if ( *((_BYTE *)&v56[21].Next + 12) )
                    v116 = (struct VIDMM_ALLOC **)((char *)&v56[3 * v24 * *((_DWORD *)&v56[26].Next + 3) + 29].Next
                                                 + *((_DWORD *)&v56[26].Next + 3)
                                                 * ((8 * LODWORD(v56[27].Next) + 167) & 0xFFFFFFF8)
                                                 + 8);
                  else
                    v116 = (struct VIDMM_ALLOC **)(&v56[26].Next + 1);
                  VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                    *(VIDMM_EXPORT **)(*(_QWORD *)(this[2].Count + 16) + 400LL),
                    *(struct VIDMM_DEVICE **)(this[2].Count + 560),
                    1 << *(_DWORD *)(*(_QWORD *)(v115 + *(_QWORD *)&v114[1].hDevice) + 328LL),
                    *v116);
                  ++v24;
                  v115 += 8LL;
                }
                while ( v24 < v131 );
                v77 = (volatile signed __int32 *)v136;
                LODWORD(v83) = v128;
              }
LABEL_171:
              if ( v77 && _InterlockedExchangeAdd(v77 + 1, 0xFFFFFFFF) == 1 )
              {
                ExFreePoolWithTag((PVOID)v77, 0);
                CVidSchSubmitData::~CVidSchSubmitData(v145);
                v45 = v83;
                KOBJECTREF::~KOBJECTREF((PVOID *)&v147);
                goto LABEL_178;
              }
LABEL_175:
              CVidSchSubmitData::~CVidSchSubmitData(v145);
              v45 = v83;
              KOBJECTREF::~KOBJECTREF((PVOID *)&v147);
              goto LABEL_178;
            }
            v106 = v79->BroadcastContextCount;
            v107 = 0LL;
            v152 = 0LL;
            v154 = 0;
            if ( (unsigned int)v106 <= 8 )
            {
              PoolWithTag = v153;
              v152 = v153;
            }
            else
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / v106 < 8 )
              {
LABEL_150:
                if ( !v107 )
                  goto LABEL_151;
                if ( v101 > 1 )
                {
                  v109 = 8LL;
                  v110 = v101 - 1;
                  v111 = v107;
                  do
                  {
                    ++v111;
                    v109 += 8LL;
                    *(v111 - 1) = *(_QWORD *)(*(_QWORD *)(v109 + *(_QWORD *)&v79[1].hDevice - 8) + 216LL);
                    --v110;
                  }
                  while ( v110 );
                }
                v112 = this[2].Count;
                v146 = 0;
                LODWORD(v83) = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, signed __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v112 + 16) + 376LL) + 8LL) + 544LL))(
                                 v79->BroadcastContextCount,
                                 v107,
                                 1LL,
                                 &BroadcastPresentSyncObject,
                                 0,
                                 &v140);
                v128 = v83;
                if ( (int)v83 < 0
                  || (LODWORD(v83) = (*(__int64 (__fastcall **)(ULONG_PTR, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 376LL) + 8LL) + 536LL))(
                                       this[27].Count,
                                       BroadcastPresentSyncObject,
                                       v140),
                      v128 = v83,
                      (int)v83 < 0) )
                {
                  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v152);
                  goto LABEL_162;
                }
                PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v152);
LABEL_159:
                if ( (struct _KTHREAD *)this[46].Count != KeGetCurrentThread() )
                {
                  v113 = WdLogNewEntry5_WdAssertion(v86);
                  *(_QWORD *)(v113 + 24) = 1962LL;
                  WdLogEvent5_WdAssertion(v113);
                }
                LODWORD(v83) = (*(__int64 (__fastcall **)(ULONG_PTR, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 376LL)
                                                                                              + 8LL)
                                                                                  + 344LL))(
                                 this[27].Count,
                                 v56);
                v128 = v83;
LABEL_162:
                if ( (int)v83 >= 0 )
                  goto LABEL_171;
                goto LABEL_163;
              }
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v106, 0x4B677844u);
              v152 = PoolWithTag;
            }
            v154 = v106;
            if ( !PoolWithTag )
            {
LABEL_151:
              LODWORD(v83) = -1073741801;
              v128 = -1073741801;
              PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v152);
              goto LABEL_163;
            }
            memset(PoolWithTag, 0, 8 * v106);
            v107 = v152;
            goto LABEL_150;
          }
          v92 = *(struct _SLIST_ENTRY *)((char *)&v55[6] + 4);
          v93 = *(struct _SLIST_ENTRY **)((char *)&v55[7].Next + 4);
        }
        v134 = v93;
        v137 = v92;
        goto LABEL_129;
      case D3DKMT_PM_REDIRECTED_VISTABLT:
      case D3DKMT_PM_SCREENCAPTUREFENCE:
      case D3DKMT_PM_REDIRECTED_COMPOSITION:
        v73 = 24;
        goto LABEL_102;
      default:
        v76 = WdLogNewEntry5_WdAssertion(v53);
        *(_QWORD *)(v76 + 24) = 89LL;
        WdLogEvent5_WdAssertion(v76);
        v67 = a2;
        v73 = 0;
        goto LABEL_102;
    }
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_q(v38, &EventPerformanceWarning, v39, 19);
  v41 = WdLogNewEntry5_WdEvent(v38);
  *(_QWORD *)(v41 + 24) = 258LL;
  WdLogEvent5_WdEvent(v41);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a4);
  v42 = COREDEVICEACCESS::AcquireShared(a3);
  v44 = v42;
  if ( v42 >= 0 )
  {
    v45 = 258;
    KOBJECTREF::~KOBJECTREF((PVOID *)&v147);
    goto LABEL_178;
  }
  v40 = WdLogNewEntry5_WdEvent(v43);
  *(_QWORD *)(v40 + 24) = v44;
  *(_QWORD *)(v40 + 32) = this;
LABEL_45:
  WdLogEvent5_WdEvent(v40);
  v45 = -1073741130;
  KOBJECTREF::~KOBJECTREF((PVOID *)&v147);
LABEL_178:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v149);
  return v45;
}
