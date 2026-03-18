/*
 * XREFs of VidSchiCompleteFlipEntry @ 0x1C0003BA0
 * Callers:
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C0002A74 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0004730 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAK.c)
 *     VidSchiCompletePendingFlip @ 0x1C0011A70 (VidSchiCompletePendingFlip.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C0011F58 (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 *     VidSchiCancelIndependentFlips @ 0x1C0023D98 (VidSchiCancelIndependentFlips.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C0024070 (VidSchiExecutePostPresentAtPassiveLevel.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002546C (VidSchiRestartQueuedFlip.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00019A0 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00019F0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     VidSchiUnwaitContext @ 0x1C000D158 (VidSchiUnwaitContext.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C000FA88 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0011348 (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00116C4 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0011CE8 (VidSchiTryEnterIndependentFlip.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0011ED8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011F24 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C001D004 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     Template_px @ 0x1C0023A60 (Template_px.c)
 *     Template_pxqqpqx @ 0x1C0023AD8 (Template_pxqqpqx.c)
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
  unsigned int v7; // r11d
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v13; // r14d
  unsigned int v14; // ebx
  unsigned int v15; // r12d
  __int64 v16; // r9
  int v17; // r10d
  __int64 v18; // r13
  __int64 v19; // rdi
  unsigned int v20; // ecx
  int v21; // r10d
  __int64 v22; // rax
  __int64 v23; // rax
  volatile signed __int32 *v24; // rcx
  ULONG v25; // eax
  unsigned int v26; // r8d
  int v27; // r10d
  unsigned int v28; // r9d
  __int64 v29; // rsi
  ULONG v30; // r11d
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rcx
  _QWORD **v36; // rbx
  _QWORD *v37; // r9
  _VIDSCH_SYNC_POINT *v38; // rax
  unsigned int i; // edx
  __int64 v40; // rax
  __int64 v41; // r8
  bool v42; // zf
  int v43; // ecx
  __int64 v44; // rdx
  int v45; // ebx
  __int64 v46; // r15
  _QWORD *v47; // rbx
  _QWORD *v48; // r15
  int j; // edi
  _QWORD *v50; // rcx
  int v51; // edx
  int v52; // ebx
  __int64 **v53; // r15
  _QWORD *v54; // r15
  __int64 v55; // rbx
  struct _KEVENT *v56; // r12
  struct _KEVENT *v57; // r13
  struct _KEVENT **v58; // r15
  KIRQL v59; // r12
  struct _KEVENT *v60; // r13
  struct _KEVENT *v61; // r15
  KIRQL v62; // r13
  struct _KEVENT *v63; // r12
  struct _KEVENT *v64; // r15
  KIRQL v65; // r13
  struct _KEVENT *v66; // r12
  struct _KEVENT *v67; // r14
  KIRQL v68; // r15
  struct _KEVENT *v69; // rdi
  int v71; // eax
  int v72; // ecx
  int v73; // ecx
  __int64 v74; // rcx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v75; // rdx
  int v76; // r9d
  __int64 v77; // rdx
  __int64 v78; // r8
  void (__fastcall *v79)(_QWORD, __int64, __int64, __int64); // rax
  __int64 v80; // rax
  CRefCountedBuffer *v81; // rcx
  __int64 v82; // rcx
  _QWORD *v83; // r9
  _QWORD *v84; // r11
  __int64 v85; // rcx
  _QWORD *v86; // rax
  _VIDSCH_SYNC_POINT *v87; // rcx
  __int64 v88; // r10
  unsigned int v89; // r9d
  unsigned int v90; // edx
  __int64 v91; // r11
  __int64 v92; // r8
  _QWORD *v93; // rdx
  _QWORD *v94; // r9
  _QWORD *v95; // r8
  _QWORD *v96; // rax
  __int64 v97; // rdx
  _QWORD *v98; // rcx
  _QWORD *v99; // r8
  _QWORD *v100; // rdx
  _QWORD *v101; // rdx
  _QWORD *v102; // rcx
  struct VIDMM_ALLOC *v103; // r9
  __int64 v104; // rcx
  _QWORD *v105; // rdx
  _VIDSCH_SYNC_POINT *v106; // rdx
  _VIDSCH_SYNC_POINT **v107; // rax
  __int64 v108; // r9
  __int64 *v109; // rcx
  __int64 v110; // rax
  struct _VIDSCH_CONTEXT *v111; // rcx
  int v112; // ecx
  int v113; // ecx
  int Flink; // ecx
  KSPIN_LOCK *v115; // rbx
  struct _KEVENT *v116; // rcx
  int v117; // [rsp+20h] [rbp-E0h]
  unsigned int v118; // [rsp+50h] [rbp-B0h]
  BOOL v119; // [rsp+58h] [rbp-A8h]
  _VIDSCH_SYNC_POINT *v120; // [rsp+58h] [rbp-A8h]
  __int64 v121; // [rsp+60h] [rbp-A0h]
  _QWORD *v122; // [rsp+60h] [rbp-A0h]
  unsigned int v123; // [rsp+68h] [rbp-98h]
  __int64 v124; // [rsp+70h] [rbp-90h]
  _QWORD *v125; // [rsp+78h] [rbp-88h]
  _QWORD *v126; // [rsp+78h] [rbp-88h]
  _QWORD *v127; // [rsp+80h] [rbp-80h]
  _QWORD *v128; // [rsp+80h] [rbp-80h]
  __int64 v129; // [rsp+90h] [rbp-70h]
  __int64 v130; // [rsp+A8h] [rbp-58h]
  VIDMM_GLOBAL *v131; // [rsp+B0h] [rbp-50h]
  _QWORD *v132; // [rsp+B8h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE v133; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D8h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE v135; // [rsp+F0h] [rbp-10h] BYREF
  struct _KLOCK_QUEUE_HANDLE v136; // [rsp+108h] [rbp+8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v137; // [rsp+120h] [rbp+20h] BYREF
  struct _KLOCK_QUEUE_HANDLE v138; // [rsp+138h] [rbp+38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v139; // [rsp+150h] [rbp+50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v140; // [rsp+168h] [rbp+68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v141; // [rsp+180h] [rbp+80h] BYREF
  struct _KLOCK_QUEUE_HANDLE v142; // [rsp+198h] [rbp+98h] BYREF
  __int64 v143; // [rsp+1F0h] [rbp+F0h]
  ULONG v144; // [rsp+1F0h] [rbp+F0h]
  bool v145; // [rsp+1F0h] [rbp+F0h]
  _QWORD *v146; // [rsp+1F0h] [rbp+F0h]
  _VIDSCH_SYNC_POINT *v147; // [rsp+1F0h] [rbp+F0h]
  char v149; // [rsp+200h] [rbp+100h]
  KIRQL v150; // [rsp+220h] [rbp+120h]

  v149 = a3;
  v7 = a4;
  v123 = a4;
  v9 = a3;
  if ( a7 )
    *a7 = 0;
  if ( !*(_DWORD *)(a1 + 956) )
    return 0LL;
  v10 = a2;
  v124 = a2;
  v11 = *(_QWORD *)(a1 + 8LL * a2 + 2968);
  v130 = v11;
  v12 = *(_QWORD *)(v11 + 8 * v9 + 24);
  v129 = v12;
  if ( !v12 )
    return 0LL;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v118 = 0;
  while ( 2 )
  {
    v16 = 1LL;
    v17 = 4673;
    v18 = 0LL;
    v19 = v12 + 1224LL * v7;
    v20 = *(_DWORD *)(v19 + 1100);
    if ( v20 > 0xC || !_bittest(&v17, v20) )
      v18 = *(_QWORD *)(*(_QWORD *)(v19 + 56) + 104LL);
    v21 = a6;
    v119 = 1;
    if ( a6 )
    {
      if ( a6 == 6 || a6 == 9 )
      {
        if ( v20 <= 0xC )
        {
          v71 = 4673;
          if ( _bittest(&v71, v20) )
            v16 = 0LL;
        }
        if ( a6 == 9 )
        {
          v119 = v20 == 5;
        }
        else if ( v20 == 5 )
        {
          v16 = 0LL;
        }
        if ( v20 - 7 <= 1 )
        {
          if ( *(_BYTE *)(v19 + 1113) )
            ++*(_QWORD *)(v18 + 8 * v10 + 336);
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 964));
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 2272));
          if ( *(_DWORD *)(v19 + 1100) == 8 && !*(_BYTE *)(v19 + 1113) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v18 + 4 * v10 + 996));
            v74 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 40) + 24LL)
                                        + 8LL * *(unsigned int *)(*(_QWORD *)(v18 + 32) + 4LL))
                            + 8 * v10
                            + 520);
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 8 * v10 + 5504) + 8LL));
            _InterlockedIncrement((volatile signed __int32 *)(v74 + 8));
            _InterlockedIncrement((volatile signed __int32 *)(a1 + 952));
            _InterlockedIncrement((volatile signed __int32 *)(v18 + 1124));
            _InterlockedIncrement((volatile signed __int32 *)(v18 + 4 * v10 + 1060));
            v12 = v129;
          }
        }
      }
      else
      {
        if ( a6 != 12 )
          goto LABEL_48;
        if ( v20 - 2 > 1 )
        {
          if ( v20 == 5 && (*(_DWORD *)(v19 + 1164) & 0x20) != 0 && a7 )
            *a7 = 1;
          goto LABEL_48;
        }
        v16 = (*(_DWORD *)(v19 + 1164) >> 5) & 1;
        if ( ((*(_DWORD *)(v19 + 1164) >> 5) & 1) == 0 )
          goto LABEL_48;
        *(_DWORD *)(v12 + 40) = ((_BYTE)v7 + 1) & 0x3F;
      }
      if ( !(_DWORD)v16 )
        goto LABEL_48;
    }
    else if ( v20 - 10 > 1 )
    {
      goto LABEL_48;
    }
    if ( *(_DWORD *)(v19 + 1100) == 1 )
    {
      --*(_DWORD *)(a1 + 960);
      --*(_DWORD *)(v11 + 2268);
    }
    v22 = *(_QWORD *)(v19 + 1192);
    *(_DWORD *)(v19 + 1100) = a6;
    v121 = v22;
    if ( v22 )
    {
      v23 = *(_QWORD *)(v19 + 1200);
      v143 = v23;
      if ( v23 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v23 + 16), &v133);
        v80 = v143;
        v81 = *(CRefCountedBuffer **)(v143 + 8);
        if ( v81 )
        {
          CRefCountedBuffer::RefCountedBufferRelease(v81);
          v80 = v143;
        }
        *(_QWORD *)(v80 + 8) = v121;
        _InterlockedIncrement((volatile signed __int32 *)(v121 + 4));
        KeReleaseInStackQueuedSpinLock(&v133);
        v21 = a6;
        *(_QWORD *)(v19 + 1200) = 0LL;
      }
      v24 = *(volatile signed __int32 **)(v19 + 1192);
      if ( _InterlockedExchangeAdd(v24 + 1, 0xFFFFFFFF) == 1 )
      {
        ExFreePoolWithTag((PVOID)v24, 0);
        v21 = a6;
      }
      *(_QWORD *)(v19 + 1192) = 0LL;
    }
    if ( !v21 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 1864), &LockHandle);
      if ( (*(_DWORD *)(v19 + 1164) & 0x20) == 0 )
        *(_DWORD *)(*(_QWORD *)(v11 + 16) + 4 * v124 + 468) = *(_DWORD *)(v19 + 1104);
      *(_DWORD *)(*(_QWORD *)(v11 + 16) + 4 * v124 + 532) = *(_DWORD *)(v19 + 1160);
      *(_QWORD *)(*(_QWORD *)(v11 + 16) + 8 * v124 + 600) = *(_QWORD *)(v19 + 1144);
      *(_QWORD *)(*(_QWORD *)(v11 + 16) + 8 * v124 + 728) = *(_QWORD *)(v19 + 1152);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v21 = a6;
    }
    if ( (*(_DWORD *)(v19 + 1164) & 0x20) == 0 )
      goto LABEL_23;
    v75 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v19 + 1184);
    if ( !v75 )
      goto LABEL_23;
    v145 = 1;
    if ( v21 )
    {
      if ( v21 != 9 )
      {
        if ( v21 == 6 )
        {
          LOBYTE(v117) = 0;
          VidSchiPropagatePresentHistoryToken(
            *(PKSPIN_LOCK *)(v19 + 1176),
            v75,
            1,
            (*(_DWORD *)(v19 + 1164) & 0x40) != 0,
            v117,
            *(_QWORD *)(v19 + 1200),
            *(_QWORD *)(v19 + 1192),
            0LL);
          goto LABEL_128;
        }
        goto LABEL_127;
      }
      if ( !v119 )
LABEL_127:
        v145 = 0;
    }
LABEL_128:
    LOBYTE(v117) = 0;
    VidSchiPropagatePresentHistoryToken(
      *(PKSPIN_LOCK *)(v19 + 1176),
      *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v19 + 1184),
      v145,
      (*(_DWORD *)(v19 + 1164) & 0x40) != 0,
      v117,
      *(_QWORD *)(v19 + 1200),
      *(_QWORD *)(v19 + 1192),
      0LL);
    if ( a6 && bTracingEnabled )
    {
      if ( v18 )
      {
        v77 = *(_QWORD *)(v18 + 8);
        v76 = *(_DWORD *)(a1 + 2144);
        if ( !v77 )
          LODWORD(v77) = v18;
      }
      else
      {
        LOBYTE(v76) = 0;
        LODWORD(v77) = 0;
      }
      v78 = *(_QWORD *)(v19 + 1208);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v82 = *(_DWORD *)(v78 + 4) * ((8 * *(_DWORD *)(v78 + 8) + 167) & 0xFFFFFFF8);
        Template_pxqqpqx(
          v82,
          v77,
          v78,
          *(_QWORD *)(a1 + 16),
          *(_QWORD *)(v82 + v78 + 40),
          a2,
          *(_DWORD *)(v19 + 1104),
          v77,
          v76,
          v149);
      }
    }
LABEL_23:
    v25 = RtlNumberOfSetBitsUlongPtr((unsigned __int8)**(_DWORD **)(v19 + 1208));
    v26 = *(_DWORD *)(v19 + 1116);
    v27 = 0;
    v28 = *(_DWORD *)(v19 + 1120);
    v144 = v25;
    if ( v26 )
    {
      v29 = *(_QWORD *)(v19 + 1208);
      do
      {
        if ( (v26 & 1) != 0 )
        {
          if ( (v28 & 1) != 0 )
          {
            v30 = 0;
            while ( v30 < v144 )
            {
              v31 = v30 + v27 * *(_DWORD *)(v29 + 4);
              ++v30;
              v32 = *(_QWORD *)(((8 * *(_DWORD *)(v29 + 8) + 167) & 0xFFFFFFF8) * *(_DWORD *)(v29 + 4)
                              + v29
                              + 48 * (v31 + 1));
              v33 = *(_QWORD *)(v32 + 96);
              _InterlockedDecrement((volatile signed __int32 *)(v32 + 104));
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v33 + 16) + 8LL));
            }
          }
          ++v27;
        }
        v28 >>= 1;
        v26 >>= 1;
      }
      while ( v26 );
      v11 = v130;
      v14 = v118;
    }
    if ( !v18 )
      goto LABEL_36;
    v34 = *(_QWORD *)(v18 + 32);
    v131 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v34 + 8) + 408LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v34 + 1888), &v135);
    v36 = (_QWORD **)(v34 + 1920);
    v37 = *v36;
    if ( *v36 != v36 )
    {
      do
      {
        v146 = (_QWORD *)*v37;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v35, (__int64)(v37 - 27)) )
        {
          v85 = *v83;
          v86 = (_QWORD *)v83[1];
          if ( *(_QWORD **)(*v83 + 8LL) != v83 || (_QWORD *)*v86 != v83 )
            __fastfail(3u);
          *v86 = v85;
          *(_QWORD *)(v85 + 8) = v86;
          VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v83 - 26), (struct VIDMM_ALLOC *)(v83 - 27));
          v84 = v146;
        }
        v37 = v84;
      }
      while ( v84 != v36 );
    }
    KeReleaseInStackQueuedSpinLock(&v135);
    v38 = *(_VIDSCH_SYNC_POINT **)(v18 + 1160);
    if ( v38 == (_VIDSCH_SYNC_POINT *)(v18 + 1160) )
      goto LABEL_35;
    while ( 1 )
    {
      v87 = v38;
      v120 = v38;
      v38 = *(_VIDSCH_SYNC_POINT **)v38;
      v147 = v38;
      v88 = *((_QWORD *)v87 + 2);
      if ( v88 > *(_QWORD *)(v18 + 1152) )
        break;
LABEL_162:
      v93 = (_QWORD *)*((_QWORD *)v87 + 11);
      v94 = (_QWORD *)((char *)v87 + 88);
      v122 = (_QWORD *)((char *)v87 + 88);
      if ( v93 != (_QWORD *)((char *)v87 + 88) )
      {
        do
        {
          v95 = v93 - 29;
          v96 = v93;
          v127 = (_QWORD *)*v93;
          v97 = *v93;
          v98 = (_QWORD *)v95[30];
          v125 = v95;
          if ( *(_QWORD **)(v97 + 8) != v95 + 29 || (_QWORD *)*v98 != v96 )
            __fastfail(3u);
          *v98 = v97;
          *(_QWORD *)(v97 + 8) = v98;
          VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v95);
          v93 = v127;
          v94 = v122;
          v125[29] = 0LL;
          v125[30] = 0LL;
        }
        while ( v127 != v122 );
        v38 = v147;
        v87 = v120;
      }
      v99 = (_QWORD *)*((_QWORD *)v87 + 9);
      v100 = (_QWORD *)((char *)v87 + 72);
      v126 = (_QWORD *)((char *)v87 + 72);
      if ( v99 != (_QWORD *)((char *)v87 + 72) )
      {
        do
        {
          v128 = v99 - 27;
          v101 = (_QWORD *)*v99;
          v102 = (_QWORD *)v99[1];
          v132 = (_QWORD *)*v99;
          if ( *(_QWORD **)(*v99 + 8LL) != v99 || (_QWORD *)*v102 != v99 )
            __fastfail(3u);
          *v102 = v101;
          v101[1] = v102;
          if ( (unsigned int)VidSchiCheckConditionDeviceCommand((__int64)v102, (__int64)(v99 - 27)) )
          {
            VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v131, v103);
          }
          else
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v18 + 32) + 1888LL), &v136);
            v104 = *(_QWORD *)(v18 + 32) + 1920LL;
            v105 = *(_QWORD **)(*(_QWORD *)(v18 + 32) + 1928LL);
            if ( *v105 != v104 )
              __fastfail(3u);
            v128[27] = v104;
            v128[28] = v105;
            *v105 = v128 + 27;
            *(_QWORD *)(v104 + 8) = v128 + 27;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v136);
          }
          v100 = v126;
          v99 = v132;
        }
        while ( v132 != v126 );
        v38 = v147;
        v87 = v120;
        v94 = v122;
      }
      if ( (_QWORD *)*v100 == v100 && (_QWORD *)*v94 == v94 )
      {
        v106 = *(_VIDSCH_SYNC_POINT **)v87;
        v107 = (_VIDSCH_SYNC_POINT **)*((_QWORD *)v87 + 1);
        if ( *(_VIDSCH_SYNC_POINT **)(*(_QWORD *)v87 + 8LL) != v87 || *v107 != v87 )
          __fastfail(3u);
        v42 = bTracingEnabled == 0;
        *v107 = v106;
        *((_QWORD *)v106 + 1) = v107;
        if ( !v42 )
        {
          v108 = *(_QWORD *)(v18 + 8);
          if ( !v108 )
            v108 = v18;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            Template_px(v87, v106, v99, v108, *((_QWORD *)v87 + 2));
            v87 = v120;
          }
        }
        _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v87, (unsigned int)v106);
        v38 = v147;
      }
      if ( v38 == (_VIDSCH_SYNC_POINT *)(v18 + 1160) )
        goto LABEL_35;
    }
    v89 = *((_DWORD *)v87 + 16);
    v90 = 0;
    if ( !v89 )
    {
LABEL_161:
      *(_QWORD *)(v18 + 1152) = v88;
      goto LABEL_162;
    }
    v91 = *((_QWORD *)v87 + 3);
    while ( 1 )
    {
      v92 = *(_QWORD *)(v91 + 16LL * v90);
      if ( v92 )
      {
        if ( *(_QWORD *)(v92 + 152) < *(_QWORD *)(v91 + 16LL * v90 + 8) )
          break;
      }
      if ( ++v90 >= v89 )
        goto LABEL_161;
    }
LABEL_35:
    v14 = v118;
LABEL_36:
    for ( i = 0; i < *(_DWORD *)(v19 + 1128); --*(_DWORD *)(*(_QWORD *)(v19 + 8 * v40 + 56) + 792LL) )
      v40 = i++;
    v118 = ++v14;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 1124), 0xFFFFFFFF);
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 952), 0xFFFFFFFF);
    _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 4 * v124 + 1060), 0xFFFFFFFF);
    if ( (*(_DWORD *)(v19 + 1164) & 0x10) != 0 )
      v41 = (unsigned __int8)**(_DWORD **)(v19 + 1208) | (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v19 + 1208) + 1LL);
    else
      v41 = (unsigned int)((1 << *(_DWORD *)(a1 + 128)) - 1);
    v42 = !_BitScanForward((unsigned int *)&v43, v41);
    v16 = (unsigned int)v41;
    if ( v42 )
      LOBYTE(v43) = -1;
    if ( (_DWORD)v41 )
    {
      do
      {
        --*(_DWORD *)(272LL * (char)v43 + *(_QWORD *)(a1 + 8 * v124 + 2968) + 164);
        v16 = ~(1 << v43) & (unsigned int)v16;
        v42 = !_BitScanForward((unsigned int *)&v43, v16);
        if ( v42 )
          LOBYTE(v43) = -1;
      }
      while ( (_DWORD)v16 );
    }
    v15 |= v41;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 4 * v124 + 996), 0xFFFFFFFF);
    --*(_DWORD *)(v18 + 1128);
    v44 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v124 + 2968) + 18872LL);
    if ( (_DWORD)v44 != -1 )
    {
      v79 = *(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a1 + 2848);
      if ( v79 )
        v79(*(_QWORD *)(a1 + 2896), v44, v41, v16);
    }
    v12 = v129;
    v7 = v123;
    *(_DWORD *)(v129 + 52) = v123;
LABEL_48:
    if ( v7 != a5 )
    {
      v10 = v124;
      v7 = ((_BYTE)v7 + 1) & 0x3F;
      v123 = v7;
      continue;
    }
    break;
  }
  if ( v14 )
  {
    v42 = !_BitScanForward((unsigned int *)&v45, v15);
    if ( v42 )
      LOBYTE(v45) = -1;
    if ( v15 )
    {
      do
      {
        if ( *(_DWORD *)(272LL * (char)v45 + v11 + 156) == 1 )
          VidSchiTryEnterIndependentFlip(a1, a2, (unsigned int)(char)v45, v16);
        v15 &= ~(1 << v45);
        v42 = !_BitScanForward((unsigned int *)&v45, v15);
        if ( v42 )
          LOBYTE(v45) = -1;
      }
      while ( v15 );
      v13 = 0;
    }
    v14 = v118;
  }
  *(_DWORD *)(a1 + 956) -= v14;
  *(_DWORD *)(v11 + 2264) -= v14;
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 964), -v14);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 2272), -v14);
  if ( !a6
    && _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 46912), 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)(a1 + 2064), 1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + 24LL));
    *(_QWORD *)(a1 + 2024) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 2032), CriticalWorkQueue);
  }
  v46 = *(_QWORD *)(v11 + 16);
  if ( v46 )
  {
    v47 = *(_QWORD **)(v46 + 64);
    v48 = (_QWORD *)(v46 + 64);
    for ( j = 0; v47 != v48; j |= v51 )
    {
      v50 = v47 - 3;
      v51 = 0;
      if ( (v47[19] & 0x10) != 0 )
      {
        *((_DWORD *)v50 + 44) &= ~0x10u;
        v51 = (unsigned __int8)VidSchiUnwaitContext(v50, 18639LL);
      }
      v47 = (_QWORD *)*v47;
    }
    v52 = 0;
    v53 = (__int64 **)(v11 + 46896);
    while ( *v53 != (__int64 *)v53 )
    {
      v109 = *v53;
      v110 = **v53;
      if ( (__int64 **)(*v53)[1] != v53 || *(__int64 **)(v110 + 8) != v109 )
        __fastfail(3u);
      *v53 = (__int64 *)v110;
      v111 = (struct _VIDSCH_CONTEXT *)(v109 - 5);
      *(_QWORD *)(v110 + 8) = v53;
      *((_QWORD *)v111 + 5) = 0LL;
      *((_QWORD *)v111 + 6) = 0LL;
      v52 |= VidSchiUpdateFlipContextStatus(v111);
    }
    v13 = j | v52;
    v14 = v118;
  }
  v54 = *(_QWORD **)(v11 + 16);
  if ( v54 )
  {
    v55 = v54[4];
    v56 = (struct _KEVENT *)(v54 + 12);
    v150 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v55 + 1872), &v137);
    v57 = (struct _KEVENT *)v54[12];
    if ( *(struct _KEVENT **)&v56->Header.Lock == v56 )
    {
LABEL_72:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v137);
      KeLowerIrql(v150);
      v58 = (struct _KEVENT **)(v54 + 14);
      v59 = KfRaiseIrql(2u);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v55 + 1872), &v138);
      v60 = *v58;
      if ( *v58 == (struct _KEVENT *)v58 )
      {
LABEL_73:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v138);
        KeLowerIrql(v59);
        v61 = (struct _KEVENT *)(v55 + 1816);
        v62 = KfRaiseIrql(2u);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v55 + 1872), &v139);
        v63 = *(struct _KEVENT **)(v55 + 1816);
        if ( *(struct _KEVENT **)&v61->Header.Lock == v61 )
        {
LABEL_74:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v139);
          KeLowerIrql(v62);
          v64 = (struct _KEVENT *)(v55 + 1800);
          v65 = KfRaiseIrql(2u);
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v55 + 1872), &v140);
          v66 = *(struct _KEVENT **)(v55 + 1800);
          if ( *(struct _KEVENT **)&v64->Header.Lock == v64 )
          {
LABEL_75:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v140);
            KeLowerIrql(v65);
            *(_QWORD *)(v55 + 1648) = MEMORY[0xFFFFF78000000320];
            KeSetEvent((PRKEVENT)(v55 + 1616), 0, 0);
            *(_QWORD *)(v55 + 1760) = MEMORY[0xFFFFF78000000320];
            KeSetEvent((PRKEVENT)(v55 + 1728), 0, 0);
            if ( v13 )
            {
              *(_QWORD *)(v55 + 1368) = MEMORY[0xFFFFF78000000320];
              KeSetEvent((PRKEVENT)(v55 + 1336), 0, 0);
            }
            v67 = (struct _KEVENT *)(v55 + 1832);
            v68 = KfRaiseIrql(2u);
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v55 + 1872), &v141);
            v69 = *(struct _KEVENT **)(v55 + 1832);
            if ( *(struct _KEVENT **)&v67->Header.Lock == v67 )
            {
LABEL_78:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v141);
              KeLowerIrql(v68);
              if ( *(_WORD *)(v11 + 18740) )
              {
                v115 = *(KSPIN_LOCK **)(v55 + 1848);
                KeAcquireInStackQueuedSpinLock(v115, &v142);
                v116 = (struct _KEVENT *)v115[1];
                if ( v116 )
                  KeSetEvent(v116, 0, 0);
                KeReleaseInStackQueuedSpinLock(&v142);
              }
              return v118;
            }
            while ( 2 )
            {
              if ( LODWORD(v69->Header.WaitListHead.Blink) == 4 )
              {
                if ( *(_DWORD *)(*(_QWORD *)&v69[1].Header.Lock + 4LL * LODWORD(v69[1].Header.WaitListHead.Blink) + 996) < *(_DWORD *)(*(_QWORD *)&v69[1].Header.Lock + 204LL) )
                  goto LABEL_218;
              }
              else if ( ((__int64)v69[1].Header.WaitListHead.Flink & 4) == 0
                     || (Flink = (int)v69[1].Header.WaitListHead.Blink->Flink,
                         (HIDWORD(v69[5].Header.WaitListHead.Blink) = Flink) == 0) )
              {
LABEL_218:
                ++v69[5].Header.LockNV;
                KeSetEvent(v69 + 4, 0, 0);
              }
              v69 = *(struct _KEVENT **)&v69->Header.Lock;
              if ( v69 == v67 )
                goto LABEL_78;
              continue;
            }
          }
          while ( 2 )
          {
            if ( LODWORD(v66->Header.WaitListHead.Blink) == 4 )
            {
              if ( *(_DWORD *)(*(_QWORD *)&v66[1].Header.Lock + 4LL * LODWORD(v66[1].Header.WaitListHead.Blink) + 996) >= *(_DWORD *)(*(_QWORD *)&v66[1].Header.Lock + 204LL) )
                goto LABEL_101;
            }
            else if ( ((__int64)v66[1].Header.WaitListHead.Flink & 4) != 0 )
            {
              v72 = (int)v66[1].Header.WaitListHead.Blink->Flink;
              HIDWORD(v66[5].Header.WaitListHead.Blink) = v72;
              if ( v72 )
              {
LABEL_101:
                v66 = *(struct _KEVENT **)&v66->Header.Lock;
                if ( v66 == v64 )
                  goto LABEL_75;
                continue;
              }
            }
            break;
          }
          ++v66[5].Header.LockNV;
          KeSetEvent(v66 + 4, 0, 0);
          goto LABEL_101;
        }
        while ( 2 )
        {
          if ( LODWORD(v63->Header.WaitListHead.Blink) == 4 )
          {
            if ( *(_DWORD *)(*(_QWORD *)&v63[1].Header.Lock + 4LL * LODWORD(v63[1].Header.WaitListHead.Blink) + 996) < *(_DWORD *)(*(_QWORD *)&v63[1].Header.Lock + 204LL) )
              goto LABEL_106;
          }
          else if ( ((__int64)v63[1].Header.WaitListHead.Flink & 4) == 0
                 || (v73 = (int)v63[1].Header.WaitListHead.Blink->Flink,
                     (HIDWORD(v63[5].Header.WaitListHead.Blink) = v73) == 0) )
          {
LABEL_106:
            ++v63[5].Header.LockNV;
            KeSetEvent(v63 + 4, 0, 0);
          }
          v63 = *(struct _KEVENT **)&v63->Header.Lock;
          if ( v63 == v61 )
            goto LABEL_74;
          continue;
        }
      }
      while ( 2 )
      {
        if ( LODWORD(v60->Header.WaitListHead.Blink) == 4 )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v60[1].Header.Lock + 4LL * LODWORD(v60[1].Header.WaitListHead.Blink) + 996) < *(_DWORD *)(*(_QWORD *)&v60[1].Header.Lock + 204LL) )
            goto LABEL_206;
        }
        else if ( ((__int64)v60[1].Header.WaitListHead.Flink & 4) == 0
               || (v113 = (int)v60[1].Header.WaitListHead.Blink->Flink,
                   (HIDWORD(v60[5].Header.WaitListHead.Blink) = v113) == 0) )
        {
LABEL_206:
          ++v60[5].Header.LockNV;
          KeSetEvent(v60 + 4, 0, 0);
        }
        v60 = *(struct _KEVENT **)&v60->Header.Lock;
        if ( v60 == (struct _KEVENT *)v58 )
          goto LABEL_73;
        continue;
      }
    }
    while ( 2 )
    {
      if ( LODWORD(v57->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v57[1].Header.Lock + 4LL * LODWORD(v57[1].Header.WaitListHead.Blink) + 996) < *(_DWORD *)(*(_QWORD *)&v57[1].Header.Lock + 204LL) )
          goto LABEL_83;
      }
      else if ( ((__int64)v57[1].Header.WaitListHead.Flink & 4) == 0
             || (v112 = (int)v57[1].Header.WaitListHead.Blink->Flink,
                 (HIDWORD(v57[5].Header.WaitListHead.Blink) = v112) == 0) )
      {
LABEL_83:
        ++v57[5].Header.LockNV;
        KeSetEvent(v57 + 4, 0, 0);
      }
      v57 = *(struct _KEVENT **)&v57->Header.Lock;
      if ( v57 == v56 )
        goto LABEL_72;
      continue;
    }
  }
  return v14;
}
