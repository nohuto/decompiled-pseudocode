/*
 * XREFs of TppDirectUnposted @ 0x1800F5840
 * Callers:
 *     <none>
 * Callees:
 *     TppFreeDirectParams @ 0x18000AFFC (TppFreeDirectParams.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall TppDirectUnposted(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rsi
  __int64 **v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rax
  signed __int64 result; // rax

  v4 = (volatile signed __int64 *)(a1 + 32);
  v5 = (__int64 **)(a1 + 40);
  while ( 1 )
  {
    RtlAcquireSRWLockExclusive(v4, a2, a3, a4);
    if ( *v5 == (__int64 *)v5 )
    {
      v6 = 0LL;
    }
    else
    {
      v6 = *v5;
      v7 = **v5;
      if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
        __fastfail(3u);
      *v5 = (__int64 *)v7;
      *(_QWORD *)(v7 + 8) = v5;
    }
    result = RtlReleaseSRWLockExclusive(v4);
    if ( !v6 )
      break;
    TppFreeDirectParams((__int64)(v6 - 4));
  }
  return result;
}
