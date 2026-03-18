/*
 * XREFs of PopUserShutdownCancelled @ 0x1404F878C
 * Callers:
 *     PoUserShutdownCancelled @ 0x1404F8770 (PoUserShutdownCancelled.c)
 *     PopUserShutdownDelayWorkerCallback @ 0x1406367D0 (PopUserShutdownDelayWorkerCallback.c)
 * Callees:
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     PpmEndHighPerfRequest @ 0x140126A00 (PpmEndHighPerfRequest.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
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
  result = xmmword_1402DDFD0;
  if ( xmmword_1402DDFD0 )
  {
    LOBYTE(v4) = a1;
    result = (__int64 (__fastcall *)(_QWORD))xmmword_1402DDFD0(v4);
    v2 = (char)result;
  }
  if ( v2 )
    return (__int64 (__fastcall *)(_QWORD))PpmEndHighPerfRequest(2, v3);
  return result;
}
