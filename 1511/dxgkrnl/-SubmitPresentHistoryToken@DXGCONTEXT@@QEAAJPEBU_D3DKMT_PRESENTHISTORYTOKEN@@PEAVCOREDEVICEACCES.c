/*
 * XREFs of ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0085F40
 * Callers:
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C007D300 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEA.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C008593C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0086EC0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0089140 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     DxgkPresent @ 0x1C00B2160 (DxgkPresent.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0003424 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00035B8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??1KOBJECTREF@@QEAA@XZ @ 0x1C0019144 (--1KOBJECTREF@@QEAA@XZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C001F004 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     Template_ppqqx @ 0x1C001F074 (Template_ppqqx.c)
 *     Template_ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq @ 0x1C001F118 (Template_ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0079E40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00847C4 (-PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C00898CC (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@.c)
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C0096714 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C009D388 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C00C90E4 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C013A754 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentHistoryToken(
        struct _EX_RUNDOWN_REF *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        struct COREDEVICEACCESS *a3,
        struct CWin32kLocks *a4,
        char a5,
        union _LARGE_INTEGER *a6,
        struct _D3DKMT_PRESENT *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8)
{
  ULONG_PTR Count; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
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
  char *v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  NTSTATUS v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rbx
  unsigned int v50; // ebx
  _QWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  PSLIST_ENTRY v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r9
  PSLIST_ENTRY v61; // r14
  PSLIST_ENTRY v62; // rsi
  ULONG_PTR v63; // rax
  __int64 v64; // r15
  __int64 v65; // rax
  int v66; // ecx
  unsigned int v67; // eax
  __int64 v68; // rax
  int v69; // edx
  int v70; // r8d
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v77; // rdx
  unsigned __int64 v78; // r8
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // eax
  __int64 v80; // rax
  unsigned int v81; // ebx
  __int64 v82; // rax
  int v83; // eax
  UINT NumRects; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  volatile signed __int32 *v89; // rbx
  unsigned int v90; // eax
  int v91; // edx
  __int64 v92; // rax
  int v93; // eax
  __int64 v94; // rcx
  __int64 v95; // r15
  __int64 v96; // rax
  __int64 v97; // rcx
  int Next; // r10d
  int Next_high; // r9d
  char v100; // r15
  __int64 v101; // r8
  unsigned int *v102; // rcx
  __int64 v103; // rdx
  struct _SLIST_ENTRY v104; // xmm0
  struct _SLIST_ENTRY *v105; // rax
  unsigned int v106; // r11d
  __int64 v107; // r9
  int v108; // eax
  __int64 v109; // rdx
  int v110; // r8d
  unsigned int v111; // r15d
  signed __int64 v112; // rax
  DXGDEVICE *v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rax
  unsigned __int64 BroadcastContextCount; // r14
  _BYTE *v117; // r10
  _BYTE *PoolWithTag; // r10
  __int64 v119; // rdx
  __int64 v120; // r9
  _BYTE *v121; // r8
  ULONG_PTR v122; // rax
  __int64 v123; // rax
  struct _D3DKMT_PRESENT *v124; // rbx
  __int64 v125; // r12
  struct VIDMM_ALLOC **v126; // r9
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rax
  __int64 v137; // rax
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-148h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-140h]
  int Srca; // [rsp+F0h] [rbp-80h]
  char Srcb; // [rsp+F0h] [rbp-80h]
  char v144; // [rsp+100h] [rbp-70h]
  unsigned int v145; // [rsp+104h] [rbp-6Ch]
  PRKSEMAPHORE Semaphore; // [rsp+108h] [rbp-68h]
  union _SLIST_HEADER *v147; // [rsp+110h] [rbp-60h]
  struct CRefCountedBuffer *v148; // [rsp+110h] [rbp-60h]
  int v149; // [rsp+118h] [rbp-58h]
  int v150; // [rsp+120h] [rbp-50h]
  struct _SLIST_ENTRY v151; // [rsp+128h] [rbp-48h]
  __int128 v152; // [rsp+138h] [rbp-38h]
  __int64 v153; // [rsp+148h] [rbp-28h]
  struct CRefCountedBuffer *v154; // [rsp+150h] [rbp-20h] BYREF
  __int128 v155; // [rsp+158h] [rbp-18h]
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+168h] [rbp-8h] BYREF
  signed __int64 v157; // [rsp+170h] [rbp+0h] BYREF
  struct _SLIST_ENTRY *v158[2]; // [rsp+178h] [rbp+8h] BYREF
  PRKSEMAPHORE v159; // [rsp+188h] [rbp+18h] BYREF
  int v160; // [rsp+190h] [rbp+20h]
  struct _D3DKMT_PRESENT *v161; // [rsp+198h] [rbp+28h]
  PVOID Object[2]; // [rsp+1A0h] [rbp+30h] BYREF
  char v163[8]; // [rsp+1B0h] [rbp+40h] BYREF
  __int64 v164; // [rsp+1B8h] [rbp+48h]
  int v165; // [rsp+1C0h] [rbp+50h]
  _BYTE *v166; // [rsp+1D0h] [rbp+60h] BYREF
  _BYTE v167[64]; // [rsp+1D8h] [rbp+68h] BYREF
  int v168; // [rsp+218h] [rbp+A8h]
  char v170[64]; // [rsp+220h] [rbp+B0h] BYREF
  _DWORD v171[16]; // [rsp+260h] [rbp+F0h] BYREF
  _BYTE v172[64]; // [rsp+2A0h] [rbp+130h] BYREF
  char v173[64]; // [rsp+2E0h] [rbp+170h] BYREF

  Count = this[2].Count;
  v161 = a7;
  v12 = *(_QWORD *)(Count + 16);
  v153 = v12;
  v13 = *(_QWORD *)(v12 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 128)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 1744LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = v12 + 664;
  v164 = v12 + 664;
  if ( v12 != -664 && *(struct _KTHREAD **)(v12 + 672) == KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v16 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 664, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v19 = *(_DWORD *)(v12 + 680);
      if ( v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v17, &EventBlockThread, v18, v19);
    }
    ExAcquirePushLockSharedEx(v12 + 664, 0LL);
  }
  v165 = 1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  if ( ProcessSessionId >= *(_DWORD *)(v12 + 688)
    || (v23 = 8LL * ProcessSessionId, !*(_QWORD *)(v23 + *(_QWORD *)(v12 + 696)))
    || (_mm_lfence(), v26 = *(union _SLIST_HEADER **)(v23 + *(_QWORD *)(v12 + 696)), (v147 = v26) == 0LL) )
  {
    v137 = WdLogNewEntry5_WdEvent(v23, v22, v24, v25);
    *(_QWORD *)(v137 + 24) = this;
    WdLogEvent5_WdEvent(v137);
    v50 = -1073741811;
    goto LABEL_170;
  }
  Semaphore = (PRKSEMAPHORE)v26[4].Alignment;
  v159 = Semaphore;
  ObfReferenceObject(Semaphore);
  v27 = 0;
  v165 = 0;
  ExReleasePushLockSharedEx(v15, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_BYTE *)a3 + 64) )
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 32));
  v31 = (char *)a3 + 8;
  if ( !*((_BYTE *)a3 + 24) )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v28, v30);
    v32[3] = 275LL;
    v32[4] = 4LL;
    v32[5] = v31;
    v32[6] = 0LL;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  v33 = *((_QWORD *)a3 + 2);
  *((_BYTE *)a3 + 24) = 0;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v33 + 144) )
    DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v33);
  if ( a4 )
  {
    v34 = *((_QWORD *)a4 + 7);
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v34 + 144)
      || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v34 + 128)) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v34);
      *(_QWORD *)(v35 + 24) = 743LL;
      WdLogEvent5_WdAssertion(v35);
    }
    if ( *((_QWORD *)a4 + 2) )
    {
      (*(void (**)(void))(*((_QWORD *)a4 + 3) + 24LL))();
      *((_QWORD *)a4 + 2) = 0LL;
    }
    if ( *(_QWORD *)a4 )
    {
      DXGSTABLEVISRGNANDSPRITE::vUnlock((struct CWin32kLocks *)((char *)a4 + 32));
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 296LL))(*(_QWORD *)a4, 0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 64LL))(*(_QWORD *)a4, *((_QWORD *)a4 + 1));
      *(_QWORD *)a4 = 0LL;
    }
  }
  v36 = *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL);
  Object[1] = Semaphore;
  Object[0] = (PVOID)(v36 + 1960);
  v37 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, a6, 0LL);
  if ( !v37 )
  {
    v42 = WdLogNewEntry5_WdEvent(v39, v38, v40, v41);
    *(_QWORD *)(v42 + 24) = this;
    goto LABEL_38;
  }
  if ( v37 != 258 )
  {
    if ( *((_BYTE *)a3 + 24) )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39, v38, v40);
      v51[3] = 275LL;
      v51[4] = 4LL;
      v51[5] = v31;
      v51[6] = 0LL;
      v51[7] = 0LL;
      WdLogEvent5_WdCriticalError(v51);
    }
    v52 = *((_QWORD *)a3 + 2);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v52 + 144) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v52 + 32)) )
        KeWaitForSingleObject((PVOID)(*((_QWORD *)a3 + 2) + 32LL), Executive, 0, 0, 0LL);
      DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a3 + 2));
    }
    *((_BYTE *)a3 + 24) = 1;
    if ( *(_DWORD *)(*((_QWORD *)a3 + 7) + 352LL) != 1 )
    {
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 8));
LABEL_51:
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v57 = WdLogNewEntry5_WdEvent(v54, v53, v55, v56);
      v50 = -1073741130;
      *(_QWORD *)(v57 + 24) = -1073741130LL;
      *(_QWORD *)(v57 + 32) = this;
      WdLogEvent5_WdEvent(v57);
      KOBJECTREF::~KOBJECTREF((PVOID *)&v159);
      goto LABEL_170;
    }
    if ( *((_BYTE *)a3 + 64) )
    {
      COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a3 + 32));
      if ( *(_DWORD *)(*((_QWORD *)a3 + 5) + 160LL) != 1 )
      {
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 32));
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 8));
        goto LABEL_51;
      }
    }
    v58 = ExpInterlockedPopEntrySList(v26 + 3);
    if ( !v58
      && (!DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer((DXGPRESENTHISTORYTOKENQUEUE *)v26)
       || (v58 = ExpInterlockedPopEntrySList(v26 + 3)) == 0LL)
      || (v61 = v58 + 1, v58 == (PSLIST_ENTRY)-16LL) )
    {
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v136 = WdLogNewEntry5_WdLowResource(v133, v132, v134, v135);
      *(_QWORD *)(v136 + 24) = -1073741801LL;
      *(_QWORD *)(v136 + 32) = this;
      WdLogEvent5_WdLowResource(v136);
      v50 = -1073741801;
      KOBJECTREF::~KOBJECTREF((PVOID *)&v159);
      goto LABEL_170;
    }
    v62 = 0LL;
    v63 = this[2].Count;
    LOBYTE(v59) = a8 == 0LL;
    v158[0] = 0LL;
    v64 = *(_QWORD *)(v63 + 16);
    v158[1] = (struct _SLIST_ENTRY *)v64;
    if ( !a8 )
    {
      ++*(_DWORD *)(v64 + 1044);
      v62 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v64 + 1024));
      if ( !v62 )
      {
        ++*(_DWORD *)(v64 + 1048);
        v62 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v64 + 1072))(
                              *(unsigned int *)(v64 + 1060),
                              *(unsigned int *)(v64 + 1068),
                              *(unsigned int *)(v64 + 1064),
                              v64 + 1024);
      }
      v158[0] = v62;
      if ( v62 )
      {
        v65 = *(_QWORD *)(v64 + 16);
        v66 = *(int *)(v65 + 1656) < 0x2000 ? 1 : *(_DWORD *)(v65 + 232);
        v67 = *(int *)(v65 + 1656) >= 0x2000 || *(_BYTE *)(v65 + 1940)
            ? v66 * ((*(_DWORD *)(v65 + 1864) << 6) + 8) + 376
            : 872;
        memset(v62, 0, v67);
        v68 = *(_QWORD *)(v64 + 16);
        v59 = *(unsigned int *)(v68 + 1656);
        v69 = (int)v59 < 0x2000 ? 1 : *(_DWORD *)(v68 + 232);
        LOBYTE(v59) = (int)v59 >= 0x2000 || *(_BYTE *)(v68 + 1940);
        v70 = *(_DWORD *)(v68 + 1864);
        *((_BYTE *)&v62[21].Next + 12) = v59;
        if ( (_BYTE)v59 )
        {
          *((_DWORD *)&v62[22].Next + 3) = v70;
          LODWORD(v62[23].Next) = v69;
          HIDWORD(v62[23].Next) = ((v70 * v69) << 6) + 16;
          v71 = ((v70 * v69) << 6) + 376;
          LODWORD(v62[22].Next) = v71;
          HIDWORD(v62[22].Next) = v71 + 8 * v69;
        }
      }
    }
    if ( a8 )
    {
      v62 = (PSLIST_ENTRY)a8;
    }
    else if ( !v62 )
    {
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v76 = WdLogNewEntry5_WdLowResource(v73, v72, v74, v75);
      *(_QWORD *)(v76 + 24) = 1826LL;
      WdLogEvent5_WdLowResource(v76);
      CVidSchSubmitData::~CVidSchSubmitData(v158);
      v50 = -1073741801;
      KOBJECTREF::~KOBJECTREF((PVOID *)&v159);
      goto LABEL_170;
    }
    v77 = a2;
    v78 = 0x1C0000000uLL;
    v145 = 1;
    switch ( a2->Model )
    {
      case D3DKMT_PM_REDIRECTED_GDI:
        FlipInterval = a2->Token.Flip.FlipInterval;
        if ( (unsigned int)FlipInterval > 0x10 )
        {
          v80 = WdLogNewEntry5_WdAssertion(v59);
          *(_QWORD *)(v80 + 24) = 52LL;
          goto LABEL_83;
        }
        v83 = 16 * FlipInterval + 60;
        goto LABEL_94;
      case D3DKMT_PM_REDIRECTED_FLIP:
        NumRects = a2->Token.Flip.DirtyRegions.NumRects;
        if ( NumRects > 0x10 )
        {
          v80 = WdLogNewEntry5_WdAssertion(v59);
          *(_QWORD *)(v80 + 24) = 62LL;
          goto LABEL_83;
        }
        v83 = 16 * NumRects + 824;
        goto LABEL_94;
      case D3DKMT_PM_REDIRECTED_BLT:
        VidPnSourceId = a2->Token.Flip.VidPnSourceId;
        if ( VidPnSourceId > 0x10 )
        {
          v80 = WdLogNewEntry5_WdAssertion(v59);
          *(_QWORD *)(v80 + 24) = 72LL;
LABEL_83:
          WdLogEvent5_WdAssertion(v80);
          v81 = 0;
LABEL_84:
          v82 = WdLogNewEntry5_WdWarning(v59, v77, v78, v60);
          *(_QWORD *)(v82 + 24) = v81;
          WdLogEvent5_WdWarning(v82);
          CVidSchSubmitData::~CVidSchSubmitData(v158);
          v50 = -1073741811;
          KOBJECTREF::~KOBJECTREF((PVOID *)&v159);
          goto LABEL_170;
        }
        v83 = 16 * VidPnSourceId + 44;
LABEL_94:
        v81 = (v83 + 7) & 0xFFFFFFF8;
        if ( v81 - 1 > 0x437 )
          goto LABEL_84;
        memmove(v61, v77, v81);
        if ( !(*(unsigned int (__fastcall **)(PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(this[2].Count + 40) + 80LL) + 256LL))(v61) )
        {
          LODWORD(v95) = -1071775733;
          ExpInterlockedPushEntrySList(v147 + 3, v61 - 1);
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          v131 = WdLogNewEntry5_WdWarning(v128, v127, v129, v130);
          *(_QWORD *)(v131 + 24) = -1071775733LL;
          *(_QWORD *)(v131 + 32) = this;
          WdLogEvent5_WdWarning(v131);
          goto LABEL_167;
        }
        v89 = 0LL;
        v90 = (__int64)v62->Next & 0xFFFFFFDF;
        *((_QWORD *)&v62[6].Next + 1) = v61;
        HIDWORD(v62[7].Next) = -1;
        v91 = v90 | (32 * (a5 & 1 | 0x2000));
        v154 = 0LL;
        v62[6].Next = (struct _SLIST_ENTRY *)v147;
        LODWORD(v62->Next) = v91;
        v148 = 0LL;
        if ( !a7 )
          goto LABEL_102;
        v92 = *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL);
        if ( *(int *)(v92 + 1656) < 0x2000 && !*(_BYTE *)(v92 + 1940) )
          goto LABEL_102;
        LOBYTE(a7[1].hWindow) = (v91 & 0x1000000) == 0;
        v93 = ReadPresentPrivateDriverData(*(struct DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL), a7, &v154);
        v95 = v93;
        Srca = v93;
        if ( v93 < 0 )
        {
          v96 = WdLogNewEntry5_WdError(v94);
          *(_QWORD *)(v96 + 24) = v95;
          WdLogEvent5_WdError(v96);
          goto LABEL_154;
        }
        v89 = (volatile signed __int32 *)v154;
        v148 = v154;
        *((_QWORD *)&v62[1].Next + 1) = v154;
LABEL_102:
        LODWORD(v95) = DXGCONTEXT::PrepareIndependentFlipToken(
                         this,
                         (struct _EX_RUNDOWN_REF *)v61,
                         (struct DXGK_PRESENT_PARAMS *)a7,
                         (struct VIDSCH_SUBMIT_DATA_BASE *)v62);
        Srca = v95;
        if ( (int)v95 < 0 )
          goto LABEL_155;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
          goto LABEL_131;
        Next = (int)v61->Next;
        Next_high = HIDWORD(v61->Next);
        v100 = 0;
        v151 = 0LL;
        v144 = 0;
        LOBYTE(v150) = 0;
        LOBYTE(v149) = 0;
        Srcb = Next_high;
        v152 = 0LL;
        v155 = 0LL;
        switch ( Next )
        {
          case 1:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
            v101 = (__int64)v61[1].Next;
            break;
          case 2:
            v101 = *((_QWORD *)&v61[1].Next + 1);
            break;
          default:
            v101 = 0LL;
            break;
        }
        switch ( Next )
        {
          case 1:
            v102 = (unsigned int *)(&v61[3].Next + 1);
            break;
          case 2:
            v102 = (unsigned int *)&v61[51].Next + 1;
            break;
          case 3:
            v102 = (unsigned int *)(&v61[2].Next + 1);
            break;
          default:
            v102 = 0LL;
            break;
        }
        v103 = (unsigned int)(Next - 1);
        if ( Next == 1 )
        {
          v104 = v61[2];
          v105 = v61[3].Next;
        }
        else
        {
          if ( Next != 2 )
          {
LABEL_120:
            if ( Next == 2 )
            {
              v150 = HIDWORD(v61[47].Next);
              v152 = *(__int128 *)((char *)&v61[46] + 4);
              v149 = *((_DWORD *)&v61[47].Next + 2);
              v155 = *(__int128 *)((char *)&v61[47] + 12);
            }
            if ( v102 )
            {
              v106 = 16;
              if ( *v102 < 0x10 )
                v106 = *v102;
              if ( v106 )
              {
                v102 += 3;
                v107 = v106;
                v103 = 0LL;
                do
                {
                  v108 = *(v102 - 2);
                  v102 += 4;
                  *(_DWORD *)((char *)v171 + v103) = v108;
                  v103 += 4LL;
                  *(_DWORD *)&v170[v103 - 4] = *(v102 - 4);
                  *(_DWORD *)&v172[v103 + 60] = *(v102 - 5);
                  *(_DWORD *)((char *)&v171[15] + v103) = *(v102 - 3);
                  --v107;
                }
                while ( v107 );
                LOBYTE(Next_high) = Srcb;
              }
              Template_ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq(
                (__int64)v102,
                v103,
                v101,
                v153,
                (char)v61,
                Next,
                Next_high,
                v101,
                (char)v151.Next,
                *((char *)&v151.Next + 8),
                SBYTE4(v151.Next),
                *((char *)&v151.Next + 12),
                v100,
                v144,
                v106,
                (__int64)v171,
                (__int64)v170,
                (__int64)v173,
                (__int64)v172,
                v152,
                SBYTE8(v152),
                SBYTE4(v152),
                SBYTE12(v152),
                v150,
                v149,
                v155,
                SBYTE8(v155),
                SBYTE4(v155),
                SBYTE12(v155));
            }
            else
            {
              LODWORD(Timeout) = Next_high;
              *(_DWORD *)Alertable = Next;
              Template_ppqqx(0LL, &EventSubmitPresentHistory, v101, v153, v61, *(_QWORD *)Alertable, Timeout, v101);
            }
LABEL_131:
            if ( !a7
              || !a7->BroadcastContextCount
              || !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
            {
              goto LABEL_151;
            }
            v111 = v110 + 1;
            v145 = v110 + 1;
            v112 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v109 + 2872), 1uLL);
            v113 = (DXGDEVICE *)this[2].Count;
            v157 = v112 + 1;
            BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(v113);
            if ( !BroadcastPresentSyncObject )
            {
              v115 = WdLogNewEntry5_WdError(v114);
              *(_QWORD *)(v115 + 24) = -1073741801LL;
              *(_QWORD *)(v115 + 32) = 1901LL;
              WdLogEvent5_WdError(v115);
              LODWORD(v95) = -1073741801;
              Srca = -1073741801;
LABEL_155:
              KeReleaseSemaphore(Semaphore, 0, 1, 0);
              if ( (BYTE3(v62->Next) & 1) != 0 && v145 )
              {
                v124 = v161;
                v125 = 0LL;
                do
                {
                  if ( *((_BYTE *)&v62[21].Next + 12) )
                    v126 = (struct VIDMM_ALLOC **)(&v62[4 * (unsigned __int64)(v27 * *((_DWORD *)&v62[22].Next + 3))
                                                      + 23].Next
                                                 + 1);
                  else
                    v126 = (struct VIDMM_ALLOC **)(&v62[22].Next + 1);
                  VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                    *(VIDMM_EXPORT **)(*(_QWORD *)(this[2].Count + 16) + 424LL),
                    *(struct VIDMM_DEVICE **)(this[2].Count + 536),
                    1 << *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v124[1].hDevice + v125) + 328LL),
                    *v126);
                  ++v27;
                  v125 += 8LL;
                }
                while ( v27 < v145 );
                v89 = (volatile signed __int32 *)v148;
                LODWORD(v95) = Srca;
              }
LABEL_163:
              if ( v89 && _InterlockedExchangeAdd(v89 + 1, 0xFFFFFFFF) == 1 )
              {
                ExFreePoolWithTag((PVOID)v89, 0);
                CVidSchSubmitData::~CVidSchSubmitData(v158);
                v50 = v95;
                KOBJECTREF::~KOBJECTREF((PVOID *)&v159);
                goto LABEL_170;
              }
LABEL_167:
              CVidSchSubmitData::~CVidSchSubmitData(v158);
              v50 = v95;
              KOBJECTREF::~KOBJECTREF((PVOID *)&v159);
              goto LABEL_170;
            }
            BroadcastContextCount = a7->BroadcastContextCount;
            v117 = 0LL;
            v166 = 0LL;
            v168 = 0;
            if ( (unsigned int)BroadcastContextCount <= 8 )
            {
              PoolWithTag = v167;
              v166 = v167;
            }
            else
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / BroadcastContextCount < 8 )
              {
LABEL_142:
                if ( !v117 )
                  goto LABEL_143;
                if ( v111 > 1 )
                {
                  v119 = 8LL;
                  v120 = v111 - 1;
                  v121 = v117;
                  do
                  {
                    v121 += 8;
                    v119 += 8LL;
                    *((_QWORD *)v121 - 1) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&a7[1].hDevice + v119 - 8) + 216LL);
                    --v120;
                  }
                  while ( v120 );
                }
                v122 = this[2].Count;
                v160 = 0;
                LODWORD(v95) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, signed __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v122 + 16) + 400LL) + 8LL) + 544LL))(
                                 a7->BroadcastContextCount,
                                 v117,
                                 1LL,
                                 &BroadcastPresentSyncObject,
                                 0,
                                 &v157);
                Srca = v95;
                if ( (int)v95 < 0
                  || (LODWORD(v95) = (*(__int64 (__fastcall **)(ULONG_PTR, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 400LL) + 8LL) + 536LL))(
                                       this[27].Count,
                                       BroadcastPresentSyncObject,
                                       v157),
                      Srca = v95,
                      (int)v95 < 0) )
                {
                  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v166);
                  goto LABEL_154;
                }
                PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v166);
LABEL_151:
                if ( (struct _KTHREAD *)this[46].Count != KeGetCurrentThread() )
                {
                  v123 = WdLogNewEntry5_WdAssertion(v97);
                  *(_QWORD *)(v123 + 24) = 1946LL;
                  WdLogEvent5_WdAssertion(v123);
                }
                LODWORD(v95) = (*(__int64 (__fastcall **)(ULONG_PTR, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 400LL)
                                                                                              + 8LL)
                                                                                  + 344LL))(
                                 this[27].Count,
                                 v62);
                Srca = v95;
LABEL_154:
                if ( (int)v95 >= 0 )
                  goto LABEL_163;
                goto LABEL_155;
              }
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * BroadcastContextCount, 0x4B677844u);
              v166 = PoolWithTag;
            }
            v168 = BroadcastContextCount;
            if ( !PoolWithTag )
            {
LABEL_143:
              LODWORD(v95) = -1073741801;
              Srca = -1073741801;
              PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v166);
              goto LABEL_155;
            }
            memset(PoolWithTag, 0, 8 * BroadcastContextCount);
            v117 = v166;
            goto LABEL_142;
          }
          v104 = *(struct _SLIST_ENTRY *)((char *)&v61[6] + 4);
          v105 = *(struct _SLIST_ENTRY **)((char *)&v61[7].Next + 4);
        }
        v100 = (char)v105;
        v144 = BYTE4(v105);
        v151 = v104;
        goto LABEL_120;
      case D3DKMT_PM_REDIRECTED_VISTABLT:
      case D3DKMT_PM_SCREENCAPTUREFENCE:
      case D3DKMT_PM_REDIRECTED_COMPOSITION:
        v83 = 24;
        goto LABEL_94;
      default:
        v86 = WdLogNewEntry5_WdError(v59);
        *(_QWORD *)(v86 + 24) = 89LL;
        WdLogEvent5_WdError(v86);
        v88 = WdLogNewEntry5_WdAssertion(v87);
        *(_QWORD *)(v88 + 24) = 90LL;
        WdLogEvent5_WdAssertion(v88);
        v77 = a2;
        v83 = 0;
        goto LABEL_94;
    }
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_q(v39, &EventPerformanceWarning, v40, 19);
  v43 = WdLogNewEntry5_WdEvent(v39, v38, v40, v41);
  *(_QWORD *)(v43 + 24) = 258LL;
  WdLogEvent5_WdEvent(v43);
  v44 = COREDEVICEACCESS::AcquireShared(a3);
  v49 = v44;
  if ( v44 >= 0 )
  {
    v50 = 258;
    KOBJECTREF::~KOBJECTREF((PVOID *)&v159);
    goto LABEL_170;
  }
  v42 = WdLogNewEntry5_WdEvent(v46, v45, v47, v48);
  *(_QWORD *)(v42 + 24) = v49;
  *(_QWORD *)(v42 + 32) = this;
LABEL_38:
  WdLogEvent5_WdEvent(v42);
  v50 = -1073741130;
  KOBJECTREF::~KOBJECTREF((PVOID *)&v159);
LABEL_170:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v163);
  return v50;
}
