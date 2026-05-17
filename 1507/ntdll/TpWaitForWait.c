/*
 * XREFs of TpWaitForWait @ 0x18007D430
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18007B7E0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x18003C930 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x18003CDCC (TppWaitpValidateWait.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     TppWorkWait @ 0x18007D640 (TppWorkWait.c)
 */

__int64 __fastcall TpWaitForWait(__int64 a1, unsigned int a2)
{
  int v3; // esi
  char v5; // r14
  __int64 result; // rax
  char *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  int v14; // esi
  int v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v15 = 0;
  v5 = 0;
  result = TppWaitpValidateWait(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    if ( a2 )
    {
      v13 = *(_QWORD *)(a1 + 136);
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 232), v7, v8, v9);
      ++*(_BYTE *)(a1 + 347);
      TppCancelWait(a1, v13 + 112, 2, &v15);
      if ( *(_DWORD *)(a1 + 56) )
        v5 = 1;
      else
        --*(_BYTE *)(a1 + 347);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 232));
      v3 = v15;
    }
    result = TppWorkWait(a1, a2);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 232), v10, v11, v12);
      --*(_BYTE *)(a1 + 347);
      result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 232));
    }
    if ( v3 )
    {
      v14 = -v3;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, -v14);
      if ( (_DWORD)result == v14 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
