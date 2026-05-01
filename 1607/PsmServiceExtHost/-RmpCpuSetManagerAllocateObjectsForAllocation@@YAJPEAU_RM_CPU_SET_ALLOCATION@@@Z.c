/*
 * XREFs of ?RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F950
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYPE@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F830 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYP.c)
 * Callees:
 *     ?RmpWnfGetPublisherSid@@YAJPEAT_RM_SID@@@Z @ 0x1800026CC (-RmpWnfGetPublisherSid@@YAJPEAT_RM_SID@@@Z.c)
 *     RmpUtilCreateWnfStateNameForClient @ 0x18001F4F8 (RmpUtilCreateWnfStateNameForClient.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerAllocateObjectsForAllocation(struct _WNF_STATE_NAME *a1)
{
  __int64 result; // rax
  _BYTE DestinationSid[80]; // [rsp+20h] [rbp-68h] BYREF

  if ( a1[35].Data[0] != 2 )
    return 0LL;
  result = RmpWnfGetPublisherSid(DestinationSid);
  if ( (int)result >= 0 )
  {
    result = RmpUtilCreateWnfStateNameForClient(DestinationSid, 0x808u, a1 + 13);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
