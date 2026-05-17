/*
 * XREFs of TpTimerOutstandingCallbackCount @ 0x1800080F0
 * Callers:
 *     RtlDeleteTimer @ 0x180007F40 (RtlDeleteTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x180081E30 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     TppTimerpValidateTimer @ 0x18000B2BC (TppTimerpValidateTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall TpTimerOutstandingCallbackCount(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx

  if ( !(unsigned int)TppTimerpValidateTimer(a1, 0LL, 0LL) )
    return 0LL;
  v2 = a1 + 232;
  RtlAcquireSRWLockExclusive(a1 + 232);
  v3 = *(_DWORD *)(a1 + 56);
  RtlReleaseSRWLockExclusive(v2);
  return v3;
}
