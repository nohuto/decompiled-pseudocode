/*
 * XREFs of TpWaitForTimer @ 0x18000A720
 * Callers:
 *     RtlDeleteTimer @ 0x180007F40 (RtlDeleteTimer.c)
 * Callees:
 *     TppWorkWait @ 0x18000A800 (TppWorkWait.c)
 *     TppCancelTimer @ 0x18000B028 (TppCancelTimer.c)
 *     TppTimerpValidateTimer @ 0x18000B2BC (TppTimerpValidateTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

void __cdecl TpWaitForTimer(PTP_TIMER Timer, LOGICAL CancelPendingCallbacks)
{
  char v4; // bp
  char v5; // bl
  __int64 v6; // r8

  if ( (unsigned int)TppTimerpValidateTimer(Timer, 0LL, 0LL) )
  {
    v4 = 0;
    v5 = 0;
    if ( CancelPendingCallbacks )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 29);
      ++*((_BYTE *)Timer + 347);
      LOBYTE(v6) = 1;
      v4 = TppCancelTimer(Timer, *((_QWORD *)Timer + 17) + 112LL, v6);
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
