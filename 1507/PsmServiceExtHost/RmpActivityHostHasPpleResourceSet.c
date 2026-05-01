/*
 * XREFs of RmpActivityHostHasPpleResourceSet @ 0x18003BCDC
 * Callers:
 *     RmpPolicyFilterActivityHostWithFlags @ 0x180006210 (RmpPolicyFilterActivityHostWithFlags.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18003D298 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18000AD70 (RmpActivityHostEnumerateResourceSetBegin.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000D7F0 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

char __fastcall RmpActivityHostHasPpleResourceSet(__int64 a1)
{
  __int64 Next; // rax
  __int64 v3[4]; // [rsp+20h] [rbp-38h] BYREF

  RmpActivityHostEnumerateResourceSetBegin(a1, 1, v3);
  while ( 1 )
  {
    Next = RmpActivityHostEnumerateResourceSetGetNext(v3);
    if ( !Next )
      break;
    if ( (*(_DWORD *)(Next + 1756) & 0x20000) != 0 )
    {
      LOBYTE(Next) = 1;
      return Next;
    }
  }
  return Next;
}
