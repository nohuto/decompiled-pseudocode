/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x1400F14C8
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x1400F1340 (KeQueryTotalCycleTimeThread.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1403B4B54 (PsQueryTotalCycleTimeProcess.c)
 *     KeEnableProfiling @ 0x14061A98C (KeEnableProfiling.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400292C4 (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1)
{
  __int64 result; // rax

  _disable();
  result = KiUpdateTotalCyclesCurrentThread((__int64)KeGetCurrentPrcb(), a1);
  _enable();
  return result;
}
