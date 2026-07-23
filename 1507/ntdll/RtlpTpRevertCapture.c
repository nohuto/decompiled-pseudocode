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

NTSTATUS __fastcall RtlpTpRevertCapture(PHANDLE TokenHandle, int a2)
{
  NTSTATUS result; // eax
  NTSTATUS v4; // edi
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  *TokenHandle = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    return 0;
  result = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, (a2 != 0 ? 2 : 0) | 4, 1u, TokenHandle);
  if ( result >= 0 )
  {
    ThreadInformation = 0LL;
    v4 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    if ( v4 < 0 )
    {
      NtClose(*TokenHandle);
      *TokenHandle = 0LL;
      return v4;
    }
    return 0;
  }
  return result;
}
