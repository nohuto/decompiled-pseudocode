/*
 * XREFs of PopUserShutdownCancelled @ 0x140566C24
 * Callers:
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 *     PoUserShutdownCancelled @ 0x140566C1C (PoUserShutdownCancelled.c)
 *     PopUserShutdownDelayWorkerCallback @ 0x1406B6114 (PopUserShutdownDelayWorkerCallback.c)
 * Callees:
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     PpmEndHighPerfRequest @ 0x14015A1D0 (PpmEndHighPerfRequest.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 */

__int64 (__fastcall *__fastcall PopUserShutdownCancelled(char a1))(_QWORD)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 (__fastcall *result)(_QWORD); // rax

  v2 = 0;
  PopAcquirePolicyLock();
  if ( PopUserShutdownInProgress )
  {
    KeCancelTimer(&PopUserShutdownDelayTimer);
    PopUserShutdownInProgress = 0;
    v2 = 1;
  }
  PopReleasePolicyLock();
  result = xmmword_14032E590;
  if ( xmmword_14032E590 )
  {
    LOBYTE(v4) = a1;
    result = (__int64 (__fastcall *)(_QWORD))xmmword_14032E590(v4);
    v2 = (char)result;
  }
  if ( v2 )
    return (__int64 (__fastcall *)(_QWORD))PpmEndHighPerfRequest(2, v3);
  return result;
}
