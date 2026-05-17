/*
 * XREFs of RtlDeleteTimer @ 0x180007F40
 * Callers:
 *     RtlCancelTimer @ 0x1800F5940 (RtlCancelTimer.c)
 * Callees:
 *     RtlpTpTimerRundown @ 0x180008088 (RtlpTpTimerRundown.c)
 *     TpTimerOutstandingCallbackCount @ 0x1800080F0 (TpTimerOutstandingCallbackCount.c)
 *     RtlpTpRevertCapture @ 0x180008A70 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x180008C60 (RtlpTpResumeImpersonation.c)
 *     TpReleaseTimer @ 0x18000A4C0 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x18000A720 (TpWaitForTimer.c)
 *     TpSetTimerEx @ 0x18000AF20 (TpSetTimerEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlDeleteTimer(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  int v5; // edi
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  int v10; // [rsp+58h] [rbp+20h]

  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  v5 = RtlpTpRevertCapture(&v9, 0LL);
  if ( v5 >= 0 )
  {
    RtlAcquireSRWLockExclusive(*((_QWORD *)a2 + 7) + 8LL);
    v6 = *(__int64 **)a2;
    v7 = (__int64 **)*((_QWORD *)a2 + 1);
    if ( *(volatile signed __int32 **)(*(_QWORD *)a2 + 8LL) != a2 || *v7 != (__int64 *)a2 )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = (__int64)v7;
    RtlReleaseSRWLockExclusive(*((_QWORD *)a2 + 7) + 8LL);
    _InterlockedOr(a2 + 12, 1u);
    TpSetTimerEx(*((_QWORD *)a2 + 8), 0LL, 0LL, 0LL, v5, v9);
    if ( a3 == -1 )
    {
      TpWaitForTimer(*((_QWORD *)a2 + 8), 1LL);
    }
    else if ( a3 )
    {
      *((_QWORD *)a2 + 9) = a3;
    }
    v10 = TpTimerOutstandingCallbackCount(*((_QWORD *)a2 + 8));
    TpReleaseTimer(*((_QWORD *)a2 + 8));
    _m_prefetchw((const void *)(a2 + 12));
    if ( (_InterlockedAnd(a2 + 12, 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpTimerRundown(a2);
      v10 = 0;
    }
    v5 = v10 != 0 ? 0x103 : 0;
  }
  RtlpTpResumeImpersonation(v9);
  return (unsigned int)v5;
}
