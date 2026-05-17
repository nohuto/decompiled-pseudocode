/*
 * XREFs of RtlpTpRevertCapture @ 0x18007CB50
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x18007AA50 (RtlDeleteTimerQueueEx.c)
 *     RtlUpdateTimer @ 0x18007ACF0 (RtlUpdateTimer.c)
 *     RtlCreateTimerQueue @ 0x18007ADE0 (RtlCreateTimerQueue.c)
 *     RtlDeregisterWaitEx @ 0x18007B7E0 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x18007BDC0 (RtlRegisterWait.c)
 *     RtlQueueWorkItem @ 0x18007C3C0 (RtlQueueWorkItem.c)
 *     RtlDeleteTimer @ 0x18007C6E0 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x18007C830 (RtlCreateTimer.c)
 *     RtlSetIoCompletionCallback @ 0x18007E530 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800939D0 (NtSetInformationThread.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenThreadToken @ 0x180093B40 (NtOpenThreadToken.c)
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
