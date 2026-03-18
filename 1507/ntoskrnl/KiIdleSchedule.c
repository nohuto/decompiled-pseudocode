/*
 * XREFs of KiIdleSchedule @ 0x14010FB70
 * Callers:
 *     KiIdleLoop @ 0x140186810 (KiIdleLoop.c)
 * Callees:
 *     KiSearchForNewThread @ 0x1400A1160 (KiSearchForNewThread.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 */

__int64 __fastcall KiIdleSchedule(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  char v8; // r11
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // r11
  bool v13; // zf
  __int64 v14; // rdi
  unsigned int CurrentFrequency; // eax
  __int64 v16; // rcx
  _QWORD *i; // rcx
  unsigned int v18; // edx
  __int64 v19; // r10
  _QWORD *v20; // rdx

  v2 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
    {
      if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v2);
    }
    while ( *(_QWORD *)(a1 + 48) );
  }
  *(_BYTE *)(a1 + 11755) = 0;
  v3 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 16) == v3 )
    *(_QWORD *)(a1 + 16) = 0LL;
  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  v4 = __rdtsc();
  v5 = v4 - *(_QWORD *)(a1 + 23352);
  v6 = v5 + *(unsigned int *)(v3 + 80);
  *(_QWORD *)(v3 + 72) += v5;
  if ( v6 > 0xFFFFFFFF )
    LODWORD(v6) = -1;
  *(_QWORD *)(a1 + 23352) = v4;
  v7 = 3LL;
  v8 = *(_BYTE *)(v3 + 2);
  *(_DWORD *)(v3 + 80) = v6;
  if ( (v8 & 0x3E) != 0 )
  {
    if ( (v8 & 0x10) != 0 )
    {
      *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v3 + 124) + 23368) += *(_QWORD *)(a1 + 23352)
                                                                      - *(_QWORD *)(a1 + 23360);
      v8 &= ~0x10u;
      *(_QWORD *)(a1 + 23360) = 0LL;
    }
    if ( (v8 & 0x3E) != 0 )
    {
      if ( (v8 & 0x20) != 0 )
      {
        v14 = *(_QWORD *)(v3 + 1952);
        if ( v14 )
        {
          CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
          v16 = 3LL;
          if ( CurrentFrequency / 0x19 < 3 )
            v16 = CurrentFrequency / 0x19;
          *(_QWORD *)(v14 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2 * v16)) += v5;
        }
        v8 &= ~0x20u;
      }
      if ( (v8 & 0x3E) != 0 )
      {
        v9 = *(_QWORD *)(v3 + 104);
        if ( v9 )
        {
          for ( i = (_QWORD *)(*(unsigned int *)(a1 + 1624) + v9); i; i = (_QWORD *)i[49] )
            *i += v5;
        }
        if ( (*(_BYTE *)(v3 + 2) & 8) != 0
          && (*(_QWORD *)(v3 + 576) & *(_QWORD *)(*(_QWORD *)(a1 + 1600) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 1600)
                                                                                                + 136LL) )
        {
          *(_QWORD *)(a1 + 23392) += v5;
        }
        if ( *(_QWORD *)(v3 + 360) )
          KiEndCounterAccumulation(v3);
      }
    }
  }
  _enable();
  result = KiSearchForNewThread(a1, 1);
  if ( result )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 24);
    _disable();
    v12 = __rdtsc();
    *(_QWORD *)(a1 + 23544) += v12 - *(_QWORD *)(a1 + 23352);
    if ( (*(_BYTE *)(v11 + 2) & 0x20) != 0 )
    {
      v18 = (unsigned int)PpmPerfGetCurrentFrequency(a1) / 0x19;
      if ( v18 < 3 )
        v7 = v18;
      v20 = (_QWORD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2944LL + 2 * v7));
      *v20 += v19;
    }
    *(_QWORD *)(a1 + 23352) = v12;
    if ( (*(_BYTE *)(v11 + 2) & 0x10) != 0 )
      *(_QWORD *)(a1 + 23360) = v12;
    if ( (*(_BYTE *)(v11 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v11, 0LL);
    v13 = *(_BYTE *)(a1 + 6) == 0;
    *(_BYTE *)(a1 + 32) = 0;
    if ( !v13 )
      *(_BYTE *)(a1 + 6) = 0;
    _enable();
    return 0LL;
  }
  return result;
}
