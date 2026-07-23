/*
 * XREFs of TpWaitForTimer @ 0x18007D560
 * Callers:
 *     RtlDeleteTimer @ 0x18007C6E0 (RtlDeleteTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelTimer @ 0x18003CF70 (TppCancelTimer.c)
 *     TppTimerpValidateTimer @ 0x18003D1F8 (TppTimerpValidateTimer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     TppWorkWait @ 0x18007D640 (TppWorkWait.c)
 */

void __cdecl TpWaitForTimer(PTP_TIMER Timer, LOGICAL CancelPendingCallbacks)
{
  char v4; // bp
  char v5; // bl

  if ( (unsigned int)TppTimerpValidateTimer((_PEB_LDR_DATA *)Timer, 0LL, 0LL) )
  {
    v4 = 0;
    v5 = 0;
    if ( CancelPendingCallbacks )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 29);
      ++*((_BYTE *)Timer + 347);
      v4 = TppCancelTimer((__int64)Timer, (_RTL_SRWLOCK *)(*((_QWORD *)Timer + 17) + 112LL), 1);
      if ( *((_DWORD *)Timer + 14) )
        v5 = 1;
      else
        --*((_BYTE *)Timer + 347);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 29);
    }
    TppWorkWait(Timer, CancelPendingCallbacks);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 29);
      --*((_BYTE *)Timer + 347);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 29);
    }
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(PTP_TIMER))Timer + 1))(Timer);
    }
  }
}
