/*
 * XREFs of TppDirectUnposted @ 0x1800F5840
 * Callers:
 *     <none>
 * Callees:
 *     TppFreeDirectParams @ 0x18000AFFC (TppFreeDirectParams.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall TppDirectUnposted(__int64 a1)
{
  _RTL_SRWLOCK *v1; // rsi
  __int64 **v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // rax

  v1 = (_RTL_SRWLOCK *)(a1 + 32);
  v2 = (__int64 **)(a1 + 40);
  while ( 1 )
  {
    RtlAcquireSRWLockExclusive(v1);
    if ( *v2 == (__int64 *)v2 )
    {
      v3 = 0LL;
    }
    else
    {
      v3 = *v2;
      v4 = **v2;
      if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
        __fastfail(3u);
      *v2 = (__int64 *)v4;
      *(_QWORD *)(v4 + 8) = v2;
    }
    RtlReleaseSRWLockExclusive(v1);
    if ( !v3 )
      break;
    TppFreeDirectParams((__int64)(v3 - 4));
  }
}
