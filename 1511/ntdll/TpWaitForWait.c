/*
 * XREFs of TpWaitForWait @ 0x180004C20
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180006DF0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     TppWorkWait @ 0x18000A800 (TppWorkWait.c)
 *     TppCancelWait @ 0x18000AA60 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x18000AC08 (TppWaitpValidateWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall TpWaitForWait(__int64 a1, unsigned int a2)
{
  int v3; // esi
  char v5; // r14
  __int64 result; // rax
  __int64 v7; // rbx
  int v8; // esi
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v9 = 0;
  v5 = 0;
  result = TppWaitpValidateWait(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    if ( a2 )
    {
      v7 = *(_QWORD *)(a1 + 136);
      RtlAcquireSRWLockExclusive(a1 + 232);
      ++*(_BYTE *)(a1 + 347);
      TppCancelWait(a1, v7 + 112, 2LL, &v9);
      if ( *(_DWORD *)(a1 + 56) )
        v5 = 1;
      else
        --*(_BYTE *)(a1 + 347);
      RtlReleaseSRWLockExclusive(a1 + 232);
      v3 = v9;
    }
    result = TppWorkWait(a1, a2);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive(a1 + 232);
      --*(_BYTE *)(a1 + 347);
      result = RtlReleaseSRWLockExclusive(a1 + 232);
    }
    if ( v3 )
    {
      v8 = -v3;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, -v8);
      if ( (_DWORD)result == v8 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
