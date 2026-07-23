/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x14009559C
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14009553C (KeQueryTotalCycleTimeThread.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1404A5B98 (PsQueryTotalCycleTimeProcess.c)
 *     KeEnableProfiling @ 0x14064FCA4 (KeEnableProfiling.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400CF394 (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _disable();
  result = KiUpdateTotalCyclesCurrentThread(KeGetCurrentPrcb(), a1, a2);
  _enable();
  return result;
}
