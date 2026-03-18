/*
 * XREFs of KiReduceByEffectiveIdleSmtSet @ 0x140117A68
 * Callers:
 *     KiChooseTargetProcessor @ 0x14004D7D0 (KiChooseTargetProcessor.c)
 *     KiSelectIdleProcessor @ 0x14015AA84 (KiSelectIdleProcessor.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 */

char __fastcall KiReduceByEffectiveIdleSmtSet(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // r9
  unsigned __int64 v14; // r9
  bool v15; // zf
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int CurrentFrequency; // eax
  __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // edx
  __int64 v23; // r10
  __int64 v24; // rdx

  v4 = *a2 & *(_QWORD *)(*(_QWORD *)(a1 + 1600) + 16LL);
  v5 = *(_QWORD *)(a1 + 24792) & ~*(_QWORD *)(a1 + 1608);
  if ( (*a2 & v5) == 0 || (v4 & v5) != v5 || (*(_BYTE *)(a1 + 11756) & 1) != 0 || *(_DWORD *)(a1 + 22680) )
    return 0;
  v7 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(a1 + 32) )
  {
    _disable();
    *(_BYTE *)(a1 + 32) = 1;
    v8 = 3LL;
    v9 = __rdtsc();
    v10 = v9 - *(_QWORD *)(a1 + 23352);
    v11 = v10 + *(unsigned int *)(v7 + 80);
    *(_QWORD *)(v7 + 72) += v10;
    v12 = 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 23352) = v9;
    v13 = *(_BYTE *)(v7 + 2);
    if ( v11 > 0xFFFFFFFF )
      LODWORD(v11) = -1;
    *(_DWORD *)(v7 + 80) = v11;
    if ( (v13 & 0x3E) != 0 )
    {
      if ( (v13 & 0x10) != 0 )
      {
        *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v7 + 124) + 23368) += *(_QWORD *)(a1 + 23352)
                                                                        - *(_QWORD *)(a1 + 23360);
        *(_QWORD *)(a1 + 23360) = 0LL;
        v13 &= ~0x10u;
      }
      if ( (v13 & 0x3E) != 0 )
      {
        if ( (v13 & 0x20) != 0 )
        {
          if ( *(_QWORD *)(v7 + 1952) )
          {
            CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
            v20 = 3LL;
            if ( CurrentFrequency / 0x19 < 3 )
              v20 = CurrentFrequency / 0x19;
            v21 = *(unsigned __int8 *)(a1 + 23858) + 2 * v20;
            v12 = v10 + *(_QWORD *)(v19 + 8 * v21);
            *(_QWORD *)(v19 + 8 * v21) = v12;
          }
          v13 &= ~0x20u;
        }
        if ( (v13 & 0x3E) != 0 )
        {
          v12 = *(_QWORD *)(v7 + 104);
          if ( v12 )
          {
            for ( v12 += *(unsigned int *)(a1 + 1624); v12; v12 = *(_QWORD *)(v12 + 392) )
              *(_QWORD *)v12 += v10;
          }
          if ( (*(_BYTE *)(v7 + 2) & 8) != 0 )
          {
            v12 = *(_QWORD *)(v7 + 576);
            if ( (v12 & *(_QWORD *)(*(_QWORD *)(a1 + 1600) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 1600) + 136LL) )
              *(_QWORD *)(a1 + 23392) += v10;
          }
          if ( *(_QWORD *)(v7 + 360) )
            KiEndCounterAccumulation(v7);
        }
      }
    }
    v14 = __rdtsc();
    *(_QWORD *)(a1 + 23544) += v14 - *(_QWORD *)(a1 + 23352);
    if ( (*(_BYTE *)(v7 + 2) & 0x20) != 0 )
    {
      v22 = (unsigned int)PpmPerfGetCurrentFrequency(a1) / 0x19;
      if ( v22 < 3 )
        v8 = v22;
      v24 = *(unsigned __int8 *)(a1 + 23858) + 2 * v8;
      v12 = *(_QWORD *)(a1 + 8 * v24 + 23552) + v23;
      *(_QWORD *)(a1 + 8 * v24 + 23552) = v12;
    }
    *(_QWORD *)(a1 + 23352) = v14;
    if ( (*(_BYTE *)(v7 + 2) & 0x10) != 0 )
      *(_QWORD *)(a1 + 23360) = v14;
    if ( (*(_BYTE *)(v7 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v7, 0LL);
    v15 = *(_BYTE *)(a1 + 6) == 0;
    *(_BYTE *)(a1 + 32) = 0;
    if ( !v15 )
    {
      LOBYTE(v12) = 2;
      *(_BYTE *)(a1 + 6) = 0;
      HalRequestSoftwareInterrupt(v12);
    }
    _enable();
  }
  v16 = *(_DWORD *)(v7 + 80);
  v17 = *(_DWORD *)(v7 + 84);
  if ( v16 < v17 && v17 - v16 >= KiShortExecutionCycles )
    return 0;
  *a2 &= v5;
  return 1;
}
