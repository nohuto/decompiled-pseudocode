/*
 * XREFs of PopUserShutdownCancelled @ 0x140531488
 * Callers:
 *     PoUserShutdownCancelled @ 0x14053146C (PoUserShutdownCancelled.c)
 *     PopUserShutdownDelayWorkerCallback @ 0x14066EB90 (PopUserShutdownDelayWorkerCallback.c)
 * Callees:
 *     KeCancelTimer @ 0x1400C3480 (KeCancelTimer.c)
 *     PpmEndHighPerfRequest @ 0x14013155C (PpmEndHighPerfRequest.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
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
    PopBsdShutdownInProgress = 0;
    PopUserShutdownInProgress = 0;
    v2 = 1;
  }
  PopReleasePolicyLock();
  result = xmmword_140328FB0;
  if ( xmmword_140328FB0 )
  {
    LOBYTE(v4) = a1;
    result = (__int64 (__fastcall *)(_QWORD))xmmword_140328FB0(v4);
    v2 = (char)result;
  }
  if ( v2 )
    return (__int64 (__fastcall *)(_QWORD))PpmEndHighPerfRequest(2, v3);
  return result;
}
