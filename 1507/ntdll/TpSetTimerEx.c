/*
 * XREFs of TpSetTimerEx @ 0x18003CE70
 * Callers:
 *     TpSetTimer @ 0x18003CE60 (TpSetTimer.c)
 *     RtlUpdateTimer @ 0x18007ACF0 (RtlUpdateTimer.c)
 *     RtlDeleteTimer @ 0x18007C6E0 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x18007C830 (RtlCreateTimer.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800C8B68 (RtlpWnfCalculateAndSetNextTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TpIsTimerSet @ 0x18003CE20 (TpIsTimerSet.c)
 *     TppCancelTimer @ 0x18003CF70 (TppCancelTimer.c)
 *     TppTimerpValidateTimer @ 0x18003D1F8 (TppTimerpValidateTimer.c)
 *     TppSetTimer @ 0x18003D288 (TppSetTimer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

NTSTATUS __cdecl TpSetTimerEx(PTP_TIMER Timer, PLARGE_INTEGER DueTime, ULONG Period, ULONG WindowLength)
{
  __int64 v8; // r14
  bool v9; // bl
  __int64 v10; // r8
  unsigned __int8 v11; // si

  if ( (unsigned int)TppTimerpValidateTimer(Timer, 0LL, DueTime != 0LL) )
  {
    v8 = *((_QWORD *)Timer + 17);
    v9 = DueTime != 0LL;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 29);
    LOBYTE(v10) = DueTime != 0LL;
    v11 = TppCancelTimer(Timer, v8 + 112, v10);
    if ( DueTime && *((_BYTE *)Timer + 347) )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 29);
      v9 = 0;
    }
    if ( !v11 )
    {
      if ( !v9 )
        return v11;
      if ( TpIsTimerSet(Timer) )
      {
LABEL_8:
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 29);
        return v11;
      }
      _InterlockedIncrement((volatile signed __int32 *)Timer);
    }
    if ( !v9 )
    {
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, 0xFFFFFFFF) == 1 )
          (**((void (__fastcall ***)(PTP_TIMER))Timer + 1))(Timer);
      }
      return v11;
    }
    TppSetTimer(Timer, v8 + 112, DueTime, Period, WindowLength);
    goto LABEL_8;
  }
  return 0;
}
