/*
 * XREFs of KiStartThreadCycleAccumulation @ 0x14007CDE0
 * Callers:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400292C4 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14007BB00 (KiGroupSchedulingGenerationEnd.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 *     KiIdleSchedule @ 0x1400DF180 (KiIdleSchedule.c)
 *     KeUpdateThreadTag @ 0x140104FD4 (KeUpdateThreadTag.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140141F40 (PpmPerfGetCurrentFrequency.c)
 *     KiBeginCounterAccumulation @ 0x1401C7ED8 (KiBeginCounterAccumulation.c)
 */

__int64 __fastcall KiStartThreadCycleAccumulation(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // r11
  bool v8; // zf
  unsigned int CurrentFrequency; // eax
  __int64 v10; // r10
  __int64 v11; // rcx
  _QWORD *v12; // rdx

  v4 = a2;
  v5 = a1;
  result = __rdtsc();
  v7 = result;
  *(_QWORD *)(a1 + 23544) += result - *(_QWORD *)(a1 + 23352);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
  {
    CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
    v11 = 3LL;
    if ( CurrentFrequency / 0x19 < 3 )
      v11 = CurrentFrequency / 0x19;
    result = *(unsigned __int8 *)(v5 + 23858) + 2944LL;
    v12 = (_QWORD *)(v5 + 8 * (result + 2 * v11));
    a1 = v10 + *v12;
    *v12 = a1;
  }
  *(_QWORD *)(v5 + 23352) = v7;
  if ( (*(_BYTE *)(v4 + 2) & 0x10) != 0 )
  {
    result = *(unsigned __int8 *)(v4 + 124);
    *(_QWORD *)(v5 + 23360) = v7;
  }
  if ( (*(_BYTE *)(v4 + 2) & 2) != 0 )
    result = KiBeginCounterAccumulation(v4, 0LL);
  v8 = *(_BYTE *)(v5 + 6) == 0;
  *(_BYTE *)(v5 + 32) = 0;
  if ( !v8 )
  {
    *(_BYTE *)(v5 + 6) = 0;
    if ( !a3 )
    {
      LOBYTE(a1) = 2;
      return HalRequestSoftwareInterrupt(a1);
    }
  }
  return result;
}
