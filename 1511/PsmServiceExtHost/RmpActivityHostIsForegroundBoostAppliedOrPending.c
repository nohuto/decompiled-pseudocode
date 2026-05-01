/*
 * XREFs of RmpActivityHostIsForegroundBoostAppliedOrPending @ 0x180004AD0
 * Callers:
 *     RmpEnforcementUnoptimizeHost @ 0x1800046F8 (RmpEnforcementUnoptimizeHost.c)
 * Callees:
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000B200 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18001D78C (RmpActivityHostEnumerateResourceSetBegin.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostIsForegroundBoostAppliedOrPending(__int64 a1)
{
  unsigned int v1; // r10d
  __int64 Next; // rax
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF

  v1 = (*(unsigned __int8 *)(a1 + 700) >> 3) & 1;
  if ( !v1 )
  {
    RmpActivityHostEnumerateResourceSetBegin(a1, 0LL, v4);
    Next = RmpActivityHostEnumerateResourceSetGetNext(v4);
    v1 = 0;
    while ( Next )
    {
      if ( (*(_DWORD *)(Next + 1436) & 3u) >= 2 || (*(_BYTE *)(Next + 1428) & 0x40) != 0 )
        return 1;
      Next = RmpActivityHostEnumerateResourceSetGetNext(v4);
    }
  }
  return v1;
}
