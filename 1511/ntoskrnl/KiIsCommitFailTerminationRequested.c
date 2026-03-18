/*
 * XREFs of KiIsCommitFailTerminationRequested @ 0x1400E781C
 * Callers:
 *     KiSchedulerApcTerminate @ 0x1404AC820 (KiSchedulerApcTerminate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsCommitFailTerminationRequested(__int64 a1)
{
  return (*(_DWORD *)(a1 + 120) >> 17) & 1;
}
