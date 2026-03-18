/*
 * XREFs of PpmIdleExecuteTransition @ 0x1400474D0
 * Callers:
 *     PoIdle @ 0x140046FE0 (PoIdle.c)
 * Callees:
 *     KePrepareClockTimerForIdle @ 0x140032D00 (KePrepareClockTimerForIdle.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140038DE0 (KxWaitForSpinLockAndAcquire.c)
 *     KeAccumulateTicks @ 0x140048FA0 (KeAccumulateTicks.c)
 *     KeResumeClockTimerFromIdle @ 0x140049500 (KeResumeClockTimerFromIdle.c)
 *     PpmUpdatePerformanceFeedback @ 0x140049800 (PpmUpdatePerformanceFeedback.c)
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x14007C640 (KeRemoveProcessorAffinityEx.c)
 *     PpmGetExitSamplingCountdown @ 0x140097338 (PpmGetExitSamplingCountdown.c)
 *     PpmConvertTime @ 0x14009DB08 (PpmConvertTime.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x140143830 (xHalUnmaskInterrupt.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x140154B20 (KiSetUserTbFlushPending.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KdCallPowerHandlers @ 0x1401C1EF8 (KdCallPowerHandlers.c)
 *     KdPowerTransition @ 0x1401C2138 (KdPowerTransition.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401C4B24 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401C4BD4 (KiReleaseSpinLockInstrumented.c)
 *     KeFlushCurrentTbImmediately @ 0x1401C6F30 (KeFlushCurrentTbImmediately.c)
 *     KeWakeProcessor @ 0x1401C71C8 (KeWakeProcessor.c)
 *     PpmExitCoordinatedIdleState @ 0x1401E6F58 (PpmExitCoordinatedIdleState.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1401E7814 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1401E7BF0 (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmIdleSetSynchronizationState @ 0x1401E7DE4 (PpmIdleSetSynchronizationState.c)
 *     PpmIdleTransitionStall @ 0x1401E80F0 (PpmIdleTransitionStall.c)
 *     PpmTestAndLockProcessor @ 0x1401E8820 (PpmTestAndLockProcessor.c)
 *     PpmUpdatePlatformIdleAccounting @ 0x1401E8F40 (PpmUpdatePlatformIdleAccounting.c)
 *     PpmEventCoordinatedIdleTransition @ 0x1401F1CB0 (PpmEventCoordinatedIdleTransition.c)
 *     PpmEventEnterPlatformIdleState @ 0x1401F1E28 (PpmEventEnterPlatformIdleState.c)
 */

__int64 __fastcall PpmIdleExecuteTransition(
        ULONG_PTR a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rbp
  unsigned int v8; // esi
  char v9; // r14
  unsigned int v10; // r11d
  ULONG_PTR BugCheckParameter4; // r15
  __int64 v12; // r8
  _BYTE *v13; // r10
  unsigned __int16 *v14; // r12
  __int64 i; // r8
  unsigned int v16; // esi
  __int64 v17; // rbx
  unsigned int v18; // edi
  _BYTE *v19; // rbx
  __int64 v20; // rcx
  __int64 Prcb; // rax
  unsigned __int64 v22; // rdi
  unsigned __int16 v23; // bx
  unsigned __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rsi
  __int64 v27; // rcx
  int v28; // r14d
  int v29; // r12d
  __int64 v30; // r15
  __int64 v31; // rdx
  unsigned __int16 v32; // cx
  unsigned __int8 v33; // bl
  __int64 v34; // rcx
  unsigned __int64 v35; // r8
  __int64 v36; // rdx
  signed __int64 v37; // rax
  __int64 v38; // r9
  char v39; // di
  signed __int64 v40; // rsi
  int v41; // r8d
  unsigned __int16 v42; // ax
  unsigned __int64 *v43; // r10
  __int64 v44; // r11
  unsigned __int64 v45; // rdx
  int v46; // eax
  int ExitSamplingCountdown; // eax
  char v48; // r10
  struct _KPRCB *CurrentPrcb; // rbx
  int v50; // esi
  int v51; // eax
  __int64 v52; // rbx
  __int16 v53; // r15
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  _QWORD *v56; // r10
  unsigned __int64 v57; // rdi
  unsigned __int64 v58; // rsi
  unsigned __int64 v59; // r9
  __int64 v60; // rax
  unsigned __int64 v61; // rcx
  ULONG_PTR v62; // rsi
  __int64 (__fastcall *v63)(__int64, _QWORD, _QWORD, _QWORD, _QWORD); // r10
  unsigned int v64; // r12d
  __int64 v65; // rbp
  __int64 v66; // rdi
  __int64 v67; // rsi
  __int64 v68; // r8
  int v69; // eax
  __int64 v70; // rdx
  __int16 v71; // r8
  struct _KPRCB *v72; // rdi
  __int64 Number; // rax
  volatile unsigned __int8 v75; // di
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rax
  char v78; // al
  char v79; // al
  struct _KPRCB *v80; // rax
  __int64 v81; // rcx
  LARGE_INTEGER v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rdx
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rcx
  bool v87; // r15
  unsigned __int64 v88; // rax
  __int64 v89; // rdx
  unsigned __int8 v90; // al
  int *v91; // rcx
  unsigned int v92; // ecx
  unsigned int v93; // esi
  __int64 v94; // rdx
  __int64 v95; // r9
  int v96; // ebp
  __int64 v97; // rbx
  __int64 v98; // rdi
  unsigned __int64 v99; // rax
  __int64 v100; // rcx
  bool v101; // zf
  unsigned __int64 v102; // rax
  __int64 v103; // rcx
  unsigned __int64 v104; // rdx
  unsigned int v105; // r12d
  __int64 v106; // r8
  __int64 j; // r9
  unsigned __int16 *v108; // r14
  unsigned __int64 v109; // rdi
  unsigned __int16 v110; // bx
  __int64 result; // rax
  unsigned __int64 v112; // rdx
  unsigned int v113; // esi
  __int64 v114; // r8
  __int64 v115; // rbp
  unsigned __int32 v116; // eax
  unsigned __int32 v117; // r9d
  signed __int32 v118; // ecx
  unsigned __int16 v119; // r13
  int v120; // r12d
  __int64 v121; // rbp
  unsigned __int8 v122; // [rsp+40h] [rbp-218h]
  volatile unsigned __int8 DeepSleep; // [rsp+41h] [rbp-217h]
  char v124; // [rsp+42h] [rbp-216h]
  int v126; // [rsp+44h] [rbp-214h]
  char v127; // [rsp+48h] [rbp-210h]
  char v128; // [rsp+49h] [rbp-20Fh]
  char v129; // [rsp+4Ah] [rbp-20Eh]
  unsigned int BugCheckParameter2; // [rsp+4Ch] [rbp-20Ch]
  char BugCheckParameter2_4; // [rsp+50h] [rbp-208h] BYREF
  unsigned int v132; // [rsp+54h] [rbp-204h]
  int v133; // [rsp+58h] [rbp-200h]
  ULONG_PTR v134; // [rsp+60h] [rbp-1F8h]
  int v135; // [rsp+68h] [rbp-1F0h]
  int v136; // [rsp+6Ch] [rbp-1ECh]
  __int64 v137; // [rsp+70h] [rbp-1E8h]
  int v138; // [rsp+78h] [rbp-1E0h] BYREF
  __int64 v139; // [rsp+80h] [rbp-1D8h]
  LARGE_INTEGER PerformanceCounter; // [rsp+88h] [rbp-1D0h]
  int v141; // [rsp+90h] [rbp-1C8h]
  _BYTE *v142; // [rsp+98h] [rbp-1C0h]
  _DWORD v143[2]; // [rsp+A0h] [rbp-1B8h] BYREF
  _QWORD v144[2]; // [rsp+A8h] [rbp-1B0h] BYREF
  _QWORD v145[3]; // [rsp+B8h] [rbp-1A0h] BYREF
  int v146; // [rsp+D0h] [rbp-188h]
  int v147; // [rsp+D4h] [rbp-184h]
  ULONG_PTR v148; // [rsp+D8h] [rbp-180h]
  _QWORD v149[3]; // [rsp+E0h] [rbp-178h] BYREF
  __int64 v150; // [rsp+F8h] [rbp-160h]
  unsigned int v151; // [rsp+100h] [rbp-158h] BYREF
  __int16 v152; // [rsp+104h] [rbp-154h]
  __int16 v153; // [rsp+106h] [rbp-152h]
  __int64 v154; // [rsp+108h] [rbp-150h]
  _QWORD v155[2]; // [rsp+110h] [rbp-148h] BYREF
  _QWORD v156[2]; // [rsp+120h] [rbp-138h] BYREF
  __int64 v157; // [rsp+130h] [rbp-128h] BYREF
  int v158; // [rsp+138h] [rbp-120h]
  int v159; // [rsp+13Ch] [rbp-11Ch]
  __int128 v160; // [rsp+140h] [rbp-118h]
  __int64 v161; // [rsp+150h] [rbp-108h] BYREF
  _QWORD v162[21]; // [rsp+158h] [rbp-100h] BYREF
  int v163; // [rsp+250h] [rbp-8h]
  void *retaddr; // [rsp+258h] [rbp+0h]

  v7 = *(_QWORD *)(a1 + 23808);
  v8 = a2;
  v9 = a7;
  v10 = a3;
  v132 = a3;
  BugCheckParameter4 = a1;
  v139 = *(_QWORD *)(v7 + 472);
  v12 = a1 + 23872;
  v13 = (_BYTE *)(248LL * a2 + v7 + 800);
  BugCheckParameter2 = a2;
  v134 = a1;
  v141 = 0;
  PerformanceCounter.QuadPart = 0LL;
  v136 = 0;
  DeepSleep = 0;
  v124 = 0;
  LOBYTE(v135) = 0;
  v129 = 0;
  v128 = 0;
  v138 = -1;
  v137 = v7;
  v142 = v13;
  v127 = 0;
  v148 = a1 + 23872;
  v126 = 0;
  if ( !a7 || *(_BYTE *)(v7 + 523) || (v122 = 1, v13[245]) )
    v122 = 0;
  v133 = 3;
  if ( !*(_BYTE *)v7 )
  {
    if ( a7 )
      PpmIdleSetSynchronizationState(a1 + 23872, 1LL);
    v14 = (unsigned __int16 *)(v7 + 224);
    *(_QWORD *)(v7 + 224) = 1310721LL;
    memset((void *)(v7 + 232), 0, 0xA0uLL);
    v16 = *(_DWORD *)(v7 + 532);
    v17 = *(_QWORD *)(v7 + 536);
    v145[1] = 0LL;
    v145[2] = 0LL;
    v144[0] = 1LL;
    v145[0] = 65537LL;
    v18 = 0;
    v144[1] = v145;
    if ( v16 )
    {
      v19 = (_BYTE *)(v17 + 4);
      while ( 1 )
      {
        if ( *v19 != 0xFF )
        {
          v20 = *((unsigned int *)v19 - 1);
          HIDWORD(v145[0]) = (unsigned __int8)*v19;
          Prcb = KeGetPrcb(v20);
          v126 = PpmTestAndLockProcessor(Prcb, v7 + 224, v144);
          if ( v126 < 0 )
            break;
        }
        ++v18;
        v19 += 8;
        if ( v18 >= v16 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      v22 = *(_QWORD *)(v7 + 232);
      v23 = 0;
LABEL_14:
      while ( v22 )
      {
LABEL_17:
        _BitScanForward64(&v24, v22);
        v22 &= ~(1LL << v24);
        v146 = v24;
        v25 = KeGetPrcb((unsigned int)KiProcessorNumberToIndexMappingTable[64 * v23 + (unsigned __int8)v24]);
        v149[2] = v25;
        v26 = *(_QWORD *)(v25 + 23808);
        v150 = 0LL;
        v149[0] = 0LL;
        v27 = *(_QWORD *)(v26 + 472);
        v149[1] = PopIdleTransitionTimeout;
        BYTE4(v150) = 1;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(v26 + 456))(v27) )
        {
          while ( (*(_DWORD *)(v25 + 23872) & 0xFF000000) == 0x5000000 )
          {
            PpmIdleTransitionStall(v149);
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v26 + 456))(*(_QWORD *)(v26 + 472)) )
              goto LABEL_14;
          }
          v28 = -1073741782;
          goto LABEL_23;
        }
      }
      while ( ++v23 < (unsigned int)*v14 )
      {
        v22 = *(_QWORD *)&v14[4 * v23 + 4];
        if ( v22 )
          goto LABEL_17;
      }
      v28 = 0;
LABEL_23:
      v126 = v28;
      v7 = v137;
    }
    v29 = v126;
    if ( v126 < 0 )
    {
      if ( a7 )
        PpmIdleSetSynchronizationState(v148, 0LL);
      v133 = 1;
      v30 = 1LL;
      goto LABEL_198;
    }
    v13 = v142;
    v12 = BugCheckParameter4 + 23872;
    v10 = v132;
    v9 = a7;
    v8 = BugCheckParameter2;
  }
  v31 = *(unsigned __int16 *)(v7 + 224);
  v32 = 0;
  if ( (_WORD)v31 )
  {
    while ( !*(_QWORD *)(v7 + 8LL * v32 + 232) )
    {
      if ( ++v32 >= (unsigned __int16)v31 )
        goto LABEL_34;
    }
    *(_WORD *)(v7 + 36) |= 0x20u;
  }
LABEL_34:
  v33 = v122;
  *(_BYTE *)(BugCheckParameter4 + 23856) = v122;
  *(_DWORD *)(BugCheckParameter4 + 23860) = v8;
  if ( v9 )
  {
    LOBYTE(v31) = 2;
    *(_BYTE *)(BugCheckParameter4 + 23857) = v13[242] == 0;
    PpmIdleSetSynchronizationState(v12, v31);
  }
  if ( *(_BYTE *)(v7 + 6) )
  {
    v34 = KeMaximumIncrement;
    v129 = 1;
    if ( *(_QWORD *)(v7 + 504) > (unsigned __int64)KeMaximumIncrement )
      v34 = *(_QWORD *)(v7 + 504);
    *(_QWORD *)(BugCheckParameter4 + 23848) = a6 + v34 + KeMaximumIncrement;
    v31 = *(_QWORD *)(BugCheckParameter4 + 1600);
    _interlockedbittestandset64((volatile signed __int32 *)(v31 + 72), *(unsigned __int8 *)(BugCheckParameter4 + 1617));
  }
  if ( v13[241] )
  {
    v29 = v126;
    goto LABEL_85;
  }
  v35 = *(_QWORD *)(BugCheckParameter4 + 1608);
  v36 = *(_QWORD *)(BugCheckParameter4 + 1600);
  v124 = 1;
  _m_prefetchw((const void *)(v36 + 64));
  v37 = _InterlockedOr64((volatile signed __int64 *)(v36 + 64), v35);
  v38 = *(_QWORD *)(BugCheckParameter4 + 23808);
  v39 = 0;
  v136 = 0;
  v40 = v37;
  if ( v122 )
  {
    v136 = 1;
LABEL_50:
    v46 = *(_DWORD *)(v38 + 8);
    v39 = 0;
    if ( v46 )
      *(_DWORD *)(v38 + 8) = v46 - 1;
    if ( !*(_DWORD *)(v38 + 8) )
    {
      ExitSamplingCountdown = PpmGetExitSamplingCountdown();
      v39 = 0;
      *(_DWORD *)(v38 + 8) = ExitSamplingCountdown;
      if ( ExitSamplingCountdown )
        v39 = v48;
    }
    if ( v39 )
    {
      *(_BYTE *)(v38 + 3) = 1;
      if ( v33 )
        *(_QWORD *)(v38 + 40) = -1LL;
    }
    goto LABEL_58;
  }
  if ( v10 != -1 )
    goto LABEL_50;
  v41 = 0;
  v42 = *(_WORD *)(v38 + 224);
  if ( v42 )
  {
    v43 = (unsigned __int64 *)(v38 + 232);
    v44 = v42;
    do
    {
      v45 = *v43++;
      v41 += (unsigned int)((0x101010101010101LL
                           * ((((v45 - ((v45 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v45 - ((v45 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v45 - ((v45 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v45 - ((v45 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v44;
    }
    while ( v44 );
    v7 = v137;
    BugCheckParameter4 = v134;
  }
  v33 = v122;
  if ( v41 == (_DWORD)KeNumberProcessors_0 - 1 )
  {
    v136 = 2;
    goto LABEL_50;
  }
LABEL_58:
  v29 = off_1402D27B0();
  v126 = v29;
  if ( !*(_DWORD *)(BugCheckParameter4 + 11672) )
  {
    if ( v29 < 0 )
      goto LABEL_61;
    if ( *(_BYTE *)v7 == 1
      && (unsigned __int8)PpmIdleRecheckCoordinatedIdleMask(
                            v7,
                            *(unsigned __int8 *)(BugCheckParameter4 + 1616),
                            *(_QWORD *)(BugCheckParameter4 + 1608) | v40) )
    {
      v29 = -1073741802;
      goto LABEL_60;
    }
    if ( v39 )
      *(_WORD *)(v7 + 36) |= 0x200u;
    if ( v33 )
    {
      v127 = 1;
      _InterlockedIncrement(&PpmNonInterruptibleCount);
      CurrentPrcb = KeGetCurrentPrcb();
      v50 = KiClockTimerOwner;
      if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
      {
        off_1402D28F8();
        CurrentPrcb->PendingTickFlags &= ~1u;
      }
      if ( CurrentPrcb->Number == v50 )
      {
        ++dword_1402E8C68;
        KiClockActive = 0;
      }
      if ( CurrentPrcb->ClockOwner )
        CurrentPrcb->ClockOwner = 0;
      v33 = v122;
    }
    if ( *(_BYTE *)(v7 + 524) )
    {
      LOBYTE(v51) = v135;
      if ( v39 )
      {
        v51 = (unsigned __int8)v135;
        if ( !v33 )
          v51 = 1;
        v135 = v51;
      }
      KePrepareClockTimerForIdle(a4, *(_QWORD *)(v7 + 504), v51);
    }
    v8 = BugCheckParameter2;
LABEL_85:
    v52 = *(_QWORD *)(BugCheckParameter4 + 24192);
    v53 = v163;
    if ( v52 )
    {
      _disable();
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v52);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)v52, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v52, v31, v12);
      }
      v54 = *(_QWORD *)(v52 + 16);
      v55 = *(unsigned int *)(v52 + 12);
      if ( a5 > v54 )
      {
        *(_QWORD *)(v52 + 16) = a5;
        *(_QWORD *)(v52 + 24) += a5 - v54;
        *(_QWORD *)(v52 + 8 * v55 + 32) += a5 - v54;
      }
      *(_DWORD *)(v52 + 12) = v55 - 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v52, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v52, 0LL);
      if ( (v53 & 0x200) != 0 )
        _enable();
    }
    *(_DWORD *)(v7 + 16) = v8;
    v56 = (_QWORD *)v134;
    v57 = __rdtsc();
    if ( (*(_QWORD *)(v134 + 25192) & 0x8000000000LL) != 0 )
      v58 = __readmsr(0xDB2u);
    else
      v58 = 0LL;
    v59 = a5 - *(_QWORD *)(v134 + 23920);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v134 + 23936), v59);
    if ( (*(_QWORD *)(v134 + 25192) & 0x8000000000LL) != 0 )
    {
      v60 = PpmConvertTime(v59, v57 - *(_QWORD *)(v134 + 23888), v58 - *(_QWORD *)(v134 + 24000));
      v56 = (_QWORD *)v134;
      *(_QWORD *)(v134 + 24008) += v60;
    }
    v61 = v56[2986];
    v56[2990] = a5;
    if ( v57 > v61 )
      v56[2987] += v57 - v61;
    v56[2986] = v57;
    if ( (v56[3149] & 0x8000000000LL) != 0 )
      v56[3000] = v58;
    LOBYTE(v59) = 1;
    PpmUpdatePerformanceFeedback((_DWORD)v56, 0, 0, v59, 0LL);
    v62 = v134;
    if ( PopSnapEnergyCounters )
      PopSnapEnergyCounters(*(unsigned int *)(v134 + 36), 0LL, 0LL);
    _InterlockedExchange64((volatile __int64 *)(v134 + 23840), a5);
    v63 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v7 + 400);
    if ( v63 )
    {
      v29 = v63(v139, BugCheckParameter2, v132, *(unsigned int *)(v7 + 780), *(_QWORD *)(v7 + 792));
      v126 = v29;
    }
    if ( v29 < 0 )
    {
LABEL_164:
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      _InterlockedExchange64((volatile __int64 *)(v62 + 23840), 0LL);
      v82 = PerformanceCounter;
      v83 = __rdtsc();
      v84 = (unsigned __int64)HIDWORD(v83) << 32;
      i = v83;
      if ( (*(_QWORD *)(v62 + 25192) & 0x8000000000LL) != 0 )
      {
        v85 = __readmsr(0xDB2u);
        v84 = (unsigned __int64)HIDWORD(v85) << 32;
        v86 = v85;
      }
      else
      {
        v86 = 0LL;
      }
      *(LARGE_INTEGER *)(v62 + 23920) = PerformanceCounter;
      *(_QWORD *)(v62 + 23888) = i;
      if ( (*(_QWORD *)(v62 + 25192) & 0x8000000000LL) != 0 )
        *(_QWORD *)(v62 + 24000) = v86;
      if ( v52 )
      {
        _disable();
        v87 = (v53 & 0x200) != 0;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v52);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)v52, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v52, v84, i);
        }
        v88 = *(_QWORD *)(v52 + 16);
        v89 = *(unsigned int *)(v52 + 12);
        if ( v82.QuadPart > v88 )
        {
          *(LARGE_INTEGER *)(v52 + 16) = v82;
          *(_QWORD *)(v52 + 24) += v82.QuadPart - v88;
          *(_QWORD *)(v52 + 8 * v89 + 32) += v82.QuadPart - v88;
        }
        *(_DWORD *)(v52 + 12) = v89 + 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v52, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v52, 0LL);
        if ( v87 )
          _enable();
      }
      BugCheckParameter4 = v134;
      *(_QWORD *)(v134 + 23824) = v82.QuadPart - a5;
      if ( a7 )
      {
        v90 = PpmIdleSetSynchronizationState(BugCheckParameter4 + 23872, 0LL);
        if ( v29 >= 0 && v90 != 8 && v122 )
          KeBugCheckEx(0xA0u, 0x702uLL, BugCheckParameter2, v90, BugCheckParameter4);
        *(_BYTE *)(BugCheckParameter4 + 23857) = 0;
      }
      if ( !v124 )
        goto LABEL_195;
      goto LABEL_187;
    }
    v64 = v132;
    v65 = *(_QWORD *)(v7 + 792);
    v128 = 1;
    LODWORD(v66) = *(_DWORD *)(v137 + 780);
    if ( v132 != -1 )
    {
      v67 = PpmPlatformStates + 384LL * v132;
      PpmEventEnterPlatformIdleState(v132);
      if ( !qword_140305AC0 && v132 == dword_140305B00 )
        _InterlockedCompareExchange64(&qword_140305AC0, MEMORY[0xFFFFF78000000008], 0LL);
      if ( a4 )
        ++*(_DWORD *)(*(_QWORD *)(PpmPlatformStates + 48) + 8LL);
      if ( *(_BYTE *)(v67 + 112) )
      {
        KdPowerTransition(2147483652LL);
        KdCallPowerHandlers(4LL);
      }
      v62 = v134;
    }
    if ( (_DWORD)v66 )
    {
      if ( *(_BYTE *)(PpmPlatformStates + 12) && (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
      {
        v157 = v65;
        v158 = 4 * v66;
        v159 = 0;
        EtwTraceKernelEvent((int)&v157, 1, 0x40008000u, 0x123Fu, 1538);
      }
      do
      {
        v66 = (unsigned int)(v66 - 1);
        v68 = 384LL * *(unsigned int *)(v65 + 4 * v66) + PpmPlatformStates + 64;
        *(_QWORD *)(v68 + 256) = a5;
        v69 = *(_DWORD *)(v68 + 248);
        if ( !*(_DWORD *)(PpmPlatformStates + 4) )
          v69 ^= ((unsigned __int16)v69 ^ (unsigned __int16)KeGetPcr()->Prcb.Number) & 0xFFF;
        *(_DWORD *)(v68 + 248) = v69 & 0xF8FFFFFF | 0x4000000;
      }
      while ( (_DWORD)v66 );
    }
    v7 = v137;
    if ( v64 != -1 )
      *(_WORD *)(v137 + 36) |= 0x10u;
    v70 = *(unsigned __int8 *)(v7 + 525);
    v71 = *(_WORD *)(v7 + 36);
    if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
    {
      v154 = *(_QWORD *)(v7 + 496);
      v151 = BugCheckParameter2;
      v156[0] = &v151;
      v152 = v71;
      v153 = (unsigned __int8)v70;
      v156[1] = 16LL;
      EtwTraceKernelEvent((int)v156, 1, 0x40008000u, 0x1239u, 1538);
    }
    if ( a7 )
    {
      LOBYTE(v70) = (v122 != 0) + 3;
      PpmIdleSetSynchronizationState(v62 + 23872, v70);
    }
    if ( v124 )
    {
      if ( (unsigned __int8)v142[240] < 2u )
      {
        v75 = 0;
        DeepSleep = 0;
      }
      else
      {
        DeepSleep = 0;
        if ( (HvlEnlightenments & 4) == 0 )
        {
          v72 = KeGetCurrentPrcb();
          _R8D = 1;
          Number = v72->Number;
          v72->DeepSleep = 1;
          _InterlockedOr64(
            (volatile signed __int64 *)(8LL * ((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6)
                                      + 3024552
                                      + 0x140000000LL),
            1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F));
          if ( !v72->DeepSleep )
          {
            _InterlockedAnd64(
              (volatile signed __int64 *)(8LL * ((unsigned int)KiProcessorIndexToNumberMappingTable[v72->Number] >> 6)
                                        + 3024552
                                        + 0x140000000LL),
              ~(1LL << (KiProcessorIndexToNumberMappingTable[v72->Number] & 0x3F)));
            if ( KiFlushPcid )
            {
              v160 = 2uLL;
              __asm { invpcid r8d, [rsp+258h+var_118] }
              if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
              {
                KiSetUserTbFlushPending();
                DeepSleep = v72->DeepSleep;
                v75 = DeepSleep;
                goto LABEL_148;
              }
            }
            else
            {
              v76 = __readcr4();
              if ( (v76 & 0x20080) != 0 )
              {
                __writecr4(v76 ^ 0x80);
                __writecr4(v76);
                DeepSleep = v72->DeepSleep;
                v75 = DeepSleep;
                goto LABEL_148;
              }
              v77 = __readcr3();
              __writecr3(v77);
            }
          }
          DeepSleep = v72->DeepSleep;
        }
        v75 = DeepSleep;
      }
    }
    else
    {
      v75 = 0;
    }
LABEL_148:
    v78 = *(_BYTE *)(v62 + 11568);
    if ( (v78 & 1) != 0 && (v78 & 8) == 0 )
      __writemsr(0x48u, 0LL);
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v7 + 408))(
            v139,
            BugCheckParameter2,
            v64,
            *(unsigned int *)(v7 + 780),
            *(_QWORD *)(v7 + 792));
    v126 = v29;
    v79 = *(_BYTE *)(v62 + 11568);
    if ( (v79 & 1) == 0 || (v79 & 8) != 0 )
      _mm_lfence();
    else
      __writemsr(0x48u, 1uLL);
    if ( v75 )
    {
      DeepSleep = 0;
      if ( *(_BYTE *)(v62 + 23322) )
      {
        v80 = KeGetCurrentPrcb();
        v81 = v80->Number;
        v80->DeepSleep = 0;
        _InterlockedAnd64(
          &qword_1402E26A8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v81] >> 6],
          ~(1LL << (KiProcessorIndexToNumberMappingTable[v81] & 0x3F)));
        KeFlushCurrentTbImmediately();
      }
    }
    if ( *(int *)(v7 + 48) < 0 )
    {
      if ( v29 >= 0 )
        v29 = *(_DWORD *)(v7 + 48);
      v126 = v29;
    }
    if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
    {
      v143[0] = BugCheckParameter2;
      v143[1] = v29;
      v155[0] = v143;
      v155[1] = 8LL;
      EtwTraceKernelEvent((int)v155, 1, 0x40008000u, 0x123Au, 1538);
    }
    goto LABEL_164;
  }
  v29 = -2147483631;
LABEL_60:
  v126 = v29;
LABEL_61:
  if ( v9 )
    PpmIdleSetSynchronizationState(BugCheckParameter4 + 23872, 0LL);
  v133 = 0;
LABEL_187:
  _interlockedbittestandreset64(
    (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 1600) + 64LL),
    *(unsigned __int8 *)(BugCheckParameter4 + 1617));
  if ( DeepSleep && *(_BYTE *)(BugCheckParameter4 + 23322) )
    KeWakeProcessor();
  if ( (_BYTE)v135 && v29 >= 0 )
    v91 = &v138;
  else
    v91 = 0LL;
  KeResumeClockTimerFromIdle(v91);
  off_1402D27C0();
  KeAccumulateTicks(BugCheckParameter4, *(_DWORD *)(BugCheckParameter4 + 11764), MEMORY[0xFFFFF78000000320], 0, 0);
LABEL_195:
  if ( v129 )
  {
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 1600) + 72LL),
      *(unsigned __int8 *)(BugCheckParameter4 + 1617));
    *(_QWORD *)(BugCheckParameter4 + 23848) = -1LL;
  }
  v30 = v133 != 3;
LABEL_198:
  v92 = -1;
  v93 = 0;
  v132 = -1;
  if ( PpmPlatformStates )
  {
    if ( !v128 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7 + 780); i = (unsigned int)(i + 1) )
      {
        v94 = *(unsigned int *)(*(_QWORD *)(v7 + 792) + 4LL * (unsigned int)i);
        v95 = PpmPlatformStates + 384 * v94;
        if ( (*(_DWORD *)(v95 + 312) & 0x3000000) == 0x1000000 )
          *(_DWORD *)(v95 + 312) = *(_DWORD *)(v95 + 312) & 0xFE000FFF | ((*(_DWORD *)(v95 + 312) & 0xFFF | 0x2000) << 12);
        if ( (_BYTE)v30 )
          ++*(_DWORD *)(1000 * v94 + *(_QWORD *)(PpmPlatformStates + 48) + 24);
      }
    }
    v96 = *(_DWORD *)PpmPlatformStates;
    if ( *(_DWORD *)PpmPlatformStates )
    {
      v97 = (unsigned int)(v96 - 1);
      do
      {
        v98 = PpmPlatformStates + 384 * v97;
        v99 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v134 + 36)];
        if ( ((*(_QWORD *)(v98 + 8 * (v99 >> 6) + 128) >> (v99 & 0x3F)) & 1) != 0
          && (unsigned __int8)PpmExitCoordinatedIdleState(v98 + 312, &BugCheckParameter2_4, i) )
        {
          v100 = v93++;
          *(_DWORD *)(*(_QWORD *)(v137 + 792) + 4 * v100) = v97;
          if ( v93 == 1 && *(_BYTE *)(v98 + 113) )
          {
            v101 = *(_BYTE *)(v98 + 112) == 0;
            v132 = v97;
            if ( !v101 )
            {
              KdCallPowerHandlers(1LL);
              KdPowerTransition(2147483649LL);
            }
            if ( (PopSimulate & 0x100) != 0 && v29 >= 0LL )
            {
              if ( !(_BYTE)v30 )
                goto LABEL_220;
              if ( a4 && (_DWORD)v97 == PpmDripsStateIndex )
                KeBugCheckEx(0xA0u, 0x257uLL, (unsigned int)v97, 0LL, 0LL);
            }
          }
          if ( !(_BYTE)v30 )
          {
LABEL_220:
            v102 = *(_QWORD *)(v98 + 320);
            v103 = 1000LL * (unsigned int)v97 + *(_QWORD *)(PpmPlatformStates + 48) + 24LL;
            if ( PerformanceCounter.QuadPart >= v102 )
            {
              v104 = PerformanceCounter.QuadPart - v102;
              *(_QWORD *)(v103 + 32) += PerformanceCounter.QuadPart - v102;
            }
            else
            {
              v104 = 0LL;
            }
            if ( v29 < 0LL && BugCheckParameter2_4 )
            {
              ++*(_DWORD *)(v103 + 4);
            }
            else
            {
              ++*(_DWORD *)(v103 + 8);
              PpmUpdatePlatformIdleAccounting(v103, v104);
            }
          }
        }
        v97 = (unsigned int)(v97 - 1);
        --v96;
      }
      while ( v96 );
    }
    v7 = v137;
    PpmEventCoordinatedIdleTransition(0LL, v93, *(_QWORD *)(v137 + 792));
    v92 = v132;
  }
  v105 = v133;
  *(_DWORD *)(v7 + 780) = v93;
  if ( v105 == 3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v7 + 440))(
      v139,
      BugCheckParameter2,
      v92,
      v93,
      *(_QWORD *)(v7 + 792));
  }
  else if ( !*(_BYTE *)v7 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(v7 + 448))(v139, v105);
  }
  LODWORD(v106) = *(_DWORD *)(v7 + 780);
  for ( j = *(_QWORD *)(v7 + 792);
        (_DWORD)v106;
        *(_DWORD *)(384LL * *(unsigned int *)(j + 4 * v106) + PpmPlatformStates + 312) = 0 )
  {
    v106 = (unsigned int)(v106 - 1);
  }
  if ( v127 )
    _InterlockedDecrement(&PpmNonInterruptibleCount);
  v161 = 1310721LL;
  memset(v162, 0, 0xA0uLL);
  LODWORD(v30) = KeGetPcr()->Prcb.Number;
  v108 = (unsigned __int16 *)(v7 + 224);
  v109 = *(_QWORD *)(v7 + 232);
  v110 = 0;
  while ( v109 )
  {
LABEL_241:
    _BitScanForward64(&v112, v109);
    v109 &= ~(1LL << v112);
    v147 = v112;
    v113 = KiProcessorNumberToIndexMappingTable[64 * v110 + (unsigned __int8)v112];
    v114 = KeGetPrcb(v113);
    v115 = *(_QWORD *)(v114 + 23808);
    _m_prefetchw((const void *)(v114 + 23872));
    v116 = *(_DWORD *)(v114 + 23872);
    do
    {
      v117 = v116;
      v118 = v116 ^ (v116 ^ (v116 - 1)) & 0xFFFFFF;
      if ( (v118 & 0xFFFFFF) == 0 )
      {
        if ( HIBYTE(v116) == 5 )
        {
          v118 = v118 & 0xFFFFFF | 0x4000000;
        }
        else if ( HIBYTE(v116) == 7 )
        {
          v118 = v118 & 0xFFFFFF | 0x6000000;
        }
      }
      v116 = _InterlockedCompareExchange((volatile signed __int32 *)(v114 + 23872), v118, v116);
    }
    while ( v116 != v117 );
    if ( HIBYTE(v118) == 6 )
      KeAddProcessorAffinityEx(&v161, v113);
    _InterlockedAnd64(
      (volatile signed __int64 *)(v115
                                + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v30] >> 6)
                                + 64),
      ~(1LL << (KiProcessorIndexToNumberMappingTable[v30] & 0x3F)));
    KeRemoveProcessorAffinityEx(v108, v113);
  }
  while ( 1 )
  {
    result = ++v110;
    if ( v110 >= (unsigned int)*v108 )
      break;
    v109 = *(_QWORD *)&v108[4 * v110 + 4];
    if ( v109 )
      goto LABEL_241;
  }
  v119 = 0;
  v120 = v133;
  if ( (_WORD)v161 )
  {
    while ( 1 )
    {
      result = v119;
      if ( v162[v119] )
        break;
      if ( ++v119 >= (unsigned __int16)v161 )
        goto LABEL_256;
    }
    result = HalRequestIpi(0LL, &v161);
  }
LABEL_256:
  v121 = v137;
  if ( *(_BYTE *)(v137 + 3) )
    result = PpmIdleCompleteExitLatencyTrace(
               v134,
               v126,
               v122,
               PerformanceCounter.LowPart,
               v138,
               v136,
               BugCheckParameter2,
               v132);
  *(_DWORD *)(v121 + 52) = v120;
  *(_DWORD *)(v121 + 48) = v126;
  return result;
}
