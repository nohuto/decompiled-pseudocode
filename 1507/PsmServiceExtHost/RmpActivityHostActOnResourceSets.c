/*
 * XREFs of RmpActivityHostActOnResourceSets @ 0x18003B704
 * Callers:
 *     RmpActivityHostOnAppliedResourceSetChange @ 0x18003BD54 (RmpActivityHostOnAppliedResourceSetChange.c)
 *     RmpActivityHostRevokeAllResourceSets @ 0x18003BED8 (RmpActivityHostRevokeAllResourceSets.c)
 * Callees:
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18000AD70 (RmpActivityHostEnumerateResourceSetBegin.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000D7F0 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
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
