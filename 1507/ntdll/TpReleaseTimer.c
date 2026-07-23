/*
 * XREFs of TpReleaseTimer @ 0x18003ED60
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x18007AA50 (RtlDeleteTimerQueueEx.c)
 *     RtlpInitializeWnf @ 0x18007AED0 (RtlpInitializeWnf.c)
 *     RtlDeleteTimer @ 0x18007C6E0 (RtlDeleteTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     TppCancelTimer @ 0x18003CF70 (TppCancelTimer.c)
 *     TppTimerpValidateTimer @ 0x18003D1F8 (TppTimerpValidateTimer.c)
 *     TppCleanupGroupMemberRelease @ 0x18003D61C (TppCleanupGroupMemberRelease.c)
 *     TppTimerpFree @ 0x18003ED20 (TppTimerpFree.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

void __cdecl TpReleaseTimer(PTP_TIMER Timer)
{
  int v2; // edi
  int v3; // eax
  LOGICAL (__fastcall *v4)(void *); // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  if ( (unsigned int)TppTimerpValidateTimer((_PEB_LDR_DATA *)Timer, 1LL, 0LL) )
  {
    LOBYTE(v3) = TppCleanupGroupMemberRelease((__int64)Timer, 1LL);
    if ( v3 )
    {
      *((_QWORD *)Timer + 22) = retaddr;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 29);
      ++*((_BYTE *)Timer + 347);
      if ( TppCancelTimer((__int64)Timer, (_RTL_SRWLOCK *)(*((_QWORD *)Timer + 17) + 112LL), 0) )
        v2 = 2;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, -v2) == v2 )
      {
        v4 = (LOGICAL (__fastcall *)(void *))**((_QWORD **)Timer + 1);
        if ( v4 == TppTimerpFree )
          TppTimerpFree(Timer);
        else
          v4(Timer);
      }
    }
  }
}
