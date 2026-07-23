/*
 * XREFs of PpmIdlePrepare @ 0x1400D9B50
 * Callers:
 *     PoIdle @ 0x1400D7DE0 (PoIdle.c)
 * Callees:
 *     KiGetNextTimer2ExpirationDueTime @ 0x14009C9E8 (KiGetNextTimer2ExpirationDueTime.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     KiFindNextTimerDueTime @ 0x1400DABF0 (KiFindNextTimerDueTime.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PpmGetIdleConstrainedMask @ 0x1401FF830 (PpmGetIdleConstrainedMask.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x14022DFAC (ExGetNextWakeTimeForDeepSleep.c)
 */

__int64 __fastcall PpmIdlePrepare(
        __int64 a1,
        char *a2,
        LARGE_INTEGER *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rsi
  char v8; // r13
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rbx
  LARGE_INTEGER v12; // rbp
  __int64 v13; // r15
  LARGE_INTEGER PerformanceCounter; // rdx
  LARGE_INTEGER v15; // r8
  LARGE_INTEGER v16; // r10
  unsigned __int64 *v17; // r12
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int16 v20; // r15
  bool v21; // zf
  unsigned __int64 v22; // rbx
  __int64 v23; // r14
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rbp
  __int64 v26; // rcx
  char v27; // r12
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // r11
  __int64 NextWakeTimeForDeepSleep; // rax
  unsigned __int64 v31; // rax
  unsigned int v32; // edx
  unsigned int v33; // ecx
  unsigned int i; // eax
  unsigned __int64 v35; // rbx
  ULONG v36; // eax
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rcx
  unsigned int v40; // ebx
  __int64 v41; // r12
  __int64 v42; // r14
  unsigned int v43; // edx
  char v44; // bp
  __int64 v45; // rdi
  unsigned __int64 v46; // rsi
  int v48; // r11d
  __int64 v49; // r9
  int v50; // ebx
  __int64 v51; // rcx
  unsigned __int64 v52; // r10
  __int64 v53; // rax
  unsigned __int16 v54; // ax
  unsigned __int64 v55; // r8
  char v56; // r9
  __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  __int64 v59; // rcx
  signed __int64 v60; // rax
  unsigned __int64 v61; // rdi
  __int64 Prcb; // rax
  unsigned __int64 v63; // rcx
  _WORD *v64; // rsi
  __int64 v65; // r15
  char v66; // al
  unsigned __int64 v67; // rcx
  __int64 v68; // rbp
  char v69[8]; // [rsp+20h] [rbp-1B8h] BYREF
  unsigned __int64 v70; // [rsp+28h] [rbp-1B0h]
  __int64 v71; // [rsp+30h] [rbp-1A8h]
  ULONG v72; // [rsp+38h] [rbp-1A0h] BYREF
  unsigned int v73; // [rsp+3Ch] [rbp-19Ch]
  unsigned int v74; // [rsp+40h] [rbp-198h]
  __int64 v75; // [rsp+48h] [rbp-190h]
  unsigned __int64 v76; // [rsp+50h] [rbp-188h]
  __int64 v77; // [rsp+58h] [rbp-180h]
  __int64 v78; // [rsp+60h] [rbp-178h]
  unsigned __int64 *v79; // [rsp+68h] [rbp-170h]
  LARGE_INTEGER *v80; // [rsp+70h] [rbp-168h]
  unsigned __int64 v81; // [rsp+78h] [rbp-160h] BYREF
  unsigned __int64 v82; // [rsp+80h] [rbp-158h]
  __int64 v83; // [rsp+88h] [rbp-150h]
  char *v84; // [rsp+90h] [rbp-148h]
  unsigned __int64 *v85; // [rsp+98h] [rbp-140h]
  unsigned __int16 *v86[2]; // [rsp+A0h] [rbp-138h] BYREF
  __int16 v87; // [rsp+B0h] [rbp-128h]
  __int64 v88; // [rsp+B8h] [rbp-120h]
  __int64 v89; // [rsp+C0h] [rbp-118h]
  char v90[8]; // [rsp+D0h] [rbp-108h] BYREF
  unsigned __int16 *v91; // [rsp+D8h] [rbp-100h]

  v6 = *(_QWORD *)(a1 + 23808);
  v7 = a1;
  v85 = a5;
  v8 = 0;
  v83 = a6;
  v74 = PpmDripsStateIndex;
  v77 = a1;
  v84 = a2;
  v75 = v6 + 472;
  v79 = a4;
  v80 = a3;
  v71 = v6;
  v78 = PpmPlatformStates;
  v76 = 0LL;
  if ( *(_BYTE *)(a1 + 33) && PopDeepSleepIsEnabled && PopDeepSleepIsEngaged && !PopDeepSleepEvaluateWorkItemQueued )
  {
    if ( PpmPlatformStates )
      v8 = 1;
    else
      v8 = *(_DWORD *)(v6 + 28) > 1u;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v7 + 23808);
      v10 = 0LL;
      while ( 1 )
      {
        v11 = MEMORY[0xFFFFF78000000340];
        if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
        {
          v12.QuadPart = MEMORY[0xFFFFF78000000350];
          v13 = MEMORY[0xFFFFF78000000008];
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          if ( MEMORY[0xFFFFF78000000340] == v11 )
            break;
        }
        _mm_pause();
      }
      v7 = v77;
      v16 = PerformanceCounter;
      v17 = v79;
      if ( PerformanceCounter.QuadPart > (unsigned __int64)v12.QuadPart )
      {
        v18 = -1 - v12.QuadPart + PerformanceCounter.QuadPart;
        v15.QuadPart = MEMORY[0xFFFFF78000000360];
        if ( MEMORY[0xFFFFF78000000369] )
          v18 <<= MEMORY[0xFFFFF78000000369];
        v10 = ((unsigned __int64)v18 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
        v88 = v10;
      }
      v19 = v13 + v10;
      v20 = 0;
      *v79 = v19;
      *(LARGE_INTEGER *)(v9 + 480) = v16;
      *(_QWORD *)(v9 + 488) = *(_QWORD *)(v7 + 23832) + *(_QWORD *)(v7 + 24008);
      *(_BYTE *)(v9 + 522) = *(_BYTE *)(v7 + 24218);
      *(_BYTE *)(v9 + 520) = *(_BYTE *)(v7 + 23864);
      *(_BYTE *)(v9 + 521) = *(_BYTE *)(v7 + 23865);
      *(_BYTE *)(v9 + 523) = 1;
      if ( !*(_BYTE *)(v7 + 33) )
        goto LABEL_10;
      v15.QuadPart = (LONGLONG)KeGetCurrentPrcb();
      v48 = 0;
      v49 = *(_QWORD *)(v15.QuadPart + 1600);
      v50 = *(unsigned __int16 *)(v49 + 146);
      v51 = *(_QWORD *)(v49 + 64) & ~(1LL << *(_BYTE *)(v15.QuadPart + 1617));
      v89 = *(_QWORD *)(v49 + 136) & ~(1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v15.QuadPart + 36)] & 0x3F));
      if ( v51 == v89 )
      {
        v15.QuadPart = (LONGLONG)qword_1403269E8;
        while ( ++v48 != (unsigned __int16)KeNumberNodes )
        {
          v59 = KeNodeBlock[*((unsigned __int16 *)qword_1403269E8
                            + v48
                            + (unsigned int)(unsigned __int16)KeNumberNodes * v50)];
          v89 = *(_QWORD *)(v59 + 136);
          if ( *(_QWORD *)(v59 + 64) != v89 )
            goto LABEL_10;
        }
        *(_BYTE *)(v9 + 524) = 1;
        *(_WORD *)(v9 + 36) |= 0x80u;
      }
      else
      {
LABEL_10:
        *(_BYTE *)(v9 + 524) = 0;
      }
      if ( *(_BYTE *)(v9 + 1) )
      {
        *(_WORD *)(v9 + 36) |= 0x100u;
        *(_DWORD *)(v9 + 512) = *(_DWORD *)(v9 + 24);
      }
      else
      {
        *(_DWORD *)(v9 + 512) = -1;
      }
      *v80 = v16;
      if ( !v8 || *(_BYTE *)(v71 + 524) )
        break;
      *(_WORD *)(v71 + 36) = 0;
      v8 = 0;
    }
    v21 = *(_BYTE *)(v7 + 33) == 0;
    v22 = *v17;
    v23 = *(_QWORD *)(v7 + 23808);
    v82 = *v17;
    if ( v21 && KiSerializeTimerExpiration )
    {
      v70 = 0LL;
      _m_prefetchw(&PpmPlatformIdleHint);
      v24 = PpmPlatformIdleHint;
      if ( (_WORD)PpmPlatformIdleHint )
      {
        while ( 1 )
        {
          v60 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v24 ^ (unsigned __int16)(v24 ^ (v24 - 1)), v24);
          if ( v24 == v60 )
            break;
          v24 = v60;
          _mm_pause();
          if ( !(_WORD)v60 )
            goto LABEL_17;
        }
        v70 = v24 >> 16;
      }
    }
    else
    {
      v70 = 0LL;
    }
LABEL_17:
    v25 = -1LL;
    v26 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 23808) + 524LL);
    if ( *(_BYTE *)(v7 + 33) )
      v20 = 8;
    if ( v8 )
      v20 |= 4u;
    v27 = 2;
    v28 = KiClockTimerNextTickTime;
    if ( *(_BYTE *)(v7 + 33) )
    {
      if ( (_BYTE)v26 && !(_BYTE)KiDynamicTickDisableReason && !KiClockState )
      {
        v52 = 0LL;
        if ( *(_QWORD *)(v7 + 16) )
        {
          v27 = 1;
        }
        else
        {
          v27 = 4;
          if ( v8 )
          {
            v53 = ((__int64 (*)(void))ExGetNextWakeTimeForDeepSleep)();
          }
          else
          {
            LOBYTE(v15.LowPart) = 1;
            v53 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))KiFindNextTimerDueTime)(
                    v7,
                    v22,
                    (LARGE_INTEGER)v15.QuadPart);
          }
          v52 = v53;
          if ( KiGroupSchedulingEnabled )
          {
            v54 = 0;
            if ( KiGroupSchedulingOverQuotaMask[0] )
            {
              while ( !qword_1402F6C18[v54] )
              {
                if ( ++v54 >= (unsigned int)KiGroupSchedulingOverQuotaMask[0] )
                  goto LABEL_73;
              }
              if ( KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v52 )
              {
                v52 = KiGenerationEndTick * KeMaximumIncrement;
                v27 = 5;
              }
            }
          }
LABEL_73:
          if ( *(_BYTE *)(v7 + 33) )
          {
            v55 = -1LL;
            v56 = 0;
            if ( v8 )
              v57 = 3LL;
            else
              v57 = 2LL;
            do
            {
              if ( qword_14030E330[3 * v57] < v55 )
              {
                v55 = qword_14030E330[3 * v57];
                if ( v57 == 3 )
                  v56 = 1;
              }
              ++v57;
            }
            while ( v57 <= 3 );
            if ( v55 < v52 )
            {
              v52 = v55;
              v27 = 6;
              if ( v56 )
                v27 = 7;
            }
          }
          if ( !(_BYTE)KdDebuggerNotPresent )
          {
            if ( (_BYTE)KdDebuggerEnabled )
            {
              if ( v22 < v52 )
              {
                v58 = (unsigned int)(10000 * KiDebugPollInterval);
                if ( v52 - v22 > v58 )
                {
                  v52 = v58 + v22;
                  v27 = 8;
                }
              }
            }
          }
        }
        if ( v22 + (unsigned int)KiLastRequestedTimeIncrement < v52 )
          v28 = v52;
        else
          v27 = 2;
      }
    }
    else
    {
      v29 = 0LL;
      if ( *(_QWORD *)(v7 + 16) )
      {
        v27 = 1;
      }
      else if ( KiSerializeTimerExpiration || !PoDisableSkipTick )
      {
        v27 = 4;
        if ( v8 )
          NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep(v26);
        else
          NextWakeTimeForDeepSleep = KiFindNextTimerDueTime(v7, v22, 0LL);
        v29 = NextWakeTimeForDeepSleep;
        if ( KiGroupSchedulingEnabled )
        {
          v31 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v7 + 36)];
          if ( (((unsigned __int64)qword_1402F6C18[v31 >> 6] >> (v31 & 0x3F)) & 1) != 0
            && KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v29 )
          {
            v29 = KiGenerationEndTick * KeMaximumIncrement;
            v27 = 5;
          }
        }
        if ( *(_BYTE *)(v7 + 33) )
        {
          KiGetNextTimer2ExpirationDueTime(v8, &v81, v69);
          if ( v81 < v29 )
          {
            v27 = 6;
            v29 = v81;
            if ( v69[0] )
              v27 = 7;
          }
        }
      }
      if ( v28 <= v29 )
        v28 = v29;
    }
    if ( v28 != -1LL )
    {
      if ( v28 <= v22 )
        v28 = 0LL;
      else
        v28 -= v22;
    }
    v32 = *(_DWORD *)(v7 + 11556);
    v33 = 0;
    for ( i = v32; i; i >>= 4 )
      v33 += KeMaximumIncrement;
    v35 = v33;
    if ( !v8 && v32 )
    {
      v36 = KeMaximumIncrement / (v32 + 1);
      if ( !v36 )
        v36 = 1;
      v25 = v36;
    }
    if ( v28 <= v25 )
    {
      v25 = v28;
      v35 = v28;
    }
    else
    {
      if ( v28 < v33 )
        v35 = v28;
      v20 |= 1u;
    }
    if ( PpmIdleCheckIdleDurationExpiration && *(_BYTE *)(v7 + 33) && (unsigned __int8)PpmGetIdleConstrainedMask(v90) )
    {
      v61 = 0LL;
      v87 = 0;
      v86[1] = v91;
      v86[0] = (unsigned __int16 *)v90;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v72, v86) )
      {
        Prcb = KeGetPrcb(v72);
        v63 = *(_QWORD *)(Prcb + 23848);
        if ( v63 != -1LL && v63 > v61 )
          v61 = *(_QWORD *)(Prcb + 23848);
      }
      if ( v61 && v35 + v82 > v61 )
      {
        v20 |= 0x2000u;
        v35 = v61 > v82 ? (unsigned int)(v61 - v82) : 1LL;
        if ( v35 < v25 )
          v25 = v35;
      }
    }
    if ( v25 < v70 )
    {
      v25 = v70;
      v35 = v70;
      v20 |= 0x1000u;
    }
    *(_WORD *)(v23 + 36) |= v20;
    v37 = v71;
    v38 = v75;
    v39 = v75;
    *(_QWORD *)(v23 + 504) = v35;
    *(_BYTE *)(v23 + 525) = v27;
    *(_QWORD *)(v23 + 496) = v25;
    (*(void (__fastcall **)(__int64))(v37 + 392))(v39);
    v40 = *(_DWORD *)(v38 + 76);
    v41 = *(unsigned int *)(v38 + 72);
    LODWORD(v70) = v40;
    if ( v40 == -2 || v40 == -1 )
      break;
    v42 = *(_QWORD *)(v7 + 23816);
    v21 = !_BitScanForward(&v43, *(_DWORD *)(v38 + 80));
    v73 = v43;
    if ( !v21 )
    {
      do
      {
        *(_DWORD *)(v38 + 80) &= *(_DWORD *)(v38 + 80) - 1;
        ++*(_DWORD *)(992LL * v43 + v42 + 52);
        v21 = !_BitScanForward(&v43, *(_DWORD *)(v38 + 80));
      }
      while ( !v21 );
      v73 = v43;
    }
    v44 = 0;
    v45 = *(_QWORD *)(v38 + 64);
    if ( *(_DWORD *)(v38 + 60) )
    {
      v64 = (_WORD *)v83;
      v65 = *(unsigned int *)(v38 + 60);
      do
      {
        if ( *(_BYTE *)(v45 + 4) == 0xFF )
        {
          v66 = v44;
          if ( !v44 )
            v66 = 1;
          v44 = v66;
          KeAddProcessorAffinityEx(v64, *(_DWORD *)v45);
        }
        v45 += 8LL;
        --v65;
      }
      while ( v65 );
      v40 = v70;
      v7 = v77;
      v38 = v75;
      if ( v44 && *(_BYTE *)(v75 + 52) )
      {
        v67 = v76;
        if ( v76 < *(_QWORD *)(v75 + 24) )
          v67 = *(_QWORD *)(v75 + 24);
        v76 = v67;
      }
    }
    if ( !v8 )
      goto LABEL_51;
    if ( v78 )
    {
      if ( (_DWORD)v41 != -1 && (unsigned int)v41 >= v74 )
        goto LABEL_51;
      v68 = v71;
    }
    else
    {
      v68 = v71;
      if ( v40 == *(_DWORD *)(v71 + 28) - 1 )
        goto LABEL_51;
    }
    v8 = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v68 + 448))(*(_QWORD *)v38, 0LL);
    ++*(_DWORD *)(992LL * v40 + v42 + 48);
    if ( (_DWORD)v41 != -1 && v78 )
      ++*(_DWORD *)(1000 * v41 + *(_QWORD *)(v78 + 48) + 24);
    *(_WORD *)(v68 + 36) = 2;
  }
  v8 = 0;
LABEL_51:
  v46 = v76;
  *v84 = v8;
  *v85 = v46;
  return v40;
}
