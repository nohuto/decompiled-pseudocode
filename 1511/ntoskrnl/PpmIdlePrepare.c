/*
 * XREFs of PpmIdlePrepare @ 0x1400488C0
 * Callers:
 *     PoIdle @ 0x140046FE0 (PoIdle.c)
 * Callees:
 *     KiGetNextTimer2ExpirationDueTime @ 0x140035414 (KiGetNextTimer2ExpirationDueTime.c)
 *     KiFindNextTimerDueTime @ 0x140049AE0 (KiFindNextTimerDueTime.c)
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PpmGetIdleConstrainedMask @ 0x1401E705C (PpmGetIdleConstrainedMask.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x140214510 (ExGetNextWakeTimeForDeepSleep.c)
 */

__int64 __fastcall PpmIdlePrepare(
        __int64 a1,
        _BYTE *a2,
        LARGE_INTEGER *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rbx
  LARGE_INTEGER v12; // rbp
  __int64 v13; // r15
  LARGE_INTEGER PerformanceCounter; // rdx
  LARGE_INTEGER v15; // rcx
  LARGE_INTEGER v16; // r10
  __int64 v17; // rdx
  unsigned __int64 *v18; // rbp
  unsigned __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // r12
  __int64 v22; // r13
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rbp
  __int64 v25; // rcx
  char v26; // r15
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r11
  __int64 NextWakeTimeForDeepSleep; // rax
  unsigned __int64 v30; // rax
  unsigned int v31; // edx
  unsigned int v32; // ecx
  unsigned int i; // eax
  unsigned __int64 v34; // rdi
  ULONG v35; // eax
  __int64 v36; // r15
  __int64 v37; // r13
  unsigned int v38; // ebx
  __int64 v39; // r12
  __int64 v40; // r14
  bool v41; // zf
  unsigned int v42; // edx
  char v43; // bp
  unsigned int *v44; // rdi
  ULONG v45; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  int v48; // r11d
  _KNODE *ParentNode; // r9
  int v50; // ebx
  unsigned __int64 v51; // r10
  unsigned __int64 NextTimerDueTime; // rax
  unsigned __int16 v53; // cx
  unsigned __int64 v54; // r8
  char v55; // r9
  __int64 v56; // rcx
  BOOL v57; // ecx
  signed __int64 v58; // rax
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v62; // rcx
  __int64 v63; // rsi
  __int64 v64; // r15
  char v65; // al
  unsigned __int64 v66; // rcx
  __int64 v67; // rbp
  ULONG LowPart; // [rsp+20h] [rbp-1A8h]
  char v69[4]; // [rsp+24h] [rbp-1A4h] BYREF
  __int64 v70; // [rsp+28h] [rbp-1A0h]
  unsigned __int64 v71; // [rsp+30h] [rbp-198h]
  unsigned int v72; // [rsp+38h] [rbp-190h]
  unsigned int v73; // [rsp+3Ch] [rbp-18Ch] BYREF
  unsigned __int64 v74; // [rsp+40h] [rbp-188h]
  unsigned int v75; // [rsp+48h] [rbp-180h]
  __int64 v76; // [rsp+50h] [rbp-178h]
  unsigned __int64 *v77; // [rsp+58h] [rbp-170h]
  _BYTE *v78; // [rsp+60h] [rbp-168h]
  unsigned __int64 *v79; // [rsp+68h] [rbp-160h]
  unsigned __int64 v80; // [rsp+70h] [rbp-158h] BYREF
  LARGE_INTEGER *v81; // [rsp+78h] [rbp-150h]
  __int64 v82; // [rsp+80h] [rbp-148h]
  __int64 v83; // [rsp+88h] [rbp-140h]
  _QWORD v84[2]; // [rsp+90h] [rbp-138h] BYREF
  __int16 v85; // [rsp+A0h] [rbp-128h]
  __int64 v86; // [rsp+A8h] [rbp-120h]
  __int64 v87; // [rsp+B0h] [rbp-118h]
  char v88[8]; // [rsp+C0h] [rbp-108h] BYREF
  __int64 v89; // [rsp+C8h] [rbp-100h]

  v6 = a1;
  v7 = 0LL;
  v79 = a5;
  v8 = *(_QWORD *)(a1 + 23808);
  v76 = a1;
  LOBYTE(a1) = 0;
  v82 = a6;
  v78 = a2;
  v70 = v8;
  v75 = PpmDripsStateIndex;
  v77 = a4;
  v81 = a3;
  LowPart = a1;
  v83 = PpmPlatformStates;
  v74 = 0LL;
  if ( *(_BYTE *)(v6 + 33)
    && PopDeepSleepIsEngaged
    && PopDeepSleepIsEnabled
    && !PopPendingSetPowerDeviceIrps
    && !PopPendingPowerSettingUpdates
    && !dword_1402DEB0C
    && !byte_1402DE081 )
  {
    if ( PpmPlatformStates )
      v57 = 1;
    else
      v57 = *(_DWORD *)(v8 + 28) > 1u;
    LowPart = v57;
  }
  v9 = v8;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v6 + 23808);
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
      v6 = v76;
      v16 = PerformanceCounter;
      if ( PerformanceCounter.QuadPart > (unsigned __int64)v12.QuadPart )
      {
        v17 = -1 - v12.QuadPart + PerformanceCounter.QuadPart;
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v15.LowPart = MEMORY[0xFFFFF78000000369];
          v17 <<= MEMORY[0xFFFFF78000000369];
        }
        v7 = ((unsigned __int64)v17 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
        v86 = v7;
      }
      v18 = v77;
      v19 = v13 + v7;
      v7 = 0LL;
      *v77 = v19;
      *(LARGE_INTEGER *)(v10 + 480) = v16;
      *(_QWORD *)(v10 + 488) = *(_QWORD *)(v6 + 23832) + *(_QWORD *)(v6 + 24008);
      *(_BYTE *)(v10 + 522) = *(_BYTE *)(v6 + 24218);
      *(_BYTE *)(v10 + 520) = *(_BYTE *)(v6 + 23864);
      *(_BYTE *)(v10 + 521) = *(_BYTE *)(v6 + 23865);
      *(_BYTE *)(v10 + 523) = 1;
      if ( !*(_BYTE *)(v6 + 33) )
        goto LABEL_11;
      CurrentPrcb = KeGetCurrentPrcb();
      v48 = 0;
      ParentNode = CurrentPrcb->ParentNode;
      v50 = ParentNode->Affinity.Reserved[0];
      v15.QuadPart = ParentNode->DeepIdleSet & ~(1LL << CurrentPrcb->GroupIndex);
      v87 = ParentNode->Affinity.Mask & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F));
      if ( v15.QuadPart == v87 )
      {
        while ( ++v48 != (unsigned __int16)KeNumberNodes )
        {
          v15.QuadPart = KeNodeBlock[*((unsigned __int16 *)qword_1402FE6B8
                                     + v48
                                     + v50 * (unsigned int)(unsigned __int16)KeNumberNodes)];
          v87 = *(_QWORD *)(v15.QuadPart + 136);
          if ( *(_QWORD *)(v15.QuadPart + 64) != v87 )
            goto LABEL_11;
        }
        *(_BYTE *)(v10 + 524) = 1;
        *(_WORD *)(v10 + 36) |= 0x80u;
      }
      else
      {
LABEL_11:
        *(_BYTE *)(v10 + 524) = 0;
      }
      if ( *(_BYTE *)(v10 + 1) )
      {
        *(_WORD *)(v10 + 36) |= 0x100u;
        *(_DWORD *)(v10 + 512) = *(_DWORD *)(v10 + 24);
      }
      else
      {
        *(_DWORD *)(v10 + 512) = -1;
      }
      v20 = LowPart;
      *v81 = v16;
      if ( !(_BYTE)LowPart || *(_BYTE *)(v9 + 524) )
        break;
      LOBYTE(v15.LowPart) = 0;
      *(_WORD *)(v9 + 36) = 0;
      LowPart = v15.LowPart;
    }
    v21 = *v18;
    v22 = *(_QWORD *)(v6 + 23808);
    if ( *(_BYTE *)(v6 + 33) || !KiSerializeTimerExpiration )
    {
      v71 = 0LL;
    }
    else
    {
      v71 = 0LL;
      _m_prefetchw(&PpmPlatformIdleHint);
      v23 = PpmPlatformIdleHint;
      if ( (_WORD)PpmPlatformIdleHint )
      {
        while ( 1 )
        {
          v58 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v23 ^ (unsigned __int16)(v23 ^ (v23 - 1)), v23);
          if ( v23 == v58 )
            break;
          v23 = v58;
          _mm_pause();
          if ( !(_WORD)v58 )
            goto LABEL_18;
        }
        v71 = v23 >> 16;
      }
    }
LABEL_18:
    v24 = -1LL;
    v25 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 23808) + 524LL);
    if ( *(_BYTE *)(v6 + 33) )
      LOWORD(v7) = 8;
    if ( (_BYTE)LowPart )
      LOWORD(v7) = v7 | 4;
    v26 = 2;
    v27 = KiClockTimerNextTickTime;
    if ( *(_BYTE *)(v6 + 33) )
    {
      if ( (_BYTE)v25 && !(_BYTE)KiDynamicTickDisableReason && !KiClockState )
      {
        v51 = 0LL;
        if ( *(_QWORD *)(v6 + 16) )
        {
          v26 = 1;
        }
        else
        {
          v26 = 4;
          if ( (_BYTE)LowPart )
          {
            NextTimerDueTime = ((__int64 (*)(void))ExGetNextWakeTimeForDeepSleep)();
          }
          else
          {
            LOBYTE(v20) = 1;
            NextTimerDueTime = KiFindNextTimerDueTime(v6, v21, v20);
          }
          v51 = NextTimerDueTime;
          if ( KiGroupSchedulingEnabled )
          {
            v53 = 0;
            if ( KiGroupSchedulingOverQuotaMask[0] )
            {
              while ( !qword_1402CF8C8[v53] )
              {
                if ( ++v53 >= (unsigned int)KiGroupSchedulingOverQuotaMask[0] )
                  goto LABEL_77;
              }
              if ( KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < NextTimerDueTime )
              {
                v51 = KiGenerationEndTick * KeMaximumIncrement;
                v26 = 5;
              }
            }
          }
LABEL_77:
          if ( *(_BYTE *)(v6 + 33) )
          {
            v54 = -1LL;
            v55 = 0;
            if ( (_BYTE)LowPart )
              v56 = 3LL;
            else
              v56 = 2LL;
            do
            {
              if ( qword_1402E8910[3 * v56] < v54 )
              {
                v54 = qword_1402E8910[3 * v56];
                if ( v56 == 3 )
                  v55 = 1;
              }
              ++v56;
            }
            while ( v56 <= 3 );
            if ( v54 < v51 )
            {
              v51 = v54;
              v26 = 6;
              if ( v55 )
                v26 = 7;
            }
          }
          if ( (_BYTE)KdDebuggerNotPresent || !(_BYTE)KdDebuggerEnabled )
          {
            LOBYTE(v20) = LowPart;
          }
          else
          {
            LOBYTE(v20) = LowPart;
            if ( v21 < v51 )
            {
              v59 = (unsigned int)(10000 * KiDebugPollInterval);
              if ( v51 - v21 > v59 )
              {
                v51 = v59 + v21;
                v26 = 8;
              }
            }
          }
        }
        if ( v21 + (unsigned int)KiLastRequestedTimeIncrement < v51 )
          v27 = v51;
        else
          v26 = 2;
      }
    }
    else
    {
      v28 = 0LL;
      if ( *(_QWORD *)(v6 + 16) )
      {
        v26 = 1;
      }
      else if ( KiSerializeTimerExpiration || !PoDisableSkipTick )
      {
        v26 = 4;
        if ( (_BYTE)LowPart )
          NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep(v25);
        else
          NextWakeTimeForDeepSleep = KiFindNextTimerDueTime(v6, v21, 0LL);
        v28 = NextWakeTimeForDeepSleep;
        if ( KiGroupSchedulingEnabled )
        {
          v30 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v6 + 36)];
          if ( (((unsigned __int64)qword_1402CF8C8[v30 >> 6] >> (v30 & 0x3F)) & 1) != 0
            && KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v28 )
          {
            v28 = KiGenerationEndTick * KeMaximumIncrement;
            v26 = 5;
          }
        }
        if ( *(_BYTE *)(v6 + 33) )
        {
          KiGetNextTimer2ExpirationDueTime(LowPart, &v80, v69);
          if ( v80 < v28 )
          {
            v26 = 6;
            v28 = v80;
            if ( v69[0] )
              v26 = 7;
          }
        }
        LOBYTE(v20) = LowPart;
      }
      if ( v27 <= v28 )
        v27 = v28;
    }
    if ( v27 != -1LL )
    {
      if ( v27 <= v21 )
        v27 = 0LL;
      else
        v27 -= v21;
    }
    v31 = *(_DWORD *)(v6 + 11556);
    v32 = 0;
    for ( i = v31; i; i >>= 4 )
      v32 += KeMaximumIncrement;
    v34 = v32;
    if ( !(_BYTE)v20 && v31 )
    {
      v35 = KeMaximumIncrement / (v31 + 1);
      if ( !v35 )
        v35 = 1;
      v24 = v35;
    }
    if ( v27 <= v24 )
    {
      v24 = v27;
      v34 = v27;
    }
    else
    {
      if ( v27 < v32 )
        v34 = v27;
      LOWORD(v7) = v7 | 1;
    }
    if ( PpmIdleCheckIdleDurationExpiration && *(_BYTE *)(v6 + 33) && (unsigned __int8)PpmGetIdleConstrainedMask(v88) )
    {
      v60 = 0LL;
      v85 = 0;
      v84[1] = v89;
      v84[0] = v88;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v73, v84) )
      {
        Prcb = KeGetPrcb(v73);
        v62 = *(_QWORD *)(Prcb + 23848);
        if ( v62 != -1LL && v62 > v60 )
          v60 = *(_QWORD *)(Prcb + 23848);
      }
      if ( v60 && v34 + v21 > v60 )
      {
        LOWORD(v7) = v7 | 0x2000;
        v34 = v60 > v21 ? (unsigned int)(v60 - v21) : 1LL;
        if ( v34 < v24 )
          v24 = v34;
      }
    }
    if ( v24 < v71 )
    {
      v24 = v71;
      v34 = v71;
      LOWORD(v7) = v7 | 0x1000;
    }
    *(_WORD *)(v22 + 36) |= v7;
    *(_BYTE *)(v22 + 525) = v26;
    v36 = v70;
    *(_QWORD *)(v22 + 504) = v34;
    *(_QWORD *)(v22 + 496) = v24;
    v37 = v36 + 472;
    (*(void (__fastcall **)(__int64))(v36 + 392))(v36 + 472);
    v38 = *(_DWORD *)(v36 + 548);
    v39 = *(unsigned int *)(v36 + 544);
    LODWORD(v71) = v38;
    if ( v38 == -2 || v38 == -1 )
      break;
    v40 = *(_QWORD *)(v6 + 23816);
    v41 = !_BitScanForward(&v42, *(_DWORD *)(v36 + 552));
    v72 = v42;
    if ( !v41 )
    {
      do
      {
        *(_DWORD *)(v36 + 552) &= *(_DWORD *)(v36 + 552) - 1;
        ++*(_DWORD *)(992LL * v42 + v40 + 52);
        v41 = !_BitScanForward(&v42, *(_DWORD *)(v36 + 552));
      }
      while ( !v41 );
      v72 = v42;
    }
    v43 = 0;
    v44 = *(unsigned int **)(v36 + 536);
    if ( *(_DWORD *)(v36 + 532) )
    {
      v63 = v82;
      v64 = *(unsigned int *)(v36 + 532);
      do
      {
        if ( *((_BYTE *)v44 + 4) == 0xFF )
        {
          v65 = v43;
          if ( !v43 )
            v65 = 1;
          v43 = v65;
          KeAddProcessorAffinityEx(v63, *v44);
        }
        v44 += 2;
        --v64;
      }
      while ( v64 );
      v38 = v71;
      v6 = v76;
      v36 = v70;
      if ( v43 && *(_BYTE *)(v37 + 52) )
      {
        v66 = v74;
        if ( v74 < *(_QWORD *)(v37 + 24) )
          v66 = *(_QWORD *)(v37 + 24);
        v74 = v66;
      }
    }
    v45 = LowPart;
    if ( !(_BYTE)LowPart )
      goto LABEL_53;
    v67 = v83;
    if ( v83 )
    {
      if ( (_DWORD)v39 != -1 && (unsigned int)v39 >= v75 )
        goto LABEL_53;
    }
    else if ( v38 == *(_DWORD *)(v36 + 28) - 1 )
    {
      goto LABEL_53;
    }
    LOBYTE(v45) = 0;
    LowPart = v45;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v36 + 448))(*(_QWORD *)v37, 0LL);
    ++*(_DWORD *)(992LL * v38 + v40 + 48);
    if ( (_DWORD)v39 != -1 && v67 )
      ++*(_DWORD *)(1000 * v39 + *(_QWORD *)(v67 + 48) + 24);
    v9 = v70;
    *(_WORD *)(v36 + 36) = 2;
    v7 = 0LL;
  }
  LOBYTE(v45) = 0;
LABEL_53:
  *v78 = v45;
  *v79 = v74;
  return v38;
}
