/*
 * XREFs of RtlUpdateTimer @ 0x18007ACF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TpSetTimerEx @ 0x18003CE70 (TpSetTimerEx.c)
 *     RtlpTpResumeImpersonation @ 0x18007CA9C (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x18007CB50 (RtlpTpRevertCapture.c)
 */

NTSTATUS __cdecl RtlUpdateTimer(HANDLE TimerQueueHandle, HANDLE TimerHandle, ULONG DueTime, ULONG Period)
{
  __int64 v5; // r15
  NTSTATUS v7; // edi
  HANDLE v9; // [rsp+20h] [rbp-28h] BYREF
  LARGE_INTEGER DueTimea; // [rsp+28h] [rbp-20h] BYREF

  v5 = DueTime;
  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  if ( !TimerQueueHandle )
    return -1073741585;
  if ( !TimerHandle )
    return -1073741584;
  if ( (*((_DWORD *)TimerHandle + 12) & 1) != 0 )
    return -1073741816;
  v7 = RtlpTpRevertCapture(&v9);
  if ( v7 >= 0 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)TimerHandle + 10);
    if ( *((_BYTE *)TimerHandle + 88) || !*((_DWORD *)TimerHandle + 23) )
    {
      *((_BYTE *)TimerHandle + 88) = Period != 0;
      DueTimea.QuadPart = -10000 * v5;
      TpSetTimerEx(*((PTP_TIMER *)TimerHandle + 8), &DueTimea, Period, 0);
    }
    v7 = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)TimerHandle + 10);
  }
  RtlpTpResumeImpersonation(v9);
  return v7;
}
