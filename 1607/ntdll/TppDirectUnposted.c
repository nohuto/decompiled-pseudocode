/*
 * XREFs of TppDirectUnposted @ 0x1800FE230
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     TppFreeDirectParams @ 0x180082F18 (TppFreeDirectParams.c)
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
