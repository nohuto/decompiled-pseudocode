/*
 * XREFs of ?RmpCpuSetManagerMarkAllocationClean@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800033A4
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800032EC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     RmpUtilRemoveEntryListAndClear @ 0x1800033D8 (RmpUtilRemoveEntryListAndClear.c)
 */

void __fastcall RmpCpuSetManagerMarkAllocationClean(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_ALLOCATION *a2,
        __int64 a3)
{
  __int64 v3; // r9
  struct _RM_CPU_SET_MANAGER *v4; // r10

  *((_DWORD *)a2 + 69) &= ~2u;
  RmpUtilRemoveEntryListAndClear((char *)a2 + 72, a2, a3);
  if ( (*(_BYTE *)(v3 + 276) & 8) != 0 )
    RmpCpuSetManagerReleaseAllocationInternal(v4, (struct _RM_CPU_SET_ALLOCATION *)v3, 0);
}
