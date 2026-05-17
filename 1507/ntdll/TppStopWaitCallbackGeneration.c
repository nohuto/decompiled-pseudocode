/*
 * XREFs of TppStopWaitCallbackGeneration @ 0x18007DFD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x18003C930 (TppCancelWait.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

signed __int64 __fastcall TppStopWaitCallbackGeneration(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  volatile signed __int64 *v5; // rsi
  int v7; // ebx
  signed __int64 result; // rax
  int v9; // ecx
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 136);
  v5 = (volatile signed __int64 *)(a1 + 232);
  v7 = (int)a2;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 232), a2, a3, a4);
  TppCancelWait(a1, v4 + 112, v7 != 0 ? 2 : 0, &v10);
  ++*(_BYTE *)(a1 + 347);
  result = RtlReleaseSRWLockExclusive(v5);
  if ( v10 < 0 )
  {
    v9 = -v10;
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, v10);
    if ( (_DWORD)result == v9 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
