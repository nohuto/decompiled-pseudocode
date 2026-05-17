/*
 * XREFs of TppDirectExecuteCallback @ 0x180082E40
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TpPostTask @ 0x18003D028 (TpPostTask.c)
 *     TppFreeDirectParams @ 0x180082F28 (TppFreeDirectParams.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

signed __int64 __fastcall TppDirectExecuteCallback(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 **v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // rdx
  bool v9; // bl
  signed __int64 result; // rax
  __int128 v11; // [rsp+30h] [rbp-28h]
  __int128 v12; // [rsp+40h] [rbp-18h] BYREF

  RtlAcquireSRWLockExclusive(a2 + 32, (char *)a2, a3, a4);
  v6 = (__int64 **)(a2 + 40);
  if ( *v6 == (__int64 *)v6 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = *v6;
    v8 = **v6;
    if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v8 + 8) != v7 )
      __fastfail(3u);
    *v6 = (__int64 *)v8;
    *(_QWORD *)(v8 + 8) = v6;
  }
  v9 = *v6 != (__int64 *)v6;
  result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 32));
  if ( v9 )
    result = TpPostTask(a2, a1[16], 1LL, 0LL);
  if ( v7 )
  {
    v11 = *((_OWORD *)v7 - 2);
    v12 = *((_OWORD *)v7 - 1);
    TppFreeDirectParams();
    a1[11] = *(_QWORD *)(a2 + 56);
    a1[12] = a2;
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int128 *))(a2 + 56))(
             a1,
             a2,
             *((_QWORD *)&v11 + 1),
             &v12);
  }
  return result;
}
