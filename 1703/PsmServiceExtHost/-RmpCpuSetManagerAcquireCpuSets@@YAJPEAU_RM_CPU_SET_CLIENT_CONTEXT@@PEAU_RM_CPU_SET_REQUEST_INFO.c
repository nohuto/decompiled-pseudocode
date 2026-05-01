/*
 * XREFs of ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002EC94
 * Callers:
 *     ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x18002BEE4 (-RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_IN.c)
 *     ?RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180030680 (-RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001F6DC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@@Z @ 0x18002ED7C (-RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATIO.c)
 *     ?RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002EF0C (-RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerCheckRequestSatisfiability@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@@Z @ 0x18002F1E0 (-RmpCpuSetManagerCheckRequestSatisfiability@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST.c)
 *     ?RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F774 (-RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerInsertAllocation@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F8CC (-RmpCpuSetManagerInsertAllocation@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_ALLOCATION.c)
 *     ?RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002FEC0 (-RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerAcquireCpuSets(
        struct _RM_CPU_SET_MANAGER **a1,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a2,
        struct _RM_CPU_SET_ALLOCATION **a3)
{
  struct _RM_CPU_SET_ALLOCATION *v3; // rdi
  struct _RM_CPU_SET_MANAGER *v4; // rsi
  int ObjectsForAllocation; // ebx
  struct _RM_CPU_SET_ALLOCATION *Heap; // rax

  v3 = 0LL;
  v4 = *a1;
  if ( (unsigned int)(*(_DWORD *)a2 - 1) > 0x1FF )
  {
    ObjectsForAllocation = -1073741583;
  }
  else
  {
    ObjectsForAllocation = RmpCpuSetManagerCheckRequestSatisfiability(*a1, a2);
    if ( ObjectsForAllocation < 0 )
      return (unsigned int)ObjectsForAllocation;
    Heap = (struct _RM_CPU_SET_ALLOCATION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x108uLL);
    v3 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    RmpCpuSetManagerInitializeAllocation(v4, Heap);
    ObjectsForAllocation = RmpCpuSetManagerAllocateObjectsForAllocation(v3);
    if ( ObjectsForAllocation >= 0 )
    {
      RmpCpuSetManagerAcquireSetsForAllocation(v4, v3, a2);
      RmpCpuSetManagerInsertAllocation((struct _RM_CPU_SET_CLIENT_CONTEXT *)a1, v3);
      RmpCpuSetManagerApplyAllPolicyChanges(v4);
      RmpCpuSetManagerPublishAllocationState(v3);
      ObjectsForAllocation = 0;
      *a3 = v3;
      return (unsigned int)ObjectsForAllocation;
    }
  }
  if ( v3 )
    RmpObjectRelease(v3);
  return (unsigned int)ObjectsForAllocation;
}
