/*
 * XREFs of KiIsCommitFailTerminationRequested @ 0x14000C1E4
 * Callers:
 *     KiSchedulerApcTerminate @ 0x1404204C4 (KiSchedulerApcTerminate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsCommitFailTerminationRequested(__int64 a1)
{
  return (*(_DWORD *)(a1 + 120) >> 17) & 1;
}
