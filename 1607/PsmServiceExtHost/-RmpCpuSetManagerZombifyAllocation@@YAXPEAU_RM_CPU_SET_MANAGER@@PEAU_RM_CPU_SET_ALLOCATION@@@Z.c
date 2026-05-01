/*
 * XREFs of ?RmpCpuSetManagerZombifyAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800311B0
 * Callers:
 *     ?RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x180030FA8 (-RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATI.c)
 * Callees:
 *     RmpUtilRemoveEntryListAndClear @ 0x1800033D8 (RmpUtilRemoveEntryListAndClear.c)
 *     ?RmpCpuSetManagerPublishServiceAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180030E0C (-RmpCpuSetManagerPublishServiceAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

void __fastcall RmpCpuSetManagerZombifyAllocation(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_ALLOCATION *a2)
{
  _QWORD *v2; // r9
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // r8
  _QWORD *v6; // rax

  RmpUtilRemoveEntryListAndClear((_QWORD *)a2 + 7);
  *(_DWORD *)(v3 + 276) |= 4u;
  v5 = v4 + 312;
  v6 = *(_QWORD **)(v5 + 8);
  if ( *v6 != v5 )
    __fastfail(3u);
  *v2 = v5;
  v2[1] = v6;
  *v6 = v2;
  *(_QWORD *)(v5 + 8) = v2;
  if ( *(_DWORD *)(v3 + 280) == 2 )
    RmpCpuSetManagerPublishServiceAllocationState((struct _RM_CPU_SET_ALLOCATION *)v3);
}
