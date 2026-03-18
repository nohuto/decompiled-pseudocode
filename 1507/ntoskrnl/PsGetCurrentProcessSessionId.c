/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x1400D09F0
 * Callers:
 *     EtwpWriteUserEvent @ 0x140437B50 (EtwpWriteUserEvent.c)
 *     PnpNotifyDriverCallback @ 0x14045E160 (PnpNotifyDriverCallback.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     PopCreatePowerRequestObject @ 0x1404E5E2C (PopCreatePowerRequestObject.c)
 *     NtSetInformationObject @ 0x140520060 (NtSetInformationObject.c)
 *     PfpProcessScenarioPhase @ 0x140582300 (PfpProcessScenarioPhase.c)
 *     IoGetContainerInformation @ 0x140674DA4 (IoGetContainerInformation.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentProcessSessionId()
{
  _KPROCESS *Process; // rcx
  unsigned __int64 v1; // rax
  __int64 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = Process[1].ActiveProcessors.Bitmap[2];
  if ( !v1 )
    return 0LL;
  if ( Process == PsInitialSystemProcess )
    return 0LL;
  result = *(unsigned int *)(v1 + 8);
  if ( (_DWORD)result == -1 )
    return 0LL;
  return result;
}
