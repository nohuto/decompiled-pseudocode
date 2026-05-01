/*
 * XREFs of RmpUtilCreateWnfStateNameForClient @ 0x18001F4F8
 * Callers:
 *     RmpActivatorRegister @ 0x18001F338 (RmpActivatorRegister.c)
 *     ?RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F950 (-RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 * Callees:
 *     ?RmpWnfGetPublisherSid@@YAJPEAT_RM_SID@@@Z @ 0x1800026CC (-RmpWnfGetPublisherSid@@YAJPEAT_RM_SID@@@Z.c)
 *     ?RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KPEAU_WNF_STATE_NAME@@@Z @ 0x18001F55C (-RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KPEAU_WNF_STATE_NAME@@@Z.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpUtilCreateWnfStateNameForClient(PSID a1, unsigned int a2, struct _WNF_STATE_NAME *a3)
{
  __int64 result; // rax
  _BYTE DestinationSid[80]; // [rsp+20h] [rbp-78h] BYREF

  result = RmpWnfGetPublisherSid(DestinationSid);
  if ( (int)result >= 0 )
    return RmpWnfCreateStateNameForIpcEx(DestinationSid, a1, a2, a3);
  return result;
}
