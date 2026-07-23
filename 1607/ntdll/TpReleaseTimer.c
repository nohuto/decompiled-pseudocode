/*
 * XREFs of TpReleaseTimer @ 0x18003A480
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x1800640C0 (RtlDeleteTimerQueueEx.c)
 *     RtlDeleteTimer @ 0x180064680 (RtlDeleteTimer.c)
 *     RtlpInitializeWnf @ 0x1800829B0 (RtlpInitializeWnf.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     TppTimerpFree @ 0x18003A530 (TppTimerpFree.c)
 *     TppCleanupGroupMemberRelease @ 0x18003B9C0 (TppCleanupGroupMemberRelease.c)
 *     TppTimerpValidateTimer @ 0x18003C1B8 (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x18003C258 (TppCancelTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseTimer(PTP_TIMER Timer)
{
  int v2; // edi
  void (__fastcall *v3)(PTP_TIMER); // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  if ( (unsigned int)TppTimerpValidateTimer(Timer, 1LL) && (unsigned int)TppCleanupGroupMemberRelease(Timer, 1LL) )
  {
    *((_QWORD *)Timer + 23) = retaddr;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    ++*((_BYTE *)Timer + 355);
    if ( (unsigned __int8)TppCancelTimer(Timer, *((_QWORD *)Timer + 18) + 112LL, 0LL) )
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
