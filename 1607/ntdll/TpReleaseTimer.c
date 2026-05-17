/*
 * XREFs of TpReleaseTimer @ 0x18003A490
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x1800640D0 (RtlDeleteTimerQueueEx.c)
 *     RtlDeleteTimer @ 0x180064690 (RtlDeleteTimer.c)
 *     RtlpInitializeWnf @ 0x1800829C0 (RtlpInitializeWnf.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TppTimerpFree @ 0x18003A540 (TppTimerpFree.c)
 *     TppCleanupGroupMemberRelease @ 0x18003B9D0 (TppCleanupGroupMemberRelease.c)
 *     TppTimerpValidateTimer @ 0x18003C1C8 (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x18003C268 (TppCancelTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpReleaseTimer(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 (__fastcall *v7)(__int64); // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  result = TppTimerpValidateTimer(a1, 1LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      RtlAcquireSRWLockExclusive(a1 + 240, v4, v5, v6);
      ++*(_BYTE *)(a1 + 355);
      if ( (unsigned __int8)TppCancelTimer(a1, *(_QWORD *)(a1 + 144) + 112LL, 0LL) )
        v2 = 2;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, -v2);
      if ( (_DWORD)result == v2 )
      {
        v7 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
        if ( v7 == TppTimerpFree )
          return TppTimerpFree(a1);
        else
          return v7(a1);
      }
    }
  }
  return result;
}
