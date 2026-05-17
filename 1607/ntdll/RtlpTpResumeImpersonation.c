/*
 * XREFs of RtlpTpResumeImpersonation @ 0x18003A010
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
 */

NTSTATUS __fastcall RtlpTpResumeImpersonation(void *a1)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    Handle = a1;
    NtSetInformationThread(-2LL, 5LL, &Handle);
    return NtClose(Handle);
  }
  return result;
}
