/*
 * XREFs of ?RmpUtilCreateWnfStateNameForClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z @ 0x180020134
 * Callers:
 *     ?RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z @ 0x18001FFB0 (-RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z.c)
 *     ?RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002EF0C (-RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 * Callees:
 *     ?RmpWnfGetPublisherSid@@YAJPEAT_RM_SID@@@Z @ 0x180019D90 (-RmpWnfGetPublisherSid@@YAJPEAT_RM_SID@@@Z.c)
 *     ?RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KPEAU_WNF_STATE_NAME@@@Z @ 0x180020190 (-RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KPEAU_WNF_STATE_NAME@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
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
