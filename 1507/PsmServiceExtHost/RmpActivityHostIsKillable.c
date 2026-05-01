/*
 * XREFs of RmpActivityHostIsKillable @ 0x180009F48
 * Callers:
 *     RmpPolicyFilterActivityHostWithFlags @ 0x180006210 (RmpPolicyFilterActivityHostWithFlags.c)
 *     RmpPolicyComputeDesiredState @ 0x18000D390 (RmpPolicyComputeDesiredState.c)
 *     ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18003C5A0 (-RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18003D298 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18000AD70 (RmpActivityHostEnumerateResourceSetBegin.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000D7F0 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     RmpActivityHostIsRunnable @ 0x18003BD38 (RmpActivityHostIsRunnable.c)
 */

bool __fastcall RmpActivityHostIsKillable(__int64 a1)
{
  __int64 Next; // rax
  __int64 v2; // r10
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF

  RmpActivityHostEnumerateResourceSetBegin(a1, 1LL, v4);
  while ( 1 )
  {
    Next = RmpActivityHostEnumerateResourceSetGetNext(v4);
    if ( !Next )
      break;
    if ( !*(_DWORD *)(Next + 1464) )
      return 0;
  }
  return (*((_BYTE *)RmSvcGlobals + 1660) & 0x10) != 0 || !(unsigned int)RmpActivityHostIsRunnable(v2);
}
