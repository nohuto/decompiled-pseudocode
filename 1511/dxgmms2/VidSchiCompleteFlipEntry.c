/*
 * XREFs of VidSchiCompleteFlipEntry @ 0x1C00046F0
 * Callers:
 *     VidSchiCancelIndependentFlips @ 0x1C0001B68 (VidSchiCancelIndependentFlips.c)
 *     VidSchiCompletePendingFlip @ 0x1C000248C (VidSchiCompletePendingFlip.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C00056C0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C00148AC (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 *     VidSchiRestartQueuedFlip @ 0x1C0021AFC (VidSchiRestartQueuedFlip.c)
 * Callees:
 *     VidSchiFlushPendingTokenList @ 0x1C0001BD4 (VidSchiFlushPendingTokenList.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0001F84 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0002428 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0002518 (VidSchiPropagatePresentHistoryToken.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N11@Z @ 0x1C00030C4 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     VidSchiUnwaitContext @ 0x1C000E0EC (VidSchiUnwaitContext.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0011664 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00127F8 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00128D0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0014708 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0014A70 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     Template_px @ 0x1C0020A14 (Template_px.c)
 *     Template_pxqqpqx @ 0x1C0020A8C (Template_pxqqpqx.c)
 */

__int64 __fastcall VidSchiCompleteFlipEntry(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        _BYTE *a7)
{
  unsigned int v7; // r10d
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r11
  int v14; // r14d
  int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // r13
  unsigned int v18; // ecx
  int v19; // r12d
  BOOL v20; // esi
  unsigned int v21; // r13d
  __int64 v22; // r8
  int v23; // r8d
  unsigned __int8 v24; // cf
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdi
  CRefCountedBuffer *v28; // rcx
  volatile signed __int32 *v29; // rcx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v30; // rdx
  char v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rbx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v34; // r15
  KSPIN_LOCK *v35; // r12
  char v36; // di
  CRefCountedBuffer *v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rdx
  int v40; // r8d
  ULONG v41; // eax
  unsigned int v42; // r10d
  int v43; // r8d
  unsigned int v44; // ebx
  ULONG v45; // r11d
  __int64 i; // r9
  ULONG v47; // edx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  _QWORD *v51; // rbx
  __int64 v52; // rcx
  _QWORD *v53; // rdi
  _QWORD *v54; // r10
  _QWORD *v55; // rbx
  _QWORD *v56; // r10
  __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  unsigned int *v61; // r12
  unsigned int *v62; // r15
  __int64 v63; // r11
  unsigned int v64; // r9d
  __int64 v65; // r10
  unsigned int *v66; // rdi
  unsigned int *j; // r14
  unsigned int *v68; // rsi
  _QWORD *v69; // rbx
  __int64 v70; // rcx
  _QWORD *v71; // rax
  unsigned int *v72; // rdi
  unsigned int *v73; // rsi
  unsigned int *v74; // r10
  __int64 *v75; // rbx
  __int64 v76; // rcx
  __int64 **v77; // rax
  struct VIDMM_ALLOC *v78; // r10
  __int64 v79; // rax
  __int64 **v80; // rcx
  __int64 v81; // rcx
  unsigned int **v82; // rax
  __int64 v83; // r9
  unsigned int k; // edx
  __int64 v85; // rax
  unsigned int v86; // r8d
  int v87; // eax
  char v88; // cl
  int v89; // eax
  char v90; // dl
  void (__fastcall *v91)(_QWORD, __int64, __int64, __int64); // rax
  int v92; // eax
  unsigned int v93; // ebx
  __int64 v94; // rcx
  __int64 v95; // rax
  int v96; // edx
  bool v97; // zf
  int v98; // eax
  __int64 v99; // rcx
  signed __int64 v100; // rbx
  __int64 v101; // rax
  __int64 v102; // rsi
  int v103; // r13d
  _QWORD *v104; // rbx
  _QWORD *m; // rsi
  _QWORD *v106; // rcx
  int v107; // edx
  __int64 **v108; // rbx
  int v109; // esi
  __int64 *v110; // rcx
  __int64 v111; // rax
  struct _VIDSCH_CONTEXT *v112; // rcx
  _QWORD *v113; // r14
  __int64 v114; // rsi
  struct _KEVENT *v115; // rdi
  KIRQL v116; // r12
  struct _KEVENT *v117; // rbx
  int Flink; // ecx
  struct _KEVENT **v119; // rdi
  KIRQL v120; // r14
  struct _KEVENT *v121; // rbx
  int v122; // ecx
  struct _KEVENT *v123; // rdi
  KIRQL v124; // r14
  struct _KEVENT *v125; // rbx
  int v126; // ecx
  struct _KEVENT *v127; // rdi
  KIRQL v128; // r14
  struct _KEVENT *v129; // rbx
  int v130; // ecx
  struct _KEVENT *v131; // rdi
  KIRQL v132; // r14
  struct _KEVENT *v133; // rbx
  int v134; // ecx
  KSPIN_LOCK *v135; // rbx
  struct _KEVENT *v136; // rcx
  unsigned int v137; // [rsp+50h] [rbp-B0h]
  __int64 v138; // [rsp+58h] [rbp-A8h]
  unsigned int v139; // [rsp+60h] [rbp-A0h]
  __int64 v140; // [rsp+68h] [rbp-98h]
  unsigned int v141; // [rsp+70h] [rbp-90h]
  __int64 v142; // [rsp+80h] [rbp-80h]
  unsigned int *v143; // [rsp+88h] [rbp-78h]
  VIDMM_GLOBAL *v144; // [rsp+90h] [rbp-70h]
  __int64 v145; // [rsp+A8h] [rbp-58h]
  __int64 v146; // [rsp+B8h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE v147; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v148; // [rsp+D8h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE v149; // [rsp+F0h] [rbp-10h] BYREF
  struct _KLOCK_QUEUE_HANDLE v150; // [rsp+108h] [rbp+8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v151; // [rsp+120h] [rbp+20h] BYREF
  struct _KLOCK_QUEUE_HANDLE v152; // [rsp+138h] [rbp+38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v153; // [rsp+150h] [rbp+50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v154; // [rsp+168h] [rbp+68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v155; // [rsp+180h] [rbp+80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+198h] [rbp+98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v157; // [rsp+1B0h] [rbp+B0h] BYREF
  char v160; // [rsp+220h] [rbp+120h]

  v160 = a3;
  v7 = a4;
  v141 = a4;
  v8 = a1;
  v9 = a2;
  if ( a7 )
    *a7 = 0;
  if ( !*(_DWORD *)(a1 + 920) )
    return 0LL;
  v11 = *(_QWORD *)(a1 + 2592 + 8LL * a2);
  v12 = v9;
  v142 = v9;
  v146 = a1 + 2592 + 8 * v9;
  v140 = v11;
  v13 = *(_QWORD *)(v11 + 8LL * a3 + 24);
  v145 = v13;
  if ( !v13 )
    return 0LL;
  v14 = 0;
  v139 = 0;
  v137 = 0;
  while ( 2 )
  {
    v15 = 4673;
    v16 = 0LL;
    v138 = 0LL;
    v17 = v13 + 1160LL * v7;
    v18 = *(_DWORD *)(v17 + 1100);
    if ( v18 > 0xC || !_bittest(&v15, v18) )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v17 + 56) + 104LL);
      v138 = v16;
    }
    v19 = a6;
    v20 = 1;
    if ( a6 )
    {
      if ( a6 == 9 || a6 == 6 )
      {
        if ( v18 > 0xC || (v24 = _bittest(&v15, v18), v23 = 0, !v24) )
          v23 = 1;
        if ( a6 == 9 )
        {
          v20 = v18 == 5;
        }
        else if ( v18 == 5 )
        {
          v23 = 0;
        }
        if ( v18 - 7 <= 1 )
        {
          if ( *(_BYTE *)(v17 + 1113) )
            ++*(_QWORD *)(v16 + 8 * v12 + 344);
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 928));
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 2336));
          if ( *(_DWORD *)(v17 + 1100) == 8 && !*(_BYTE *)(v17 + 1113) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 4 * v12 + 1000));
            v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 40) + 24LL)
                                        + 8LL * *(unsigned int *)(*(_QWORD *)(v16 + 32) + 4LL))
                            + 8 * v12
                            + 520);
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 8 * v12 + 5128) + 8LL));
            _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
            _InterlockedIncrement((volatile signed __int32 *)(v8 + 916));
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 1128));
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 4 * v12 + 1064));
            v11 = v140;
          }
        }
      }
      else
      {
        if ( a6 != 12 )
          goto LABEL_13;
        if ( v18 - 2 > 1 )
        {
          if ( v18 == 5 && (*(_DWORD *)(v17 + 1164) & 0x20) != 0 )
          {
            v21 = v137;
            v22 = v8 + 8 * (v12 + 324);
            if ( a7 )
              *a7 = 1;
            goto LABEL_14;
          }
LABEL_13:
          v21 = v137;
          v22 = v8 + 8 * (v12 + 324);
          goto LABEL_14;
        }
        v23 = (*(_DWORD *)(v17 + 1164) >> 5) & 1;
        if ( !v23 )
          goto LABEL_13;
        *(_DWORD *)(v13 + 40) = ((_BYTE)v7 + 1) & 0x3F;
      }
      if ( !v23 )
        goto LABEL_13;
    }
    else if ( v18 - 10 > 1 )
    {
      goto LABEL_13;
    }
    if ( *(_DWORD *)(v17 + 1100) == 1 )
    {
      --*(_DWORD *)(v8 + 924);
      --*(_DWORD *)(v11 + 2332);
    }
    v26 = *(_QWORD *)(v17 + 1192);
    *(_DWORD *)(v17 + 1100) = a6;
    if ( v26 )
    {
      v27 = *(_QWORD *)(v17 + 1200);
      if ( v27 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v27 + 16), &LockHandle);
        v28 = *(CRefCountedBuffer **)(v27 + 8);
        if ( v28 )
          CRefCountedBuffer::RefCountedBufferRelease(v28);
        *(_QWORD *)(v27 + 8) = v26;
        _InterlockedIncrement((volatile signed __int32 *)(v26 + 4));
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        *(_QWORD *)(v17 + 1200) = 0LL;
      }
      v29 = *(volatile signed __int32 **)(v17 + 1192);
      if ( _InterlockedExchangeAdd(v29 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v29, 0);
      v12 = v142;
      *(_QWORD *)(v17 + 1192) = 0LL;
    }
    if ( !a6 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1832), &v147);
      if ( (*(_DWORD *)(v17 + 1164) & 0x20) == 0 )
        *(_DWORD *)(*(_QWORD *)(v140 + 16) + 4 * v12 + 476) = *(_DWORD *)(v17 + 1104);
      *(_DWORD *)(*(_QWORD *)(v140 + 16) + 4 * v12 + 540) = *(_DWORD *)(v17 + 1160);
      *(_QWORD *)(*(_QWORD *)(v140 + 16) + 8 * v12 + 608) = *(_QWORD *)(v17 + 1144);
      *(_QWORD *)(*(_QWORD *)(v140 + 16) + 8 * v12 + 736) = *(_QWORD *)(v17 + 1152);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v147);
    }
    if ( (*(_DWORD *)(v17 + 1164) & 0x20) == 0 )
      goto LABEL_78;
    v30 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v17 + 1184);
    if ( !v30 )
      goto LABEL_78;
    v31 = 1;
    if ( !a6 )
      goto LABEL_60;
    if ( a6 != 9 )
    {
      if ( a6 == 6 )
      {
        VidSchiPropagatePresentHistoryToken(
          *(PKSPIN_LOCK *)(v17 + 1176),
          v30,
          1,
          (*(_DWORD *)(v17 + 1164) & 0x40) != 0,
          0,
          *(_QWORD *)(v17 + 1200),
          *(_QWORD *)(v17 + 1192),
          0LL);
        goto LABEL_60;
      }
      goto LABEL_59;
    }
    if ( !v20 )
LABEL_59:
      v31 = 0;
LABEL_60:
    v32 = *(_QWORD *)(v17 + 1200);
    v33 = *(_QWORD *)(v17 + 1192);
    v34 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v17 + 1184);
    v35 = *(KSPIN_LOCK **)(v17 + 1176);
    v36 = (*(_DWORD *)(v17 + 1164) & 0x40) != 0;
    if ( v32 && v33 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v32 + 16), &v150);
      v37 = *(CRefCountedBuffer **)(v32 + 8);
      if ( v37 )
        CRefCountedBuffer::RefCountedBufferRelease(v37);
      *(_QWORD *)(v32 + 8) = v33;
      _InterlockedIncrement((volatile signed __int32 *)(v33 + 4));
      KeReleaseInStackQueuedSpinLock(&v150);
    }
    DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(v35, v34, v31, v36, 0);
    if ( !bTracingEnabled )
    {
      v14 = 0;
LABEL_78:
      v38 = v138;
      goto LABEL_79;
    }
    v38 = v138;
    if ( a6 )
    {
      if ( v138 )
      {
        v39 = *(_QWORD *)(v138 + 8);
        v40 = *(_DWORD *)(a1 + 2104);
        if ( !v39 )
          LODWORD(v39) = v138;
        v14 = 0;
      }
      else
      {
        v14 = 0;
        v40 = 0;
        LODWORD(v39) = 0;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_pxqqpqx(
          *(_QWORD *)(v17 + 1208),
          v39,
          v40,
          *(_QWORD *)(a1 + 16),
          *(_QWORD *)(*(_QWORD *)(v17 + 1208) + 32LL),
          a2,
          *(_DWORD *)(v17 + 1104),
          v39,
          v40,
          v160);
    }
    else
    {
      v14 = 0;
    }
LABEL_79:
    v41 = RtlNumberOfSetBitsUlongPtr((unsigned __int8)**(_DWORD **)(v17 + 1208));
    v42 = *(_DWORD *)(v17 + 1116);
    v43 = 0;
    v44 = *(_DWORD *)(v17 + 1120);
    v45 = v41;
    for ( i = *(_QWORD *)(v17 + 1208); v42; v42 >>= 1 )
    {
      if ( (v42 & 1) != 0 )
      {
        if ( (v44 & 1) != 0 )
        {
          v47 = 0;
          while ( v47 < v45 )
          {
            v48 = v47 + v43 * *(_DWORD *)(i + 4);
            ++v47;
            v49 = *(_QWORD *)((v48 << 6) + i + 16);
            v50 = *(_QWORD *)(v49 + 96);
            _InterlockedDecrement((volatile signed __int32 *)(v49 + 104));
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v50 + 16) + 8LL));
          }
        }
        ++v43;
      }
      v44 >>= 1;
    }
    if ( !v38 )
      goto LABEL_124;
    v51 = *(_QWORD **)(v38 + 32);
    v144 = *(VIDMM_GLOBAL **)(v51[1] + 432LL);
    KeAcquireInStackQueuedSpinLock(v51 + 232, &v154);
    v53 = v51 + 236;
    v54 = (_QWORD *)v51[236];
    if ( v54 != v51 + 236 )
    {
      do
      {
        v55 = (_QWORD *)*v54;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v52, v54 - 25) )
        {
          v57 = *v56;
          v58 = (_QWORD *)v56[1];
          if ( *(_QWORD **)(*v56 + 8LL) != v56 || (_QWORD *)*v58 != v56 )
            __fastfail(3u);
          *v58 = v57;
          *(_QWORD *)(v57 + 8) = v58;
          VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v56 - 24), (struct VIDMM_ALLOC *)(v56 - 25));
        }
        v54 = v55;
      }
      while ( v55 != v53 );
    }
    KeReleaseInStackQueuedSpinLock(&v154);
    v61 = *(unsigned int **)(v38 + 1168);
    v143 = (unsigned int *)(v38 + 1168);
    if ( v61 == (unsigned int *)(v38 + 1168) )
      goto LABEL_124;
    while ( 1 )
    {
      v62 = v61;
      v61 = *(unsigned int **)v61;
      v63 = *((_QWORD *)v62 + 2);
      if ( v63 > *(_QWORD *)(v38 + 1160) )
        break;
LABEL_101:
      v66 = (unsigned int *)*((_QWORD *)v62 + 11);
      for ( j = v62 + 22; v66 != j; *((_QWORD *)v68 + 28) = 0LL )
      {
        v68 = v66 - 54;
        v66 = *(unsigned int **)v66;
        v69 = v68 + 54;
        v70 = *((_QWORD *)v68 + 27);
        v71 = (_QWORD *)*((_QWORD *)v68 + 28);
        if ( *(unsigned int **)(v70 + 8) != v68 + 54 || (_QWORD *)*v71 != v69 )
          __fastfail(3u);
        *v71 = v70;
        *(_QWORD *)(v70 + 8) = v71;
        VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v68);
        *v69 = 0LL;
      }
      v72 = (unsigned int *)*((_QWORD *)v62 + 9);
      v73 = v62 + 18;
      while ( v72 != v73 )
      {
        v74 = v72 - 50;
        v72 = *(unsigned int **)v72;
        v75 = (__int64 *)(v74 + 50);
        v76 = *((_QWORD *)v74 + 25);
        v77 = (__int64 **)*((_QWORD *)v74 + 26);
        if ( *(unsigned int **)(v76 + 8) != v74 + 50 || *v77 != v75 )
          __fastfail(3u);
        *v77 = (__int64 *)v76;
        *(_QWORD *)(v76 + 8) = v77;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v76, v74) )
        {
          VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v144, v78);
        }
        else
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v138 + 32) + 1856LL), &v152);
          v79 = *(_QWORD *)(v138 + 32) + 1888LL;
          v80 = *(__int64 ***)(*(_QWORD *)(v138 + 32) + 1896LL);
          *v75 = v79;
          v75[1] = (__int64)v80;
          if ( *v80 != (__int64 *)v79 )
            __fastfail(3u);
          *v80 = v75;
          *(_QWORD *)(v79 + 8) = v75;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v152);
        }
      }
      if ( *(unsigned int **)v73 == v73 && *(unsigned int **)j == j )
      {
        v81 = *(_QWORD *)v62;
        v82 = (unsigned int **)*((_QWORD *)v62 + 1);
        if ( *(unsigned int **)(*(_QWORD *)v62 + 8LL) != v62 || *v82 != v62 )
          __fastfail(3u);
        v97 = bTracingEnabled == 0;
        *v82 = (unsigned int *)v81;
        *(_QWORD *)(v81 + 8) = v82;
        if ( !v97 )
        {
          v83 = *(_QWORD *)(v138 + 8);
          if ( !v83 )
            v83 = v138;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_px(v81, v59, v60, v83, *((_QWORD *)v62 + 2));
        }
        _VIDSCH_SYNC_POINT::`scalar deleting destructor'((_VIDSCH_SYNC_POINT *)v62, v59);
      }
      v14 = 0;
      v38 = v138;
      if ( v61 == v143 )
        goto LABEL_124;
    }
    v64 = v62[16];
    v59 = 0LL;
    if ( !v64 )
    {
LABEL_100:
      *(_QWORD *)(v38 + 1160) = v63;
      goto LABEL_101;
    }
    v65 = *((_QWORD *)v62 + 3);
    while ( 1 )
    {
      v60 = *(_QWORD *)(v65 + 16LL * (unsigned int)v59);
      if ( v60 )
      {
        if ( *(_QWORD *)(v60 + 152) < *(_QWORD *)(v65 + 16LL * (unsigned int)v59 + 8) )
          break;
      }
      v59 = (unsigned int)(v59 + 1);
      if ( (unsigned int)v59 >= v64 )
        goto LABEL_100;
    }
LABEL_124:
    for ( k = 0; k < *(_DWORD *)(v17 + 1128); --*(_DWORD *)(*(_QWORD *)(v17 + 8 * v85 + 56) + 768LL) )
      v85 = k++;
    ++v139;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 1128), 0xFFFFFFFF);
    v8 = a1;
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 916), 0xFFFFFFFF);
    v12 = v142;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 4 * v142 + 1064), 0xFFFFFFFF);
    if ( (*(_BYTE *)(v17 + 1164) & 0x10) != 0 )
      v86 = (unsigned __int8)**(_DWORD **)(v17 + 1208) | *(unsigned __int8 *)(*(_QWORD *)(v17 + 1208) + 1LL);
    else
      v86 = (1 << *(_DWORD *)(a1 + 124)) - 1;
    v97 = !_BitScanForward((unsigned int *)&v87, v86);
    v16 = v86;
    v88 = -1;
    if ( !v97 )
      v88 = v87;
    if ( v86 )
    {
      do
      {
        --*(_DWORD *)(280LL * v88 + *(_QWORD *)(a1 + 8 * v142 + 2592) + 164);
        v16 = ~(1 << v88) & (unsigned int)v16;
        v97 = !_BitScanForward((unsigned int *)&v89, v16);
        v90 = -1;
        if ( !v97 )
          v90 = v89;
        v88 = v90;
      }
      while ( (_DWORD)v16 );
    }
    v21 = v86 | v137;
    v137 |= v86;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 4 * v142 + 1000), 0xFFFFFFFF);
    --*(_DWORD *)(v38 + 1132);
    v22 = a1 + 8 * (v142 + 324);
    v11 = *(unsigned int *)(*(_QWORD *)v22 + 14768LL);
    if ( (_DWORD)v11 != -1 )
    {
      v91 = *(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a1 + 2488);
      if ( v91 )
        v91(*(_QWORD *)(a1 + 2520), v11, v22, v16);
      v22 = a1 + 8 * (v142 + 324);
    }
    v13 = v145;
    v7 = v141;
    v19 = a6;
    *(_DWORD *)(v145 + 48) = v141;
LABEL_14:
    if ( v7 != a5 )
    {
      v11 = v140;
      v7 = ((_BYTE)v7 + 1) & 0x3F;
      v141 = v7;
      continue;
    }
    break;
  }
  if ( v139 )
  {
    v97 = !_BitScanForward((unsigned int *)&v92, v21);
    v11 = 0xFFFFFFFFLL;
    if ( !v97 )
      v11 = (unsigned __int8)v92;
    if ( v21 )
    {
      while ( 2 )
      {
        v93 = (char)v11;
        if ( a2 != -1 )
        {
          v94 = 280LL * (unsigned int)(char)v11;
          v95 = *(_QWORD *)v22;
          v96 = *(_DWORD *)(v94 + *(_QWORD *)v22 + 156);
          if ( v96 != 1 )
          {
            v97 = v96 == 2;
            goto LABEL_156;
          }
          if ( *(_BYTE *)(v94 + v95 + 154) && !*(_DWORD *)(v94 + v95 + 160) && *(_BYTE *)(v94 + v95 + 152) )
          {
            v97 = *(_DWORD *)(v94 + v95 + 164) == 0;
LABEL_156:
            if ( v97 )
              VidSchiFlushPendingTokenList(v8, a2, v93);
          }
        }
        v22 = v146;
        v21 &= ~(1 << v93);
        v97 = !_BitScanForward((unsigned int *)&v98, v21);
        v11 = 0xFFFFFFFFLL;
        if ( !v97 )
          v11 = (unsigned __int8)v98;
        if ( !v21 )
        {
          v19 = a6;
          break;
        }
        continue;
      }
    }
  }
  *(_DWORD *)(v8 + 920) -= v139;
  *(_DWORD *)(v140 + 2328) -= v139;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 928), -v139);
  v99 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v140 + 2336), -v139);
  if ( !v19
    && _InterlockedCompareExchange((volatile signed __int32 *)(v140 + 42816), 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)(v8 + 2024), 1) )
  {
    v100 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v8 + 16) + 24LL), 1uLL);
    if ( (v100 + 1 < 0) ^ __OFADD__(1LL, v100) | (v100 == -1) )
    {
      v101 = WdLogNewEntry5_WdAssertion(v99, v11, v22, v16);
      *(_QWORD *)(v101 + 24) = 1141LL;
      WdLogEvent5_WdAssertion(v101);
    }
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v8 + 1992), CriticalWorkQueue);
  }
  v102 = *(_QWORD *)(v140 + 16);
  if ( v102 )
  {
    v104 = *(_QWORD **)(v102 + 72);
    for ( m = (_QWORD *)(v102 + 72); v104 != m; v14 |= v107 )
    {
      v106 = v104 - 3;
      v107 = 0;
      if ( (v104[19] & 0x10) != 0 )
      {
        *((_DWORD *)v106 + 44) &= ~0x10u;
        v107 = (unsigned __int8)VidSchiUnwaitContext(v106, 17148LL);
      }
      v104 = (_QWORD *)*v104;
    }
    v108 = (__int64 **)(v140 + 42800);
    v109 = 0;
    while ( *v108 != (__int64 *)v108 )
    {
      v110 = *v108;
      v111 = **v108;
      if ( (__int64 **)(*v108)[1] != v108 || *(__int64 **)(v111 + 8) != v110 )
        __fastfail(3u);
      *v108 = (__int64 *)v111;
      v112 = (struct _VIDSCH_CONTEXT *)(v110 - 5);
      *(_QWORD *)(v111 + 8) = v108;
      *((_QWORD *)v112 + 5) = 0LL;
      *((_QWORD *)v112 + 6) = 0LL;
      v109 |= VidSchiUpdateFlipContextStatus(v112);
    }
    v103 = v14 | v109;
  }
  else
  {
    v103 = 0;
  }
  v113 = *(_QWORD **)(v140 + 16);
  if ( v113 )
  {
    v114 = v113[4];
    v115 = (struct _KEVENT *)(v113 + 13);
    v116 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v114 + 1840), &v148);
    v117 = (struct _KEVENT *)v113[13];
    if ( *(struct _KEVENT **)&v115->Header.Lock != v115 )
    {
      do
      {
        if ( LODWORD(v117->Header.WaitListHead.Blink) == 4 )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v117[1].Header.Lock + 4LL * LODWORD(v117[1].Header.WaitListHead.Blink) + 1000) >= *(_DWORD *)(*(_QWORD *)&v117[1].Header.Lock + 212LL) )
            goto LABEL_189;
        }
        else if ( ((__int64)v117[1].Header.WaitListHead.Flink & 4) != 0 )
        {
          Flink = (int)v117[1].Header.WaitListHead.Blink->Flink;
          HIDWORD(v117[5].Header.WaitListHead.Blink) = Flink;
          if ( Flink )
            goto LABEL_189;
        }
        ++v117[5].Header.LockNV;
        KeSetEvent(v117 + 4, 0, 0);
LABEL_189:
        v117 = *(struct _KEVENT **)&v117->Header.Lock;
      }
      while ( v117 != v115 );
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v148);
    KeLowerIrql(v116);
    v119 = (struct _KEVENT **)(v113 + 15);
    v120 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v114 + 1840), &v149);
    v121 = *v119;
    if ( *v119 != (struct _KEVENT *)v119 )
    {
      while ( 2 )
      {
        if ( LODWORD(v121->Header.WaitListHead.Blink) == 4 )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v121[1].Header.Lock + 4LL * LODWORD(v121[1].Header.WaitListHead.Blink) + 1000) >= *(_DWORD *)(*(_QWORD *)&v121[1].Header.Lock + 212LL) )
            goto LABEL_197;
        }
        else if ( ((__int64)v121[1].Header.WaitListHead.Flink & 4) != 0 )
        {
          v122 = (int)v121[1].Header.WaitListHead.Blink->Flink;
          HIDWORD(v121[5].Header.WaitListHead.Blink) = v122;
          if ( v122 )
          {
LABEL_197:
            v121 = *(struct _KEVENT **)&v121->Header.Lock;
            if ( v121 == (struct _KEVENT *)v119 )
              goto LABEL_198;
            continue;
          }
        }
        break;
      }
      ++v121[5].Header.LockNV;
      KeSetEvent(v121 + 4, 0, 0);
      goto LABEL_197;
    }
LABEL_198:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v149);
    KeLowerIrql(v120);
    v123 = (struct _KEVENT *)(v114 + 1784);
    v124 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v114 + 1840), &v151);
    v125 = *(struct _KEVENT **)(v114 + 1784);
    if ( *(struct _KEVENT **)&v123->Header.Lock != v123 )
    {
      while ( 2 )
      {
        if ( LODWORD(v125->Header.WaitListHead.Blink) == 4 )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v125[1].Header.Lock + 4LL * LODWORD(v125[1].Header.WaitListHead.Blink) + 1000) >= *(_DWORD *)(*(_QWORD *)&v125[1].Header.Lock + 212LL) )
            goto LABEL_205;
        }
        else if ( ((__int64)v125[1].Header.WaitListHead.Flink & 4) != 0 )
        {
          v126 = (int)v125[1].Header.WaitListHead.Blink->Flink;
          HIDWORD(v125[5].Header.WaitListHead.Blink) = v126;
          if ( v126 )
          {
LABEL_205:
            v125 = *(struct _KEVENT **)&v125->Header.Lock;
            if ( v125 == v123 )
              goto LABEL_206;
            continue;
          }
        }
        break;
      }
      ++v125[5].Header.LockNV;
      KeSetEvent(v125 + 4, 0, 0);
      goto LABEL_205;
    }
LABEL_206:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v151);
    KeLowerIrql(v124);
    v127 = (struct _KEVENT *)(v114 + 1768);
    v128 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v114 + 1840), &v153);
    v129 = *(struct _KEVENT **)(v114 + 1768);
    if ( *(struct _KEVENT **)&v127->Header.Lock != v127 )
    {
      while ( 2 )
      {
        if ( LODWORD(v129->Header.WaitListHead.Blink) == 4 )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v129[1].Header.Lock + 4LL * LODWORD(v129[1].Header.WaitListHead.Blink) + 1000) >= *(_DWORD *)(*(_QWORD *)&v129[1].Header.Lock + 212LL) )
            goto LABEL_213;
        }
        else if ( ((__int64)v129[1].Header.WaitListHead.Flink & 4) != 0 )
        {
          v130 = (int)v129[1].Header.WaitListHead.Blink->Flink;
          HIDWORD(v129[5].Header.WaitListHead.Blink) = v130;
          if ( v130 )
          {
LABEL_213:
            v129 = *(struct _KEVENT **)&v129->Header.Lock;
            if ( v129 == v127 )
              goto LABEL_214;
            continue;
          }
        }
        break;
      }
      ++v129[5].Header.LockNV;
      KeSetEvent(v129 + 4, 0, 0);
      goto LABEL_213;
    }
LABEL_214:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v153);
    KeLowerIrql(v128);
    *(_QWORD *)(v114 + 1616) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v114 + 1584), 0, 0);
    *(_QWORD *)(v114 + 1728) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v114 + 1696), 0, 0);
    if ( v103 )
    {
      *(_QWORD *)(v114 + 1336) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v114 + 1304), 0, 0);
    }
    v131 = (struct _KEVENT *)(v114 + 1800);
    v132 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v114 + 1840), &v155);
    v133 = *(struct _KEVENT **)(v114 + 1800);
    if ( *(struct _KEVENT **)&v131->Header.Lock != v131 )
    {
      while ( 2 )
      {
        if ( LODWORD(v133->Header.WaitListHead.Blink) == 4 )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v133[1].Header.Lock + 4LL * LODWORD(v133[1].Header.WaitListHead.Blink) + 1000) >= *(_DWORD *)(*(_QWORD *)&v133[1].Header.Lock + 212LL) )
            goto LABEL_223;
        }
        else if ( ((__int64)v133[1].Header.WaitListHead.Flink & 4) != 0 )
        {
          v134 = (int)v133[1].Header.WaitListHead.Blink->Flink;
          HIDWORD(v133[5].Header.WaitListHead.Blink) = v134;
          if ( v134 )
          {
LABEL_223:
            v133 = *(struct _KEVENT **)&v133->Header.Lock;
            if ( v133 == v131 )
              goto LABEL_224;
            continue;
          }
        }
        break;
      }
      ++v133[5].Header.LockNV;
      KeSetEvent(v133 + 4, 0, 0);
      goto LABEL_223;
    }
LABEL_224:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v155);
    KeLowerIrql(v132);
    if ( *(_WORD *)(v140 + 14636) )
    {
      v135 = *(KSPIN_LOCK **)(v114 + 1816);
      KeAcquireInStackQueuedSpinLock(v135, &v157);
      v136 = (struct _KEVENT *)v135[1];
      if ( v136 )
        KeSetEvent(v136, 0, 0);
      KeReleaseInStackQueuedSpinLock(&v157);
    }
  }
  return v139;
}
