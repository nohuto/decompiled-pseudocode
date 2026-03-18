/*
 * XREFs of EvaluateCurrentState @ 0x140233034
 * Callers:
 *     PoStoreRequester @ 0x1400D0B50 (PoStoreRequester.c)
 *     PoDestroyReasonContext @ 0x1400D10E8 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400D1330 (PoCaptureReasonContext.c)
 *     PopCaptureReasonContext @ 0x1400D156C (PopCaptureReasonContext.c)
 *     PopBuildMemoryImageHeader @ 0x1403F1BF0 (PopBuildMemoryImageHeader.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404E5984 (PopDiagTracePowerRequestCreate.c)
 *     PopCreateUserPowerRequest @ 0x1404EA9B8 (PopCreateUserPowerRequest.c)
 *     NtQueryDirectoryObject @ 0x140520F80 (NtQueryDirectoryObject.c)
 *     SepCopyTokenAccessInformation @ 0x140526F7C (SepCopyTokenAccessInformation.c)
 * Callees:
 *     <none>
 */

char __fastcall EvaluateCurrentState(int **a1)
{
  unsigned int v1; // r9d
  __int64 v2; // rdx
  int v3; // ecx

  v1 = *((_DWORD *)a1 + 2);
  v2 = *((unsigned int *)a1 + 3);
  v3 = **a1;
  if ( v3 )
    return v3 != 1;
  else
    return EvaluateCurrentStateFromRegistry(v1, v2);
}
