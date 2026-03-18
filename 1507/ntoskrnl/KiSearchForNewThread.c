/*
 * XREFs of KiSearchForNewThread @ 0x1400A1160
 * Callers:
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiIdleSchedule @ 0x14010FB70 (KiIdleSchedule.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400A15C0 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x1400A19C0 (KiSelectReadyThread.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x1400D3570 (KiSelectThreadFromSchedulingGroup.c)
 *     KiSetProcessorIdle @ 0x1400D53B0 (KiSetProcessorIdle.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiSearchForNewThread(__int64 a1, char a2)
{
  __int64 result; // rax
  int v3; // esi
  char v6; // bp
  __int64 ready; // r10
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r14
  int v20; // edx
  int v21; // r12d
  unsigned __int64 v22; // rbp
  char v23; // r13
  __int64 v24; // rbx
  unsigned __int64 v25; // rbx
  int v26; // r15d
  unsigned __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rbx
  unsigned __int64 v30; // rbx
  int v31; // r15d
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  int v37; // [rsp+50h] [rbp+8h]

  result = *(_QWORD *)(a1 + 16);
  v3 = 0;
  if ( result )
  {
LABEL_23:
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 8) = result;
    *(_BYTE *)(result + 388) = 2;
  }
  else
  {
    v6 = 1;
    while ( 1 )
    {
      ready = KiSelectReadyThread(1LL, a1);
      if ( !ready )
      {
        v8 = *(_QWORD *)(a1 + 22776);
        for ( ready = 0LL; v8; v8 = *(_QWORD *)(v9 + 384) )
        {
          v9 = v8 - 88;
          ready = KiSelectThreadFromSchedulingGroup(a1, v8 - 88, 0LL);
          if ( ready )
            break;
        }
        if ( !ready )
        {
          ready = KiSelectReadyThread(0LL, a1);
          if ( !ready )
            break;
        }
      }
      if ( *(_QWORD *)(ready + 568) == KiCpuSetSequence || (*(_DWORD *)(ready + 116) & 8) != 0 )
      {
        if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
        {
          if ( *(char *)(ready + 195) >= 16
            || !*(_QWORD *)(ready + 104)
            || (v35 = *(_QWORD *)(ready + 104)) == 0
            || (v36 = *(unsigned int *)(a1 + 1624) + v35) == 0
            || !(unsigned int)KiGetThreadEffectiveRankNonZero(ready, v36, 0LL) )
          {
            v6 = *(_BYTE *)(ready + 195);
          }
        }
        else
        {
          v6 = *(_BYTE *)(ready + 195);
        }
        **(_BYTE **)(a1 + 56) = v6;
        *(_QWORD *)(a1 + 8) = ready;
        *(_BYTE *)(ready + 388) = 2;
        if ( a2 )
          KiSetProcessorIdle(a1, 0LL, 0LL);
        return ready;
      }
      *(_BYTE *)(ready + 388) = 7;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      KiDeferredReadyThread(a1, (_BYTE *)ready);
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
        {
          if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v10);
        }
        while ( *(_QWORD *)(a1 + 48) );
      }
      if ( a2 && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24) )
        *(_QWORD *)(a1 + 16) = 0LL;
      result = *(_QWORD *)(a1 + 16);
      if ( result )
        goto LABEL_23;
    }
    if ( !a2 )
    {
      v11 = *(unsigned __int8 *)(a1 + 35);
      v12 = *(_QWORD *)(a1 + 1600);
      *(_BYTE *)(a1 + 11755) = 0;
      if ( (v11 & 1) == 0 )
        __fastfail(0x21u);
      v13 = v11 - 1;
      *(_BYTE *)(a1 + 35) = v13;
      if ( !v13 )
        _interlockedbittestandset64((volatile signed __int32 *)v12, *(unsigned __int8 *)(a1 + 1617));
      _interlockedbittestandset64((volatile signed __int32 *)(v12 + 16), *(unsigned __int8 *)(a1 + 1617));
      v14 = *(_QWORD *)(a1 + 24792);
      if ( (*(_QWORD *)(v12 + 16) & v14) == v14 )
        _InterlockedOr64((volatile signed __int64 *)(v12 + 8), v14);
      v15 = *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(v15 + 2) & 4) != 0 )
      {
        if ( *(char *)(v15 + 195) >= 16
          || !*(_QWORD *)(v15 + 104)
          || (v16 = *(_QWORD *)(v15 + 104)) == 0
          || (v17 = *(unsigned int *)(a1 + 1624) + v16) == 0
          || !(unsigned int)KiGetThreadEffectiveRankNonZero(*(_QWORD *)(a1 + 24), v17, 0LL) )
        {
          v6 = *(_BYTE *)(v15 + 195);
        }
      }
      else
      {
        v6 = *(_BYTE *)(v15 + 195);
      }
      **(_BYTE **)(a1 + 56) = v6;
    }
    v18 = *(unsigned __int8 *)(a1 + 35) >> 1;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    if ( (v18 & 1) != 0 )
    {
      return 0LL;
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 1600);
      v20 = *(unsigned __int8 *)(a1 + 1616);
      v21 = *(unsigned __int16 *)(v19 + 146);
      LODWORD(v22) = *(_DWORD *)(v19 + 128);
      v23 = *(_BYTE *)(a1 + 1617);
      v37 = v20;
LABEL_43:
      v24 = *(_QWORD *)(v19 + 152);
      if ( *(unsigned __int16 *)(v19 + 146) == v21 )
        v24 &= ~*(_QWORD *)(a1 + 24768);
      if ( v24 )
      {
        v25 = __ROR8__(v24, v23);
        v26 = v20 << 6;
        while ( 1 )
        {
          _BitScanForward64(&v27, v25);
          v25 ^= 1LL << v27;
          result = KiSearchForNewThreadOnProcessor(
                     a1,
                     0LL,
                     *(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v26 + (((_BYTE)v27 + v23) & 0x3F)]]
                               + 24776));
          if ( result )
            break;
          if ( !v25 )
          {
            v20 = v37;
            goto LABEL_50;
          }
        }
      }
      else
      {
LABEL_50:
        v28 = *(_QWORD *)(v19 + 136);
        if ( *(unsigned __int16 *)(v19 + 146) == v21 )
          v28 ^= *(_QWORD *)(a1 + 1608);
        v29 = ~*(_QWORD *)(v19 + 16) & v28;
        if ( v29 )
        {
          v30 = __ROR8__(v29, v23);
          v31 = v20 << 6;
          while ( 1 )
          {
            _BitScanForward64(&v32, v30);
            v30 ^= 1LL << v32;
            result = KiSearchForNewThreadOnProcessor(
                       a1,
                       KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v31 + (((_BYTE)v32 + v23) & 0x3F)]],
                       0LL);
            if ( result )
              break;
            if ( !v30 )
              goto LABEL_56;
          }
        }
        else
        {
LABEL_56:
          v22 = (unsigned int)v22 & (unsigned __int64)~(1LL << *(_WORD *)(v19 + 146));
          if ( (_DWORD)v22 )
          {
            while ( ++v3 != (unsigned __int16)KeNumberNodes )
            {
              v33 = *((unsigned __int16 *)qword_14034EB68 + v3 + v21 * (unsigned int)(unsigned __int16)KeNumberNodes);
              v34 = (unsigned int)v22;
              if ( _bittest64(&v34, v33) )
              {
                v19 = KeNodeBlock[v33];
                v20 = v37;
                goto LABEL_43;
              }
            }
          }
          return 0LL;
        }
      }
    }
  }
  return result;
}
