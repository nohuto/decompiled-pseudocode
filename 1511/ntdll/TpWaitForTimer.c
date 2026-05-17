/*
 * XREFs of TpWaitForTimer @ 0x18000A720
 * Callers:
 *     RtlDeleteTimer @ 0x180007F40 (RtlDeleteTimer.c)
 * Callees:
 *     TppWorkWait @ 0x18000A800 (TppWorkWait.c)
 *     TppCancelTimer @ 0x18000B028 (TppCancelTimer.c)
 *     TppTimerpValidateTimer @ 0x18000B2BC (TppTimerpValidateTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall TpWaitForTimer(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  char v5; // bp
  char v6; // bl
  __int64 v7; // r8

  result = TppTimerpValidateTimer(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v5 = 0;
    v6 = 0;
    if ( a2 )
    {
      RtlAcquireSRWLockExclusive(a1 + 232);
      ++*(_BYTE *)(a1 + 347);
      LOBYTE(v7) = 1;
      v5 = TppCancelTimer(a1, *(_QWORD *)(a1 + 136) + 112LL, v7);
      if ( *(_DWORD *)(a1 + 56) )
        v6 = 1;
      else
        --*(_BYTE *)(a1 + 347);
      RtlReleaseSRWLockExclusive(a1 + 232);
    }
    result = TppWorkWait(a1, a2);
    if ( v6 )
    {
      RtlAcquireSRWLockExclusive(a1 + 232);
      --*(_BYTE *)(a1 + 347);
      result = RtlReleaseSRWLockExclusive(a1 + 232);
    }
    if ( v5 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
