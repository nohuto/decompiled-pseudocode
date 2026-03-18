/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x140095D9C
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x140095D3C (KeQueryTotalCycleTimeThread.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1404B9E68 (PsQueryTotalCycleTimeProcess.c)
 *     KeEnableProfiling @ 0x14064FBC0 (KeEnableProfiling.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400D14F4 (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _disable();
  result = KiUpdateTotalCyclesCurrentThread(KeGetCurrentPrcb(), a1, a2);
  _enable();
  return result;
}
