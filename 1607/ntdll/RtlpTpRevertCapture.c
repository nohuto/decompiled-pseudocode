/*
 * XREFs of RtlpTpRevertCapture @ 0x180064D68
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
 *     NtOpenThreadToken @ 0x1800A68A0 (NtOpenThreadToken.c)
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
