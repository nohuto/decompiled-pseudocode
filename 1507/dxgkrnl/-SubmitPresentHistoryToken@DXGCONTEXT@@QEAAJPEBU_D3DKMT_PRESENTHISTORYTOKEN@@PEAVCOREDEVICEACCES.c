/*
 * XREFs of ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0073E60
 * Callers:
 *     DxgkPresent @ 0x1C0069D10 (DxgkPresent.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C006B16C (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEA.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0074DF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00A63C0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00D0E8C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000E5C0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0017194 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??1KOBJECTREF@@QEAA@XZ @ 0x1C0017608 (--1KOBJECTREF@@QEAA@XZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C001F118 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     Template_ppqqx @ 0x1C001F188 (Template_ppqqx.c)
 *     Template_ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq @ 0x1C001F22C (Template_ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C006991C (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@.c)
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0071C20 (-PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00788C0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C00DABD8 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C011EE74 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C0136024 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentHistoryToken(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        struct COREDEVICEACCESS *a3,
        struct CWin32kLocks *a4,
        char a5,
        union _LARGE_INTEGER *a6,
        struct _D3DKMT_PRESENT *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8)
{
  __int64 v11; // rax
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
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  union _SLIST_HEADER *v26; // r15
  unsigned int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  char *v32; // rsi
  _QWORD *v33; // rax
  struct _KTHREAD **v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  NTSTATUS v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rbx
  __int64 v51; // r15
  _QWORD *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  PSLIST_ENTRY v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r9
  PSLIST_ENTRY v62; // r14
  PSLIST_ENTRY v63; // rsi
  __int64 v64; // rax
  __int64 v65; // r15
  __int64 v66; // rax
  int v67; // ecx
  unsigned int v68; // eax
  __int64 v69; // rax
  int v70; // edx
  int v71; // r8d
  __int64 v72; // rcx
  __int64 v73; // rax
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v74; // rdx
  unsigned __int64 v75; // r8
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // eax
  __int64 v77; // rax
  unsigned int v78; // ebx
  __int64 v79; // rax
  int v80; // eax
  UINT NumRects; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  CRefCountedBuffer *v89; // rbx
  unsigned int v90; // eax
  int v91; // edx
  __int64 v92; // rax
  int PresentPrivateDriverData; // eax
  __int64 v94; // rcx
  __int64 v95; // rax
  struct CRefCountedBuffer *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 BroadcastContextCount; // r8
  __int64 v100; // r9
  int Next; // r10d
  int Next_high; // r9d
  char v103; // r15
  __int64 v104; // r8
  unsigned int *v105; // rcx
  __int64 v106; // rdx
  struct _SLIST_ENTRY v107; // xmm0
  struct _SLIST_ENTRY *v108; // rax
  int v109; // eax
  unsigned int v110; // r11d
  __int64 v111; // r9
  int v112; // eax
  unsigned int v113; // r15d
  signed __int64 v114; // rax
  DXGDEVICE *v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // rax
  unsigned __int64 v118; // r14
  _BYTE *v119; // r10
  _BYTE *PoolWithTag; // r10
  __int64 v121; // rdx
  __int64 v122; // r9
  _BYTE *v123; // r8
  __int64 v124; // rax
  struct _D3DKMT_PRESENT *v125; // rbx
  __int64 v126; // r12
  struct VIDMM_ALLOC **v127; // r9
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rax
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-148h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-140h]
  int Srca; // [rsp+F0h] [rbp-80h]
  char Srcb; // [rsp+F0h] [rbp-80h]
  unsigned int v142; // [rsp+100h] [rbp-70h]
  char v143; // [rsp+104h] [rbp-6Ch]
  PRKSEMAPHORE Semaphore; // [rsp+108h] [rbp-68h]
  char v145; // [rsp+110h] [rbp-60h]
  union _SLIST_HEADER *v146; // [rsp+118h] [rbp-58h]
  CRefCountedBuffer *v147; // [rsp+118h] [rbp-58h]
  int v148; // [rsp+120h] [rbp-50h]
  struct _SLIST_ENTRY v149; // [rsp+128h] [rbp-48h]
  struct CRefCountedBuffer *v150; // [rsp+138h] [rbp-38h] BYREF
  __int64 v151; // [rsp+140h] [rbp-30h]
  signed __int64 v152; // [rsp+148h] [rbp-28h] BYREF
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+150h] [rbp-20h] BYREF
  __int128 v154; // [rsp+158h] [rbp-18h]
  __int128 v155; // [rsp+168h] [rbp-8h]
  struct _SLIST_ENTRY *v156[2]; // [rsp+178h] [rbp+8h] BYREF
  struct _D3DKMT_PRESENT *v157; // [rsp+188h] [rbp+18h]
  PRKSEMAPHORE v158; // [rsp+190h] [rbp+20h] BYREF
  PVOID Object[2]; // [rsp+198h] [rbp+28h] BYREF
  char v160[8]; // [rsp+1A8h] [rbp+38h] BYREF
  __int64 v161; // [rsp+1B0h] [rbp+40h]
  int v162; // [rsp+1B8h] [rbp+48h]
  _BYTE *v163; // [rsp+1C0h] [rbp+50h] BYREF
  _BYTE v164[64]; // [rsp+1C8h] [rbp+58h] BYREF
  int v165; // [rsp+208h] [rbp+98h]
  char v167[64]; // [rsp+210h] [rbp+A0h] BYREF
  _DWORD v168[16]; // [rsp+250h] [rbp+E0h] BYREF
  _BYTE v169[64]; // [rsp+290h] [rbp+120h] BYREF
  char v170[64]; // [rsp+2D0h] [rbp+160h] BYREF

  v11 = *((_QWORD *)this + 2);
  v157 = a7;
  v12 = *(_QWORD *)(v11 + 16);
  v151 = v12;
  v13 = *(_QWORD *)(v12 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 128)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 1737LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = v12 + 592;
  v161 = v12 + 592;
  if ( v12 != -592 && *(struct _KTHREAD **)(v12 + 600) == KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 592, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v19 = *(_DWORD *)(v12 + 608);
      if ( v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v17, &EventBlockThread, v18, v19);
    }
    ExAcquirePushLockSharedEx(v12 + 592, 0LL);
  }
  v162 = 1;
  CurrentProcess = PsGetCurrentProcess(v17);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  if ( ProcessSessionId >= *(_DWORD *)(v12 + 616)
    || (v23 = 8LL * ProcessSessionId, !*(_QWORD *)(v23 + *(_QWORD *)(v12 + 624)))
    || (_mm_lfence(), v26 = *(union _SLIST_HEADER **)(v23 + *(_QWORD *)(v12 + 624)), (v146 = v26) == 0LL) )
  {
    v135 = WdLogNewEntry5_WdEvent(v23, v22, v24, v25);
    *(_QWORD *)(v135 + 24) = this;
    WdLogEvent5_WdEvent(v135);
    LODWORD(v51) = -1073741811;
    goto LABEL_173;
  }
  Semaphore = (PRKSEMAPHORE)v26[4].Alignment;
  v158 = Semaphore;
  ObfReferenceObject(Semaphore);
  v27 = 0;
  v162 = 0;
  ExReleasePushLockSharedEx(v15, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_BYTE *)a3 + 64) )
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 32));
  v32 = (char *)a3 + 8;
  if ( !*((_BYTE *)a3 + 24) )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v28, v30);
    v33[3] = 275LL;
    v33[4] = 4LL;
    v33[5] = v32;
    v33[6] = 0LL;
    v33[7] = 0LL;
    WdLogEvent5_WdCriticalError(v33);
  }
  v34 = (struct _KTHREAD **)*((_QWORD *)a3 + 2);
  *((_BYTE *)a3 + 24) = 0;
  if ( KeGetCurrentThread() != v34[18] )
    DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v34);
  if ( a4 )
  {
    v35 = *((_QWORD *)a4 + 7);
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v35 + 144)
      || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v35 + 128)) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v35, v28, v30, v31);
      *(_QWORD *)(v36 + 24) = 753LL;
      WdLogEvent5_WdAssertion(v36);
    }
    if ( *((_QWORD *)a4 + 2) )
    {
      (*(void (**)(void))(*((_QWORD *)a4 + 3) + 24LL))();
      *((_QWORD *)a4 + 2) = 0LL;
    }
    if ( *(_QWORD *)a4 )
    {
      v37 = *((_QWORD *)a4 + 5);
      if ( v37 )
      {
        if ( *((_DWORD *)a4 + 13) )
          (*(void (__fastcall **)(__int64, bool))(*((_QWORD *)a4 + 4) + 288LL))(v37, *((_DWORD *)a4 + 12) == 0);
        (*(void (**)(void))(*((_QWORD *)a4 + 4) + 272LL))();
        *((_QWORD *)a4 + 5) = 0LL;
        *((_QWORD *)a4 + 6) = 0LL;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 296LL))(*(_QWORD *)a4, 0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 64LL))(*(_QWORD *)a4, *((_QWORD *)a4 + 1));
      *(_QWORD *)a4 = 0LL;
    }
  }
  Object[0] = (PVOID)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1952LL);
  Object[1] = Semaphore;
  v38 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, a6, 0LL);
  if ( !v38 )
  {
    v43 = WdLogNewEntry5_WdEvent(v40, v39, v41, v42);
    *(_QWORD *)(v43 + 24) = this;
    goto LABEL_42;
  }
  if ( v38 != 258 )
  {
    if ( *((_BYTE *)a3 + 24) )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v39, v41);
      v52[3] = 275LL;
      v52[4] = 4LL;
      v52[5] = v32;
      v52[6] = 0LL;
      v52[7] = 0LL;
      WdLogEvent5_WdCriticalError(v52);
    }
    v53 = *((_QWORD *)a3 + 2);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v53 + 144) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v53 + 32)) )
        KeWaitForSingleObject((PVOID)(*((_QWORD *)a3 + 2) + 32LL), Executive, 0, 0, 0LL);
      DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a3 + 2));
    }
    *((_BYTE *)a3 + 24) = 1;
    if ( *(_DWORD *)(*((_QWORD *)a3 + 7) + 352LL) != 1 )
      goto LABEL_54;
    if ( *((_BYTE *)a3 + 64) )
    {
      COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a3 + 32));
      if ( *(_DWORD *)(*((_QWORD *)a3 + 5) + 160LL) != 1 )
      {
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 32));
LABEL_54:
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 8));
        KeReleaseSemaphore(Semaphore, 0, 1, 0);
        v58 = WdLogNewEntry5_WdEvent(v55, v54, v56, v57);
        LODWORD(v51) = -1073741130;
        *(_QWORD *)(v58 + 24) = -1073741130LL;
        *(_QWORD *)(v58 + 32) = this;
        WdLogEvent5_WdEvent(v58);
        KOBJECTREF::~KOBJECTREF((PVOID *)&v158);
        goto LABEL_173;
      }
    }
    v59 = ExpInterlockedPopEntrySList(v26 + 3);
    if ( !v59
      && (!DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer((DXGPRESENTHISTORYTOKENQUEUE *)v26)
       || (v59 = ExpInterlockedPopEntrySList(v26 + 3)) == 0LL)
      || (v62 = v59 + 1, v59 == (PSLIST_ENTRY)-16LL) )
    {
      LODWORD(v51) = -1073741801;
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v134 = WdLogNewEntry5_WdLowResource(v133);
      *(_QWORD *)(v134 + 24) = -1073741801LL;
      *(_QWORD *)(v134 + 32) = this;
      WdLogEvent5_WdLowResource(v134);
      KOBJECTREF::~KOBJECTREF((PVOID *)&v158);
      goto LABEL_173;
    }
    v63 = 0LL;
    v64 = *((_QWORD *)this + 2);
    LOBYTE(v60) = a8 == 0LL;
    v156[0] = 0LL;
    v65 = *(_QWORD *)(v64 + 16);
    v156[1] = (struct _SLIST_ENTRY *)v65;
    if ( !a8 )
    {
      ++*(_DWORD *)(v65 + 964);
      v63 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v65 + 944));
      if ( !v63 )
      {
        ++*(_DWORD *)(v65 + 968);
        v63 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v65 + 992))(
                              *(unsigned int *)(v65 + 980),
                              *(unsigned int *)(v65 + 988),
                              *(unsigned int *)(v65 + 984),
                              v65 + 944);
      }
      v156[0] = v63;
      if ( v63 )
      {
        v66 = *(_QWORD *)(v65 + 16);
        v67 = *(int *)(v66 + 1648) < 0x2000 ? 1 : *(_DWORD *)(v66 + 232);
        v68 = *(int *)(v66 + 1648) >= 0x2000 || *(_BYTE *)(v66 + 1932)
            ? v67 * (56 * *(_DWORD *)(v66 + 1856) + 8) + 376
            : 808;
        memset(v63, 0, v68);
        v69 = *(_QWORD *)(v65 + 16);
        v60 = *(unsigned int *)(v69 + 1648);
        v70 = (int)v60 < 0x2000 ? 1 : *(_DWORD *)(v69 + 232);
        LOBYTE(v60) = (int)v60 >= 0x2000 || *(_BYTE *)(v69 + 1932);
        v71 = *(_DWORD *)(v69 + 1856);
        *((_BYTE *)&v63[21].Next + 12) = v60;
        if ( (_BYTE)v60 )
        {
          *((_DWORD *)&v63[22].Next + 3) = v71;
          LODWORD(v63[23].Next) = v70;
          v60 = (unsigned int)(56 * v71 * v70 + 16);
          HIDWORD(v63[23].Next) = v60;
          LODWORD(v63[22].Next) = 56 * v71 * v70 + 376;
          HIDWORD(v63[22].Next) = 56 * v71 * v70 + 376 + 8 * v70;
        }
      }
    }
    if ( a8 )
    {
      v63 = (PSLIST_ENTRY)a8;
    }
    else if ( !v63 )
    {
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v73 = WdLogNewEntry5_WdLowResource(v72);
      *(_QWORD *)(v73 + 24) = 1819LL;
      WdLogEvent5_WdLowResource(v73);
      CVidSchSubmitData::~CVidSchSubmitData(v156);
      LODWORD(v51) = -1073741801;
      KOBJECTREF::~KOBJECTREF((PVOID *)&v158);
      goto LABEL_173;
    }
    v74 = a2;
    v75 = 0x1C0000000uLL;
    v142 = 1;
    switch ( a2->Model )
    {
      case D3DKMT_PM_REDIRECTED_GDI:
        FlipInterval = a2->Token.Flip.FlipInterval;
        if ( (unsigned int)FlipInterval > 0x10 )
        {
          v77 = WdLogNewEntry5_WdAssertion(v60, a2, 0x1C0000000uLL, v61);
          *(_QWORD *)(v77 + 24) = 62LL;
          goto LABEL_86;
        }
        v80 = 16 * FlipInterval + 60;
        goto LABEL_97;
      case D3DKMT_PM_REDIRECTED_FLIP:
        NumRects = a2->Token.Flip.DirtyRegions.NumRects;
        if ( NumRects > 0x10 )
        {
          v77 = WdLogNewEntry5_WdAssertion(v60, a2, 0x1C0000000uLL, v61);
          *(_QWORD *)(v77 + 24) = 72LL;
          goto LABEL_86;
        }
        v80 = 16 * NumRects + 824;
        goto LABEL_97;
      case D3DKMT_PM_REDIRECTED_BLT:
        VidPnSourceId = a2->Token.Flip.VidPnSourceId;
        if ( VidPnSourceId > 0x10 )
        {
          v77 = WdLogNewEntry5_WdAssertion(v60, a2, 0x1C0000000uLL, v61);
          *(_QWORD *)(v77 + 24) = 82LL;
LABEL_86:
          WdLogEvent5_WdAssertion(v77);
          v78 = 0;
LABEL_87:
          v79 = WdLogNewEntry5_WdWarning(v60, v74, v75, v61);
          *(_QWORD *)(v79 + 24) = v78;
          WdLogEvent5_WdWarning(v79);
          CVidSchSubmitData::~CVidSchSubmitData(v156);
          LODWORD(v51) = -1073741811;
          KOBJECTREF::~KOBJECTREF((PVOID *)&v158);
          goto LABEL_173;
        }
        v80 = 16 * VidPnSourceId + 44;
LABEL_97:
        v78 = (v80 + 7) & 0xFFFFFFF8;
        if ( v78 - 1 > 0x437 )
          goto LABEL_87;
        memmove(v62, v74, v78);
        if ( !(*(unsigned int (__fastcall **)(PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 80LL)
                                                           + 256LL))(v62) )
        {
          LODWORD(v51) = -1071775733;
          ExpInterlockedPushEntrySList(v146 + 3, v62 - 1);
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          v132 = WdLogNewEntry5_WdWarning(v129, v128, v130, v131);
          *(_QWORD *)(v132 + 24) = -1071775733LL;
          *(_QWORD *)(v132 + 32) = this;
          WdLogEvent5_WdWarning(v132);
          goto LABEL_170;
        }
        v89 = 0LL;
        v90 = (__int64)v63->Next & 0xFFFFFFBF;
        *((_QWORD *)&v63[6].Next + 1) = v62;
        HIDWORD(v63[7].Next) = -1;
        v91 = v90 | ((a5 & 1 | 0x2000) << 6);
        v150 = 0LL;
        v63[6].Next = (struct _SLIST_ENTRY *)v146;
        LODWORD(v63->Next) = v91;
        v147 = 0LL;
        if ( !a7 )
          goto LABEL_106;
        v92 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
        if ( *(int *)(v92 + 1648) < 0x2000 && !*(_BYTE *)(v92 + 1932) )
          goto LABEL_106;
        LOBYTE(a7[1].hWindow) = (v91 & 0x2000000) == 0;
        PresentPrivateDriverData = ReadPresentPrivateDriverData(
                                     *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                                     a7,
                                     (UINT **)&v150);
        v51 = PresentPrivateDriverData;
        Srca = PresentPrivateDriverData;
        if ( PresentPrivateDriverData < 0 )
        {
          v95 = WdLogNewEntry5_WdError(v94);
          *(_QWORD *)(v95 + 24) = v51;
          WdLogEvent5_WdError(v95);
          goto LABEL_158;
        }
        v96 = v150;
        if ( v150 )
        {
          LODWORD(v63->Next) |= 0x40000000u;
          v89 = v96;
          v147 = v96;
          *((_QWORD *)&v63[1].Next + 1) = v96;
        }
LABEL_106:
        LODWORD(v51) = DXGCONTEXT::PrepareIndependentFlipToken(
                         (void **)this,
                         (struct _D3DKMT_PRESENTHISTORYTOKEN *)v62,
                         (struct DXGK_PRESENT_PARAMS *)a7,
                         (struct VIDSCH_SUBMIT_DATA_BASE *)v63);
        Srca = v51;
        if ( (int)v51 < 0 )
          goto LABEL_159;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
          goto LABEL_135;
        Next = (int)v62->Next;
        Next_high = HIDWORD(v62->Next);
        v103 = 0;
        v149 = 0LL;
        v143 = 0;
        LOBYTE(v148) = 0;
        v145 = 0;
        Srcb = Next_high;
        v154 = 0LL;
        v155 = 0LL;
        switch ( Next )
        {
          case 1:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
            v104 = (__int64)v62[1].Next;
            break;
          case 2:
            v104 = *((_QWORD *)&v62[1].Next + 1);
            break;
          default:
            v104 = 0LL;
            break;
        }
        switch ( Next )
        {
          case 1:
            v105 = (unsigned int *)(&v62[3].Next + 1);
            break;
          case 2:
            v105 = (unsigned int *)&v62[51].Next + 1;
            break;
          case 3:
            v105 = (unsigned int *)(&v62[2].Next + 1);
            break;
          default:
            v105 = 0LL;
            break;
        }
        v106 = (unsigned int)(Next - 1);
        if ( Next == 1 )
        {
          v107 = v62[2];
          v108 = v62[3].Next;
        }
        else
        {
          if ( Next != 2 )
          {
LABEL_124:
            if ( Next == 2 )
            {
              v148 = HIDWORD(v62[47].Next);
              v109 = *((_DWORD *)&v62[47].Next + 2);
              v154 = *(__int128 *)((char *)&v62[46] + 4);
              v145 = v109;
              v155 = *(__int128 *)((char *)&v62[47] + 12);
            }
            if ( v105 )
            {
              v110 = 16;
              if ( *v105 < 0x10 )
                v110 = *v105;
              if ( v110 )
              {
                v105 += 3;
                v111 = v110;
                v106 = 0LL;
                do
                {
                  v112 = *(v105 - 2);
                  v105 += 4;
                  *(_DWORD *)((char *)v168 + v106) = v112;
                  v106 += 4LL;
                  *(_DWORD *)((char *)&v168[15] + v106) = *(v105 - 4);
                  *(_DWORD *)&v169[v106 + 60] = *(v105 - 5);
                  *(_DWORD *)&v167[v106 - 4] = *(v105 - 3);
                  --v111;
                }
                while ( v111 );
                LOBYTE(Next_high) = Srcb;
              }
              Template_ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq(
                (__int64)v105,
                v106,
                v104,
                v151,
                (char)v62,
                Next,
                Next_high,
                v104,
                (char)v149.Next,
                *((char *)&v149.Next + 8),
                SBYTE4(v149.Next),
                *((char *)&v149.Next + 12),
                v103,
                v143,
                v110,
                (__int64)v168,
                (__int64)v169,
                (__int64)v170,
                (__int64)v167,
                v154,
                SBYTE8(v154),
                SBYTE4(v154),
                SBYTE12(v154),
                v148,
                v145,
                v155,
                SBYTE8(v155),
                SBYTE4(v155),
                SBYTE12(v155));
            }
            else
            {
              LODWORD(Timeout) = Next_high;
              *(_DWORD *)Alertable = Next;
              Template_ppqqx(0LL, &EventSubmitPresentHistory, v104, v151, v62, *(_QWORD *)Alertable, Timeout, v104);
            }
LABEL_135:
            if ( !a7 )
              goto LABEL_155;
            BroadcastContextCount = a7->BroadcastContextCount;
            if ( !(_DWORD)BroadcastContextCount
              || !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
            {
              goto LABEL_155;
            }
            v113 = BroadcastContextCount + 1;
            v142 = BroadcastContextCount + 1;
            v114 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v97 + 18744), 1uLL);
            v115 = (DXGDEVICE *)*((_QWORD *)this + 2);
            v152 = v114 + 1;
            BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(v115);
            if ( !BroadcastPresentSyncObject )
            {
              v117 = WdLogNewEntry5_WdError(v116);
              *(_QWORD *)(v117 + 24) = -1073741801LL;
              *(_QWORD *)(v117 + 32) = 1906LL;
              WdLogEvent5_WdError(v117);
              LODWORD(v51) = -1073741801;
              Srca = -1073741801;
LABEL_159:
              KeReleaseSemaphore(Semaphore, 0, 1, 0);
              if ( ((__int64)v63->Next & 0x2000000) != 0 && v142 )
              {
                v125 = v157;
                v126 = 0LL;
                do
                {
                  if ( *((_BYTE *)&v63[21].Next + 12) )
                    v127 = (struct VIDMM_ALLOC **)(&v63[23].Next + 7 * v27 * *((_DWORD *)&v63[22].Next + 3) + 1);
                  else
                    v127 = (struct VIDMM_ALLOC **)(&v63[22].Next + 1);
                  VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                    *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
                    *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 536LL),
                    1 << *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v125[1].hDevice + v126) + 328LL),
                    *v127);
                  ++v27;
                  v126 += 8LL;
                }
                while ( v27 < v142 );
                v89 = v147;
                LODWORD(v51) = Srca;
              }
LABEL_167:
              if ( v89 )
              {
                CRefCountedBuffer::RefCountedBufferRelease(v89);
                CVidSchSubmitData::~CVidSchSubmitData(v156);
                KOBJECTREF::~KOBJECTREF((PVOID *)&v158);
                goto LABEL_173;
              }
LABEL_170:
              CVidSchSubmitData::~CVidSchSubmitData(v156);
              KOBJECTREF::~KOBJECTREF((PVOID *)&v158);
              goto LABEL_173;
            }
            v118 = a7->BroadcastContextCount;
            v119 = 0LL;
            v163 = 0LL;
            v165 = 0;
            if ( (unsigned int)v118 <= 8 )
            {
              PoolWithTag = v164;
              v163 = v164;
            }
            else
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / v118 < 8 )
              {
LABEL_146:
                if ( !v119 )
                  goto LABEL_147;
                if ( v113 > 1 )
                {
                  v121 = 8LL;
                  v122 = v113 - 1;
                  v123 = v119;
                  do
                  {
                    v123 += 8;
                    v121 += 8LL;
                    *((_QWORD *)v123 - 1) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&a7[1].hDevice + v121 - 8) + 216LL);
                    --v122;
                  }
                  while ( v122 );
                }
                LODWORD(v51) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, signed __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL) + 8LL) + 544LL))(
                                 a7->BroadcastContextCount,
                                 v119,
                                 1LL,
                                 &BroadcastPresentSyncObject,
                                 0,
                                 &v152);
                Srca = v51;
                if ( (int)v51 < 0
                  || (LODWORD(v51) = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL) + 8LL) + 536LL))(
                                       *((_QWORD *)this + 27),
                                       BroadcastPresentSyncObject,
                                       v152),
                      Srca = v51,
                      (int)v51 < 0) )
                {
                  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v163);
                  goto LABEL_158;
                }
                PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v163);
LABEL_155:
                if ( *((struct _KTHREAD **)this + 46) != KeGetCurrentThread() )
                {
                  v124 = WdLogNewEntry5_WdAssertion(v98, v97, BroadcastContextCount, v100);
                  *(_QWORD *)(v124 + 24) = 1951LL;
                  WdLogEvent5_WdAssertion(v124);
                }
                LODWORD(v51) = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                                                           + 8LL)
                                                                               + 344LL))(
                                 *((_QWORD *)this + 27),
                                 v63);
                Srca = v51;
LABEL_158:
                if ( (int)v51 >= 0 )
                  goto LABEL_167;
                goto LABEL_159;
              }
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v118, 0x4B677844u);
              v163 = PoolWithTag;
            }
            v165 = v118;
            if ( !PoolWithTag )
            {
LABEL_147:
              LODWORD(v51) = -1073741801;
              Srca = -1073741801;
              PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v163);
              goto LABEL_159;
            }
            memset(PoolWithTag, 0, 8 * v118);
            v119 = v163;
            goto LABEL_146;
          }
          v107 = *(struct _SLIST_ENTRY *)((char *)&v62[6] + 4);
          v108 = *(struct _SLIST_ENTRY **)((char *)&v62[7].Next + 4);
        }
        v103 = (char)v108;
        v143 = BYTE4(v108);
        v149 = v107;
        goto LABEL_124;
      case D3DKMT_PM_REDIRECTED_VISTABLT:
      case D3DKMT_PM_SCREENCAPTUREFENCE:
      case D3DKMT_PM_REDIRECTED_COMPOSITION:
        v80 = 24;
        goto LABEL_97;
      default:
        v83 = WdLogNewEntry5_WdError(v60);
        *(_QWORD *)(v83 + 24) = 99LL;
        WdLogEvent5_WdError(v83);
        v88 = WdLogNewEntry5_WdAssertion(v85, v84, v86, v87);
        *(_QWORD *)(v88 + 24) = 100LL;
        WdLogEvent5_WdAssertion(v88);
        v74 = a2;
        v80 = 0;
        goto LABEL_97;
    }
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_q(v40, &EventPerformanceWarning, v41, 19);
  v44 = WdLogNewEntry5_WdEvent(v40, v39, v41, v42);
  *(_QWORD *)(v44 + 24) = 258LL;
  WdLogEvent5_WdEvent(v44);
  v45 = COREDEVICEACCESS::AcquireShared(a3);
  v50 = v45;
  if ( v45 >= 0 )
  {
    LODWORD(v51) = 258;
    KOBJECTREF::~KOBJECTREF((PVOID *)&v158);
    goto LABEL_173;
  }
  v43 = WdLogNewEntry5_WdEvent(v47, v46, v48, v49);
  *(_QWORD *)(v43 + 24) = v50;
  *(_QWORD *)(v43 + 32) = this;
LABEL_42:
  WdLogEvent5_WdEvent(v43);
  LODWORD(v51) = -1073741130;
  KOBJECTREF::~KOBJECTREF((PVOID *)&v158);
LABEL_173:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v160);
  return (unsigned int)v51;
}
