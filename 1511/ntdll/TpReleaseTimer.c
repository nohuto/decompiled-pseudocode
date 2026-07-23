/*
 * XREFs of TpReleaseTimer @ 0x18000A4C0
 * Callers:
 *     RtlDeleteTimer @ 0x180007F40 (RtlDeleteTimer.c)
 *     RtlpInitializeWnf @ 0x1800513D0 (RtlpInitializeWnf.c)
 *     RtlDeleteTimerQueueEx @ 0x180081E30 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     TppTimerpFree @ 0x18000A570 (TppTimerpFree.c)
 *     TppCancelTimer @ 0x18000B028 (TppCancelTimer.c)
 *     TppTimerpValidateTimer @ 0x18000B2BC (TppTimerpValidateTimer.c)
 *     TppCleanupGroupMemberRelease @ 0x18000B990 (TppCleanupGroupMemberRelease.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

void __cdecl TpReleaseTimer(PTP_TIMER Timer)
{
  int v2; // edi
  void (__fastcall *v3)(PTP_TIMER); // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  if ( (unsigned int)TppTimerpValidateTimer(Timer, 1LL, 0LL) && (unsigned int)TppCleanupGroupMemberRelease(Timer, 1LL) )
  {
    *((_QWORD *)Timer + 22) = retaddr;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 29);
    ++*((_BYTE *)Timer + 347);
    if ( (unsigned __int8)TppCancelTimer(Timer, *((_QWORD *)Timer + 17) + 112LL, 0LL) )
      v2 = 2;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, -v2) == v2 )
    {
      v3 = (void (__fastcall *)(PTP_TIMER))**((_QWORD **)Timer + 1);
      if ( (char *)v3 == (char *)TppTimerpFree )
        TppTimerpFree(Timer);
      else
        v3(Timer);
    }
  }
}
