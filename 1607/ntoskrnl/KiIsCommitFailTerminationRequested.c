/*
 * XREFs of KiIsCommitFailTerminationRequested @ 0x1400C9CE8
 * Callers:
 *     KiSchedulerApcTerminate @ 0x140509A00 (KiSchedulerApcTerminate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsCommitFailTerminationRequested(__int64 a1)
{
  return (*(_DWORD *)(a1 + 120) >> 17) & 1;
}
