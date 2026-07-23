/*
 * XREFs of KiStartThreadCycleAccumulation @ 0x1400D1640
 * Callers:
 *     KiSwapThread @ 0x14005AD80 (KiSwapThread.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400CF394 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D0340 (KiGroupSchedulingGenerationEnd.c)
 *     KiIdleSchedule @ 0x1400D04D0 (KiIdleSchedule.c)
 *     KeSetActualBasePriorityThread @ 0x1400D06E0 (KeSetActualBasePriorityThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400D0900 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     KeUpdateThreadTag @ 0x14010D73C (KeUpdateThreadTag.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140149EF0 (PpmPerfGetCurrentFrequency.c)
 *     KiBeginCounterAccumulation @ 0x1401D6D44 (KiBeginCounterAccumulation.c)
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
  __int64 v11; // r8
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
