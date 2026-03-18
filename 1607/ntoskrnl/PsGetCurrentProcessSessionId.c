/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x1400FB920
 * Callers:
 *     EtwpEventWriteFull @ 0x140073CE0 (EtwpEventWriteFull.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     NtSetInformationObject @ 0x1404B0170 (NtSetInformationObject.c)
 *     EtwpWriteUserEvent @ 0x140510920 (EtwpWriteUserEvent.c)
 *     PopCreatePowerRequestObject @ 0x140520558 (PopCreatePowerRequestObject.c)
 *     PnpNotifyDriverCallback @ 0x14052C110 (PnpNotifyDriverCallback.c)
 *     PfpProcessScenarioPhase @ 0x1405453E8 (PfpProcessScenarioPhase.c)
 *     IoGetContainerInformation @ 0x140624414 (IoGetContainerInformation.c)
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
