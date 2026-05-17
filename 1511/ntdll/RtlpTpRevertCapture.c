/*
 * XREFs of RtlpTpRevertCapture @ 0x180008A70
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180006DF0 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x180007100 (RtlRegisterWait.c)
 *     RtlDeleteTimer @ 0x180007F40 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x1800081A0 (RtlCreateTimer.c)
 *     RtlQueueWorkItem @ 0x18000BBE0 (RtlQueueWorkItem.c)
 *     RtlCreateTimerQueue @ 0x1800809E0 (RtlCreateTimerQueue.c)
 *     RtlUpdateTimer @ 0x180081910 (RtlUpdateTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x180081E30 (RtlDeleteTimerQueueEx.c)
 *     RtlSetIoCompletionCallback @ 0x18008DA90 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A5260 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenThreadToken @ 0x1800A5540 (NtOpenThreadToken.c)
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
