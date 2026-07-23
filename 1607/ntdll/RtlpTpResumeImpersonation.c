/*
 * XREFs of RtlpTpResumeImpersonation @ 0x18003A000
 * Callers:
 *     RtlQueueWorkItem @ 0x180039CE0 (RtlQueueWorkItem.c)
 *     RtlDeleteTimerQueueEx @ 0x1800640C0 (RtlDeleteTimerQueueEx.c)
 *     RtlCreateTimerQueue @ 0x180064240 (RtlCreateTimerQueue.c)
 *     RtlUpdateTimer @ 0x180064300 (RtlUpdateTimer.c)
 *     RtlDeregisterWaitEx @ 0x180064420 (RtlDeregisterWaitEx.c)
 *     RtlDeleteTimer @ 0x180064680 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180064820 (RtlCreateTimer.c)
 *     RtlRegisterWait @ 0x180064A90 (RtlRegisterWait.c)
 *     RtlSetIoCompletionCallback @ 0x180090290 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

NTSTATUS __fastcall RtlpTpResumeImpersonation(void *a1)
{
  NTSTATUS result; // eax
  HANDLE ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    ThreadInformation = a1;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    return NtClose(ThreadInformation);
  }
  return result;
}
