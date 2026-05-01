/*
 * XREFs of ?RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x18001D694
 * Callers:
 *     ?RmpCpuSetManagerRebalance@@YAXPEAU_RM_CPU_SET_MANAGER@@K@Z @ 0x18001D560 (-RmpCpuSetManagerRebalance@@YAXPEAU_RM_CPU_SET_MANAGER@@K@Z.c)
 *     ?RmpCpuSetManagerRebalanceTopologyChange@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001D5F4 (-RmpCpuSetManagerRebalanceTopologyChange@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYPE@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F830 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYP.c)
 * Callees:
 *     ?RmpCpuSetManagerActOnAllocationsByType@@YAXPEAU_RM_CPU_SET_MANAGER@@W4_RM_CPU_SET_ALLOCATION_TYPE@@P6AE0PEAU_RM_CPU_SET_ALLOCATION@@PEAX@Z3@Z @ 0x18001D78C (-RmpCpuSetManagerActOnAllocationsByType@@YAXPEAU_RM_CPU_SET_MANAGER@@W4_RM_CPU_SET_ALLOCATION_TY.c)
 */

void __fastcall RmpCpuSetManagerAcquireSetsForAllocation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_ALLOCATION *a2,
        int a3)
{
  unsigned int v3; // ebx
  struct _RM_CPU_SET_ALLOCATION *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v6 = a2;
  v7 = a3;
  if ( *((_DWORD *)a2 + 70) )
  {
    while ( a3 )
    {
      ((void (__fastcall *)(struct _RM_CPU_SET_MANAGER *, _QWORD, unsigned __int8 (__fastcall *)(struct _RM_CPU_SET_MANAGER *, struct _RM_CPU_SET_ALLOCATION *, void *), struct _RM_CPU_SET_ALLOCATION **))RmpCpuSetManagerActOnAllocationsByType)(
        a1,
        v3++,
        RmpCpuSetManagerAcquireSetsForAllocationCallback,
        &v6);
      if ( v3 >= *((_DWORD *)a2 + 70) )
        break;
      a3 = v7;
    }
  }
}
