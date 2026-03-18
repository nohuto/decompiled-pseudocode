/*
 * XREFs of DisableUserkTraceLogging @ 0x1C0114C60
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
  dword_1C031B280 = 0;
  return result;
}
