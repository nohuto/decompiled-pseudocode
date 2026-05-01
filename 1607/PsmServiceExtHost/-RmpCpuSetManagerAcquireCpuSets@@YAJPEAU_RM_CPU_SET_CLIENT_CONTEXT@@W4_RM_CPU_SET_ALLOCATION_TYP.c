/*
 * XREFs of ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYPE@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F830
 * Callers:
 *     RmpCpuSetManagerAcquireCpuSetsForGameMode @ 0x180031210 (RmpCpuSetManagerAcquireCpuSetsForGameMode.c)
 * Callees:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800032EC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerRebalance@@YAXPEAU_RM_CPU_SET_MANAGER@@K@Z @ 0x18001D560 (-RmpCpuSetManagerRebalance@@YAXPEAU_RM_CPU_SET_MANAGER@@K@Z.c)
 *     ?RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x18001D694 (-RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATIO.c)
 *     ?RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@W4_RM_CPU_SET_ALLOCATION_TYPE@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18001E608 (-RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@W4_RM_CPU_SET_ALLOCATION_TYPE.c)
 *     ?RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F950 (-RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerDestroyAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002FF10 (-RmpCpuSetManagerDestroyAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerInsertAllocation@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18003054C (-RmpCpuSetManagerInsertAllocation@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_ALLOCATION.c)
 *     ?RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x180030FA8 (-RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATI.c)
 */

__int64 __fastcall RmpCpuSetManagerAcquireCpuSets(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 **a4)
{
  __int64 v4; // rsi
  char v5; // r14
  int ObjectsForAllocation; // edi
  unsigned __int8 *Heap; // rax
  unsigned __int8 *v11; // rbx

  v4 = *(_QWORD *)a1;
  v5 = 0;
  if ( a3 <= 0x200 )
  {
    if ( *(_DWORD *)(v4 + 952) >= a3 )
    {
      Heap = (unsigned __int8 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x120uLL);
      v11 = Heap;
      if ( Heap )
      {
        RmpCpuSetManagerInitializeAllocation(v4, 1, Heap);
        ObjectsForAllocation = RmpCpuSetManagerAllocateObjectsForAllocation((struct _RM_CPU_SET_ALLOCATION *)v11);
        if ( ObjectsForAllocation >= 0 )
        {
          RmpCpuSetManagerInsertAllocation(a1, (struct _RM_CPU_SET_ALLOCATION *)v11);
          v5 = 1;
          RmpCpuSetManagerAcquireSetsForAllocation(
            (struct _RM_CPU_SET_MANAGER *)v4,
            (struct _RM_CPU_SET_ALLOCATION *)v11,
            a3);
          if ( *((_DWORD *)v11 + 68) )
            RmpCpuSetManagerRebalance((struct _RM_CPU_SET_MANAGER *)v4, 0);
          *a4 = v11;
          v11 = 0LL;
          ObjectsForAllocation = 0;
        }
        if ( v11 )
        {
          if ( v5 )
          {
            RmpCpuSetManagerReleaseAllocationInternal(
              (struct _RM_CPU_SET_MANAGER *)v4,
              (struct _RM_CPU_SET_ALLOCATION *)v11,
              0);
            RmpCpuSetManagerApplyAllPolicyChanges((struct _RM_CPU_SET_MANAGER *)v4);
          }
          else
          {
            RmpCpuSetManagerDestroyAllocation((struct _RM_CPU_SET_MANAGER *)v4, (struct _RM_CPU_SET_ALLOCATION *)v11);
          }
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741583;
  }
  return (unsigned int)ObjectsForAllocation;
}
