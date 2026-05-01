/*
 * XREFs of RmpActivityHostQueryPriority @ 0x18000A5A8
 * Callers:
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x180006074 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     RmpPolicyActivityHostMetricsInitialize @ 0x18000717C (RmpPolicyActivityHostMetricsInitialize.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18003D298 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     RmpEmPriorityCompare @ 0x180007394 (RmpEmPriorityCompare.c)
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18000AD70 (RmpActivityHostEnumerateResourceSetBegin.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000D7F0 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryPriority(__int64 a1, _DWORD *a2)
{
  __int64 i; // rax
  int v4; // r11d
  unsigned int v5; // r10d
  int v6; // r11d
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF

  RmpActivityHostEnumerateResourceSetBegin(a1, 1LL, v8);
  for ( i = RmpActivityHostEnumerateResourceSetGetNext(v8); i; i = RmpActivityHostEnumerateResourceSetGetNext(v8) )
    ;
  if ( (int)RmpEmPriorityCompare(v4, 100) < 0 )
    return (unsigned int)-1073740759;
  else
    *a2 = v6;
  return v5;
}
