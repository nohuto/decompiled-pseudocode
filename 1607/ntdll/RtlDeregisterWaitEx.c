/*
 * XREFs of RtlDeregisterWaitEx @ 0x180064420
 * Callers:
 *     RtlDeregisterWait @ 0x180064230 (RtlDeregisterWait.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpTpResumeImpersonation @ 0x18003A000 (RtlpTpResumeImpersonation.c)
 *     TpSetWaitEx @ 0x18003BD50 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x180064580 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x180064638 (TpWaitOutstandingCallbackCount.c)
 *     RtlpTpRevertCapture @ 0x180064D68 (RtlpTpRevertCapture.c)
 *     RtlpTpWaitRundown @ 0x180064EE0 (RtlpTpWaitRundown.c)
 *     TpWaitForWait @ 0x180064F30 (TpWaitForWait.c)
 */

NTSTATUS __cdecl RtlDeregisterWaitEx(HANDLE WaitHandle, HANDLE CompletionEvent)
{
  NTSTATUS v4; // edi
  int v5; // ecx
  HANDLE TokenHandle; // [rsp+28h] [rbp-30h] BYREF
  struct _TEB *v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+70h] [rbp+18h]
  int v10; // [rsp+78h] [rbp+20h]

  TokenHandle = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0;
  if ( !WaitHandle )
    return -1073741585;
  v4 = RtlpTpRevertCapture(&TokenHandle);
  if ( v4 >= 0 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)WaitHandle + 2);
    *((_DWORD *)WaitHandle + 2) |= 8u;
    TpSetWaitEx(*((PTP_WAIT *)WaitHandle + 6), 0LL, 0LL, 0LL);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)WaitHandle + 2);
    v5 = 1;
    _InterlockedOr((volatile signed __int32 *)WaitHandle + 6, 1u);
    if ( (*((_BYTE *)WaitHandle + 8) & 4) == 0
      || (v8 = NtCurrentTeb(), *((_DWORD *)WaitHandle + 22) != LODWORD(v8->ClientId.UniqueThread)) )
    {
      v5 = 0;
    }
    v10 = v5;
    if ( CompletionEvent == (HANDLE)-1LL )
    {
      if ( !v5 )
        TpWaitForWait(*((PTP_WAIT *)WaitHandle + 6), 0);
    }
    else if ( CompletionEvent )
    {
      *((_QWORD *)WaitHandle + 10) = CompletionEvent;
    }
    v9 = TpWaitOutstandingCallbackCount(*((_QWORD *)WaitHandle + 6));
    TpReleaseWait(*((PTP_WAIT *)WaitHandle + 6));
    _m_prefetchw((char *)WaitHandle + 24);
    if ( (_InterlockedAnd((volatile signed __int32 *)WaitHandle + 6, 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpWaitRundown(WaitHandle);
      v9 = 0;
    }
    if ( v9 )
      v4 = v10 == 0 ? 0x103 : 0;
    else
      v4 = 0;
  }
  RtlpTpResumeImpersonation(TokenHandle);
  return v4;
}
