/*
 * XREFs of KiEndThreadCycleAccumulation @ 0x1400D26C0
 * Callers:
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     KiExitDispatcher @ 0x140056700 (KiExitDispatcher.c)
 *     KeInsertPriQueue @ 0x14005F700 (KeInsertPriQueue.c)
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400D14F4 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D24A0 (KiGroupSchedulingGenerationEnd.c)
 *     KiIdleSchedule @ 0x1400D2630 (KiIdleSchedule.c)
 *     KeSetActualBasePriorityThread @ 0x1400D2840 (KeSetActualBasePriorityThread.c)
 *     KeUpdateThreadTag @ 0x14010D1D8 (KeUpdateThreadTag.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x1400D2750 (KiEndThreadAccountingPeriod.c)
 */

unsigned __int64 __fastcall KiEndThreadCycleAccumulation(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  bool v9; // zf
  unsigned __int64 result; // rax

  *(_BYTE *)(a1 + 32) = 1;
  v5 = __rdtsc();
  v6 = v5 - *(_QWORD *)(a1 + 23352);
  v7 = v6 + *(_QWORD *)(a2 + 72);
  v8 = v6 + *(unsigned int *)(a2 + 80);
  *(_QWORD *)(a2 + 72) = v7;
  *(_QWORD *)(a1 + 23352) = v5;
  if ( v8 > 0xFFFFFFFF )
    LODWORD(v8) = -1;
  v9 = (*(_BYTE *)(a2 + 2) & 0x3E) == 0;
  *(_DWORD *)(a2 + 80) = v8;
  if ( !v9 )
    KiEndThreadAccountingPeriod(a1, a2, v6, a2);
  result = v7;
  if ( a3 )
    *a3 = v5;
  return result;
}
