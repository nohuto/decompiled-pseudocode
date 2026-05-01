/*
 * XREFs of ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAKPEA_K@Z @ 0x18002F6CC
 * Callers:
 *     ?RmpCpuSetManagerIsGameModeRequestSatisfiable@@YAEPEAU_RM_CPU_SET_MANAGER@@K_K@Z @ 0x18002FD04 (-RmpCpuSetManagerIsGameModeRequestSatisfiable@@YAEPEAU_RM_CPU_SET_MANAGER@@K_K@Z.c)
 *     ?RmpGameModeGetLargestValidResourceRequest@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180030994 (-RmpGameModeGetLargestValidResourceRequest@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOUR.c)
 * Callees:
 *     ?RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001F878 (-RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 */

void __fastcall RmpCpuSetManagerGetGameModeRequestLimits(
        struct _RM_CPU_SET_MANAGER *a1,
        unsigned int *a2,
        unsigned __int64 *a3)
{
  int v3; // eax
  int SystemReserveTarget; // eax
  unsigned int *v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r10
  unsigned int v9; // r11d
  unsigned __int64 v10; // rsi
  unsigned int v11; // r8d
  __int64 v12; // rcx

  v3 = *((_DWORD *)a1 + 108);
  if ( v3 != -1 )
  {
    *((_QWORD *)a1 + ((unsigned int)(v3 - 256) >> 16) + 11) |= 1LL << v3;
    ++*((_DWORD *)a1 + 109);
  }
  SystemReserveTarget = RmpCpuSetManagerGetSystemReserveTarget(a1);
  v10 = *(_QWORD *)(v7 + 88);
  v11 = *(_DWORD *)(v7 + 436) - SystemReserveTarget;
  if ( v11 >= 0x40 )
    v11 = 64;
  if ( *(_DWORD *)(v7 + 432) != -1 )
  {
    v12 = *(_QWORD *)(v7 + 8 * v8 + 88);
    _bittestandreset64(&v12, v9);
    *(_QWORD *)(v7 + 8 * v8 + 88) = v12;
    --*(_DWORD *)(v7 + 436);
  }
  *v6 = v11;
  *a3 = v10;
}
