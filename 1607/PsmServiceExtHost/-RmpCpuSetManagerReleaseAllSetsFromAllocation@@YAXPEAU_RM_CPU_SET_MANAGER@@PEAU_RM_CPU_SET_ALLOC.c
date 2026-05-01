/*
 * XREFs of ?RmpCpuSetManagerReleaseAllSetsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180030F18
 * Callers:
 *     ?RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x180030FA8 (-RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATI.c)
 * Callees:
 *     ?RmpCpuSetManagerMarkAllocationDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18000352C (-RmpCpuSetManagerMarkAllocationDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

void __fastcall RmpCpuSetManagerReleaseAllSetsFromAllocation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_ALLOCATION *a2)
{
  _QWORD *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r10
  struct _RM_CPU_SET_MANAGER *v6; // r9

  if ( *((_DWORD *)a2 + 68) )
  {
    v3 = (_QWORD *)((char *)a2 + 112);
    v4 = a1 - a2;
    v5 = 20LL;
    do
    {
      *(_QWORD *)((char *)v3 + v4 + 648) |= *v3;
      *v3++ = 0LL;
      --v5;
    }
    while ( v5 );
    *((_DWORD *)a1 + 230) += *((_DWORD *)a2 + 68);
    *((_DWORD *)a1 + 238) += *((_DWORD *)a2 + 68);
    *((_DWORD *)a1 + *((int *)a2 + 70) + 238) -= *((_DWORD *)a2 + 68);
    *((_DWORD *)a2 + 68) = 0;
    RmpCpuSetManagerMarkAllocationDirty(a1, a2);
    RmpCpuSetManagerMarkAllocationDirty(v6, (struct _RM_CPU_SET_MANAGER *)((char *)v6 + 648));
  }
}
