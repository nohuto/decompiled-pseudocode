/*
 * XREFs of TppDirectExecuteCallback @ 0x18000AF10
 * Callers:
 *     <none>
 * Callees:
 *     TppFreeDirectParams @ 0x18000AFFC (TppFreeDirectParams.c)
 *     TpPostTask @ 0x180027C78 (TpPostTask.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall TppDirectExecuteCallback(_QWORD *a1, __int64 a2)
{
  __int64 **v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rdx
  bool v7; // bl
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-28h]
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  RtlAcquireSRWLockExclusive(a2 + 32);
  v4 = (__int64 **)(a2 + 40);
  if ( *v4 == (__int64 *)v4 )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = *v4;
    v6 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v4 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v4;
  }
  v7 = *v4 != (__int64 *)v4;
  result = RtlReleaseSRWLockExclusive(a2 + 32);
  if ( v7 )
    result = TpPostTask(a2, a1[16], 1LL);
  if ( v5 )
  {
    v9 = *((_OWORD *)v5 - 2);
    v10 = *((_OWORD *)v5 - 1);
    TppFreeDirectParams(v5 - 4);
    a1[11] = *(_QWORD *)(a2 + 56);
    a1[12] = a2;
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int128 *))(a2 + 56))(
             a1,
             a2,
             *((_QWORD *)&v9 + 1),
             &v10);
  }
  return result;
}
