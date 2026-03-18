/*
 * XREFs of VidSchiProcessDpcVSyncCookie @ 0x1C00056C0
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0007B10 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C0020BE4 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0002428 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiCompletePendingFlip @ 0x1C000248C (VidSchiCompletePendingFlip.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C00031E0 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiIsExpectedVSyncCookie@@YAHPEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C00044F0 (-VidSchiIsExpectedVSyncCookie@@YAHPEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     VidSchiCompleteFlipEntry @ 0x1C00046F0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiUnwaitContext @ 0x1C000E0EC (VidSchiUnwaitContext.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0011664 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00127F8 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00128D0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0014708 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C00148AC (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0014A70 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     Template_pqXR1qqqXR5 @ 0x1C001FD20 (Template_pqXR1qqqXR5.c)
 *     Template_pqxqqipqx @ 0x1C00206CC (Template_pqxqqipqx.c)
 *     Template_px @ 0x1C0020A14 (Template_px.c)
 *     Template_qqqq @ 0x1C0020B58 (Template_qqqq.c)
 *     VidSchiRestartQueuedFlip @ 0x1C0021AFC (VidSchiRestartQueuedFlip.c)
 */

__int64 (__fastcall *__fastcall VidSchiProcessDpcVSyncCookie(struct _VIDSCH_VSYNC_COOKIE *a1))(_QWORD, _QWORD)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rsi
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax
  __int64 v4; // r14
  struct _VIDSCH_VSYNC_COOKIE *v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r12
  unsigned __int64 v8; // r9
  unsigned int v9; // edx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 m; // r8
  unsigned int v16; // r13d
  __int64 v17; // rsi
  char v18; // cc
  __int64 v19; // r13
  __int64 v20; // rbx
  __int64 v21; // r14
  signed __int64 v22; // rcx
  signed __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  bool v26; // zf
  int v27; // edx
  int v28; // eax
  __int64 v29; // rdx
  int v30; // edx
  char v31; // r8
  int v32; // r13d
  unsigned int v33; // r14d
  int v34; // eax
  char v35; // dl
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // r15
  __int64 v39; // rsi
  __int64 v40; // rdx
  _QWORD *v41; // r13
  _QWORD *v42; // rbx
  __int64 v43; // rcx
  _QWORD *v44; // rdi
  _QWORD *v45; // r10
  _QWORD *v46; // rbx
  _QWORD *v47; // r10
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  unsigned int *v52; // r12
  unsigned int *v53; // r15
  __int64 v54; // r11
  unsigned int v55; // r9d
  __int64 v56; // r10
  unsigned int *v57; // rdi
  unsigned int *i; // r14
  unsigned int *v59; // rsi
  _QWORD *v60; // rbx
  __int64 v61; // rcx
  _QWORD *v62; // rax
  unsigned int *v63; // rdi
  unsigned int *v64; // rsi
  unsigned int *v65; // r10
  __int64 *v66; // rbx
  __int64 v67; // rcx
  __int64 **v68; // rax
  struct VIDMM_ALLOC *v69; // r10
  __int64 v70; // rax
  __int64 **v71; // rcx
  __int64 v72; // rcx
  unsigned int **v73; // rax
  _QWORD *v74; // r9
  __int64 v75; // rcx
  __int64 v76; // r8
  _QWORD *v77; // rdx
  unsigned int v78; // eax
  __int64 v79; // rdi
  int v80; // r15d
  _QWORD **v81; // rdi
  int v82; // esi
  _QWORD *j; // rbx
  _QWORD *v84; // rcx
  int v85; // edx
  __int64 **v86; // rbx
  int v87; // r15d
  __int64 *v88; // rcx
  __int64 v89; // rax
  struct _VIDSCH_CONTEXT *v90; // rcx
  _QWORD *v91; // rsi
  __int64 v92; // r13
  struct _KEVENT *v93; // rdi
  KIRQL v94; // r14
  struct _KEVENT *v95; // rbx
  int Flink; // ecx
  struct _KEVENT **v97; // rdi
  KIRQL v98; // si
  struct _KEVENT *k; // rbx
  int v100; // ecx
  struct _KEVENT *v101; // rdi
  KIRQL v102; // si
  struct _KEVENT *v103; // rbx
  int v104; // ecx
  struct _KEVENT *v105; // rdi
  KIRQL v106; // si
  struct _KEVENT *v107; // rbx
  int v108; // ecx
  struct _KEVENT *v109; // rdi
  KIRQL v110; // si
  struct _KEVENT *v111; // rbx
  int v112; // ecx
  KSPIN_LOCK *v113; // rbx
  struct _KEVENT *v114; // rcx
  _DWORD *v115; // rax
  unsigned int v116; // esi
  int v117; // edi
  int v118; // eax
  unsigned int v119; // r9d
  char v120; // dl
  char v121; // r10
  unsigned __int64 v122; // rbx
  _QWORD *v123; // r11
  unsigned __int64 v124; // r8
  int v125; // eax
  int v126; // eax
  __int64 v127; // rdx
  int v128; // eax
  int v129; // ebx
  __int64 v130; // r10
  unsigned int v131; // edi
  __int64 v132; // rbx
  int v133; // edx
  unsigned int v134; // esi
  int v135; // edx
  int v136; // eax
  unsigned int v137; // r11d
  int v138; // r10d
  int v139; // edx
  _QWORD *v140; // rbx
  VIDMM_GLOBAL *v141; // r13
  __int64 v142; // rcx
  _QWORD *v143; // rdi
  _QWORD *v144; // r10
  _QWORD *v145; // rbx
  _QWORD *v146; // r10
  VIDMM_GLOBAL ***v147; // r11
  __int64 v148; // rcx
  _QWORD *v149; // rax
  __int64 v150; // rdx
  __int64 v151; // r8
  _VIDSCH_SYNC_POINT *v152; // r12
  __int64 v153; // r11
  _VIDSCH_SYNC_POINT *v154; // r15
  __int64 v155; // r10
  unsigned int v156; // ecx
  __int64 v157; // r9
  _QWORD *v158; // rdi
  _QWORD *n; // r14
  _QWORD *v160; // rsi
  _QWORD *v161; // rbx
  __int64 v162; // rcx
  _QWORD *v163; // rax
  _QWORD *v164; // rdi
  _QWORD *v165; // rsi
  _QWORD *v166; // r10
  __int64 *v167; // rbx
  __int64 v168; // rcx
  __int64 **v169; // rax
  struct VIDMM_ALLOC *v170; // r10
  __int64 v171; // r11
  __int64 v172; // rax
  __int64 **v173; // rcx
  _VIDSCH_SYNC_POINT *v174; // rcx
  _VIDSCH_SYNC_POINT **v175; // rax
  __int64 v176; // r9
  __int64 v177; // rbx
  unsigned int v178; // edx
  __int64 v179; // rcx
  int v180; // edx
  char v181; // al
  __int64 v182; // rcx
  unsigned int v183; // r9d
  char v184; // r10
  char ii; // r11
  int v186; // ecx
  int v187; // ecx
  unsigned int v188; // eax
  unsigned int v189; // ecx
  unsigned int v190; // ebx
  unsigned int v191; // esi
  __int64 v192; // rdi
  __int64 v193; // rax
  __int64 v194; // rbx
  int v195; // edx
  int v196; // r8d
  _QWORD *v197; // rax
  _BYTE *v198; // [rsp+20h] [rbp-80h]
  char v199; // [rsp+A0h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL;
  v2 = *((unsigned int *)a1 + 21);
  result = 0LL;
  v4 = *((_QWORD *)a1 + 6);
  *(_QWORD *)(v1 + 120) = a1;
  v5 = a1;
  *(_QWORD *)(v1 + 32) = v4;
  v6 = 0LL;
  *(_QWORD *)(v1 + 24) = 0LL;
  *(_DWORD *)(v1 + 48) = 0;
  *(_QWORD *)(v1 + 464) = 0LL;
  *(_QWORD *)(v1 + 472) = 0LL;
  *(_QWORD *)(v1 + 480) = 0LL;
  *(_QWORD *)(v1 + 488) = 0LL;
  *(_QWORD *)(v1 + 496) = 0LL;
  *(_QWORD *)(v1 + 504) = 0LL;
  *(_QWORD *)(v1 + 512) = 0LL;
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 8) = v2;
  if ( (_DWORD)v2 == -1 || (unsigned int)v2 >= *(_DWORD *)(v4 + 40) )
    return result;
  _mm_lfence();
  v7 = *(_QWORD *)(v4 + 8 * v2 + 2592);
  *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v7;
  *(_BYTE *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 0;
  *(_BYTE *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34) = 0;
  *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v2;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1824), (PKLOCK_QUEUE_HANDLE)(v1 + 384));
  v9 = *(_DWORD *)(v7 + 14720);
  if ( v9 )
  {
    v10 = (unsigned int)(*((_DWORD *)v5 + 20) - *(_DWORD *)(v7 + 14664));
    if ( *((_DWORD *)v5 + 20) != *(_DWORD *)(v7 + 14664) )
    {
      if ( v9 > 3 )
      {
        v12 = *(_QWORD *)(v7 + 14744);
        v13 = (*((_QWORD *)v5 + 7) - *(_QWORD *)(v7 + 14672)) / v10;
        v14 = *(_QWORD *)(v7 + 14728);
        *(_QWORD *)(v7 + 14760) = v13;
        if ( v13 > v14 + v12 || v13 < v14 - v12 )
        {
          ++*(_QWORD *)(v7 + 14752);
          *(_DWORD *)(v7 + 14720) = 0;
        }
      }
      else
      {
        v8 = *((_QWORD *)v5 + 7) - *(_QWORD *)(v7 + 14672) + *(_QWORD *)(v7 + 14736);
        *(_DWORD *)(v7 + 14720) = v9 + v10;
        *(_QWORD *)(v7 + 14736) = v8;
        if ( v9 + (unsigned int)v10 > 3 )
        {
          v11 = v8 / (v9 + (unsigned int)v10 - 1);
          *(_QWORD *)(v7 + 14744) = v11 / 0xA;
          _m_prefetchw((const void *)(v7 + 14728));
          while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 14728), v11, *(_QWORD *)(v7 + 14728)) != v11 )
            ;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(v7 + 14736) = 0LL;
    *(_DWORD *)(v7 + 14720) = 1;
  }
  if ( *(_DWORD *)(v7 + 14720) <= 3u )
    _InterlockedExchange((volatile __int32 *)(v4 + 1972), 1);
  *(_DWORD *)(v7 + 14664) = *((_DWORD *)v5 + 20);
  m = 0LL;
  *(_QWORD *)(v7 + 14672) = *((_QWORD *)v5 + 7);
  *(_QWORD *)(v7 + 14680) = *((_QWORD *)v5 + 8);
  *(_QWORD *)(v7 + 14688) = *((_QWORD *)v5 + 9);
  *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
  if ( !*(_DWORD *)(v4 + 124) )
    goto LABEL_272;
  v16 = 0;
  while ( 2 )
  {
    v17 = *(_QWORD *)(v7 + 8LL * v16 + 24);
    *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v17;
    if ( !v17 )
      goto LABEL_257;
    v18 = *(_DWORD *)(v7 + 4) < 4;
    *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
    if ( v18 )
      goto LABEL_214;
    v19 = *(unsigned int *)(v17 + 44);
    v20 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) = v19;
    v21 = 1160 * v19 + v17 + 56;
    *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v21;
    if ( *(_DWORD *)(v21 + 1044) != 5 )
      goto LABEL_173;
    if ( !*((_QWORD *)v5 + 13)
      && _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 42816), 3, 2) == 2
      && !_InterlockedExchange((volatile __int32 *)(v20 + 2024), 1) )
    {
      v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v20 + 16) + 24LL), 1uLL);
      v18 = (v22 + 1 < 0) ^ __OFADD__(1LL, v22) | (v22 == -1);
      v23 = v22 + 1;
      if ( v18 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v23, 3LL, m, v8);
        *(_QWORD *)(v24 + 24) = 1141LL;
        WdLogEvent5_WdAssertion(v24);
      }
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v20 + 1992), CriticalWorkQueue);
    }
    if ( *(_DWORD *)(v21 + 1044) == 5
      && (unsigned int)VidSchiIsExpectedVSyncCookie((struct VIDSCH_FLIP_QUEUE_ENTRY *)(1160 * v19 + v17 + 56), v5)
      && ((v25 = *((_DWORD *)v5 + 23)) == 0 || v25 == *(_DWORD *)(v21 + 1060)) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)v21 + 104LL);
      *(_DWORD *)(v21 + 1044) = 11;
      *(_DWORD *)(v21 + 1104) = *(_DWORD *)(v7 + 14664);
      *(_QWORD *)(v21 + 1088) = *(_QWORD *)(v7 + 14672);
      *(_QWORD *)(v21 + 1096) = *(_QWORD *)(v7 + 14680);
      v26 = (*(_BYTE *)(v21 + 1108) & 0x10) == 0;
      *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v6;
      if ( v26 )
        v27 = (1 << *(_DWORD *)(v20 + 124)) - 1;
      else
        v27 = (unsigned __int8)**(_DWORD **)(v21 + 1152) | *(unsigned __int8 *)(*(_QWORD *)(v21 + 1152) + 1LL);
      v28 = v27;
      *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v27;
      v29 = *(unsigned int *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      *(_DWORD *)(v7 + 2340) &= ~v28;
      *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64) = *(_DWORD *)(v21 + 1040);
      *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1D0 + 8 * v29) = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
      v26 = *(_DWORD *)(v7 + 4) == 5;
      *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v29 + 1;
      if ( v26 )
      {
        if ( (*(_DWORD *)(v21 + 1108) & 0x10) != 0 )
          LOWORD(v30) = *(_WORD *)(v7 + 14632) & ((unsigned __int8)**(_WORD **)(v21 + 1152) | *(unsigned __int8 *)(*(_QWORD *)(v21 + 1152) + 1LL));
        else
          LOWORD(v30) = *(_WORD *)(v7 + 14632);
        v31 = 0;
        LOWORD(v32) = 0;
        *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0;
        if ( (_WORD)v30 )
        {
          do
          {
            v33 = 0;
            v26 = !_BitScanForward((unsigned int *)&v34, (unsigned __int16)v30);
            *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = (unsigned __int16)v30;
            *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = v34;
            *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
            v35 = -1;
            if ( !v26 )
              v35 = v34;
            LOBYTE(v36) = v35;
            *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v35;
            if ( *(_WORD *)(v7 + 14634) )
            {
              v37 = (__int64)v35 << 6;
              *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v37;
              while ( 1 )
              {
                v38 = v37 + v33;
                *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v38;
                v39 = v7 + 24 * v38;
                v40 = *(_QWORD *)(v39 + 2344);
                *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v39;
                if ( _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v40 + 16) + 12LL), 0) )
                  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v40 + 16) + 8LL));
                v41 = *(_QWORD **)(v39 + 2360);
                v42 = (_QWORD *)v41[4];
                *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_QWORD *)(v42[1] + 432LL);
                KeAcquireInStackQueuedSpinLock(v42 + 232, (PKLOCK_QUEUE_HANDLE)(v1 + 168));
                v44 = v42 + 236;
                v45 = (_QWORD *)v42[236];
                if ( v45 != v42 + 236 )
                {
                  do
                  {
                    v46 = (_QWORD *)*v45;
                    if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v43, v45 - 25) )
                    {
                      v48 = *v47;
                      v49 = (_QWORD *)v47[1];
                      if ( *(_QWORD **)(*v47 + 8LL) != v47 || (_QWORD *)*v49 != v47 )
                        __fastfail(3u);
                      *v49 = v48;
                      *(_QWORD *)(v48 + 8) = v49;
                      VIDMM_GLOBAL::AddPendingTermination(
                        *(VIDMM_GLOBAL **)*(v47 - 24),
                        (struct VIDMM_ALLOC *)(v47 - 25));
                    }
                    v45 = v46;
                  }
                  while ( v46 != v44 );
                }
                KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v1 + 168));
                v52 = (unsigned int *)v41[146];
                if ( v52 == (unsigned int *)(v41 + 146) )
                  goto LABEL_83;
                while ( 1 )
                {
                  v53 = v52;
                  v52 = *(unsigned int **)v52;
                  v54 = *((_QWORD *)v53 + 2);
                  if ( v54 > v41[145] )
                    break;
LABEL_59:
                  v57 = (unsigned int *)*((_QWORD *)v53 + 11);
                  for ( i = v53 + 22; v57 != i; *((_QWORD *)v59 + 28) = 0LL )
                  {
                    v59 = v57 - 54;
                    v57 = *(unsigned int **)v57;
                    v60 = v59 + 54;
                    v61 = *((_QWORD *)v59 + 27);
                    v62 = (_QWORD *)*((_QWORD *)v59 + 28);
                    if ( *(unsigned int **)(v61 + 8) != v59 + 54 || (_QWORD *)*v62 != v60 )
                      __fastfail(3u);
                    *v62 = v61;
                    *(_QWORD *)(v61 + 8) = v62;
                    VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v59);
                    *v60 = 0LL;
                  }
                  v63 = (unsigned int *)*((_QWORD *)v53 + 9);
                  v64 = v53 + 18;
                  while ( v63 != v64 )
                  {
                    v65 = v63 - 50;
                    v63 = *(unsigned int **)v63;
                    v66 = (__int64 *)(v65 + 50);
                    v67 = *((_QWORD *)v65 + 25);
                    v68 = (__int64 **)*((_QWORD *)v65 + 26);
                    if ( *(unsigned int **)(v67 + 8) != v65 + 50 || *v68 != v66 )
                      __fastfail(3u);
                    *v68 = (__int64 *)v67;
                    *(_QWORD *)(v67 + 8) = v68;
                    if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v67, v65) )
                    {
                      VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(
                        *(VIDMM_GLOBAL **)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90),
                        v69);
                    }
                    else
                    {
                      KeAcquireInStackQueuedSpinLockAtDpcLevel(
                        (PKSPIN_LOCK)(v41[4] + 1856LL),
                        (PKLOCK_QUEUE_HANDLE)(v1 + 216));
                      v70 = v41[4] + 1888LL;
                      v71 = *(__int64 ***)(v41[4] + 1896LL);
                      *v66 = v70;
                      v66[1] = (__int64)v71;
                      if ( *v71 != (__int64 *)v70 )
                        __fastfail(3u);
                      *v71 = v66;
                      *(_QWORD *)(v70 + 8) = v66;
                      KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(v1 + 216));
                    }
                  }
                  if ( *(unsigned int **)v64 == v64 && *(unsigned int **)i == i )
                  {
                    v72 = *(_QWORD *)v53;
                    v73 = (unsigned int **)*((_QWORD *)v53 + 1);
                    if ( *(unsigned int **)(*(_QWORD *)v53 + 8LL) != v53 || *v73 != v53 )
                      __fastfail(3u);
                    v26 = bTracingEnabled == 0;
                    *v73 = (unsigned int *)v72;
                    *(_QWORD *)(v72 + 8) = v73;
                    if ( !v26 )
                    {
                      v74 = (_QWORD *)v41[1];
                      if ( !v74 )
                        v74 = v41;
                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                        Template_px(v72, v50, v51, v74, *((_QWORD *)v53 + 2));
                    }
                    _VIDSCH_SYNC_POINT::`scalar deleting destructor'((_VIDSCH_SYNC_POINT *)v53, v50);
                  }
                  if ( v52 == (unsigned int *)(v41 + 146) )
                  {
                    v39 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
                    v33 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                    v38 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
                    goto LABEL_83;
                  }
                }
                v55 = v53[16];
                v50 = 0LL;
                if ( !v55 )
                  break;
                v56 = *((_QWORD *)v53 + 3);
                while ( 1 )
                {
                  v51 = *(_QWORD *)(v56 + 16LL * (unsigned int)v50);
                  if ( v51 )
                  {
                    if ( *(_QWORD *)(v51 + 152) < *(_QWORD *)(v56 + 16LL * (unsigned int)v50 + 8) )
                      break;
                  }
                  v50 = (unsigned int)(v50 + 1);
                  if ( (unsigned int)v50 >= v55 )
                    goto LABEL_58;
                }
                v39 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
                v33 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                v38 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
LABEL_83:
                v75 = *(_QWORD *)(v39 + 2360);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v75 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                {
                  v76 = *(_QWORD *)(v75 + 88);
                  v77 = *(_QWORD **)(v75 + 96);
                  if ( *(_QWORD *)(v76 + 8) != v75 + 88 || *v77 != v75 + 88 )
                    __fastfail(3u);
                  *v77 = v76;
                  *(_QWORD *)(v76 + 8) = v77;
                  ExFreePoolWithTag((PVOID)v75, 0);
                }
                v7 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
                v37 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
                ++v33;
                *(_QWORD *)(v39 + 2344) = 0LL;
                v31 = 1;
                *(_QWORD *)(v39 + 2360) = 0LL;
                *(_QWORD *)(v7 + 24 * v38 + 2352) = 0LL;
                v78 = *(unsigned __int16 *)(v7 + 14634);
                *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v33;
                if ( v33 >= v78 )
                {
                  v36 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
                  v32 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
                  goto LABEL_89;
                }
              }
LABEL_58:
              v41[145] = v54;
              goto LABEL_59;
            }
LABEL_89:
            v30 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) & ~(1 << v36);
            v32 = (unsigned __int16)v32 | (1 << v36);
            *(_WORD *)(v7 + 14632) &= ~(1 << v36);
            *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v32;
          }
          while ( (_WORD)v30 );
          if ( v31 )
          {
            v79 = *(_QWORD *)(v7 + 16);
            if ( v79 )
            {
              v81 = (_QWORD **)(v79 + 72);
              v82 = 0;
              for ( j = *v81; j != v81; v82 |= v85 )
              {
                v84 = j - 3;
                v85 = 0;
                if ( (j[19] & 0x10) != 0 )
                {
                  *((_DWORD *)v84 + 44) &= ~0x10u;
                  v85 = (unsigned __int8)VidSchiUnwaitContext(v84, 17148LL);
                }
                j = (_QWORD *)*j;
              }
              v86 = (__int64 **)(v7 + 42800);
              v87 = 0;
              while ( *v86 != (__int64 *)v86 )
              {
                v88 = *v86;
                v89 = **v86;
                if ( (__int64 **)(*v86)[1] != v86 || *(__int64 **)(v89 + 8) != v88 )
                  __fastfail(3u);
                *v86 = (__int64 *)v89;
                v90 = (struct _VIDSCH_CONTEXT *)(v88 - 5);
                *(_QWORD *)(v89 + 8) = v86;
                *((_QWORD *)v90 + 5) = 0LL;
                *((_QWORD *)v90 + 6) = 0LL;
                v87 |= VidSchiUpdateFlipContextStatus(v90);
              }
              v80 = v82 | v87;
            }
            else
            {
              v80 = 0;
            }
            v91 = *(_QWORD **)(v7 + 16);
            if ( v91 )
            {
              v92 = v91[4];
              v93 = (struct _KEVENT *)(v91 + 13);
              v94 = KfRaiseIrql(2u);
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v92 + 1840), (PKLOCK_QUEUE_HANDLE)(v1 + 360));
              v95 = (struct _KEVENT *)v91[13];
              if ( *(struct _KEVENT **)&v93->Header.Lock != v93 )
              {
                do
                {
                  if ( LODWORD(v95->Header.WaitListHead.Blink) == 4 )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)&v95[1].Header.Lock
                                   + 4LL * LODWORD(v95[1].Header.WaitListHead.Blink)
                                   + 1000) >= *(_DWORD *)(*(_QWORD *)&v95[1].Header.Lock + 212LL) )
                      goto LABEL_112;
                  }
                  else if ( ((__int64)v95[1].Header.WaitListHead.Flink & 4) != 0 )
                  {
                    Flink = (int)v95[1].Header.WaitListHead.Blink->Flink;
                    HIDWORD(v95[5].Header.WaitListHead.Blink) = Flink;
                    if ( Flink )
                      goto LABEL_112;
                  }
                  ++v95[5].Header.LockNV;
                  KeSetEvent(v95 + 4, 0, 0);
LABEL_112:
                  v95 = *(struct _KEVENT **)&v95->Header.Lock;
                }
                while ( v95 != v93 );
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(v1 + 360));
              KeLowerIrql(v94);
              v97 = (struct _KEVENT **)(v91 + 15);
              v98 = KfRaiseIrql(2u);
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v92 + 1840), (PKLOCK_QUEUE_HANDLE)(v1 + 264));
              for ( k = *v97; k != (struct _KEVENT *)v97; k = *(struct _KEVENT **)&k->Header.Lock )
              {
                if ( LODWORD(k->Header.WaitListHead.Blink) == 4 )
                {
                  if ( *(_DWORD *)(*(_QWORD *)&k[1].Header.Lock + 4LL * LODWORD(k[1].Header.WaitListHead.Blink) + 1000) >= *(_DWORD *)(*(_QWORD *)&k[1].Header.Lock + 212LL) )
                    continue;
                }
                else if ( ((__int64)k[1].Header.WaitListHead.Flink & 4) != 0 )
                {
                  v100 = (int)k[1].Header.WaitListHead.Blink->Flink;
                  HIDWORD(k[5].Header.WaitListHead.Blink) = v100;
                  if ( v100 )
                    continue;
                }
                ++k[5].Header.LockNV;
                KeSetEvent(k + 4, 0, 0);
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(v1 + 264));
              KeLowerIrql(v98);
              v101 = (struct _KEVENT *)(v92 + 1784);
              v102 = KfRaiseIrql(2u);
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v92 + 1840), (PKLOCK_QUEUE_HANDLE)(v1 + 432));
              v103 = *(struct _KEVENT **)(v92 + 1784);
              if ( *(struct _KEVENT **)&v101->Header.Lock != v101 )
              {
                do
                {
                  if ( LODWORD(v103->Header.WaitListHead.Blink) == 4 )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)&v103[1].Header.Lock
                                   + 4LL * LODWORD(v103[1].Header.WaitListHead.Blink)
                                   + 1000) >= *(_DWORD *)(*(_QWORD *)&v103[1].Header.Lock + 212LL) )
                      goto LABEL_128;
                  }
                  else if ( ((__int64)v103[1].Header.WaitListHead.Flink & 4) != 0 )
                  {
                    v104 = (int)v103[1].Header.WaitListHead.Blink->Flink;
                    HIDWORD(v103[5].Header.WaitListHead.Blink) = v104;
                    if ( v104 )
                      goto LABEL_128;
                  }
                  ++v103[5].Header.LockNV;
                  KeSetEvent(v103 + 4, 0, 0);
LABEL_128:
                  v103 = *(struct _KEVENT **)&v103->Header.Lock;
                }
                while ( v103 != v101 );
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(v1 + 432));
              KeLowerIrql(v102);
              v105 = (struct _KEVENT *)(v92 + 1768);
              v106 = KfRaiseIrql(2u);
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v92 + 1840), (PKLOCK_QUEUE_HANDLE)(v1 + 312));
              v107 = *(struct _KEVENT **)(v92 + 1768);
              if ( *(struct _KEVENT **)&v105->Header.Lock != v105 )
              {
                do
                {
                  if ( LODWORD(v107->Header.WaitListHead.Blink) == 4 )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)&v107[1].Header.Lock
                                   + 4LL * LODWORD(v107[1].Header.WaitListHead.Blink)
                                   + 1000) >= *(_DWORD *)(*(_QWORD *)&v107[1].Header.Lock + 212LL) )
                      goto LABEL_136;
                  }
                  else if ( ((__int64)v107[1].Header.WaitListHead.Flink & 4) != 0 )
                  {
                    v108 = (int)v107[1].Header.WaitListHead.Blink->Flink;
                    HIDWORD(v107[5].Header.WaitListHead.Blink) = v108;
                    if ( v108 )
                      goto LABEL_136;
                  }
                  ++v107[5].Header.LockNV;
                  KeSetEvent(v107 + 4, 0, 0);
LABEL_136:
                  v107 = *(struct _KEVENT **)&v107->Header.Lock;
                }
                while ( v107 != v105 );
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(v1 + 312));
              KeLowerIrql(v106);
              *(_QWORD *)(v92 + 1616) = MEMORY[0xFFFFF78000000320];
              KeSetEvent((PRKEVENT)(v92 + 1584), 0, 0);
              *(_QWORD *)(v92 + 1728) = MEMORY[0xFFFFF78000000320];
              KeSetEvent((PRKEVENT)(v92 + 1696), 0, 0);
              if ( v80 )
              {
                *(_QWORD *)(v92 + 1336) = MEMORY[0xFFFFF78000000320];
                KeSetEvent((PRKEVENT)(v92 + 1304), 0, 0);
              }
              v109 = (struct _KEVENT *)(v92 + 1800);
              v110 = KfRaiseIrql(2u);
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v92 + 1840), (PKLOCK_QUEUE_HANDLE)(v1 + 408));
              v111 = *(struct _KEVENT **)(v92 + 1800);
              if ( *(struct _KEVENT **)&v109->Header.Lock != v109 )
              {
                do
                {
                  if ( LODWORD(v111->Header.WaitListHead.Blink) == 4 )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)&v111[1].Header.Lock
                                   + 4LL * LODWORD(v111[1].Header.WaitListHead.Blink)
                                   + 1000) >= *(_DWORD *)(*(_QWORD *)&v111[1].Header.Lock + 212LL) )
                      goto LABEL_146;
                  }
                  else if ( ((__int64)v111[1].Header.WaitListHead.Flink & 4) != 0 )
                  {
                    v112 = (int)v111[1].Header.WaitListHead.Blink->Flink;
                    HIDWORD(v111[5].Header.WaitListHead.Blink) = v112;
                    if ( v112 )
                      goto LABEL_146;
                  }
                  ++v111[5].Header.LockNV;
                  KeSetEvent(v111 + 4, 0, 0);
LABEL_146:
                  v111 = *(struct _KEVENT **)&v111->Header.Lock;
                }
                while ( v111 != v109 );
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(v1 + 408));
              KeLowerIrql(v110);
              v7 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
              if ( *(_WORD *)(v7 + 14636) )
              {
                v113 = *(KSPIN_LOCK **)(v92 + 1816);
                KeAcquireInStackQueuedSpinLock(v113, (PKLOCK_QUEUE_HANDLE)(v1 + 192));
                v114 = (struct _KEVENT *)v113[1];
                if ( v114 )
                  KeSetEvent(v114, 0, 0);
                KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v1 + 192));
              }
              v32 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
            }
            *(_WORD *)(v7 + 14636) &= ~(_WORD)v32;
          }
          v6 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          v21 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
        }
        LODWORD(v19) = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C);
      }
      v115 = *(_DWORD **)(v21 + 1152);
      v116 = (unsigned __int8)*v115;
      if ( (unsigned __int8)*v115 )
      {
        v117 = 0;
        do
        {
          v26 = !_BitScanForward((unsigned int *)&v118, v116);
          v119 = 0;
          *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v118;
          v120 = -1;
          if ( !v26 )
            v120 = v118;
          v121 = v120;
          if ( *(_DWORD *)(v21 + 1068) )
          {
            v122 = (unsigned __int64)(unsigned int)v120 << 6;
            do
            {
              v123 = (_QWORD *)(v7 + 24 * (v122 + v119));
              v124 = *(_QWORD *)(v21 + 1152)
                   + ((unsigned __int64)(v117 + v119 * *(_DWORD *)(*(_QWORD *)(v21 + 1152) + 4LL)) << 6);
              v123[293] = *(_QWORD *)(*(_QWORD *)(v124 + 16) + 96LL);
              v123[294] = *(_QWORD *)(v124 + 24);
              v123[295] = v6;
              v125 = *(unsigned __int16 *)(v7 + 14636);
              if ( (*(_DWORD *)(v124 + 68) & 0x800000) != 0 )
                v126 = v125 | (1 << v121);
              else
                v126 = v125 & ~(1 << v121);
              *(_WORD *)(v7 + 14636) = v126;
              v127 = v123[293];
              if ( _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v127 + 16) + 12LL)) == 1 )
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v127 + 16) + 8LL));
              _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24));
              ++v119;
            }
            while ( v119 < *(_DWORD *)(v21 + 1068) );
          }
          ++v117;
          *(_WORD *)(v7 + 14632) |= 1 << v121;
          v116 &= ~(1 << v121);
        }
        while ( v116 );
        LODWORD(v19) = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C);
        *(_WORD *)(v7 + 14634) = *(_WORD *)(v21 + 1068);
      }
      v4 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      v128 = VidSchiCompleteFlipEntry(
               v4,
               *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
               *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
               v19,
               v19,
               0,
               0LL);
      v17 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
      v129 = (unsigned __int8)*(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34);
      if ( v128 )
        v129 = 1;
      *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v128;
      v26 = *(_DWORD *)(v7 + 4) == 4;
      *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34) = v129;
      if ( v26 )
        *(_DWORD *)(v17 + 44) = ((_BYTE)v19 + 1) & 0x3F;
    }
    else
    {
LABEL_173:
      v4 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    }
    if ( *(_DWORD *)(v7 + 4) == 5 && *(_DWORD *)(v7 + 2328) )
    {
      v130 = *(unsigned int *)(v17 + 40);
      v131 = *(_DWORD *)(v17 + 40);
      v132 = 1160 * v130 + v17 + 56;
      for ( m = ((_BYTE)v130 + 1) & 0x3F; (_DWORD)m != (_DWORD)v130; m = ((_BYTE)m + 1) & 0x3F )
      {
        v8 = v17 + 1160LL * (unsigned int)m;
        if ( (unsigned int)(*(_DWORD *)(v8 + 1100) - 2) > 1 )
          break;
        v133 = (*(_BYTE *)(v8 + 1164) & 0x10) != 0
             ? (unsigned __int8)**(_DWORD **)(v8 + 1208) | *(unsigned __int8 *)(*(_QWORD *)(v8 + 1208) + 1LL)
             : (1 << *(_DWORD *)(v4 + 124)) - 1;
        if ( (v133 & *(_DWORD *)(v7 + 2340)) != 0 )
          break;
        if ( *(_BYTE *)(v8 + 1112) )
        {
          v131 = m;
          v132 = v8 + 56;
        }
      }
      if ( v131 != (_DWORD)v130 )
      {
        v16 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        v134 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        VidSchiRestartQueuedFlip(v6, v134, v16, v131);
        *(_DWORD *)(v132 + 1044) = 4;
        goto LABEL_209;
      }
      if ( (unsigned int)(*(_DWORD *)(v132 + 1044) - 2) <= 1 )
      {
        m = *(unsigned int *)(v132 + 1108);
        *(_QWORD *)(v132 + 1080) = MEMORY[0xFFFFF78000000320];
        v135 = (m & 0x10) != 0
             ? (unsigned __int8)**(_DWORD **)(v132 + 1152) | *(unsigned __int8 *)(*(_QWORD *)(v132 + 1152) + 1LL)
             : (1 << *(_DWORD *)(v4 + 124)) - 1;
        if ( (v135 & *(_DWORD *)(v7 + 2340)) == 0 )
        {
          v136 = *(_DWORD *)(v132 + 1052);
          if ( !v136 )
          {
            if ( (m & 0x80u) == 0LL )
            {
              v16 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
              v134 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            }
            else
            {
              v137 = *(_DWORD *)(v17 + 40);
              m = ((_BYTE)v137 + 1) & 0x3F;
              if ( (_DWORD)m != v137 )
              {
                do
                {
                  v8 = v17 + 1160LL * (unsigned int)m;
                  if ( *(_DWORD *)(v8 + 1100) != 2 )
                    break;
                  v138 = *(_DWORD *)(v8 + 1164);
                  v139 = (v138 & 0x10) != 0
                       ? (unsigned __int8)**(_DWORD **)(v8 + 1208) | *(unsigned __int8 *)(*(_QWORD *)(v8 + 1208) + 1LL)
                       : (1 << *(_DWORD *)(v4 + 124)) - 1;
                  if ( (v139 & *(_DWORD *)(v7 + 2340)) != 0 )
                    break;
                  v132 = v8 + 56;
                  v131 = m;
                  if ( (v138 & 0x80u) == 0 )
                    break;
                  m = ((_BYTE)m + 1) & 0x3F;
                }
                while ( (_DWORD)m != v137 );
                v6 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
              }
              v16 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
              v134 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
              if ( v131 != v137 )
              {
                *(_BYTE *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0;
                VidSchiCompleteFlipEntry(v4, v134, v16, v137, ((_BYTE)v131 - 1) & 0x3F, 6, (_BYTE *)(v1 + 12));
                *(_DWORD *)(v132 + 1044) = 4;
                goto LABEL_209;
              }
            }
            *(_DWORD *)(v132 + 1044) = 4;
LABEL_209:
            if ( *(_DWORD *)(v132 + 1044) == 4 )
            {
              v198 = (_BYTE *)(v1 + 1);
              if ( (*(_DWORD *)(v132 + 1108) & 0x100) != 0 )
                VidSchiFlipImmediateAndCompleteFlipEntry(v4, v134, v16, v131, (__int64)v198);
              else
                VidSchiExecuteMmIoFlip(v4, v134, v16, v131, v198);
            }
            goto LABEL_214;
          }
          *(_DWORD *)(v132 + 1044) = 3;
          *(_DWORD *)(v132 + 1052) = v136 - 1;
        }
      }
      v16 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      v134 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      goto LABEL_209;
    }
    v16 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
LABEL_214:
    if ( !v6 )
      goto LABEL_256;
    v140 = *(_QWORD **)(v6 + 32);
    v141 = *(VIDMM_GLOBAL **)(v140[1] + 432LL);
    KeAcquireInStackQueuedSpinLock(v140 + 232, (PKLOCK_QUEUE_HANDLE)(v1 + 240));
    v143 = v140 + 236;
    v144 = (_QWORD *)v140[236];
    if ( v144 != v140 + 236 )
    {
      do
      {
        v145 = (_QWORD *)*v144;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v142, v144 - 25) )
        {
          v148 = *v146;
          v149 = (_QWORD *)v146[1];
          if ( *(_QWORD **)(*v146 + 8LL) != v146 || (_QWORD *)*v149 != v146 )
            __fastfail(3u);
          *v149 = v148;
          *(_QWORD *)(v148 + 8) = v149;
          VIDMM_GLOBAL::AddPendingTermination(*v147[1], (struct VIDMM_ALLOC *)v147);
        }
        v144 = v145;
      }
      while ( v145 != v143 );
    }
    KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v1 + 240));
    v152 = *(_VIDSCH_SYNC_POINT **)(v6 + 1168);
    if ( v152 == (_VIDSCH_SYNC_POINT *)(v6 + 1168) )
      goto LABEL_255;
    while ( 1 )
    {
      v153 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      v154 = v152;
      v152 = *(_VIDSCH_SYNC_POINT **)v152;
      v155 = *((_QWORD *)v154 + 2);
      if ( v155 > *(_QWORD *)(v153 + 1160) )
        break;
LABEL_229:
      v158 = (_QWORD *)*((_QWORD *)v154 + 11);
      for ( n = (_QWORD *)((char *)v154 + 88); v158 != n; v160[28] = 0LL )
      {
        v160 = v158 - 27;
        v158 = (_QWORD *)*v158;
        v161 = v160 + 27;
        v162 = v160[27];
        v163 = (_QWORD *)v160[28];
        if ( *(_QWORD **)(v162 + 8) != v160 + 27 || (_QWORD *)*v163 != v161 )
          __fastfail(3u);
        *v163 = v162;
        *(_QWORD *)(v162 + 8) = v163;
        VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v160);
        *v161 = 0LL;
      }
      v164 = (_QWORD *)*((_QWORD *)v154 + 9);
      v165 = (_QWORD *)((char *)v154 + 72);
      while ( v164 != v165 )
      {
        v166 = v164 - 25;
        v164 = (_QWORD *)*v164;
        v167 = v166 + 25;
        v168 = v166[25];
        v169 = (__int64 **)v166[26];
        if ( *(_QWORD **)(v168 + 8) != v166 + 25 || *v169 != v167 )
          __fastfail(3u);
        *v169 = (__int64 *)v168;
        *(_QWORD *)(v168 + 8) = v169;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v168, v166) )
        {
          VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v141, v170);
        }
        else
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel(
            (PKSPIN_LOCK)(*(_QWORD *)(v171 + 32) + 1856LL),
            (PKLOCK_QUEUE_HANDLE)(v1 + 288));
          v172 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) + 32LL) + 1888LL;
          v173 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) + 32LL)
                              + 1896LL);
          *v167 = v172;
          v167[1] = (__int64)v173;
          if ( *v173 != (__int64 *)v172 )
            __fastfail(3u);
          *v173 = v167;
          *(_QWORD *)(v172 + 8) = v167;
          KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(v1 + 288));
        }
      }
      if ( (_QWORD *)*v165 == v165 && (_QWORD *)*n == n )
      {
        v174 = *(_VIDSCH_SYNC_POINT **)v154;
        v175 = (_VIDSCH_SYNC_POINT **)*((_QWORD *)v154 + 1);
        if ( *(_VIDSCH_SYNC_POINT **)(*(_QWORD *)v154 + 8LL) != v154 || *v175 != v154 )
          __fastfail(3u);
        v26 = bTracingEnabled == 0;
        *v175 = v174;
        *((_QWORD *)v174 + 1) = v175;
        if ( !v26 )
        {
          v176 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) + 8LL);
          if ( !v176 )
            v176 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_px(v174, v150, v151, v176, *((_QWORD *)v154 + 2));
        }
        _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v154, v150);
      }
      v6 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      if ( v152 == (_VIDSCH_SYNC_POINT *)(v6 + 1168) )
        goto LABEL_254;
    }
    v151 = *((unsigned int *)v154 + 16);
    v156 = 0;
    if ( !(_DWORD)v151 )
    {
LABEL_228:
      *(_QWORD *)(v153 + 1160) = v155;
      goto LABEL_229;
    }
    v157 = *((_QWORD *)v154 + 3);
    while ( 1 )
    {
      v150 = *(_QWORD *)(v157 + 16LL * v156);
      if ( v150 )
      {
        if ( *(_QWORD *)(v150 + 152) < *(_QWORD *)(v157 + 16LL * v156 + 8) )
          break;
      }
      if ( ++v156 >= (unsigned int)v151 )
        goto LABEL_228;
    }
    v6 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
LABEL_254:
    v4 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
LABEL_255:
    v177 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
    v8 = *(unsigned int *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    v178 = -*(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    m = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 24LL)
                              + 8LL * *(unsigned int *)(*(_QWORD *)(v6 + 32) + 4LL))
                  + 8 * v177
                  + 520);
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v4 + 8 * v177 + 5128) + 8LL), v178);
    **(_DWORD **)(v4 + 8 * v177 + 5128) += v8;
    _InterlockedExchangeAdd((volatile signed __int32 *)(m + 8), v178);
    *(_DWORD *)m += v8;
    v7 = *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    v16 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
LABEL_256:
    v5 = *(struct _VIDSCH_VSYNC_COOKIE **)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
LABEL_257:
    *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = ++v16;
    if ( v16 < *(_DWORD *)(v4 + 124) )
      continue;
    break;
  }
  LODWORD(v2) = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
LABEL_272:
  if ( bTracingEnabled )
  {
    if ( v6 )
    {
      v179 = *(_QWORD *)(v6 + 8);
      v180 = *(_DWORD *)(v4 + 2104);
      if ( !v179 )
        LODWORD(v179) = v6;
    }
    else
    {
      v180 = 0;
      LODWORD(v179) = 0;
    }
    v181 = Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      Template_pqxqqipqx(
        v179,
        v180,
        m,
        *(_QWORD *)(v4 + 16),
        *((_DWORD *)v5 + 22),
        *((_QWORD *)v5 + 13),
        *((_DWORD *)v5 + 21),
        *((_DWORD *)v5 + 20),
        *((_QWORD *)v5 + 7),
        v179,
        v180,
        *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1D0));
      v181 = Microsoft_Windows_DxgKrnlEnableBits;
    }
    v26 = *((_DWORD *)v5 + 4) == 3;
    *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x210) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x218) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x220) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x228) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x230) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x238) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x240) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x248) = 0LL;
    if ( v26 )
    {
      v182 = *((_QWORD *)v5 + 13);
      *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x210) = v182;
    }
    else
    {
      v183 = (unsigned __int8)*((_DWORD *)v5 + 24);
      v26 = !_BitScanForward((unsigned int *)&v182, v183);
      v180 = (unsigned __int8)v182;
      LOBYTE(m) = !v26;
      *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x84) = v182;
      v184 = -1;
      if ( !v26 )
        v184 = v182;
      for ( ii = 0; v183; ++ii )
      {
        LODWORD(m) = v184;
        *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x210 + 8LL * v184) = *((_QWORD *)v5
                                                                                              + 5 * ii
                                                                                              + 13);
        v180 = ~(1 << v184);
        v183 &= v180;
        v26 = !_BitScanForward((unsigned int *)&v182, v183);
        *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v186;
        LOBYTE(v180) = !v26;
        LODWORD(v182) = (unsigned __int8)v186;
        v184 = -1;
        if ( !v26 )
          v184 = v182;
      }
    }
    if ( v181 < 0 )
      Template_pqXR1qqqXR5(
        v182,
        v180,
        m,
        *(_QWORD *)(v4 + 16),
        *(_DWORD *)(v4 + 124),
        v1 + 528,
        *((_DWORD *)v5 + 21),
        *((_DWORD *)v5 + 20),
        *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
        v1 + 464);
  }
  if ( *(_BYTE *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34) )
    goto LABEL_307;
  if ( g_bVSyncEnabledForLogging || *(_BYTE *)(v4 + 45) != 1 || !*(_DWORD *)(v4 + 1984) )
    goto LABEL_308;
  if ( _InterlockedExchange((volatile __int32 *)(v4 + 1972), 0)
    || *(_DWORD *)(*(_QWORD *)(v4 + 16) + 2016LL)
    || *(_DWORD *)(v4 + 916)
    || *(_DWORD *)(v4 + 932) )
  {
LABEL_307:
    *(_DWORD *)(v4 + 1976) = 0;
    *(_DWORD *)(v4 + 1980) = -1;
    goto LABEL_308;
  }
  if ( *(_DWORD *)(v4 + 1980) == -1 )
    *(_DWORD *)(v4 + 1980) = v2;
  if ( *(_DWORD *)(v4 + 1980) == (_DWORD)v2 )
  {
    v187 = *(_DWORD *)(v4 + 1976);
    if ( v187 != -1 )
    {
      v188 = *(_DWORD *)(v4 + 1984);
      v189 = v187 + 1;
      *(_DWORD *)(v4 + 1976) = v189;
      if ( v189 == v188 )
      {
        if ( !_InterlockedExchange((volatile __int32 *)(v4 + 1968), 1) )
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 1936), CriticalWorkQueue);
      }
      else if ( v189 > v188 )
      {
        *(_DWORD *)(v4 + 1976) = v188 + 1;
      }
    }
  }
LABEL_308:
  v190 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v191 = *(_DWORD *)(v7 + 14664);
  *(_QWORD *)(v7 + 14704) = *((_QWORD *)v5 + 13);
  *(_DWORD *)(v7 + 14712) = *((_DWORD *)v5 + 23);
  v192 = *(_QWORD *)(v4 + 16);
  v193 = *(_QWORD *)(v192 + 1984);
  if ( v190 < *(_DWORD *)(v193 + 104) )
  {
    v194 = *(_QWORD *)(v193 + 136) + 1016LL * *(_QWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v194 + 848), (PKLOCK_QUEUE_HANDLE)(v1 + 336));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_qqqq(
        *(unsigned __int8 *)(v194 + 840),
        v195,
        v196,
        *(_DWORD *)(v194 + 832),
        v191,
        *(_BYTE *)(v194 + 840),
        *(_DWORD *)(v192 + 2016));
    KePulseEvent((PRKEVENT)(v194 + 800), 0, 0);
    if ( *(_QWORD *)(v194 + 824) )
    {
      *(_DWORD *)(v194 + 836) = v191;
      if ( *(_DWORD *)(v194 + 832) <= v191 )
      {
        if ( *(_BYTE *)(v194 + 840) )
        {
          *(_BYTE *)(v194 + 840) = 0;
          if ( *(_QWORD *)(v192 + 1992) )
          {
            if ( _InterlockedDecrement((volatile signed __int32 *)(v192 + 2016)) < 0 )
            {
              v197 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
              v197[3] = 275LL;
              v197[4] = 28LL;
              v197[5] = v192;
              v197[6] = *(unsigned int *)(v192 + 2016);
              v197[7] = 0LL;
              WdLogEvent5_WdCriticalError(v197);
            }
          }
        }
        KeSetEvent(*(PRKEVENT *)(v194 + 824), 0, 0);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(v1 + 336));
    v190 = *(_DWORD *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  }
  if ( *(_BYTE *)(((unsigned __int64)&v199 & 0xFFFFFFFFFFFFFFC0uLL) + 1) )
    VidSchiCompletePendingFlip(v4, v190, 9);
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(v1 + 384));
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v4 + 2504);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))result(*(_QWORD *)(v4 + 2520), v190);
  return result;
}
