/*
 * XREFs of TpReleaseTimer @ 0x18003ED60
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x18007AA50 (RtlDeleteTimerQueueEx.c)
 *     RtlpInitializeWnf @ 0x18007AED0 (RtlpInitializeWnf.c)
 *     RtlDeleteTimer @ 0x18007C6E0 (RtlDeleteTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     TppCancelTimer @ 0x18003CF70 (TppCancelTimer.c)
 *     TppTimerpValidateTimer @ 0x18003D1F8 (TppTimerpValidateTimer.c)
 *     TppCleanupGroupMemberRelease @ 0x18003D61C (TppCleanupGroupMemberRelease.c)
 *     TppTimerpFree @ 0x18003ED20 (TppTimerpFree.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

char __fastcall TpReleaseTimer(unsigned __int64 a1)
{
  int v2; // edi
  signed __int32 v3; // eax
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 (__fastcall *v8)(unsigned __int64); // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  v3 = TppTimerpValidateTimer((_PEB_LDR_DATA *)a1, 1LL, 0LL);
  if ( v3 )
  {
    LOBYTE(v3) = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( v3 )
    {
      *(_QWORD *)(a1 + 176) = retaddr;
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 232), v4, v5, v6);
      ++*(_BYTE *)(a1 + 347);
      if ( TppCancelTimer(a1, (volatile signed __int64 *)(*(_QWORD *)(a1 + 136) + 112LL), 0LL, v7) )
        v2 = 2;
      v3 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, -v2);
      if ( v3 == v2 )
      {
        v8 = **(__int64 (__fastcall ***)(unsigned __int64))(a1 + 8);
        if ( v8 == TppTimerpFree )
          LOBYTE(v3) = TppTimerpFree(a1);
        else
          LOBYTE(v3) = v8(a1);
      }
    }
  }
  return v3;
}
