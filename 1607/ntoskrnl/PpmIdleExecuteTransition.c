/*
 * XREFs of PpmIdleExecuteTransition @ 0x1400D83E0
 * Callers:
 *     PoIdle @ 0x1400D7DE0 (PoIdle.c)
 * Callees:
 *     PpmGetExitSamplingCountdown @ 0x14000A08C (PpmGetExitSamplingCountdown.c)
 *     PpmConvertTime @ 0x14000DBE4 (PpmConvertTime.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     PsGetCurrentProcess @ 0x140014200 (PsGetCurrentProcess.c)
 *     KeRemoveProcessorAffinityEx @ 0x140030B3C (KeRemoveProcessorAffinityEx.c)
 *     KeWakeProcessor @ 0x1400AFC88 (KeWakeProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400D6100 (KxWaitForSpinLockAndAcquire.c)
 *     KePrepareClockTimerForIdle @ 0x1400D6600 (KePrepareClockTimerForIdle.c)
 *     PpmUpdatePerformanceFeedback @ 0x1400D9860 (PpmUpdatePerformanceFeedback.c)
 *     KeAccumulateTicks @ 0x1400DA260 (KeAccumulateTicks.c)
 *     KeResumeClockTimerFromIdle @ 0x1400DA910 (KeResumeClockTimerFromIdle.c)
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x14014D1D0 (xHalUnmaskInterrupt.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x14015EE60 (KiSetUserTbFlushPending.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KdCallPowerHandlers @ 0x1401D1284 (KdCallPowerHandlers.c)
 *     KdPowerTransition @ 0x1401D1594 (KdPowerTransition.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401D3B08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401D3BB8 (KiReleaseSpinLockInstrumented.c)
 *     KeFlushCurrentTbImmediately @ 0x1401D5ECC (KeFlushCurrentTbImmediately.c)
 *     PpmExitCoordinatedIdleState @ 0x1401FF72C (PpmExitCoordinatedIdleState.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1402001F8 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1402005D4 (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmIdleSetSynchronizationState @ 0x1402007C8 (PpmIdleSetSynchronizationState.c)
 *     PpmIdleTransitionStall @ 0x140200924 (PpmIdleTransitionStall.c)
 *     PpmTestAndLockProcessor @ 0x14020106C (PpmTestAndLockProcessor.c)
 *     PpmUpdatePlatformIdleAccounting @ 0x140201790 (PpmUpdatePlatformIdleAccounting.c)
 *     PpmEventCoordinatedIdleTransition @ 0x14020BA44 (PpmEventCoordinatedIdleTransition.c)
 *     PpmEventEnterPlatformIdleState @ 0x14020BBBC (PpmEventEnterPlatformIdleState.c)
 */

__int64 __fastcall PpmIdleExecuteTransition(
        ULONG_PTR a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rbp
  char v8; // bl
  __int64 v9; // r15
  ULONG_PTR v10; // r10
  unsigned int v11; // esi
  ULONG_PTR v12; // r8
  _BYTE *v13; // r11
  unsigned __int16 *v14; // r13
  unsigned int v15; // esi
  __int64 v16; // rbx
  unsigned int v17; // edi
  _BYTE *v18; // rbx
  ULONG v19; // ecx
  __int64 Prcb; // rax
  unsigned __int64 v21; // rdi
  unsigned __int16 v22; // bx
  unsigned __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rsi
  __int64 v26; // rcx
  int v27; // eax
  int v28; // edi
  bool v29; // bp
  unsigned __int16 v30; // cx
  __int64 v31; // rdx
  int v32; // r9d
  char v33; // al
  unsigned __int64 v34; // rbx
  __int64 v35; // rbx
  int v36; // eax
  unsigned __int64 v37; // rbx
  __int64 v38; // rdx
  signed __int64 v39; // rax
  __int64 v40; // rbx
  bool v41; // di
  signed __int64 v42; // rsi
  int v43; // r8d
  unsigned __int16 v44; // ax
  unsigned __int64 *v45; // r9
  __int64 v46; // r10
  unsigned __int64 v47; // rdx
  int v48; // eax
  int ExitSamplingCountdown; // eax
  int v50; // eax
  unsigned __int64 v51; // rdx
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned __int8 v53; // cl
  struct _KPRCB *CurrentPrcb; // rbx
  int v55; // esi
  int v56; // eax
  __int64 v57; // rdi
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // rsi
  unsigned __int64 v61; // rbp
  unsigned __int64 v62; // rbx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rcx
  __int64 (__fastcall *v65)(__int64, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  int v66; // eax
  __int64 v67; // rbp
  __int64 v68; // rbx
  __int64 v69; // rsi
  __int64 v70; // r8
  int v71; // eax
  __int64 v72; // rbp
  __int64 v73; // rdx
  __int16 v74; // bx
  volatile unsigned __int8 DeepSleep; // bl
  char v76; // r8
  struct _KPRCB *v88; // rbx
  __int64 Number; // rax
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rax
  unsigned __int16 v92; // ax
  int v93; // ecx
  struct _KPRCB *v94; // rax
  __int64 v95; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v97; // rbp
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rbx
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rcx
  unsigned __int64 v102; // rax
  unsigned __int8 v103; // al
  int *v104; // rcx
  unsigned int v105; // esi
  __int64 v106; // r9
  unsigned int i; // ebx
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // rbx
  __int64 v111; // rdi
  unsigned __int64 v112; // rax
  __int64 v113; // rcx
  bool v114; // zf
  unsigned __int64 v115; // rax
  __int64 v116; // rcx
  unsigned __int64 v117; // rdx
  __int64 v118; // rbp
  unsigned int v119; // r14d
  __int64 v120; // rbx
  __int64 j; // r8
  unsigned __int16 v122; // di
  unsigned __int64 v123; // rsi
  unsigned __int64 v124; // rdx
  int v125; // ebp
  __int64 v126; // rbx
  __int64 v127; // r14
  unsigned __int32 v128; // eax
  unsigned __int32 v129; // r8d
  signed __int32 v130; // ecx
  unsigned __int16 v131; // r12
  __int64 v132; // rbp
  __int64 result; // rax
  unsigned __int8 v134; // [rsp+40h] [rbp-238h]
  volatile unsigned __int8 v135; // [rsp+41h] [rbp-237h]
  int v136; // [rsp+44h] [rbp-234h]
  char v137; // [rsp+48h] [rbp-230h]
  char v139; // [rsp+4Ah] [rbp-22Eh]
  char v140; // [rsp+4Bh] [rbp-22Dh]
  char v141; // [rsp+4Ch] [rbp-22Ch]
  unsigned int BugCheckParameter2; // [rsp+50h] [rbp-228h]
  char BugCheckParameter2_4; // [rsp+54h] [rbp-224h] BYREF
  ULONG_PTR v144; // [rsp+58h] [rbp-220h]
  unsigned int v145; // [rsp+60h] [rbp-218h]
  int v146; // [rsp+64h] [rbp-214h]
  __int64 v147; // [rsp+68h] [rbp-210h]
  int v148; // [rsp+70h] [rbp-208h]
  int v149; // [rsp+74h] [rbp-204h]
  unsigned int v150; // [rsp+78h] [rbp-200h]
  unsigned int v151; // [rsp+7Ch] [rbp-1FCh]
  int v152; // [rsp+80h] [rbp-1F8h] BYREF
  __int64 v153; // [rsp+88h] [rbp-1F0h]
  ULONG_PTR v154; // [rsp+98h] [rbp-1E0h]
  _DWORD v155[2]; // [rsp+A0h] [rbp-1D8h] BYREF
  LARGE_INTEGER v156; // [rsp+A8h] [rbp-1D0h]
  _BYTE *v157; // [rsp+B0h] [rbp-1C8h]
  _QWORD v158[2]; // [rsp+B8h] [rbp-1C0h] BYREF
  _QWORD v159[3]; // [rsp+C8h] [rbp-1B0h] BYREF
  int v160; // [rsp+E0h] [rbp-198h]
  int v161; // [rsp+E4h] [rbp-194h]
  _QWORD v162[3]; // [rsp+E8h] [rbp-190h] BYREF
  __int64 v163; // [rsp+100h] [rbp-178h]
  int v164; // [rsp+108h] [rbp-170h]
  int v165; // [rsp+10Ch] [rbp-16Ch]
  int v166; // [rsp+110h] [rbp-168h]
  int v167; // [rsp+114h] [rbp-164h]
  unsigned int v168; // [rsp+118h] [rbp-160h] BYREF
  __int16 v169; // [rsp+11Ch] [rbp-15Ch]
  __int16 v170; // [rsp+11Eh] [rbp-15Ah]
  __int64 v171; // [rsp+120h] [rbp-158h]
  __int64 v172; // [rsp+128h] [rbp-150h] BYREF
  int v173; // [rsp+130h] [rbp-148h]
  int v174; // [rsp+134h] [rbp-144h]
  _QWORD v175[2]; // [rsp+138h] [rbp-140h] BYREF
  _QWORD v176[2]; // [rsp+148h] [rbp-130h] BYREF
  __int128 v177; // [rsp+158h] [rbp-120h]
  _DWORD v178[66]; // [rsp+170h] [rbp-108h] BYREF
  void *retaddr; // [rsp+278h] [rbp+0h]

  v7 = *(_QWORD *)(a1 + 23808);
  v8 = a7;
  v150 = -1;
  v9 = a3;
  v152 = -1;
  v10 = a1;
  v11 = a2;
  v153 = *(_QWORD *)(v7 + 472);
  v145 = a3;
  v12 = a1 + 23872;
  v13 = (_BYTE *)(248LL * a2 + v7 + 800);
  BugCheckParameter2 = a2;
  v144 = a1;
  v156.QuadPart = 0LL;
  v149 = 0;
  v151 = 0;
  v135 = 0;
  v137 = 0;
  LOBYTE(v148) = 0;
  v139 = 0;
  v140 = 0;
  v147 = v7;
  v157 = v13;
  v141 = 0;
  v154 = a1 + 23872;
  v136 = 0;
  if ( !a7 || *(_BYTE *)(v7 + 523) || (v134 = 1, v13[245]) )
    v134 = 0;
  v146 = 3;
  if ( !*(_BYTE *)v7 )
  {
    if ( a7 )
      PpmIdleSetSynchronizationState(a1 + 23872, 1LL);
    v14 = (unsigned __int16 *)(v7 + 224);
    *(_QWORD *)(v7 + 224) = 1310721LL;
    memset((void *)(v7 + 232), 0, 0xA0uLL);
    v15 = *(_DWORD *)(v7 + 532);
    v16 = *(_QWORD *)(v7 + 536);
    v159[1] = 0LL;
    v159[2] = 0LL;
    v158[0] = 1LL;
    v159[0] = 65537LL;
    v17 = 0;
    v158[1] = v159;
    if ( v15 )
    {
      v18 = (_BYTE *)(v16 + 4);
      do
      {
        if ( *v18 != 0xFF )
        {
          v19 = *((_DWORD *)v18 - 1);
          HIDWORD(v159[0]) = (unsigned __int8)*v18;
          Prcb = KeGetPrcb(v19);
          v136 = PpmTestAndLockProcessor(Prcb, v7 + 224, v158);
          if ( v136 < 0 )
            goto LABEL_24;
        }
        ++v17;
        v18 += 8;
      }
      while ( v17 < v15 );
    }
    v21 = *(_QWORD *)(v7 + 232);
    v22 = 0;
LABEL_14:
    while ( v21 )
    {
LABEL_17:
      _BitScanForward64(&v23, v21);
      v21 &= ~(1LL << v23);
      v161 = v23;
      v24 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * v22 + (unsigned __int8)v23]);
      v162[2] = v24;
      v25 = *(_QWORD *)(v24 + 23808);
      v163 = 0LL;
      v162[0] = 0LL;
      v26 = *(_QWORD *)(v25 + 472);
      v162[1] = PopIdleTransitionTimeout;
      BYTE4(v163) = 1;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(v25 + 456))(v26) )
      {
        while ( (*(_DWORD *)(v24 + 23872) & 0xFF000000) == 0x5000000 )
        {
          PpmIdleTransitionStall(v162);
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v25 + 456))(*(_QWORD *)(v25 + 472)) )
            goto LABEL_14;
        }
        v27 = -1073741782;
        goto LABEL_23;
      }
    }
    while ( ++v22 < (unsigned int)*v14 )
    {
      v21 = *(_QWORD *)&v14[4 * v22 + 4];
      if ( v21 )
        goto LABEL_17;
    }
    v27 = 0;
LABEL_23:
    v136 = v27;
    v7 = v147;
    if ( v27 < 0 )
    {
LABEL_24:
      if ( a7 )
        PpmIdleSetSynchronizationState(v154, 0LL);
      v28 = v136;
      v146 = 1;
      v29 = 1;
      goto LABEL_201;
    }
    v10 = v144;
    v13 = v157;
    v8 = a7;
    v12 = v154;
    v11 = BugCheckParameter2;
  }
  v14 = (unsigned __int16 *)(v7 + 224);
  v30 = 0;
  v31 = *(unsigned __int16 *)(v7 + 224);
  if ( (_WORD)v31 )
  {
    while ( !*(_QWORD *)&v14[4 * v30 + 4] )
    {
      if ( ++v30 >= (unsigned __int16)v31 )
        goto LABEL_33;
    }
    *(_WORD *)(v7 + 36) |= 0x20u;
  }
LABEL_33:
  v32 = v134;
  *(_BYTE *)(v10 + 23856) = v134;
  *(_DWORD *)(v10 + 23860) = v11;
  if ( v8 )
  {
    LOBYTE(v31) = 2;
    *(_BYTE *)(v10 + 23857) = v13[242] == 0;
    PpmIdleSetSynchronizationState(v12, v31);
    v32 = v134;
  }
  v33 = *(_BYTE *)(v7 + 6);
  if ( v33 || *(_BYTE *)(v7 + 7) )
  {
    v34 = -1LL;
    v139 = 1;
    if ( v33 )
    {
      v35 = KeMaximumIncrement;
      if ( *(_QWORD *)(v7 + 504) > (unsigned __int64)KeMaximumIncrement )
        v35 = *(_QWORD *)(v7 + 504);
      v34 = a6 + KeMaximumIncrement + v35;
    }
    if ( *(_BYTE *)(v7 + 7) )
    {
      v36 = PpmCurrentProfile[174 * dword_140303D4C + 17];
      if ( v34 >= a6 + (unsigned __int64)(unsigned int)(10 * v36) )
        v34 = a6 + (unsigned int)(10 * v36);
    }
    *(_QWORD *)(v10 + 23848) = v34;
    _interlockedbittestandset64(
      (volatile signed __int32 *)(*(_QWORD *)(v10 + 1600) + 72LL),
      *(unsigned __int8 *)(v10 + 1617));
  }
  if ( v13[241] )
    goto LABEL_88;
  v37 = *(_QWORD *)(v10 + 1608);
  v38 = *(_QWORD *)(v10 + 1600);
  v137 = 1;
  _m_prefetchw((const void *)(v38 + 64));
  v39 = _InterlockedOr64((volatile signed __int64 *)(v38 + 64), v37);
  v40 = *(_QWORD *)(v10 + 23808);
  v41 = 0;
  v149 = 0;
  v42 = v39;
  if ( (_BYTE)v32 )
  {
    HIDWORD(v9) = 0;
    v149 = 1;
LABEL_56:
    v48 = *(_DWORD *)(v40 + 8);
    v41 = 0;
    if ( v48 )
      *(_DWORD *)(v40 + 8) = v48 - 1;
    if ( !*(_DWORD *)(v40 + 8) )
    {
      ExitSamplingCountdown = PpmGetExitSamplingCountdown();
      *(_DWORD *)(v40 + 8) = ExitSamplingCountdown;
      v41 = ExitSamplingCountdown != 0;
    }
    if ( v41 )
    {
      *(_BYTE *)(v40 + 3) = 1;
      if ( (_BYTE)v32 )
        *(_QWORD *)(v40 + 40) = -1LL;
    }
    goto LABEL_63;
  }
  if ( (_DWORD)v9 != -1 )
  {
    HIDWORD(v9) = 0;
    goto LABEL_56;
  }
  v43 = 0;
  v44 = *(_WORD *)(v40 + 224);
  if ( v44 )
  {
    v45 = (unsigned __int64 *)(v40 + 232);
    v46 = v44;
    do
    {
      v47 = *v45++;
      v43 += (unsigned int)((0x101010101010101LL
                           * ((((v47 - ((v47 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v47 - ((v47 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v47 - ((v47 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v47 - ((v47 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v46;
    }
    while ( v46 );
    v7 = v147;
    LOBYTE(v32) = v134;
  }
  HIDWORD(v9) = 0;
  if ( v43 == (_DWORD)KeNumberProcessors_0 - 1 )
  {
    v149 = 2;
    goto LABEL_56;
  }
LABEL_63:
  v50 = off_1402F2450();
  v51 = (unsigned int)v50;
  v136 = v50;
  if ( !*(_DWORD *)(v144 + 11672) )
  {
    if ( v50 < 0 )
      goto LABEL_65;
    if ( *(_BYTE *)v7 == 1
      && (unsigned __int8)PpmIdleRecheckCoordinatedIdleMask(
                            v7,
                            *(unsigned __int8 *)(v144 + 1616),
                            *(_QWORD *)(v144 + 1608) | v42) )
    {
      v136 = -1073741802;
      goto LABEL_65;
    }
    if ( v41 )
      *(_WORD *)(v7 + 36) |= 0x200u;
    v53 = v134;
    if ( v134 )
    {
      v141 = 1;
      _InterlockedIncrement(&PpmNonInterruptibleCount);
      CurrentPrcb = KeGetCurrentPrcb();
      v55 = KiClockTimerOwner;
      if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
      {
        off_1402F2598();
        CurrentPrcb->PendingTickFlags &= ~1u;
        v53 = v134;
      }
      if ( CurrentPrcb->Number == v55 )
        ++dword_14030DDC8;
      if ( CurrentPrcb->ClockOwner )
        CurrentPrcb->ClockOwner = 0;
    }
    if ( *(_BYTE *)(v7 + 524) )
    {
      LOBYTE(v56) = v148;
      if ( v41 )
      {
        v56 = (unsigned __int8)v148;
        if ( !v53 )
          v56 = 1;
        v148 = v56;
      }
      KePrepareClockTimerForIdle(a4, *(_QWORD *)(v7 + 504), v56);
    }
    v11 = BugCheckParameter2;
    v10 = v144;
LABEL_88:
    v57 = *(_QWORD *)(v10 + 24192);
    v9 = v178[64];
    if ( v57 )
    {
      _disable();
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(*(_QWORD *)(v10 + 24192));
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)v57, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v57);
      }
      v58 = *(_QWORD *)(v57 + 16);
      v59 = *(unsigned int *)(v57 + 12);
      if ( a5 > v58 )
      {
        *(_QWORD *)(v57 + 16) = a5;
        *(_QWORD *)(v57 + 24) += a5 - v58;
        *(_QWORD *)(v57 + 8 * v59 + 32) += a5 - v58;
      }
      *(_DWORD *)(v57 + 12) = v59 - 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v57, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v57, 0LL);
      if ( (v9 & 0x200) != 0 )
        _enable();
      v10 = v144;
    }
    *(_DWORD *)(v7 + 16) = v11;
    v60 = __rdtsc();
    if ( (*(_QWORD *)(v10 + 25320) & 0x8000000000LL) != 0 )
      v61 = __readmsr(0xDB2u);
    else
      v61 = 0LL;
    v62 = a5 - *(_QWORD *)(v10 + 23920);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 23936), v62);
    if ( (*(_QWORD *)(v10 + 25320) & 0x8000000000LL) != 0 )
    {
      v63 = PpmConvertTime(v62, v60 - *(_QWORD *)(v10 + 23888), v61 - *(_QWORD *)(v10 + 24000));
      v10 = v144;
      *(_QWORD *)(v144 + 24008) += v63;
    }
    v64 = *(_QWORD *)(v10 + 23888);
    *(_QWORD *)(v10 + 23920) = a5;
    if ( v60 > v64 )
      *(_QWORD *)(v10 + 23896) += v60 - v64;
    *(_QWORD *)(v10 + 23888) = v60;
    BugCheckParameter4 = v144;
    if ( (*(_QWORD *)(v144 + 25320) & 0x8000000000LL) != 0 )
      *(_QWORD *)(v144 + 24000) = v61;
    LOBYTE(v32) = 1;
    PpmUpdatePerformanceFeedback(BugCheckParameter4, 0, 0, v32, 0LL);
    if ( PopSnapEnergyCounters )
      PopSnapEnergyCounters(*(unsigned int *)(BugCheckParameter4 + 36), 0LL, 0LL);
    _InterlockedExchange64((volatile __int64 *)(BugCheckParameter4 + 23840), a5);
    v65 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v147 + 400);
    if ( v65 )
    {
      v66 = v65(v153, BugCheckParameter2, v145, *(unsigned int *)(v147 + 780), *(_QWORD *)(v147 + 792));
      v136 = v66;
    }
    else
    {
      v66 = v136;
    }
    if ( v66 >= 0 )
    {
      v67 = *(_QWORD *)(v147 + 792);
      v140 = 1;
      LODWORD(v68) = *(_DWORD *)(v147 + 780);
      if ( v145 != -1 )
      {
        v69 = PpmPlatformStates + 384LL * v145;
        PpmEventEnterPlatformIdleState(v145);
        if ( !qword_140328940 && v145 == dword_140328980 )
          _InterlockedCompareExchange64(&qword_140328940, MEMORY[0xFFFFF78000000008], 0LL);
        if ( a4 )
          ++*(_DWORD *)(*(_QWORD *)(PpmPlatformStates + 48) + 8LL);
        if ( *(_BYTE *)(v69 + 112) )
        {
          KdPowerTransition(2147483652LL);
          KdCallPowerHandlers(4LL);
        }
        BugCheckParameter4 = v144;
      }
      if ( (_DWORD)v68 )
      {
        if ( *(_BYTE *)(PpmPlatformStates + 12) && (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
        {
          v172 = v67;
          v173 = 4 * v68;
          v174 = 0;
          EtwTraceKernelEvent((int)&v172, 1, 0x40008000u, 4671, 1538);
        }
        do
        {
          v68 = (unsigned int)(v68 - 1);
          v70 = 384LL * *(unsigned int *)(v67 + 4 * v68) + PpmPlatformStates + 64;
          *(_QWORD *)(v70 + 256) = a5;
          v71 = *(_DWORD *)(v70 + 248);
          if ( !*(_DWORD *)(PpmPlatformStates + 4) )
            v71 ^= ((unsigned __int16)v71 ^ (unsigned __int16)KeGetPcr()->Prcb.Number) & 0xFFF;
          *(_DWORD *)(v70 + 248) = v71 & 0xF8FFFFFF | 0x4000000;
        }
        while ( (_DWORD)v68 );
      }
      v72 = v147;
      if ( v145 != -1 )
        *(_WORD *)(v147 + 36) |= 0x10u;
      v73 = *(unsigned __int8 *)(v72 + 525);
      v74 = *(_WORD *)(v72 + 36);
      if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
      {
        v171 = *(_QWORD *)(v72 + 496);
        v168 = BugCheckParameter2;
        v170 = (unsigned __int8)v73;
        v175[0] = &v168;
        v169 = v74;
        v175[1] = 16LL;
        EtwTraceKernelEvent((int)v175, 1, 0x40008000u, 4665, 1538);
      }
      if ( a7 )
      {
        LOBYTE(v73) = (v134 != 0) + 3;
        PpmIdleSetSynchronizationState(BugCheckParameter4 + 23872, v73);
      }
      DeepSleep = 0;
      if ( v137 )
      {
        v135 = 0;
        if ( (unsigned __int8)v157[240] >= 2u && (HvlEnlightenments & 4) == 0 )
        {
          v76 = byte_1402F4F8C;
          _R9D = 1;
          if ( byte_1402F4F8C == -1 )
          {
            _RAX = 1LL;
            __asm { cpuid }
            v76 = 0;
            v164 = _RAX;
            v165 = _RBX;
            v166 = _RCX;
            v167 = _RDX;
            if ( (int)_RCX < 0 )
            {
              _RAX = 1073741825LL;
              __asm { cpuid }
              v164 = _RAX;
              v165 = _RBX;
              v76 = (_DWORD)_RAX == 1986945624;
              v166 = _RCX;
              v167 = _RDX;
            }
            byte_1402F4F8C = v76;
            DeepSleep = 0;
          }
          if ( !v76 )
          {
            v88 = KeGetCurrentPrcb();
            Number = v88->Number;
            v88->DeepSleep = 1;
            _InterlockedOr64(
              (volatile signed __int64 *)(8LL * ((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6)
                                        + 3177448
                                        + 0x140000000LL),
              1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F));
            if ( !v88->DeepSleep )
            {
              _InterlockedAnd64(
                (volatile signed __int64 *)(8LL * ((unsigned int)KiProcessorIndexToNumberMappingTable[v88->Number] >> 6)
                                          + 3177448
                                          + 0x140000000LL),
                ~(1LL << (KiProcessorIndexToNumberMappingTable[v88->Number] & 0x3F)));
              if ( KiFlushPcid )
              {
                v177 = 2uLL;
                __asm { invpcid r9d, [rsp+278h+var_120] }
                if ( !PsGetCurrentProcess()->AddressPolicy )
                  KiSetUserTbFlushPending();
              }
              else
              {
                v90 = __readcr4();
                if ( (v90 & 0x20080) != 0 )
                {
                  __writecr4(v90 ^ 0x80);
                  __writecr4(v90);
                }
                else
                {
                  v91 = __readcr3();
                  __writecr3(v91);
                }
              }
            }
            DeepSleep = v88->DeepSleep;
            v135 = DeepSleep;
          }
        }
      }
      if ( (*(_BYTE *)(BugCheckParameter4 + 11578) & 1) != 0 )
      {
        v92 = *(_WORD *)(BugCheckParameter4 + 11580);
        if ( v92 )
        {
          *(_WORD *)(BugCheckParameter4 + 11576) |= 1u;
          v151 = v92;
        }
      }
      v93 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(v72 + 408))(
              v153,
              BugCheckParameter2,
              v145,
              v151,
              *(_DWORD *)(v72 + 780),
              *(_QWORD *)(v72 + 792));
      v136 = v93;
      *(_WORD *)(BugCheckParameter4 + 11576) &= ~1u;
      if ( DeepSleep )
      {
        v135 = 0;
        if ( *(_BYTE *)(BugCheckParameter4 + 23322) )
        {
          v94 = KeGetCurrentPrcb();
          v95 = v94->Number;
          v94->DeepSleep = 0;
          _InterlockedAnd64(
            &qword_140307BE8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v95] >> 6],
            ~(1LL << (KiProcessorIndexToNumberMappingTable[v95] & 0x3F)));
          KeFlushCurrentTbImmediately();
          v93 = v136;
        }
      }
      if ( *(int *)(v72 + 48) < 0 )
      {
        if ( v93 >= 0 )
          v93 = *(_DWORD *)(v72 + 48);
        v136 = v93;
      }
      if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
      {
        v176[1] = 8LL;
        v155[0] = BugCheckParameter2;
        v155[1] = v93;
        v176[0] = v155;
        EtwTraceKernelEvent((int)v176, 1, 0x40008000u, 4666, 1538);
      }
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v156 = PerformanceCounter;
    _InterlockedExchange64((volatile __int64 *)(BugCheckParameter4 + 23840), 0LL);
    v97 = PerformanceCounter;
    v98 = __rdtsc();
    v51 = (unsigned __int64)HIDWORD(v98) << 32;
    v99 = v98;
    if ( (*(_QWORD *)(BugCheckParameter4 + 25320) & 0x8000000000LL) != 0 )
    {
      v100 = __readmsr(0xDB2u);
      v51 = (unsigned __int64)HIDWORD(v100) << 32;
      v101 = v100;
    }
    else
    {
      v101 = 0LL;
    }
    *(LARGE_INTEGER *)(BugCheckParameter4 + 23920) = v97;
    *(_QWORD *)(BugCheckParameter4 + 23888) = v99;
    if ( (*(_QWORD *)(BugCheckParameter4 + 25320) & 0x8000000000LL) != 0 )
      *(_QWORD *)(BugCheckParameter4 + 24000) = v101;
    if ( v57 )
    {
      _disable();
      v9 = (unsigned int)v9 >> 9;
      LOBYTE(v9) = v9 & 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v57);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)v57, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v57);
      }
      v102 = *(_QWORD *)(v57 + 16);
      v51 = *(unsigned int *)(v57 + 12);
      if ( v97.QuadPart > v102 )
      {
        *(LARGE_INTEGER *)(v57 + 16) = v97;
        *(_QWORD *)(v57 + 24) += v97.QuadPart - v102;
        *(_QWORD *)(v57 + 8 * v51 + 32) += v97.QuadPart - v102;
      }
      *(_DWORD *)(v57 + 12) = v51 + 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v57, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v57, 0LL);
      if ( (_BYTE)v9 )
        _enable();
    }
    *(_QWORD *)(BugCheckParameter4 + 23824) = v97.QuadPart - a5;
    if ( a7 )
    {
      v103 = PpmIdleSetSynchronizationState(BugCheckParameter4 + 23872, 0LL);
      v28 = v136;
      if ( v136 >= 0 && v103 != 8 && v134 )
        KeBugCheckEx(0xA0u, 0x702uLL, BugCheckParameter2, v103, BugCheckParameter4);
      *(_BYTE *)(BugCheckParameter4 + 23857) = 0;
    }
    else
    {
      v28 = v136;
    }
    if ( !v137 )
      goto LABEL_198;
    goto LABEL_190;
  }
  v136 = -2147483631;
LABEL_65:
  if ( a7 )
    PpmIdleSetSynchronizationState(v154, 0LL);
  BugCheckParameter4 = v144;
  v28 = v136;
  v146 = 0;
LABEL_190:
  _interlockedbittestandreset64(
    (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 1600) + 64LL),
    *(unsigned __int8 *)(BugCheckParameter4 + 1617));
  if ( v135 && *(_BYTE *)(BugCheckParameter4 + 23322) )
    KeWakeProcessor();
  if ( (_BYTE)v148 && v28 >= 0 )
    v104 = &v152;
  else
    v104 = 0LL;
  KeResumeClockTimerFromIdle(v104, v51);
  off_1402F2460();
  KeAccumulateTicks(BugCheckParameter4, *(_DWORD *)(BugCheckParameter4 + 11764), MEMORY[0xFFFFF78000000320], 0, 0);
LABEL_198:
  if ( v139 )
  {
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 1600) + 72LL),
      *(unsigned __int8 *)(BugCheckParameter4 + 1617));
    *(_QWORD *)(BugCheckParameter4 + 23848) = -1LL;
  }
  v29 = v146 != 3;
LABEL_201:
  v105 = 0;
  if ( PpmPlatformStates )
  {
    if ( !v140 )
    {
      v106 = v147;
      for ( i = 0; i < *(_DWORD *)(v106 + 780); ++i )
      {
        v108 = *(unsigned int *)(*(_QWORD *)(v106 + 792) + 4LL * i);
        v109 = PpmPlatformStates + 384 * v108;
        if ( (*(_DWORD *)(v109 + 312) & 0x3000000) == 0x1000000 )
          *(_DWORD *)(v109 + 312) = *(_DWORD *)(v109 + 312) & 0xFE000FFF | ((*(_DWORD *)(v109 + 312) & 0xFFF | 0x2000) << 12);
        if ( v29 )
          ++*(_DWORD *)(1000 * v108 + *(_QWORD *)(PpmPlatformStates + 48) + 24);
      }
    }
    LODWORD(v110) = *(_DWORD *)PpmPlatformStates;
    if ( *(_DWORD *)PpmPlatformStates )
    {
      v9 = v28;
      do
      {
        v110 = (unsigned int)(v110 - 1);
        v111 = 384 * v110 + PpmPlatformStates + 64;
        v112 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v144 + 36)];
        if ( ((*(_QWORD *)(v111 + 8 * (v112 >> 6) + 64) >> (v112 & 0x3F)) & 1) != 0
          && (unsigned __int8)PpmExitCoordinatedIdleState(v111 + 248, &BugCheckParameter2_4) )
        {
          v113 = v105++;
          *(_DWORD *)(*(_QWORD *)(v147 + 792) + 4 * v113) = v110;
          if ( v105 == 1 && *(_BYTE *)(v111 + 49) )
          {
            v114 = *(_BYTE *)(v111 + 48) == 0;
            v150 = v110;
            if ( !v114 )
            {
              KdCallPowerHandlers(1LL);
              KdPowerTransition(2147483649LL);
            }
            if ( (PopSimulate & 0x100) != 0 && v9 >= 0 )
            {
              if ( !v29 )
                goto LABEL_223;
              if ( a4 && (_DWORD)v110 == PpmDripsStateIndex )
                KeBugCheckEx(0xA0u, 0x257uLL, (unsigned int)v110, 0LL, 0LL);
            }
          }
          if ( !v29 )
          {
LABEL_223:
            v115 = *(_QWORD *)(v111 + 256);
            v116 = 1000LL * (unsigned int)v110 + *(_QWORD *)(PpmPlatformStates + 48) + 24LL;
            if ( v156.QuadPart >= v115 )
            {
              v117 = v156.QuadPart - v115;
              *(_QWORD *)(v116 + 32) += v156.QuadPart - v115;
            }
            else
            {
              v117 = 0LL;
            }
            if ( v9 < 0 && BugCheckParameter2_4 )
            {
              ++*(_DWORD *)(v116 + 4);
            }
            else
            {
              ++*(_DWORD *)(v116 + 8);
              PpmUpdatePlatformIdleAccounting(v116, v117);
            }
          }
        }
      }
      while ( (_DWORD)v110 );
    }
    v118 = v147;
    PpmEventCoordinatedIdleTransition(0LL, v105, *(_QWORD *)(v147 + 792));
  }
  else
  {
    v118 = v147;
  }
  v119 = v146;
  *(_DWORD *)(v118 + 780) = v105;
  if ( v119 == 3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v118 + 440))(
      v153,
      BugCheckParameter2,
      v150,
      v105,
      *(_QWORD *)(v118 + 792));
  }
  else if ( !*(_BYTE *)v118 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(v118 + 448))(v153, v119);
  }
  LODWORD(v120) = *(_DWORD *)(v118 + 780);
  for ( j = *(_QWORD *)(v118 + 792);
        (_DWORD)v120;
        *(_DWORD *)(384LL * *(unsigned int *)(j + 4 * v120) + PpmPlatformStates + 312) = 0 )
  {
    v120 = (unsigned int)(v120 - 1);
  }
  if ( v141 )
    _InterlockedDecrement(&PpmNonInterruptibleCount);
  v178[0] = 1310721;
  memset(&v178[1], 0, 0xA4uLL);
  LODWORD(v9) = KeGetPcr()->Prcb.Number;
  v122 = 0;
  v123 = *((_QWORD *)v14 + 1);
  while ( v123 )
  {
LABEL_245:
    _BitScanForward64(&v124, v123);
    v123 &= ~(1LL << v124);
    v160 = v124;
    v125 = KiProcessorNumberToIndexMappingTable[64 * v122 + (unsigned __int8)v124];
    v126 = KeGetPrcb(v125);
    v127 = *(_QWORD *)(v126 + 23808);
    _m_prefetchw((const void *)(v126 + 23872));
    v128 = *(_DWORD *)(v126 + 23872);
    do
    {
      v129 = v128;
      v130 = v128 ^ (v128 ^ (v128 - 1)) & 0xFFFFFF;
      if ( (v130 & 0xFFFFFF) == 0 )
      {
        if ( HIBYTE(v128) == 5 )
        {
          v130 = v130 & 0xFFFFFF | 0x4000000;
        }
        else if ( HIBYTE(v128) == 7 )
        {
          v130 = v130 & 0xFFFFFF | 0x6000000;
        }
      }
      v128 = _InterlockedCompareExchange((volatile signed __int32 *)(v126 + 23872), v130, v128);
    }
    while ( v128 != v129 );
    if ( HIBYTE(v130) == 6 )
      KeAddProcessorAffinityEx(v178, v125);
    _InterlockedAnd64(
      (volatile signed __int64 *)(v127
                                + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v9] >> 6)
                                + 64),
      ~(1LL << (KiProcessorIndexToNumberMappingTable[v9] & 0x3F)));
    KeRemoveProcessorAffinityEx(v14, v125);
  }
  while ( ++v122 < (unsigned int)*v14 )
  {
    v123 = *(_QWORD *)&v14[4 * v122 + 4];
    if ( v123 )
      goto LABEL_245;
  }
  v131 = 0;
  if ( LOWORD(v178[0]) )
  {
    while ( !*(_QWORD *)&v178[2 * v131 + 2] )
    {
      if ( ++v131 >= LOWORD(v178[0]) )
        goto LABEL_260;
    }
    HalRequestIpi(0LL, v178);
  }
LABEL_260:
  v132 = v147;
  if ( *(_BYTE *)(v147 + 3) )
    PpmIdleCompleteExitLatencyTrace(v144, v136, v134, v156.LowPart, v152, v149, BugCheckParameter2, v150);
  *(_DWORD *)(v132 + 52) = v146;
  result = (unsigned int)v136;
  *(_DWORD *)(v132 + 48) = v136;
  return result;
}
