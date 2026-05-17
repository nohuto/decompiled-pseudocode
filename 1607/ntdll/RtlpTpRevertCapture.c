/*
 * XREFs of RtlpTpRevertCapture @ 0x180064D78
 * Callers:
 *     RtlQueueWorkItem @ 0x180039CF0 (RtlQueueWorkItem.c)
 *     RtlDeleteTimerQueueEx @ 0x1800640D0 (RtlDeleteTimerQueueEx.c)
 *     RtlCreateTimerQueue @ 0x180064250 (RtlCreateTimerQueue.c)
 *     RtlUpdateTimer @ 0x180064310 (RtlUpdateTimer.c)
 *     RtlDeregisterWaitEx @ 0x180064430 (RtlDeregisterWaitEx.c)
 *     RtlDeleteTimer @ 0x180064690 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180064830 (RtlCreateTimer.c)
 *     RtlRegisterWait @ 0x180064AA0 (RtlRegisterWait.c)
 *     RtlSetIoCompletionCallback @ 0x1800902A0 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenThreadToken @ 0x1800A68A0 (NtOpenThreadToken.c)
 */

__int64 __fastcall RtlpTpRevertCapture(HANDLE *a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    return 0LL;
  LOBYTE(a3) = 1;
  result = NtOpenThreadToken(-2LL, (a2 != 0 ? 2 : 0) | 4u, a3, a1);
  if ( (int)result >= 0 )
  {
    v6 = 0LL;
    v5 = NtSetInformationThread(-2LL, 5LL, &v6);
    if ( v5 < 0 )
    {
      NtClose(*a1);
      *a1 = 0LL;
      return (unsigned int)v5;
    }
    return 0LL;
  }
  return result;
}
