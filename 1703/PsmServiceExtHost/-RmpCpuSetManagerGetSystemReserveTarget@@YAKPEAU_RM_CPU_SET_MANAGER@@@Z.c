/*
 * XREFs of ?RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001F878
 * Callers:
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001F43C (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAKPEA_K@Z @ 0x18002F6CC (-RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAKPEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCpuSetManagerGetSystemReserveTarget(struct _RM_CPU_SET_MANAGER *a1)
{
  __int64 result; // rax

  result = *((_DWORD *)a1 + 109) >> 2;
  if ( !(_DWORD)result )
    return 1LL;
  if ( (unsigned int)result > 4 )
    return 4LL;
  return result;
}
