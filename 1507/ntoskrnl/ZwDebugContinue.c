/*
 * XREFs of ZwDebugContinue @ 0x1401807F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwDebugContinue(HANDLE DebugObject, PCLIENT_ID AppClientId, NTSTATUS ContinueStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DebugObject, AppClientId, *(_QWORD *)&ContinueStatus);
}
