/*
 * XREFs of RmpActivityHostGetAppliedResourceSetCount @ 0x180006264
 * Callers:
 *     RmpPolicyFilterActivityHostWithFlags @ 0x180006210 (RmpPolicyFilterActivityHostWithFlags.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18003D298 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     <none>
 */

char __fastcall RmpActivityHostGetAppliedResourceSetCount(__int64 a1)
{
  int v1; // edx
  char result; // al
  __int64 v3; // rax

  v1 = *(_DWORD *)(a1 + 40);
  result = 0;
  if ( v1 )
  {
    if ( v1 == 1 )
      return *(_QWORD *)(a1 + 600) != 0LL;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 600);
    LOBYTE(a1) = -1;
    if ( *(_QWORD *)(v3 + 40) < 0xFFFFFFFFuLL )
      return *(_QWORD *)(v3 + 40);
    return a1;
  }
  return result;
}
