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

char __fastcall TpReleaseWait(__int64 a1)
{
  signed __int32 v2; // eax
  char *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  int v7; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = TppWaitpValidateWait(a1, 1LL, 0LL);
  if ( v2 )
  {
    LOBYTE(v2) = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( v2 )
    {
      v6 = *(_QWORD *)(a1 + 136);
      *(_QWORD *)(a1 + 176) = retaddr;
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 232), v3, v4, v5);
      TppCancelWait(a1, v6 + 112, 2, &v10);
      ++*(_BYTE *)(a1 + 347);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 232));
      v7 = 1 - v10;
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, v10 - 1);
      if ( v2 == v7 )
        LOBYTE(v2) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return v2;
}
