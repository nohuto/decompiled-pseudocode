/*
 * XREFs of RmpActivityHostActOnResourceSets @ 0x180040ADC
 * Callers:
 *     RmpActivityHostOnAppliedResourceSetChange @ 0x180041048 (RmpActivityHostOnAppliedResourceSetChange.c)
 *     RmpActivityHostRevokeAllResourceSets @ 0x18004124C (RmpActivityHostRevokeAllResourceSets.c)
 * Callees:
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000B200 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18001D78C (RmpActivityHostEnumerateResourceSetBegin.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmpActivityHostActOnResourceSets(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 (__fastcall *a4)(__int64, __int64, __int64),
        __int64 a5)
{
  __int64 result; // rax
  __int64 Next; // rax
  __int64 v10[4]; // [rsp+20h] [rbp-48h] BYREF

  RmpActivityHostEnumerateResourceSetBegin(a1, 1, v10);
  while ( 1 )
  {
    Next = RmpActivityHostEnumerateResourceSetGetNext(v10);
    if ( !Next )
      break;
    result = a4(a1, Next, a5);
    if ( (int)result < 0 && (a3 & 1) == 0 )
      return result;
  }
  return 0LL;
}
