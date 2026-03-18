/*
 * XREFs of PpmIdlePrepare @ 0x1400A91A0
 * Callers:
 *     PoIdle @ 0x1400A7600 (PoIdle.c)
 * Callees:
 *     KiFindNextTimerDueTime @ 0x1400AA860 (KiFindNextTimerDueTime.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1400AC470 (KiGetNextTimerExpirationDueTime.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiGetNextTimer2ExpirationDueTime @ 0x1402098A0 (KiGetNextTimer2ExpirationDueTime.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x1402644F4 (ExGetNextWakeTimeForDeepSleep.c)
 */

__int64 __fastcall PpmIdlePrepare(
        __int64 a1,
        _BYTE *a2,
        LARGE_INTEGER *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  unsigned int v6; // r13d
  __int64 v7; // rdi
  __int64 v8; // rcx
  BOOL v9; // r13d
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 i; // rbx
  LARGE_INTEGER v13; // rdi
  __int64 v14; // rsi
  LARGE_INTEGER PerformanceCounter; // rdx
  LARGE_INTEGER v16; // r9
  __int64 v17; // r12
  LARGE_INTEGER v18; // r11
  __int64 v19; // rdx
  unsigned __int64 *v20; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  _KNODE *ParentNode; // rdx
  int v23; // r10d
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  bool v28; // zf
  __int64 v29; // r13
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // rdx
  signed __int64 v33; // rax
  __int16 v34; // r14
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rsi
  __int64 v37; // rdx
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // r11
  int v40; // edi
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned int v43; // ecx
  unsigned int j; // eax
  unsigned __int64 v45; // rdi
  unsigned int v46; // ecx
  ULONG v47; // eax
  __int64 v48; // rbx
  char v49; // bl
  unsigned __int16 v50; // cx
  unsigned __int64 v51; // r11
  unsigned __int16 v52; // ax
  unsigned __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  __int64 v57; // r14
  char v58; // al
  _QWORD *v59; // r12
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rbx
  unsigned int v63; // edx
  unsigned int v64; // eax
  char v65; // r11
  unsigned int *v66; // r8
  _WORD *v67; // r12
  __int64 v68; // r10
  char v69; // al
  unsigned int v70; // r9d
  __int64 v71; // rcx
  _WORD *v72; // rdx
  __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  char v75; // cl
  __int64 v76; // r15
  unsigned int v78; // [rsp+30h] [rbp-D0h]
  char v79[4]; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v80; // [rsp+38h] [rbp-C8h]
  int v81; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v82; // [rsp+44h] [rbp-BCh]
  __int64 v83; // [rsp+48h] [rbp-B8h]
  unsigned int v84; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v85; // [rsp+58h] [rbp-A8h]
  __int64 v86; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v87; // [rsp+68h] [rbp-98h] BYREF
  __int64 v88; // [rsp+70h] [rbp-90h]
  __int64 v89; // [rsp+78h] [rbp-88h]
  unsigned __int64 *v90; // [rsp+80h] [rbp-80h]
  _BYTE *v91; // [rsp+88h] [rbp-78h]
  unsigned __int64 v92; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 *v93; // [rsp+98h] [rbp-68h]
  int v94; // [rsp+A0h] [rbp-60h]
  __int64 v95; // [rsp+A8h] [rbp-58h]
  LARGE_INTEGER *v96; // [rsp+B0h] [rbp-50h]
  __int64 v97; // [rsp+B8h] [rbp-48h]
  __int64 v98; // [rsp+C0h] [rbp-40h]
  __int64 v99; // [rsp+D0h] [rbp-30h]
  LARGE_INTEGER v100[21]; // [rsp+D8h] [rbp-28h] BYREF

  v7 = a1;
  v93 = a5;
  LOBYTE(v6) = 0;
  v80 = a1;
  v8 = *(_QWORD *)(a1 + 23808);
  v96 = a3;
  v88 = a6;
  v91 = a2;
  v86 = v8 + 472;
  v90 = a4;
  v78 = v6;
  v83 = v8;
  v89 = PpmPlatformStates;
  v85 = 0LL;
  v84 = PpmDripsStateIndex;
  if ( !*(_BYTE *)(v7 + 33) || !PopDeepSleepIsEnabled || !PopDeepSleepIsEngaged || PopPendingSetPowerDeviceIrps )
    goto LABEL_9;
  if ( PpmPlatformStates )
    v9 = 1;
  else
    v9 = *(_DWORD *)(v8 + 28) > 1u;
LABEL_8:
  v78 = v9;
  while ( 1 )
  {
LABEL_9:
    v10 = *(_QWORD *)(v7 + 23808);
    v11 = 0LL;
    while ( 1 )
    {
      for ( i = MEMORY[0xFFFFF78000000340]; (MEMORY[0xFFFFF78000000340] & 1) != 0; i = MEMORY[0xFFFFF78000000340] )
        _mm_pause();
      v13.QuadPart = MEMORY[0xFFFFF78000000350];
      v14 = MEMORY[0xFFFFF78000000008];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == i )
        break;
      _mm_pause();
    }
    v17 = v86;
    v18 = PerformanceCounter;
    v9 = v78;
    if ( PerformanceCounter.QuadPart > (unsigned __int64)v13.QuadPart )
    {
      v19 = -1 - v13.QuadPart + PerformanceCounter.QuadPart;
      if ( MEMORY[0xFFFFF78000000369] )
        v19 <<= MEMORY[0xFFFFF78000000369];
      v11 = ((unsigned __int64)v19 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v97 = v11;
    }
    v7 = v80;
    v20 = v90;
    *v90 = v14 + v11;
    *(LARGE_INTEGER *)(v10 + 480) = v18;
    *(_QWORD *)(v10 + 488) = *(_QWORD *)(v7 + 23832) + *(_QWORD *)(v7 + 24008);
    *(_BYTE *)(v10 + 522) = *(_BYTE *)(v7 + 24218);
    *(_BYTE *)(v10 + 520) = *(_BYTE *)(v7 + 23864);
    *(_BYTE *)(v10 + 521) = *(_BYTE *)(v7 + 23865);
    *(_BYTE *)(v10 + 523) = 1;
    if ( *(_BYTE *)(v7 + 33)
      && (CurrentPrcb = KeGetCurrentPrcb(),
          v16.QuadPart = 0LL,
          ParentNode = CurrentPrcb->ParentNode,
          v23 = ParentNode->Affinity.Reserved[0],
          v24 = ParentNode->DeepIdleSet & ~(1LL << CurrentPrcb->GroupIndex),
          v98 = ParentNode->Affinity.Mask & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F)),
          v24 == v98) )
    {
      while ( 1 )
      {
        v16.QuadPart = v16.LowPart + 1;
        if ( v16.LowPart == (unsigned __int16)KeNumberNodes )
          break;
        v25 = KeNodeBlock[*((unsigned __int16 *)qword_14034EB68 + v16.LowPart + v23 * (unsigned __int16)KeNumberNodes)];
        v26 = *(_QWORD *)(v25 + 136);
        v27 = *(_QWORD *)(v25 + 64);
        v98 = v26;
        if ( v27 != v26 )
          goto LABEL_22;
      }
      *(_BYTE *)(v10 + 524) = 1;
      *(_WORD *)(v10 + 36) |= 0x80u;
    }
    else
    {
LABEL_22:
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
    *v96 = v18;
    if ( (_BYTE)v78 && !*(_BYTE *)(v17 + 52) )
    {
      LOBYTE(v9) = 0;
      *(_WORD *)(v83 + 36) = 0;
      goto LABEL_8;
    }
    v28 = *(_BYTE *)(v7 + 33) == 0;
    v29 = *(_QWORD *)(v7 + 23808);
    v30 = *v20;
    v95 = v29;
    if ( v28 && KiSerializeTimerExpiration )
    {
      v31 = 0LL;
      _m_prefetchw(&PpmPlatformIdleHint);
      v32 = PpmPlatformIdleHint;
      if ( (_WORD)PpmPlatformIdleHint )
      {
        while ( 1 )
        {
          v33 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v32 ^ (unsigned __int16)(v32 ^ (v32 - 1)), v32);
          if ( v32 == v33 )
            break;
          v32 = v33;
          _mm_pause();
          if ( !(_WORD)v33 )
            goto LABEL_38;
        }
        v31 = v32 >> 16;
      }
    }
    else
    {
      v31 = 0LL;
    }
LABEL_38:
    v34 = 0;
    v35 = v78;
    v36 = -1LL;
    v37 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 23808) + 524LL);
    if ( *(_BYTE *)(v7 + 33) )
      v34 = 8;
    if ( (_BYTE)v78 )
      v34 |= 4u;
    v28 = *(_BYTE *)(v7 + 33) == 0;
    v38 = KiClockTimerNextTickTime;
    v81 = 2;
    if ( v28 )
    {
      v39 = 0LL;
      if ( *(_QWORD *)(v7 + 16) )
      {
        v40 = 1;
      }
      else if ( KiSerializeTimerExpiration || !PoDisableSkipTick )
      {
        v40 = 4;
        if ( (_BYTE)v78 )
          v41 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExGetNextWakeTimeForDeepSleep)(
                  (unsigned int)KiClockState,
                  v37,
                  v78,
                  (LARGE_INTEGER)v16.QuadPart);
        else
          v41 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiFindNextTimerDueTime)(
                  v80,
                  v30,
                  0LL,
                  (LARGE_INTEGER)v16.QuadPart);
        v39 = v41;
        if ( KiGroupSchedulingEnabled
          && (((unsigned __int64)qword_14031E928[(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v80 + 36)] >> 6] >> (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v80 + 36)] & 0x3F)) & 1) != 0
          && KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v41 )
        {
          v39 = KiGenerationEndTick * KeMaximumIncrement;
          v40 = 5;
        }
        if ( *(_BYTE *)(v80 + 33) )
        {
          KiGetNextTimer2ExpirationDueTime((unsigned __int8)v78, &v92, v79);
          if ( v92 < v39 )
          {
            v40 = 6;
            v39 = v92;
            if ( v79[0] )
              v40 = 7;
          }
        }
      }
      else
      {
        v40 = 2;
      }
      v81 = v40;
      v7 = v80;
      if ( v38 <= v39 )
        v38 = v39;
      v87 = v39;
    }
    else if ( (_BYTE)v37 && !(_BYTE)KiDynamicTickDisableReason && !KiClockState )
    {
      LOBYTE(v37) = 1;
      KiGetNextTimerExpirationDueTime(v7, v37, v30, (unsigned __int8)v78, (__int64)&v87, (__int64)&v81);
      if ( v30 + (unsigned int)KiLastRequestedTimeIncrement >= v87 )
        v81 = 2;
      else
        v38 = v87;
    }
    if ( v38 != -1LL )
    {
      if ( v38 <= v30 )
        v38 = 0LL;
      else
        v38 -= v30;
    }
    v42 = *(unsigned int *)(v7 + 11556);
    v43 = 0;
    for ( j = v42; j; j >>= 4 )
      v43 += KeMaximumIncrement;
    v45 = v43;
    if ( !(_BYTE)v78 && (_DWORD)v42 )
    {
      v46 = v42 + 1;
      v42 = KeMaximumIncrement % ((int)v42 + 1);
      v47 = KeMaximumIncrement / v46;
      if ( !(KeMaximumIncrement / v46) )
        v47 = 1;
      v36 = v47;
    }
    if ( v38 <= v36 )
    {
      v36 = v38;
      v45 = v38;
    }
    else
    {
      if ( v38 < v45 )
        v45 = v38;
      v34 |= 1u;
    }
    v48 = v80;
    if ( PpmIdleCheckIdleDurationExpiration && *(_BYTE *)(v80 + 33) )
    {
      v99 = 1310721LL;
      v49 = 0;
      memset(v100, 0, 0xA0uLL);
      if ( KeNumberNodes )
      {
        v16.QuadPart = (unsigned __int16)KeNumberNodes;
        v42 = (unsigned __int64)KeNodeBlock;
        do
        {
          v50 = *(_WORD *)(*(_QWORD *)v42 + 144LL);
          v35 = *(_QWORD *)(*(_QWORD *)v42 + 72LL);
          if ( (unsigned __int16)v99 <= v50 )
            LOWORD(v99) = v50 + 1;
          v100[v50].QuadPart |= v35;
          if ( v35 )
            v49 = 1;
          v42 += 8LL;
          --v16.QuadPart;
        }
        while ( v16.QuadPart );
        v29 = v95;
        if ( v49 )
        {
          v16 = v100[0];
          v51 = 0LL;
          v52 = 0;
          while ( v16.QuadPart )
          {
LABEL_98:
            _BitScanForward64(&v53, v16.QuadPart);
            v16.QuadPart &= ~(1LL << v53);
            v54 = (unsigned __int8)v53 + (v52 << 6);
            v94 = v53;
            v35 = 0x140000000uLL;
            v42 = (unsigned int)KiProcessorNumberToIndexMappingTable[v54];
            if ( (unsigned int)v42 >= (unsigned int)KeNumberProcessors_0 )
            {
              v55 = 0LL;
            }
            else
            {
              _mm_lfence();
              v55 = KiProcessorBlock[v42];
            }
            v56 = *(_QWORD *)(v55 + 23848);
            if ( v56 != -1LL && v56 > v51 )
              v51 = v56;
          }
          while ( ++v52 < (unsigned int)(unsigned __int16)v99 )
          {
            v16 = v100[v52];
            if ( v16.QuadPart )
              goto LABEL_98;
          }
          if ( v51 && v45 + v30 > v51 )
          {
            v34 |= 0x2000u;
            v45 = v51 > v30 ? (unsigned int)(v51 - v30) : 1LL;
            if ( v45 < v36 )
              v36 = v45;
          }
        }
      }
      v48 = v80;
    }
    if ( v36 < v31 )
    {
      v36 = v31;
      v45 = v31;
      v34 |= 0x1000u;
    }
    *(_WORD *)(v29 + 36) |= v34;
    v57 = v83;
    v58 = v81;
    *(_QWORD *)(v29 + 504) = v45;
    *(_BYTE *)(v29 + 525) = v58;
    v59 = (_QWORD *)(v57 + 472);
    *(_QWORD *)(v29 + 496) = v36;
    (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, LARGE_INTEGER))(v57 + 392))(
      v57 + 472,
      v42,
      v35,
      v16);
    v60 = *(unsigned int *)(v57 + 548);
    v61 = *(unsigned int *)(v57 + 544);
    if ( (_DWORD)v60 == -2 || (_DWORD)v60 == -1 )
      break;
    v62 = *(_QWORD *)(v48 + 23816);
    v28 = !_BitScanForward(&v63, *(_DWORD *)(v57 + 552));
    v82 = v63;
    if ( !v28 )
    {
      do
      {
        *(_DWORD *)(v57 + 552) &= *(_DWORD *)(v57 + 552) - 1;
        ++*(_DWORD *)(984LL * v63 + v62 + 52);
        v28 = !_BitScanForward(&v63, *(_DWORD *)(v57 + 552));
      }
      while ( !v28 );
      v82 = v63;
    }
    v64 = *(_DWORD *)(v57 + 532);
    v65 = 0;
    v66 = *(unsigned int **)(v57 + 536);
    if ( v64 )
    {
      v67 = (_WORD *)v88;
      v68 = v64;
      do
      {
        if ( *((_BYTE *)v66 + 4) == 0xFF )
        {
          v69 = v65;
          if ( !v65 )
            v69 = 1;
          v65 = v69;
          v70 = KiProcessorIndexToNumberMappingTable[*v66] & 0x3F;
          v71 = (unsigned int)KiProcessorIndexToNumberMappingTable[*v66] >> 6;
          if ( (unsigned __int16)*v67 <= (unsigned int)v71 )
            *v67 = v71 + 1;
          v72 = &v67[4 * v71];
          v73 = *((_QWORD *)v72 + 1);
          _bittestandset64(&v73, v70);
          *((_QWORD *)v72 + 1) = v73;
        }
        v66 += 2;
        --v68;
      }
      while ( v68 );
      v59 = (_QWORD *)v86;
      v57 = v83;
      if ( v65 && *(_BYTE *)(v86 + 52) )
      {
        v74 = v85;
        if ( v85 < *(_QWORD *)(v86 + 24) )
          v74 = *(_QWORD *)(v86 + 24);
        v85 = v74;
      }
    }
    v75 = v78;
    if ( !(_BYTE)v78 )
      goto LABEL_144;
    v76 = v89;
    if ( v89 )
    {
      if ( (_DWORD)v61 != -1 && (unsigned int)v61 >= v84 )
        goto LABEL_144;
    }
    else if ( (_DWORD)v60 == *(_DWORD *)(v57 + 28) - 1 )
    {
      goto LABEL_144;
    }
    LOBYTE(v29) = 0;
    v78 = v29;
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *))(v57 + 448))(*v59, 0LL, v66);
    ++*(_DWORD *)(984 * v60 + v62 + 48);
    if ( (_DWORD)v61 != -1 && v76 )
      ++*(_DWORD *)(992 * v61 + *(_QWORD *)(v76 + 48) + 24);
    v7 = v80;
    *(_WORD *)(v57 + 36) = 2;
  }
  v75 = 0;
LABEL_144:
  *v91 = v75;
  *v93 = v85;
  return (unsigned int)v60;
}
