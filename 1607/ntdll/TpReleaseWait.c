/*
 * XREFs of TpReleaseWait @ 0x180064590
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180064430 (RtlDeregisterWaitEx.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180081530 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfRegisterTpNotification @ 0x180082A94 (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TppCleanupGroupMemberRelease @ 0x18003B9D0 (TppCleanupGroupMemberRelease.c)
 *     TppCancelWait @ 0x18003BE78 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x18003BF98 (TppWaitpValidateWait.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
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
      v6 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 184) = retaddr;
      RtlAcquireSRWLockExclusive(a1 + 240, v3, v4, v5);
      TppCancelWait(a1, v6 + 112, 2, &v10);
      ++*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      v7 = 1 - v10;
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, v10 - 1);
      if ( v2 == v7 )
        LOBYTE(v2) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return v2;
}
