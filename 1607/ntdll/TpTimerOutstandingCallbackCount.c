/*
 * XREFs of TpTimerOutstandingCallbackCount @ 0x1800647E0
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x1800640D0 (RtlDeleteTimerQueueEx.c)
 *     RtlDeleteTimer @ 0x180064690 (RtlDeleteTimer.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TppTimerpValidateTimer @ 0x18003C1C8 (TppTimerpValidateTimer.c)
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
  v5 = (volatile signed __int64 *)(a1 + 240);
  RtlAcquireSRWLockExclusive(a1 + 240, v2, v3, v4);
  v6 = *(_DWORD *)(a1 + 56);
  RtlReleaseSRWLockExclusive(v5);
  return v6;
}
