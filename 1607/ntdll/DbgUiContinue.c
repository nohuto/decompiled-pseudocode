/*
 * XREFs of DbgUiContinue @ 0x1800D00B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiContinue(PCLIENT_ID AppClientId, NTSTATUS ContinueStatus)
{
  return NtDebugContinue(NtCurrentTeb()->DbgSsReserved[1], AppClientId, ContinueStatus);
}
