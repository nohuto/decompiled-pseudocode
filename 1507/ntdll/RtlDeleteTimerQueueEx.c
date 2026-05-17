/*
 * XREFs of RtlDeleteTimerQueueEx @ 0x18007AA50
 * Callers:
 *     RtlDeleteTimerQueue @ 0x1800F5F50 (RtlDeleteTimerQueue.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TpReleaseTimer @ 0x18003ED60 (TpReleaseTimer.c)
 *     RtlpTpResumeImpersonation @ 0x18007CA9C (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x18007CB50 (RtlpTpRevertCapture.c)
 *     TpTimerOutstandingCallbackCount @ 0x18007CBD0 (TpTimerOutstandingCallbackCount.c)
 *     RtlpTpTimerRundown @ 0x18007CC1C (RtlpTpTimerRundown.c)
 *     RtlpTpTimerQueueRundown @ 0x18007D82C (RtlpTpTimerQueueRundown.c)
 *     NtWaitForAlertByThreadId @ 0x180095430 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlDeleteTimerQueueEx(__int64 a1, __int64 a2)
{
  char *v4; // rdx
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  volatile signed __int32 *i; // rsi
  int v10; // [rsp+20h] [rbp-48h]
  volatile signed __int32 *v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0;
  v12 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( a1 )
  {
    v5 = RtlpTpRevertCapture(&v12, 0LL);
    if ( v5 >= 0 )
    {
      if ( a2 )
      {
        if ( a2 == -1 )
          *(_QWORD *)(a1 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
        else
          *(_QWORD *)(a1 + 16) = a2;
      }
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 8), v4, v6, v7);
      for ( i = *(volatile signed __int32 **)(a1 + 24); i != (volatile signed __int32 *)(a1 + 24); i = v11 )
      {
        v11 = *(volatile signed __int32 **)i;
        _InterlockedOr(i + 12, 1u);
        v10 += TpTimerOutstandingCallbackCount(*((_QWORD *)i + 8));
        TpReleaseTimer(*((_QWORD *)i + 8));
        _m_prefetchw((const void *)(i + 12));
        if ( (_InterlockedAnd(i + 12, 0xFFFFFFFE) & 2) != 0 )
          RtlpTpTimerRundown(i);
      }
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
      if ( _InterlockedDecrement((volatile signed __int32 *)a1) )
      {
        if ( a2 != -1 )
        {
          v5 = v10 != 0 ? 0x103 : 0;
          goto LABEL_19;
        }
        NtWaitForAlertByThreadId(a1, 0LL);
      }
      else
      {
        *(_QWORD *)(a1 + 40) = 0LL;
        RtlpTpTimerQueueRundown(a1);
      }
      v5 = 0;
    }
LABEL_19:
    RtlpTpResumeImpersonation(v12);
    return (unsigned int)v5;
  }
  return 3221225711LL;
}
