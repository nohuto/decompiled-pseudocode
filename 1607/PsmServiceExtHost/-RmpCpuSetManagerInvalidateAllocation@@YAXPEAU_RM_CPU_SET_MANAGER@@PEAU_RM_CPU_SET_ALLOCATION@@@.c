/*
 * XREFs of ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180030D80
 * Callers:
 *     ?RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x180030FA8 (-RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATI.c)
 * Callees:
 *     RmpUtilRemoveEntryListAndClear @ 0x1800033D8 (RmpUtilRemoveEntryListAndClear.c)
 */

void __fastcall RmpCpuSetManagerInvalidateAllocation(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_ALLOCATION *a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 v4; // r8
  _QWORD *v5; // r9
  _QWORD *v6; // rax

  *((_QWORD *)a2 + 2) = 0LL;
  RmpUtilRemoveEntryListAndClear((_QWORD *)a2 + 3);
  v4 = v3 + 328;
  v5 = (_QWORD *)(v2 + 56);
  v6 = *(_QWORD **)(v4 + 8);
  if ( *v6 != v4 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v2 + 64) = v6;
  *v6 = v5;
  *(_QWORD *)(v4 + 8) = v5;
  *(_DWORD *)(v2 + 276) |= 8u;
}
