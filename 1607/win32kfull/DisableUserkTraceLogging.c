/*
 * XREFs of DisableUserkTraceLogging @ 0x1C0135B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS DisableUserkTraceLogging()
{
  NTSTATUS result; // eax

  result = EtwUnregister(qword_1C0320860);
  qword_1C0320860 = 0LL;
  dword_1C0320840 = 0;
  return result;
}
