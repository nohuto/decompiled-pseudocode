/*
 * XREFs of RmpActivityHostIsKillable @ 0x180040FC4
 * Callers:
 *     RmpPolicyFilterActivityHostWithFlags @ 0x18001EFB0 (RmpPolicyFilterActivityHostWithFlags.c)
 *     ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x1800417C0 (-RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180042900 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     RmpActivityHostStateDigestIsRunnable @ 0x180006744 (RmpActivityHostStateDigestIsRunnable.c)
 *     RmpActivityHostGetStateDigest @ 0x18000AB60 (RmpActivityHostGetStateDigest.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000B200 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18001D78C (RmpActivityHostEnumerateResourceSetBegin.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

bool __fastcall RmpActivityHostIsKillable(__int64 a1)
{
  __int64 Next; // rax
  char StateDigest; // al
  __int64 v5[4]; // [rsp+20h] [rbp-38h] BYREF

  RmpActivityHostEnumerateResourceSetBegin(a1, 1, v5);
  while ( 1 )
  {
    Next = RmpActivityHostEnumerateResourceSetGetNext(v5);
    if ( !Next )
      break;
    if ( !*(_DWORD *)(Next + 1472) )
      return 0;
  }
  if ( (*((_BYTE *)RmSvcGlobals + 1580) & 0x10) != 0 )
    return 1;
  StateDigest = RmpActivityHostGetStateDigest(a1);
  return !RmpActivityHostStateDigestIsRunnable(StateDigest);
}
