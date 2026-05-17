/*
 * XREFs of TppStopWaitCallbackGeneration @ 0x180003F20
 * Callers:
 *     <none>
 * Callees:
 *     TppCancelWait @ 0x18000AA60 (TppCancelWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall TppStopWaitCallbackGeneration(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax
  unsigned int v7; // ecx
  signed int v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  v3 = a1 + 232;
  RtlAcquireSRWLockExclusive(a1 + 232);
  TppCancelWait(a1, v2 + 112, a2 != 0 ? 2 : 0, &v8);
  ++*(_BYTE *)(a1 + 347);
  result = RtlReleaseSRWLockExclusive(v3);
  if ( v8 < 0 )
  {
    v7 = -v8;
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, v8);
    if ( (_DWORD)result == v7 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
