/*
 * XREFs of PpmIdleExecuteTransition @ 0x1400A7C10
 * Callers:
 *     PoIdle @ 0x1400A7600 (PoIdle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     PpmConvertTime @ 0x140014C30 (PpmConvertTime.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeAccumulateTicks @ 0x1400A9AB0 (KeAccumulateTicks.c)
 *     KeResumeClockTimerFromIdle @ 0x1400AA190 (KeResumeClockTimerFromIdle.c)
 *     PpmUpdatePerformanceFeedback @ 0x1400AA580 (PpmUpdatePerformanceFeedback.c)
 *     KePrepareClockTimerForIdle @ 0x1400E6CE0 (KePrepareClockTimerForIdle.c)
 *     PpmGetExitSamplingCountdown @ 0x1400ED584 (PpmGetExitSamplingCountdown.c)
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x14017DF24 (xHalUnmaskInterrupt.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x140183710 (KiSetUserTbFlushPending.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KdCallPowerHandlers @ 0x1401FDB1C (KdCallPowerHandlers.c)
 *     KdPowerTransition @ 0x1401FDE40 (KdPowerTransition.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KeFlushCurrentTbImmediately @ 0x140203C84 (KeFlushCurrentTbImmediately.c)
 *     KeWakeProcessor @ 0x140203EC8 (KeWakeProcessor.c)
 *     PpmAbortCoordinatedIdleState @ 0x140233FB8 (PpmAbortCoordinatedIdleState.c)
 *     PpmExitCoordinatedIdleState @ 0x140234248 (PpmExitCoordinatedIdleState.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x140234BE8 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x140234E9C (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmIdleTransitionStall @ 0x140235220 (PpmIdleTransitionStall.c)
 *     PpmTestAndLockProcessor @ 0x140235ADC (PpmTestAndLockProcessor.c)
 *     PpmUpdatePlatformIdleAccounting @ 0x140236418 (PpmUpdatePlatformIdleAccounting.c)
 */

__int64 __fastcall PpmIdleExecuteTransition(
        ULONG_PTR BugCheckParameter4,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rbp
  unsigned __int16 v8; // r13
  unsigned int v9; // r11d
  unsigned int v10; // r10d
  char v12; // r9
  int v13; // r14d
  _BYTE *v14; // r12
  signed __int32 v15; // eax
  signed __int32 v16; // edx
  unsigned __int16 *v17; // r15
  unsigned __int64 v18; // rdx
  __int64 i; // r8
  __int64 v20; // rbx
  unsigned int v21; // ebp
  unsigned int v22; // edi
  _BYTE *v23; // rbx
  unsigned int v24; // ecx
  __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  unsigned __int16 v27; // bx
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rbp
  __int64 v32; // rcx
  unsigned __int32 v33; // eax
  bool v34; // r12
  unsigned __int16 v35; // dx
  unsigned __int16 v36; // cx
  unsigned __int8 v37; // bl
  signed __int32 v38; // eax
  signed __int32 v39; // edx
  __int64 v40; // rcx
  unsigned __int64 v41; // r8
  __int64 v42; // rdx
  signed __int64 v43; // rax
  __int64 v44; // r9
  char v45; // bp
  signed __int64 v46; // rdi
  int v47; // r8d
  unsigned __int16 v48; // ax
  unsigned __int64 *v49; // r10
  __int64 v50; // r11
  unsigned __int64 v51; // rdx
  int v52; // eax
  int ExitSamplingCountdown; // eax
  char v54; // r10
  signed __int32 v55; // eax
  signed __int32 v56; // edx
  volatile unsigned __int8 v57; // di
  __int64 v58; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  int v60; // edi
  struct _KPRCB *v61; // rbx
  __int64 Number; // rax
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rax
  bool v66; // al
  __int64 v67; // rbx
  __int16 v68; // r12
  unsigned __int64 v69; // rax
  __int64 v70; // rdx
  unsigned __int64 v71; // r11
  unsigned __int64 v72; // rdi
  unsigned __int64 v73; // r9
  unsigned __int64 v74; // rcx
  __int64 (__fastcall *v75)(__int64, _QWORD, _QWORD, _QWORD, _QWORD); // r10
  unsigned int v76; // edx
  __int64 v77; // r14
  __int64 v78; // rdi
  __int64 v79; // rbp
  __int64 v80; // r8
  int v81; // eax
  unsigned int v82; // edi
  unsigned __int8 v83; // dl
  __int16 v84; // r8
  signed __int32 v85; // eax
  signed __int32 v86; // edx
  unsigned __int16 v87; // ax
  struct _KPRCB *v88; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v90; // rbp
  __int64 v91; // rax
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rcx
  bool v94; // r12
  unsigned __int64 v95; // rax
  unsigned __int32 v96; // eax
  unsigned __int32 v97; // eax
  int *v98; // rcx
  unsigned int v99; // r15d
  __int64 v100; // rbp
  __int64 v101; // r10
  int v102; // r8d
  __int64 v103; // r9
  int v104; // r14d
  __int64 v105; // rbx
  __int64 v106; // rdi
  __int64 v107; // rcx
  unsigned __int64 v108; // rax
  __int64 v109; // rcx
  unsigned __int64 v110; // rdx
  __int64 v111; // rbx
  unsigned int v112; // edi
  __int64 v113; // r8
  __int64 j; // r9
  unsigned __int16 *v115; // r14
  unsigned __int64 v116; // r10
  unsigned __int16 v117; // r9
  unsigned __int64 v118; // rdx
  __int64 v119; // rbx
  __int64 v120; // r8
  __int64 v121; // rdi
  unsigned __int32 v122; // eax
  unsigned __int32 v123; // r11d
  signed __int32 v124; // ecx
  unsigned int v125; // r8d
  __int64 v126; // rcx
  __int64 *v127; // rdx
  __int64 v128; // rcx
  unsigned int v129; // r8d
  __int64 v130; // rcx
  __int64 v131; // rbx
  __int64 result; // rax
  unsigned __int8 v133; // [rsp+40h] [rbp-238h]
  volatile unsigned __int8 DeepSleep; // [rsp+41h] [rbp-237h]
  int v135; // [rsp+44h] [rbp-234h]
  char v136; // [rsp+48h] [rbp-230h]
  char v138; // [rsp+4Ah] [rbp-22Eh]
  char v139; // [rsp+4Bh] [rbp-22Dh]
  char v140; // [rsp+4Ch] [rbp-22Ch]
  bool BugCheckParameter2_4; // [rsp+54h] [rbp-224h]
  int BugCheckParameter2_4a; // [rsp+54h] [rbp-224h]
  char v144[4]; // [rsp+58h] [rbp-220h] BYREF
  int v145; // [rsp+5Ch] [rbp-21Ch]
  unsigned int v146; // [rsp+60h] [rbp-218h]
  __int64 v147; // [rsp+68h] [rbp-210h]
  int v148; // [rsp+70h] [rbp-208h]
  __int64 v149; // [rsp+78h] [rbp-200h]
  int v150; // [rsp+80h] [rbp-1F8h] BYREF
  __int64 v151; // [rsp+88h] [rbp-1F0h]
  unsigned int v152; // [rsp+90h] [rbp-1E8h] BYREF
  LARGE_INTEGER v153; // [rsp+98h] [rbp-1E0h]
  _DWORD v154[2]; // [rsp+A0h] [rbp-1D8h] BYREF
  _QWORD v155[2]; // [rsp+A8h] [rbp-1D0h] BYREF
  _QWORD v156[3]; // [rsp+B8h] [rbp-1C0h] BYREF
  _BYTE *v157; // [rsp+D0h] [rbp-1A8h]
  int v158; // [rsp+D8h] [rbp-1A0h]
  int v159; // [rsp+DCh] [rbp-19Ch]
  _QWORD v160[3]; // [rsp+E0h] [rbp-198h] BYREF
  __int64 v161; // [rsp+F8h] [rbp-180h]
  unsigned int v162; // [rsp+100h] [rbp-178h] BYREF
  __int16 v163; // [rsp+104h] [rbp-174h]
  __int16 v164; // [rsp+106h] [rbp-172h]
  __int64 v165; // [rsp+108h] [rbp-170h]
  _QWORD v166[2]; // [rsp+110h] [rbp-168h] BYREF
  __int64 v167; // [rsp+120h] [rbp-158h] BYREF
  int v168; // [rsp+128h] [rbp-150h]
  int v169; // [rsp+12Ch] [rbp-14Ch]
  _QWORD v170[2]; // [rsp+130h] [rbp-148h] BYREF
  _QWORD v171[2]; // [rsp+140h] [rbp-138h] BYREF
  __int64 v172; // [rsp+150h] [rbp-128h] BYREF
  int v173; // [rsp+158h] [rbp-120h]
  int v174; // [rsp+15Ch] [rbp-11Ch]
  __int128 v175; // [rsp+160h] [rbp-118h]
  __int64 v176; // [rsp+170h] [rbp-108h] BYREF
  _QWORD v177[21]; // [rsp+178h] [rbp-100h] BYREF
  int v178; // [rsp+270h] [rbp-8h]
  void *retaddr; // [rsp+278h] [rbp+0h]

  v7 = *(_QWORD *)(BugCheckParameter4 + 23808);
  v8 = 0;
  v9 = a2;
  v10 = a3;
  v12 = a7;
  v151 = *(_QWORD *)(v7 + 472);
  v13 = 0;
  v146 = a3;
  v14 = (_BYTE *)(248LL * a2 + v7 + 800);
  v153.QuadPart = 0LL;
  v148 = 0;
  LODWORD(v149) = 0;
  DeepSleep = 0;
  v140 = 0;
  BugCheckParameter2_4 = 0;
  v136 = 0;
  v139 = 0;
  v150 = -1;
  v147 = v7;
  v157 = v14;
  v138 = 0;
  v135 = 0;
  if ( !a7 || *(_BYTE *)(v7 + 523) || (v133 = 1, v14[245]) )
    v133 = 0;
  v145 = 3;
  if ( !*(_BYTE *)v7 )
  {
    if ( a7 )
    {
      _m_prefetchw((const void *)(BugCheckParameter4 + 23872));
      v15 = *(_DWORD *)(BugCheckParameter4 + 23872);
      do
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange(
                (volatile signed __int32 *)(BugCheckParameter4 + 23872),
                v15 & 0xFFFFFF | 0x1000000,
                v15);
      }
      while ( v15 != v16 );
    }
    v17 = (unsigned __int16 *)(v7 + 224);
    *(_QWORD *)(v7 + 224) = 1310721LL;
    memset((void *)(v7 + 232), 0, 0xA0uLL);
    v20 = *(_QWORD *)(v7 + 536);
    v21 = *(_DWORD *)(v7 + 532);
    v156[1] = 0LL;
    v156[2] = 0LL;
    v155[0] = 1LL;
    v156[0] = 65537LL;
    v22 = 0;
    v155[1] = v156;
    if ( v21 )
    {
      v23 = (_BYTE *)(v20 + 4);
      while ( 1 )
      {
        if ( *v23 != 0xFF )
        {
          v24 = *((_DWORD *)v23 - 1);
          HIDWORD(v156[0]) = (unsigned __int8)*v23;
          v25 = v24 >= (unsigned int)KeNumberProcessors_0 ? 0LL : KiProcessorBlock[v24];
          v135 = PpmTestAndLockProcessor(v25, v17, v155);
          v13 = v135;
          if ( v135 < 0 )
            break;
        }
        ++v22;
        v23 += 8;
        if ( v22 >= v21 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      v26 = *((_QWORD *)v17 + 1);
      v27 = 0;
LABEL_18:
      while ( v26 )
      {
LABEL_21:
        _BitScanForward64(&v28, v26);
        v26 &= ~(1LL << v28);
        v159 = v28;
        v29 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v27 + (unsigned __int8)v28];
        if ( (unsigned int)v29 >= (unsigned int)KeNumberProcessors_0 )
        {
          v30 = 0LL;
        }
        else
        {
          _mm_lfence();
          v30 = KiProcessorBlock[v29];
        }
        v31 = *(_QWORD *)(v30 + 23808);
        v161 = 0LL;
        v160[0] = 0LL;
        v32 = *(_QWORD *)(v31 + 472);
        BYTE4(v161) = 1;
        v160[2] = v30;
        v160[1] = PopIdleTransitionTimeout;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(v31 + 456))(v32) )
        {
          while ( (*(_DWORD *)(v30 + 23872) & 0xFF000000) == 0x5000000 )
          {
            PpmIdleTransitionStall(v160);
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v31 + 456))(*(_QWORD *)(v31 + 472)) )
              goto LABEL_18;
          }
          v13 = -1073741782;
          v135 = -1073741782;
          goto LABEL_30;
        }
      }
      while ( ++v27 < (unsigned int)*v17 )
      {
        v26 = *(_QWORD *)&v17[4 * v27 + 4];
        if ( v26 )
          goto LABEL_21;
      }
      v13 = 0;
      v135 = 0;
    }
LABEL_30:
    if ( v13 < 0 )
    {
      if ( a7 )
      {
        _m_prefetchw((const void *)(BugCheckParameter4 + 23872));
        v33 = *(_DWORD *)(BugCheckParameter4 + 23872);
        do
        {
          v18 = v33;
          v33 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)(BugCheckParameter4 + 23872),
                  v33 & 0xFFFFFF,
                  v33);
        }
        while ( v33 != (_DWORD)v18 );
      }
      v145 = 1;
      v34 = 1;
      goto LABEL_200;
    }
    v7 = v147;
    v10 = v146;
    v12 = a7;
    v9 = a2;
  }
  v35 = *(_WORD *)(v7 + 224);
  v36 = 0;
  if ( v35 )
  {
    while ( !*(_QWORD *)(v7 + 8LL * v36 + 232) )
    {
      if ( ++v36 >= v35 )
        goto LABEL_41;
    }
    *(_WORD *)(v7 + 36) |= 0x20u;
  }
LABEL_41:
  v37 = v133;
  *(_BYTE *)(BugCheckParameter4 + 23856) = v133;
  *(_DWORD *)(BugCheckParameter4 + 23860) = v9;
  if ( v12 )
  {
    *(_BYTE *)(BugCheckParameter4 + 23857) = v14[242] == 0;
    _m_prefetchw((const void *)(BugCheckParameter4 + 23872));
    v38 = *(_DWORD *)(BugCheckParameter4 + 23872);
    do
    {
      v39 = v38;
      v38 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(BugCheckParameter4 + 23872),
              v38 & 0xFFFFFF | 0x2000000,
              v38);
    }
    while ( v38 != v39 );
  }
  if ( *(_BYTE *)(v7 + 6) )
  {
    v40 = KeMaximumIncrement;
    v136 = 1;
    if ( *(_QWORD *)(v7 + 504) > (unsigned __int64)KeMaximumIncrement )
      v40 = *(_QWORD *)(v7 + 504);
    *(_QWORD *)(BugCheckParameter4 + 23848) = a6 + KeMaximumIncrement + v40;
    _interlockedbittestandset64(
      (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 1600) + 72LL),
      *(unsigned __int8 *)(BugCheckParameter4 + 1617));
  }
  if ( v14[241] )
    goto LABEL_101;
  v41 = *(_QWORD *)(BugCheckParameter4 + 1608);
  v42 = *(_QWORD *)(BugCheckParameter4 + 1600);
  v140 = 1;
  _m_prefetchw((const void *)(v42 + 64));
  v43 = _InterlockedOr64((volatile signed __int64 *)(v42 + 64), v41);
  v44 = *(_QWORD *)(BugCheckParameter4 + 23808);
  v45 = 0;
  v148 = 0;
  v46 = v43;
  if ( v133 )
  {
    v148 = 1;
LABEL_58:
    v52 = *(_DWORD *)(v44 + 8);
    v45 = 0;
    if ( v52 )
      *(_DWORD *)(v44 + 8) = v52 - 1;
    if ( !*(_DWORD *)(v44 + 8) )
    {
      ExitSamplingCountdown = PpmGetExitSamplingCountdown();
      v45 = 0;
      *(_DWORD *)(v44 + 8) = ExitSamplingCountdown;
      if ( ExitSamplingCountdown )
        v45 = v54;
    }
    if ( v45 )
    {
      *(_BYTE *)(v44 + 3) = 1;
      if ( v37 )
        *(_QWORD *)(v44 + 40) = -1LL;
    }
    goto LABEL_66;
  }
  if ( v10 != -1 )
    goto LABEL_58;
  v47 = 0;
  v48 = *(_WORD *)(v44 + 224);
  if ( v48 )
  {
    v49 = (unsigned __int64 *)(v44 + 232);
    v50 = v48;
    do
    {
      v51 = *v49++;
      v47 += (unsigned int)((0x101010101010101LL
                           * ((((v51 - ((v51 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v51 - ((v51 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v51 - ((v51 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v51 - ((v51 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v50;
    }
    while ( v50 );
    v14 = v157;
    v8 = 0;
  }
  v37 = v133;
  if ( v47 == (_DWORD)KeNumberProcessors_0 - 1 )
  {
    v148 = 2;
    goto LABEL_58;
  }
LABEL_66:
  v13 = off_140321900();
  v135 = v13;
  if ( !*(_DWORD *)(BugCheckParameter4 + 11672) )
  {
    if ( v13 < 0 )
      goto LABEL_69;
    v58 = v147;
    if ( *(_BYTE *)v147 == 1
      && (unsigned __int8)PpmIdleRecheckCoordinatedIdleMask(
                            v147,
                            *(unsigned __int8 *)(BugCheckParameter4 + 1616),
                            *(_QWORD *)(BugCheckParameter4 + 1608) | v46) )
    {
      v13 = -1073741802;
      goto LABEL_68;
    }
    if ( v45 )
      *(_WORD *)(v147 + 36) |= 0x200u;
    if ( v37 )
    {
      v138 = 1;
      _InterlockedIncrement(&PpmNonInterruptibleCount);
      CurrentPrcb = KeGetCurrentPrcb();
      v60 = KiClockTimerOwner;
      if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
      {
        off_140321A48();
        CurrentPrcb->PendingTickFlags &= ~1u;
      }
      if ( CurrentPrcb->Number == v60 )
      {
        ++dword_1403390E8;
        KiClockActive = 0;
      }
      if ( CurrentPrcb->ClockOwner )
        CurrentPrcb->ClockOwner = 0;
    }
    DeepSleep = 0;
    if ( v14[240] >= 2u && (HvlEnlightenments & 4) == 0 )
    {
      v61 = KeGetCurrentPrcb();
      _R9D = 1;
      Number = v61->Number;
      v61->DeepSleep = 1;
      _InterlockedOr64(
        (volatile signed __int64 *)(8LL * ((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6)
                                  + 3353384
                                  + 0x140000000LL),
        1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F));
      if ( !v61->DeepSleep )
      {
        _InterlockedAnd64(
          (volatile signed __int64 *)(8LL * ((unsigned int)KiProcessorIndexToNumberMappingTable[v61->Number] >> 6)
                                    + 3353384
                                    + 0x140000000LL),
          ~(1LL << (KiProcessorIndexToNumberMappingTable[v61->Number] & 0x3F)));
        if ( KiFlushPcid )
        {
          v175 = 2uLL;
          __asm { invpcid r9d, [rsp+278h+var_118] }
          if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            KiSetUserTbFlushPending();
        }
        else
        {
          v64 = __readcr4();
          if ( (v64 & 0x20080) != 0 )
          {
            __writecr4(v64 ^ 0x80);
            __writecr4(v64);
          }
          else
          {
            v65 = __readcr3();
            __writecr3(v65);
          }
        }
      }
      DeepSleep = v61->DeepSleep;
    }
    if ( *(_BYTE *)(v58 + 524) )
    {
      v66 = 0;
      if ( v45 )
      {
        v66 = v133 == 0;
        BugCheckParameter2_4 = v133 == 0;
      }
      v7 = v58;
      KePrepareClockTimerForIdle(a4, *(_QWORD *)(v58 + 504), v66);
    }
    else
    {
      v7 = v58;
    }
LABEL_101:
    v67 = *(_QWORD *)(BugCheckParameter4 + 24192);
    v68 = v178;
    if ( v67 )
    {
      _disable();
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(*(_QWORD *)(BugCheckParameter4 + 24192));
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)v67, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v67);
      }
      v69 = *(_QWORD *)(v67 + 16);
      v70 = *(unsigned int *)(v67 + 12);
      if ( a5 > v69 )
      {
        *(_QWORD *)(v67 + 16) = a5;
        *(_QWORD *)(v67 + 24) += a5 - v69;
        *(_QWORD *)(v67 + 8 * v70 + 32) += a5 - v69;
      }
      *(_DWORD *)(v67 + 12) = v70 - 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v67, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v67, 0LL);
      if ( (v68 & 0x200) != 0 )
        _enable();
    }
    *(_DWORD *)(v7 + 16) = a2;
    v71 = __rdtsc();
    if ( (*(_QWORD *)(BugCheckParameter4 + 25192) & 0x8000000000LL) != 0 )
      v72 = __readmsr(0xDB2u);
    else
      v72 = 0LL;
    v73 = a5 - *(_QWORD *)(BugCheckParameter4 + 23920);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter4 + 23936), v73);
    if ( (*(_QWORD *)(BugCheckParameter4 + 25192) & 0x8000000000LL) != 0 )
      *(_QWORD *)(BugCheckParameter4 + 24008) += PpmConvertTime(
                                                   v73,
                                                   v71 - *(_QWORD *)(BugCheckParameter4 + 23888),
                                                   v72 - *(_QWORD *)(BugCheckParameter4 + 24000));
    v74 = *(_QWORD *)(BugCheckParameter4 + 23888);
    *(_QWORD *)(BugCheckParameter4 + 23920) = a5;
    if ( v71 > v74 )
      *(_QWORD *)(BugCheckParameter4 + 23896) += v71 - v74;
    *(_QWORD *)(BugCheckParameter4 + 23888) = v71;
    if ( (*(_QWORD *)(BugCheckParameter4 + 25192) & 0x8000000000LL) != 0 )
      *(_QWORD *)(BugCheckParameter4 + 24000) = v72;
    LOBYTE(v73) = 1;
    PpmUpdatePerformanceFeedback(BugCheckParameter4, 0, 0, v73, 0LL);
    if ( PopSnapEnergyCounters )
      PopSnapEnergyCounters(*(unsigned int *)(BugCheckParameter4 + 36), 0LL, 0LL);
    _InterlockedExchange64((volatile __int64 *)(BugCheckParameter4 + 23840), a5);
    v75 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v7 + 400);
    if ( v75 )
    {
      v13 = v75(v151, a2, v146, *(unsigned int *)(v7 + 780), *(_QWORD *)(v7 + 792));
      v135 = v13;
    }
    if ( v13 >= 0 )
    {
      v76 = v146;
      v77 = *(_QWORD *)(v7 + 792);
      LODWORD(v78) = *(_DWORD *)(v7 + 780);
      v139 = 1;
      if ( v146 != -1 )
      {
        v152 = v146;
        v79 = PpmPlatformStates + 384LL * v146;
        if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
        {
          v166[1] = 4LL;
          v166[0] = &v152;
          EtwTraceKernelEvent((int)v166, 1, 0x40008000u, 0x123Bu, 1538);
          v76 = v146;
        }
        if ( !qword_140353840 && v76 == dword_140353880 )
          _InterlockedCompareExchange64(&qword_140353840, MEMORY[0xFFFFF78000000008], 0LL);
        if ( *(_BYTE *)(v79 + 112) )
        {
          KdPowerTransition(2147483652LL);
          KdCallPowerHandlers(4LL);
        }
        v7 = v147;
      }
      if ( (_DWORD)v78 )
      {
        if ( *(_BYTE *)(PpmPlatformStates + 12) && (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
        {
          v172 = v77;
          v173 = 4 * v78;
          v174 = 0;
          EtwTraceKernelEvent((int)&v172, 1, 0x40008000u, 0x123Fu, 1538);
        }
        do
        {
          v78 = (unsigned int)(v78 - 1);
          v80 = 384LL * *(unsigned int *)(v77 + 4 * v78) + PpmPlatformStates + 64;
          *(_QWORD *)(v80 + 256) = a5;
          v81 = *(_DWORD *)(v80 + 248);
          if ( !*(_DWORD *)(PpmPlatformStates + 4) )
            v81 ^= ((unsigned __int16)v81 ^ (unsigned __int16)KeGetPcr()->Prcb.Number) & 0xFFF;
          *(_DWORD *)(v80 + 248) = v81 & 0xF8FFFFFF | 0x4000000;
        }
        while ( (_DWORD)v78 );
      }
      v82 = v146;
      if ( v146 != -1 )
        *(_WORD *)(v7 + 36) |= 0x10u;
      v83 = *(_BYTE *)(v7 + 525);
      v84 = *(_WORD *)(v7 + 36);
      if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
      {
        v165 = *(_QWORD *)(v7 + 496);
        v162 = a2;
        v171[0] = &v162;
        v163 = v84;
        v164 = v83;
        v171[1] = 16LL;
        EtwTraceKernelEvent((int)v171, 1, 0x40008000u, 0x1239u, 1538);
      }
      if ( a7 )
      {
        _m_prefetchw((const void *)(BugCheckParameter4 + 23872));
        v85 = *(_DWORD *)(BugCheckParameter4 + 23872);
        do
        {
          v86 = v85;
          v85 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)(BugCheckParameter4 + 23872),
                  ((unsigned __int8)((v133 != 0) + 3) << 24) | v85 & 0xFFFFFF,
                  v85);
        }
        while ( v85 != v86 );
      }
      if ( (*(_BYTE *)(BugCheckParameter4 + 11570) & 1) != 0 )
      {
        v87 = *(_WORD *)(BugCheckParameter4 + 11572);
        if ( v87 )
        {
          *(_WORD *)(BugCheckParameter4 + 11568) |= 1u;
          LODWORD(v149) = v87;
        }
      }
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(v7 + 408))(
              v151,
              a2,
              v82,
              (unsigned int)v149,
              *(_DWORD *)(v7 + 780),
              *(_QWORD *)(v7 + 792));
      v135 = v13;
      *(_WORD *)(BugCheckParameter4 + 11568) &= ~1u;
      if ( *(int *)(v7 + 48) < 0 )
      {
        if ( v13 >= 0 )
          v13 = *(_DWORD *)(v7 + 48);
        v135 = v13;
      }
      if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
      {
        v154[0] = a2;
        v170[0] = v154;
        v154[1] = v13;
        v170[1] = 8LL;
        EtwTraceKernelEvent((int)v170, 1, 0x40008000u, 0x123Au, 1538);
      }
    }
    v57 = DeepSleep;
    if ( DeepSleep )
    {
      if ( *(_BYTE *)(BugCheckParameter4 + 23322) )
      {
        v88 = KeGetCurrentPrcb();
        v88->DeepSleep = 0;
        _InterlockedAnd64(
          &qword_140332B28[(unsigned int)KiProcessorIndexToNumberMappingTable[v88->Number] >> 6],
          ~(1LL << (KiProcessorIndexToNumberMappingTable[v88->Number] & 0x3F)));
        KeFlushCurrentTbImmediately();
      }
      v57 = 0;
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v153 = PerformanceCounter;
    _InterlockedExchange64((volatile __int64 *)(BugCheckParameter4 + 23840), 0LL);
    v90 = PerformanceCounter;
    v91 = __rdtsc();
    v18 = (unsigned __int64)HIDWORD(v91) << 32;
    i = v91;
    if ( (*(_QWORD *)(BugCheckParameter4 + 25192) & 0x8000000000LL) != 0 )
    {
      v92 = __readmsr(0xDB2u);
      v18 = (unsigned __int64)HIDWORD(v92) << 32;
      v93 = v92;
    }
    else
    {
      v93 = 0LL;
    }
    *(LARGE_INTEGER *)(BugCheckParameter4 + 23920) = v90;
    *(_QWORD *)(BugCheckParameter4 + 23888) = i;
    if ( (*(_QWORD *)(BugCheckParameter4 + 25192) & 0x8000000000LL) != 0 )
      *(_QWORD *)(BugCheckParameter4 + 24000) = v93;
    if ( v67 )
    {
      _disable();
      v94 = (v68 & 0x200) != 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v67);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)v67, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v67);
      }
      v95 = *(_QWORD *)(v67 + 16);
      v18 = *(unsigned int *)(v67 + 12);
      if ( v90.QuadPart > v95 )
      {
        *(LARGE_INTEGER *)(v67 + 16) = v90;
        *(_QWORD *)(v67 + 24) += v90.QuadPart - v95;
        *(_QWORD *)(v67 + 8 * v18 + 32) += v90.QuadPart - v95;
      }
      *(_DWORD *)(v67 + 12) = v18 + 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v67, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v67, 0LL);
      if ( v94 )
        _enable();
    }
    *(_QWORD *)(BugCheckParameter4 + 23824) = v90.QuadPart - a5;
    if ( a7 )
    {
      _m_prefetchw((const void *)(BugCheckParameter4 + 23872));
      v96 = *(_DWORD *)(BugCheckParameter4 + 23872);
      do
      {
        v18 = v96;
        v96 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter4 + 23872), v96 & 0xFFFFFF, v96);
      }
      while ( v96 != (_DWORD)v18 );
      v97 = HIBYTE(v96);
      if ( v13 >= 0 && (_BYTE)v97 != 8 && v133 )
        KeBugCheckEx(0xA0u, 0x702uLL, a2, (unsigned __int8)v97, BugCheckParameter4);
      *(_BYTE *)(BugCheckParameter4 + 23857) = 0;
    }
    if ( !v140 )
      goto LABEL_197;
    goto LABEL_189;
  }
  v13 = -2147483631;
LABEL_68:
  v135 = v13;
LABEL_69:
  if ( a7 )
  {
    _m_prefetchw((const void *)(BugCheckParameter4 + 23872));
    v55 = *(_DWORD *)(BugCheckParameter4 + 23872);
    do
    {
      v56 = v55;
      v55 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter4 + 23872), v55 & 0xFFFFFF, v55);
    }
    while ( v55 != v56 );
  }
  v145 = 0;
  v57 = 0;
LABEL_189:
  _interlockedbittestandreset64(
    (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 1600) + 64LL),
    *(unsigned __int8 *)(BugCheckParameter4 + 1617));
  if ( v57 && *(_BYTE *)(BugCheckParameter4 + 23322) )
    KeWakeProcessor();
  if ( BugCheckParameter2_4 && v13 >= 0 )
    v98 = &v150;
  else
    v98 = 0LL;
  KeResumeClockTimerFromIdle(v98);
  off_140321910();
  KeAccumulateTicks(BugCheckParameter4, *(_DWORD *)(BugCheckParameter4 + 11764), MEMORY[0xFFFFF78000000320], 0, 0);
LABEL_197:
  if ( v136 )
  {
    v18 = *(_QWORD *)(BugCheckParameter4 + 1600);
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(v18 + 72),
      *(unsigned __int8 *)(BugCheckParameter4 + 1617));
    *(_QWORD *)(BugCheckParameter4 + 23848) = -1LL;
  }
  v34 = v145 != 3;
LABEL_200:
  v99 = -1;
  v100 = 0LL;
  BugCheckParameter2_4a = -1;
  if ( PpmPlatformStates )
  {
    if ( !v139 )
    {
      v101 = v147;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v101 + 780); i = (unsigned int)(v102 + 1) )
      {
        PpmAbortCoordinatedIdleState(
          PpmPlatformStates + 312 + 384LL * *(unsigned int *)(*(_QWORD *)(v101 + 792) + 4LL * (unsigned int)i),
          v18,
          i,
          *(unsigned int *)(*(_QWORD *)(v101 + 792) + 4LL * (unsigned int)i));
        if ( v34 )
        {
          v18 = 992 * v103;
          ++*(_DWORD *)(992 * v103 + *(_QWORD *)(PpmPlatformStates + 48) + 24);
        }
      }
    }
    v104 = *(_DWORD *)PpmPlatformStates;
    if ( *(_DWORD *)PpmPlatformStates )
    {
      v105 = (unsigned int)(v104 - 1);
      v149 = v135;
      while ( 1 )
      {
        v106 = PpmPlatformStates + 384 * v105;
        if ( ((*(_QWORD *)(v106
                         + 8LL
                         * ((unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(BugCheckParameter4 + 36)] >> 6)
                         + 128) >> (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(BugCheckParameter4 + 36)] & 0x3F)) & 1) != 0
          && (unsigned __int8)PpmExitCoordinatedIdleState(v106 + 312, v144, i) )
        {
          v107 = (unsigned int)v100;
          v100 = (unsigned int)(v100 + 1);
          *(_DWORD *)(*(_QWORD *)(v147 + 792) + 4 * v107) = v105;
          if ( (_DWORD)v100 == 1 && *(_BYTE *)(v106 + 113) )
          {
            BugCheckParameter2_4a = v105;
            if ( *(_BYTE *)(v106 + 112) )
            {
              KdCallPowerHandlers(1LL);
              KdPowerTransition(2147483649LL);
            }
            i = v149;
            if ( (PopSimulate & 0x100) != 0 && v149 >= 0 )
            {
              if ( !v34 )
                goto LABEL_222;
              if ( a4 && (_DWORD)v105 == PpmDripsStateIndex )
                KeBugCheckEx(0xA0u, 0x257uLL, (unsigned int)v105, 0LL, 0LL);
            }
          }
          else
          {
            i = v149;
          }
          if ( !v34 )
          {
LABEL_222:
            v108 = *(_QWORD *)(v106 + 320);
            v109 = 992LL * (unsigned int)v105 + *(_QWORD *)(PpmPlatformStates + 48) + 24LL;
            if ( v153.QuadPart >= v108 )
            {
              v110 = v153.QuadPart - v108;
              *(_QWORD *)(v109 + 32) += v153.QuadPart - v108;
            }
            else
            {
              v110 = 0LL;
            }
            if ( i < 0 && v144[0] )
            {
              ++*(_DWORD *)(v109 + 4);
            }
            else
            {
              ++*(_DWORD *)(v109 + 8);
              PpmUpdatePlatformIdleAccounting(v109, v110);
            }
          }
        }
        v105 = (unsigned int)(v105 - 1);
        if ( !--v104 )
        {
          v99 = BugCheckParameter2_4a;
          break;
        }
      }
    }
    v111 = v147;
    if ( (_DWORD)v100 && *(_BYTE *)(PpmPlatformStates + 12) && (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
    {
      v167 = *(_QWORD *)(v147 + 792);
      v168 = 4 * v100;
      v169 = 0;
      EtwTraceKernelEvent((int)&v167, 1, 0x40008000u, 0x1240u, 1538);
    }
  }
  else
  {
    v111 = v147;
  }
  v112 = v145;
  *(_DWORD *)(v111 + 780) = v100;
  if ( v112 == 3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v111 + 440))(
      v151,
      a2,
      v99,
      (unsigned int)v100,
      *(_QWORD *)(v111 + 792));
  }
  else if ( !*(_BYTE *)v111 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(v111 + 448))(v151, v112, i);
  }
  LODWORD(v113) = *(_DWORD *)(v111 + 780);
  for ( j = *(_QWORD *)(v111 + 792);
        (_DWORD)v113;
        *(_DWORD *)(384LL * *(unsigned int *)(j + 4 * v113) + PpmPlatformStates + 312) = 0 )
  {
    v113 = (unsigned int)(v113 - 1);
  }
  if ( v138 )
    _InterlockedDecrement(&PpmNonInterruptibleCount);
  v176 = 1310721LL;
  memset(v177, 0, 0xA0uLL);
  LODWORD(v100) = KeGetPcr()->Prcb.Number;
  v115 = (unsigned __int16 *)(v111 + 224);
  v116 = *(_QWORD *)(v111 + 232);
  v117 = 0;
  while ( v116 )
  {
LABEL_248:
    _BitScanForward64(&v118, v116);
    v116 &= ~(1LL << v118);
    v158 = v118;
    v119 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v117 + (unsigned __int8)v118];
    if ( (unsigned int)v119 >= (unsigned int)KeNumberProcessors_0 )
    {
      v120 = 0LL;
    }
    else
    {
      _mm_lfence();
      v120 = KiProcessorBlock[v119];
    }
    v121 = *(_QWORD *)(v120 + 23808);
    _m_prefetchw((const void *)(v120 + 23872));
    v122 = *(_DWORD *)(v120 + 23872);
    do
    {
      v123 = v122;
      v124 = v122 ^ (v122 ^ (v122 - 1)) & 0xFFFFFF;
      if ( (v124 & 0xFFFFFF) == 0 )
      {
        if ( HIBYTE(v122) == 5 )
        {
          v124 = v124 & 0xFFFFFF | 0x4000000;
        }
        else if ( HIBYTE(v122) == 7 )
        {
          v124 = v124 & 0xFFFFFF | 0x6000000;
        }
      }
      v122 = _InterlockedCompareExchange((volatile signed __int32 *)(v120 + 23872), v124, v122);
    }
    while ( v122 != v123 );
    if ( HIBYTE(v124) == 6 )
    {
      v125 = KiProcessorIndexToNumberMappingTable[v119] & 0x3F;
      v126 = (unsigned int)KiProcessorIndexToNumberMappingTable[v119] >> 6;
      if ( (unsigned __int16)v176 <= (unsigned int)v126 )
        LOWORD(v176) = v126 + 1;
      v127 = &v177[v126];
      v128 = *v127;
      _bittestandset64(&v128, v125);
      *v127 = v128;
    }
    _InterlockedAnd64(
      (volatile signed __int64 *)(v121
                                + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v100] >> 6)
                                + 64),
      ~(1LL << (KiProcessorIndexToNumberMappingTable[v100] & 0x3F)));
    v129 = KiProcessorIndexToNumberMappingTable[v119];
    v130 = v129 >> 6;
    if ( *v115 > (unsigned int)v130 )
      *(_QWORD *)&v115[4 * v130 + 4] &= ~(1LL << (v129 & 0x3F));
  }
  while ( ++v117 < (unsigned int)*v115 )
  {
    v116 = *(_QWORD *)&v115[4 * v117 + 4];
    if ( v116 )
      goto LABEL_248;
  }
  if ( (_WORD)v176 )
  {
    while ( !v177[v8] )
    {
      if ( ++v8 >= (unsigned __int16)v176 )
        goto LABEL_269;
    }
    HalRequestIpi(0LL, &v176);
  }
LABEL_269:
  v131 = v147;
  if ( *(_BYTE *)(v147 + 3) )
    PpmIdleCompleteExitLatencyTrace(BugCheckParameter4, v135, v133, v153.LowPart, v150, v148, a2, BugCheckParameter2_4a);
  *(_DWORD *)(v131 + 52) = v145;
  result = (unsigned int)v135;
  *(_DWORD *)(v131 + 48) = v135;
  return result;
}
