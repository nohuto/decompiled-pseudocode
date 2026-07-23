/*
 * XREFs of KiEndDebugAccumulation @ 0x140083704
 * Callers:
 *     KeThawExecution @ 0x140083258 (KeThawExecution.c)
 *     KiFreezeTargetExecution @ 0x140083560 (KiFreezeTargetExecution.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140149EF0 (PpmPerfGetCurrentFrequency.c)
 *     KiBeginCounterAccumulation @ 0x1401D6D44 (KiBeginCounterAccumulation.c)
 */

void __fastcall KiEndDebugAccumulation(__int64 a1)
{
  unsigned __int64 v2; // r9
  __int64 v3; // rcx
  unsigned int CurrentFrequency; // eax
  __int64 v5; // rcx

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
  {
    *(_BYTE *)(a1 + 32) = 1;
    v2 = __rdtsc() - *(_QWORD *)(a1 + 23352);
    *(_QWORD *)(a1 + 23544) += v2;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 2LL) & 0x20) != 0 )
    {
      CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
      v5 = 3LL;
      if ( CurrentFrequency / 0x19 < 3 )
        v5 = CurrentFrequency / 0x19;
      *(_QWORD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2 * v5) + 23552) += v2;
    }
    v3 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 23352) += v2;
    if ( (*(_BYTE *)(v3 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v3, 0LL);
    *(_BYTE *)(a1 + 32) = 0;
  }
}
