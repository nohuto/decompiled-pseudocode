/*
 * XREFs of TpReleaseWait @ 0x1800078A0
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180006DF0 (RtlDeregisterWaitEx.c)
 *     RtlpWnfRegisterTpNotification @ 0x180051338 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180051D60 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     TppCancelWait @ 0x18000AA60 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x18000AC08 (TppWaitpValidateWait.c)
 *     TppCleanupGroupMemberRelease @ 0x18000B990 (TppCleanupGroupMemberRelease.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

void __cdecl TpReleaseWait(PTP_WAIT Wait)
{
  __int64 v2; // rbx
  int v3; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)TppWaitpValidateWait(Wait, 1LL, 0LL) && (unsigned int)TppCleanupGroupMemberRelease(Wait, 1LL) )
  {
    v2 = *((_QWORD *)Wait + 17);
    *((_QWORD *)Wait + 22) = retaddr;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 29);
    TppCancelWait(Wait, v2 + 112, 2LL, &v5);
    ++*((_BYTE *)Wait + 347);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 29);
    v3 = 1 - v5;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v5 - 1) == v3 )
      (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
  }
}
