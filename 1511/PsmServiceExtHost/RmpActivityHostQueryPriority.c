/*
 * XREFs of RmpActivityHostQueryPriority @ 0x18001D6E0
 * Callers:
 *     RmpActivityHostPopulateMetricsArray @ 0x18001D5A4 (RmpActivityHostPopulateMetricsArray.c)
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x18001EE10 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180042900 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000B200 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     RmpEmPriorityCompare @ 0x18001D774 (RmpEmPriorityCompare.c)
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18001D78C (RmpActivityHostEnumerateResourceSetBegin.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryPriority(__int64 a1, int *a2)
{
  int v3; // ebx
  __int64 i; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  unsigned int v8; // r10d
  __int64 v10[4]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 101;
  RmpActivityHostEnumerateResourceSetBegin(a1, 1LL, v10);
  for ( i = RmpActivityHostEnumerateResourceSetGetNext(v10); i; i = RmpActivityHostEnumerateResourceSetGetNext(v10) )
  {
    v7 = *(_DWORD *)(i + 1420);
    if ( v3 < v7 )
      v7 = v3;
    v3 = v7;
  }
  if ( (int)RmpEmPriorityCompare((unsigned int)v3, 100LL, v5, v6) < 0 )
    return (unsigned int)-1073740759;
  else
    *a2 = v3;
  return v8;
}
