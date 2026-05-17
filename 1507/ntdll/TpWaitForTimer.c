/*
 * XREFs of TpWaitForTimer @ 0x18007D560
 * Callers:
 *     RtlDeleteTimer @ 0x18007C6E0 (RtlDeleteTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelTimer @ 0x18003CF70 (TppCancelTimer.c)
 *     TppTimerpValidateTimer @ 0x18003D1F8 (TppTimerpValidateTimer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     TppWorkWait @ 0x18007D640 (TppWorkWait.c)
 */

__int64 __fastcall TpWaitForTimer(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  char *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // bp
  char v9; // bl
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  result = TppTimerpValidateTimer((_PEB_LDR_DATA *)a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v8 = 0;
    v9 = 0;
    if ( a2 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 232), v5, v6, v7);
      ++*(_BYTE *)(a1 + 347);
      LOBYTE(v10) = 1;
      v8 = TppCancelTimer(a1, (volatile signed __int64 *)(*(_QWORD *)(a1 + 136) + 112LL), v10, v11);
      if ( *(_DWORD *)(a1 + 56) )
        v9 = 1;
      else
        --*(_BYTE *)(a1 + 347);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 232));
    }
    result = TppWorkWait(a1, a2);
    if ( v9 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 232), v12, v13, v14);
      --*(_BYTE *)(a1 + 347);
      result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 232));
    }
    if ( v8 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
