/*
 * XREFs of PopSystemRequiredSet @ 0x14015A758
 * Callers:
 *     NtSetThreadExecutionState @ 0x14056371C (NtSetThreadExecutionState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopSystemRequiredSet(__int64 a1, __int64 a2)
{
  return PopResetIdleTime(3u, a2);
}
