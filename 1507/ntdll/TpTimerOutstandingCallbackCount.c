/*
 * XREFs of TpTimerOutstandingCallbackCount @ 0x18007CBD0
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x18007AA50 (RtlDeleteTimerQueueEx.c)
 *     RtlDeleteTimer @ 0x18007C6E0 (RtlDeleteTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppTimerpValidateTimer @ 0x18003D1F8 (TppTimerpValidateTimer.c)
 */

__int64 __fastcall TpTimerOutstandingCallbackCount(__int64 a1)
{
  char *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  volatile signed __int64 *v5; // rdi
  unsigned int v6; // ebx

  if ( !(unsigned int)TppTimerpValidateTimer((_PEB_LDR_DATA *)a1, 0LL, 0LL) )
    return 0LL;
  v5 = (volatile signed __int64 *)(a1 + 232);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 232), v2, v3, v4);
  v6 = *(_DWORD *)(a1 + 56);
  RtlReleaseSRWLockExclusive(v5);
  return v6;
}
