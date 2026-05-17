/*
 * XREFs of RtlpExitThread @ 0x1800F6160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlpExitThread()
{
  return NtTerminateThread();
}
