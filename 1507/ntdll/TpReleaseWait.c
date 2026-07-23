/*
 * XREFs of TpReleaseWait @ 0x18007D2D0
 * Callers:
 *     RtlpWnfRegisterTpNotification @ 0x18007AFA4 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007B4F0 (EtwpRegisterTpNotificationOnce.c)
 *     RtlDeregisterWaitEx @ 0x18007B7E0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x18003C930 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x18003CDCC (TppWaitpValidateWait.c)
 *     TppCleanupGroupMemberRelease @ 0x18003D61C (TppCleanupGroupMemberRelease.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

void __cdecl TpReleaseWait(PTP_WAIT Wait)
{
  int v2; // eax
  __int64 v3; // rbx
  int v4; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)TppWaitpValidateWait((__int64)Wait, 1LL, 0LL) )
  {
    LOBYTE(v2) = TppCleanupGroupMemberRelease((__int64)Wait, 1LL);
    if ( v2 )
    {
      v3 = *((_QWORD *)Wait + 17);
      *((_QWORD *)Wait + 22) = retaddr;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 29);
      TppCancelWait((__int64)Wait, v3 + 112, 2, &v6);
      ++*((_BYTE *)Wait + 347);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 29);
      v4 = 1 - v6;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v6 - 1) == v4 )
        (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
    }
  }
}
