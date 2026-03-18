/*
 * XREFs of DisableUserkTraceLogging @ 0x1C0132D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS DisableUserkTraceLogging()
{
  NTSTATUS result; // eax

  result = EtwUnregister(RegHandle);
  RegHandle = 0LL;
  dword_1C031D7B0 = 0;
  return result;
}
