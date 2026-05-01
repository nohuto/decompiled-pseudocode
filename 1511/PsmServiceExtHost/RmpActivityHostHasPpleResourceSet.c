/*
 * XREFs of RmpActivityHostHasPpleResourceSet @ 0x180040F68
 * Callers:
 *     RmpPolicyFilterActivityHostWithFlags @ 0x18001EFB0 (RmpPolicyFilterActivityHostWithFlags.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180042900 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000B200 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18001D78C (RmpActivityHostEnumerateResourceSetBegin.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
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
    if ( (*(_DWORD *)(Next + 1764) & 0x20000) != 0 )
    {
      LOBYTE(Next) = 1;
      return Next;
    }
  }
  return Next;
}
