/*
 * XREFs of TpWaitForTimer @ 0x18003B8E0
 * Callers:
 *     RtlDeleteTimer @ 0x180064680 (RtlDeleteTimer.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     TppWorkWait @ 0x18003B868 (TppWorkWait.c)
 *     TppTimerpValidateTimer @ 0x18003C1B8 (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x18003C258 (TppCancelTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpWaitForTimer(PTP_TIMER Timer, LOGICAL CancelPendingCallbacks)
{
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // bp
  char v7; // bl
  __int64 v8; // r8

  if ( (unsigned int)TppTimerpValidateTimer(Timer, 0LL) )
  {
    v6 = 0;
    v7 = 0;
    if ( CancelPendingCallbacks )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
      ++*((_BYTE *)Timer + 355);
      LOBYTE(v8) = 1;
      v6 = TppCancelTimer(Timer, *((_QWORD *)Timer + 18) + 112LL, v8);
      if ( *((_DWORD *)Timer + 14) )
        v7 = 1;
      else
        --*((_BYTE *)Timer + 355);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    }
    TppWorkWait(Timer, CancelPendingCallbacks, v4, v5);
    if ( v7 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
      --*((_BYTE *)Timer + 355);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    }
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(PTP_TIMER))Timer + 1))(Timer);
    }
  }
}
