/*
 * XREFs of KiEndDebugAccumulation @ 0x1401C909C
 * Callers:
 *     KeThawExecution @ 0x1401C8F5C (KeThawExecution.c)
 *     KiFreezeTargetExecution @ 0x1401C9144 (KiFreezeTargetExecution.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140141F40 (PpmPerfGetCurrentFrequency.c)
 *     KiBeginCounterAccumulation @ 0x1401C7ED8 (KiBeginCounterAccumulation.c)
 */

void __fastcall KiEndDebugAccumulation(__int64 a1)
{
  unsigned __int64 v2; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
  {
    *(_BYTE *)(a1 + 32) = 1;
    v2 = __rdtsc() - *(_QWORD *)(a1 + 23352);
    *(_QWORD *)(a1 + 23544) += v2;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 2LL) & 0x20) != 0 )
    {
      CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
      v4 = 3LL;
      if ( CurrentFrequency / 0x19 < 3 )
        v4 = CurrentFrequency / 0x19;
      *(_QWORD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2 * v4) + 23552) += v2;
    }
    v5 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 23352) += v2;
    if ( (*(_BYTE *)(v5 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v5, 0);
    *(_BYTE *)(a1 + 32) = 0;
  }
}
