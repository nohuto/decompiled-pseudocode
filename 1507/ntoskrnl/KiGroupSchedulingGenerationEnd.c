/*
 * XREFs of KiGroupSchedulingGenerationEnd @ 0x1400EC860
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x1400A3400 (KiGroupSchedulingQuantumEnd.c)
 *     KeTransitionProcessorParkState @ 0x14020AF40 (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiSelectReadyThread @ 0x1400A19C0 (KiSelectReadyThread.c)
 *     KiSetProcessorIdle @ 0x1400D53B0 (KiSetProcessorIdle.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400ECD50 (KiTransitionSchedulingGroupGeneration.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 */

__int64 __fastcall KiGroupSchedulingGenerationEnd(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rbp
  bool v7; // r15
  signed int v8; // r12d
  __int64 v9; // r13
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rax
  char v13; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *i; // rcx
  __int64 result; // rax
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // r14
  char v23; // cl
  __int64 v24; // rdx
  __int64 v25; // rdx
  int ThreadEffectiveRankNonZero; // eax
  char v27; // r8
  bool v28; // zf
  __int64 v29; // r13
  __int64 v30; // rsi
  __int64 *v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 ready; // rax
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rdx
  int v40; // eax
  char v41; // r8
  int v42; // edx
  __int64 v43; // r9
  unsigned int v44; // edx
  __int64 v45; // r10
  __int64 *v46; // rdx
  bool v47; // [rsp+60h] [rbp+18h]

  v3 = *(_QWORD *)(a1 + 8);
  v7 = v3 == *(_QWORD *)(a1 + 24);
  v8 = 0;
  v47 = v7;
  v9 = 3LL;
  if ( !a3 )
  {
    _disable();
    *(_BYTE *)(a1 + 32) = 1;
    v10 = __rdtsc();
    v11 = v10 - *(_QWORD *)(a1 + 23352);
    v12 = v11 + *(unsigned int *)(v3 + 80);
    *(_QWORD *)(v3 + 72) += v11;
    *(_QWORD *)(a1 + 23352) = v10;
    v13 = *(_BYTE *)(v3 + 2);
    if ( v12 > 0xFFFFFFFF )
      LODWORD(v12) = -1;
    *(_DWORD *)(v3 + 80) = v12;
    if ( (v13 & 0x3E) != 0 )
    {
      if ( (v13 & 0x10) != 0 )
      {
        *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v3 + 124) + 23368) += *(_QWORD *)(a1 + 23352)
                                                                        - *(_QWORD *)(a1 + 23360);
        v13 &= ~0x10u;
        *(_QWORD *)(a1 + 23360) = 0LL;
      }
      if ( (v13 & 0x3E) != 0 )
      {
        if ( (v13 & 0x20) != 0 )
        {
          if ( *(_QWORD *)(v3 + 1952) )
          {
            CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
            v16 = 3LL;
            if ( CurrentFrequency / 0x19 < 3 )
              v16 = CurrentFrequency / 0x19;
            *(_QWORD *)(v15 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2 * v16)) += v11;
          }
          v13 &= ~0x20u;
        }
        if ( (v13 & 0x3E) != 0 )
        {
          v17 = *(_QWORD *)(v3 + 104);
          if ( v17 )
          {
            for ( i = (_QWORD *)(*(unsigned int *)(a1 + 1624) + v17); i; i = (_QWORD *)i[49] )
              *i += v11;
          }
          if ( (*(_BYTE *)(v3 + 2) & 8) != 0
            && (*(_QWORD *)(v3 + 576) & *(_QWORD *)(*(_QWORD *)(a1 + 1600) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 1600)
                                                                                                  + 136LL) )
          {
            *(_QWORD *)(a1 + 23392) += v11;
          }
          if ( *(_QWORD *)(v3 + 360) )
            KiEndCounterAccumulation(v3);
        }
      }
    }
    _enable();
  }
  result = KiTransitionSchedulingGroupGeneration(a1, a2, a3);
  if ( !a3 )
  {
    v21 = 0;
    v22 = *(_QWORD *)(a1 + 16);
    if ( v22 && v22 != *(_QWORD *)(a1 + 24) )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( (*(_BYTE *)(v3 + 2) & 4) != 0 )
      {
        if ( *(char *)(v3 + 195) >= 16
          || !*(_QWORD *)(v3 + 104)
          || (v24 = *(_QWORD *)(v3 + 104)) == 0
          || (v25 = *(unsigned int *)(a1 + 1624) + v24) == 0
          || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v3, v25, 0),
              v23 = v27 + 1,
              !ThreadEffectiveRankNonZero) )
        {
          v23 = *(_BYTE *)(v3 + 195);
        }
      }
      else
      {
        v23 = *(_BYTE *)(v3 + 195);
      }
      **(_BYTE **)(a1 + 56) = v23;
      *(_BYTE *)(v22 + 388) = 1;
      v28 = (*(_DWORD *)(v22 + 120) & 0x1000) == 0;
      v29 = *(char *)(v22 + 195);
      *(_DWORD *)(v22 + 436) = MEMORY[0xFFFFF78000000320];
      v20 = *(_QWORD *)(a1 + 24768);
      if ( !v28 && v20 && (v20 & *(_QWORD *)(v22 + 576)) == v20 )
      {
        v30 = *(_QWORD *)(a1 + 24776);
        v31 = (__int64 *)(v30 + 16 * (v29 + 1));
        while ( _interlockedbittestandset64((volatile signed __int32 *)v30, 0LL) )
        {
          do
          {
            if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait((unsigned int)v21);
          }
          while ( *(_QWORD *)v30 );
        }
        v32 = *v31;
        v33 = v22 + 216;
        *(_QWORD *)(v22 + 216) = *v31;
        *(_QWORD *)(v22 + 224) = v31;
        if ( *(__int64 **)(v32 + 8) != v31 )
          __fastfail(3u);
        *(_QWORD *)(v32 + 8) = v33;
        *v31 = v33;
        _bittestandreset((signed __int32 *)(a1 + 22684), v29);
        *(_DWORD *)(v30 + 8) |= 1 << v29;
        *(_DWORD *)(v22 + 536) |= 0x80000000;
        _InterlockedAnd64((volatile signed __int64 *)v30, 0LL);
        v7 = v47;
      }
      else
      {
        v20 = v22 + 216;
        v34 = (__int64 *)(a1 + 16 * (v29 + 1424));
        v35 = *v34;
        *(_QWORD *)(v22 + 216) = *v34;
        *(_QWORD *)(v22 + 224) = v34;
        if ( *(__int64 **)(v35 + 8) != v34 )
          __fastfail(3u);
        *(_QWORD *)(v35 + 8) = v20;
        *v34 = v20;
        _bittestandset((signed __int32 *)(a1 + 22684), v29);
        *(_DWORD *)(a1 + 22680) |= 1 << v29;
      }
      v21 = 1;
      v9 = 3LL;
    }
    if ( v22 != *(_QWORD *)(a1 + 24) )
    {
      if ( !v7 )
      {
        v8 = *(char *)(v3 + 195);
        if ( v8 >= 31 )
          goto LABEL_74;
      }
      ready = KiSelectReadyThread(v8, a1);
      v37 = ready;
      if ( ready )
      {
        if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
        {
          if ( *(char *)(ready + 195) >= 16
            || !*(_QWORD *)(ready + 104)
            || (v38 = *(_QWORD *)(ready + 104)) == 0
            || (v39 = *(unsigned int *)(a1 + 1624) + v38) == 0
            || (v40 = KiGetThreadEffectiveRankNonZero(ready, v39, 0), v20 = 1LL, !v40) )
          {
            v20 = (unsigned int)*(char *)(v37 + 195);
          }
        }
        else
        {
          v20 = *(unsigned __int8 *)(ready + 195);
        }
        --v21;
        **(_BYTE **)(a1 + 56) = v20;
        *(_QWORD *)(a1 + 16) = v37;
        *(_BYTE *)(v37 + 388) = 3;
      }
    }
    if ( v7 )
    {
      if ( v21 <= 0 )
      {
        if ( v21 >= 0 || (*(_BYTE *)(a1 + 35) & 1) != 0 )
          goto LABEL_74;
        v41 = 0;
        v42 = 0;
        goto LABEL_73;
      }
      if ( (*(_BYTE *)(a1 + 35) & 1) != 0 )
      {
        v41 = 1;
        v42 = 1;
LABEL_73:
        KiSetProcessorIdle(a1, v42, v41);
      }
    }
LABEL_74:
    _disable();
    result = __rdtsc();
    v43 = result;
    *(_QWORD *)(a1 + 23544) += result - *(_QWORD *)(a1 + 23352);
    if ( (*(_BYTE *)(v3 + 2) & 0x20) != 0 )
    {
      v44 = (unsigned int)PpmPerfGetCurrentFrequency(a1) / 0x19;
      if ( v44 < 3 )
        v9 = v44;
      result = *(unsigned __int8 *)(a1 + 23858) + 2944LL;
      v46 = (__int64 *)(a1 + 8 * (result + 2 * v9));
      v20 = v45 + *v46;
      *v46 = v20;
    }
    *(_QWORD *)(a1 + 23352) = v43;
    if ( (*(_BYTE *)(v3 + 2) & 0x10) != 0 )
    {
      result = *(unsigned __int8 *)(v3 + 124);
      *(_QWORD *)(a1 + 23360) = v43;
    }
    if ( (*(_BYTE *)(v3 + 2) & 2) != 0 )
      result = KiBeginCounterAccumulation(v3, 0LL);
    v28 = *(_BYTE *)(a1 + 6) == 0;
    *(_BYTE *)(a1 + 32) = 0;
    if ( !v28 )
    {
      *(_BYTE *)(a1 + 6) = 0;
      if ( !v7 )
      {
        LOBYTE(v20) = 2;
        result = HalRequestSoftwareInterrupt(v20);
      }
    }
    _enable();
  }
  return result;
}
