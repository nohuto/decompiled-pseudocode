/*
 * XREFs of RtlpTpResumeImpersonation @ 0x180008C60
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
