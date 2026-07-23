/*
 * XREFs of KiIsCommitFailTerminationRequested @ 0x1400C7B88
 * Callers:
 *     KiSchedulerApcTerminate @ 0x1404EC990 (KiSchedulerApcTerminate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsCommitFailTerminationRequested(__int64 a1)
{
  return (*(_DWORD *)(a1 + 120) >> 17) & 1;
}
