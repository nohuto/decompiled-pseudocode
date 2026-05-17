/*
 * XREFs of TpReleaseTimer @ 0x18000A4C0
 * Callers:
 *     RtlDeleteTimer @ 0x180007F40 (RtlDeleteTimer.c)
 *     RtlpInitializeWnf @ 0x1800513D0 (RtlpInitializeWnf.c)
 *     RtlDeleteTimerQueueEx @ 0x180081E30 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     TppTimerpFree @ 0x18000A570 (TppTimerpFree.c)
 *     TppCancelTimer @ 0x18000B028 (TppCancelTimer.c)
 *     TppTimerpValidateTimer @ 0x18000B2BC (TppTimerpValidateTimer.c)
 *     TppCleanupGroupMemberRelease @ 0x18000B990 (TppCleanupGroupMemberRelease.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall TpReleaseTimer(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  __int64 (__fastcall *v4)(__int64); // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  result = TppTimerpValidateTimer(a1, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 176) = retaddr;
      RtlAcquireSRWLockExclusive(a1 + 232);
      ++*(_BYTE *)(a1 + 347);
      if ( (unsigned __int8)TppCancelTimer(a1, *(_QWORD *)(a1 + 136) + 112LL, 0LL) )
        v2 = 2;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, -v2);
      if ( (_DWORD)result == v2 )
      {
        v4 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
        if ( v4 == TppTimerpFree )
          return TppTimerpFree(a1);
        else
          return v4(a1);
      }
    }
  }
  return result;
}
