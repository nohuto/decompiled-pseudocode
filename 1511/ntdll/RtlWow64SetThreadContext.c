/*
 * XREFs of RtlWow64SetThreadContext @ 0x1800D0320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlWow64SetThreadContext()
{
  return NtSetInformationThread();
}
