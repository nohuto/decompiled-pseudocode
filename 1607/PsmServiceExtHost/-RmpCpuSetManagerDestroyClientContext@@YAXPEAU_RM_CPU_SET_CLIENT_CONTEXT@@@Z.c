/*
 * XREFs of ?RmpCpuSetManagerDestroyClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x180030074
 * Callers:
 *     RmpCpuSetManagerCleanup @ 0x180031370 (RmpCpuSetManagerCleanup.c)
 * Callees:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800032EC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     RmpUtilRemoveEntryListAndClear @ 0x1800033D8 (RmpUtilRemoveEntryListAndClear.c)
 *     ?RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x180030FA8 (-RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATI.c)
 */

void __fastcall RmpCpuSetManagerDestroyClientContext(struct _RM_CPU_SET_CLIENT_CONTEXT *a1)
{
  struct _RM_CPU_SET_MANAGER *v1; // rsi
  _QWORD *v2; // rbx

  v1 = *(struct _RM_CPU_SET_MANAGER **)a1;
  v2 = (_QWORD *)((char *)a1 + 24);
  if ( (_QWORD *)*v2 != v2 )
  {
    while ( (_QWORD *)*v2 != v2 )
      RmpCpuSetManagerReleaseAllocationInternal(v1, (struct _RM_CPU_SET_ALLOCATION *)(*v2 - 24LL), 0);
    RmpCpuSetManagerApplyAllPolicyChanges(v1);
  }
  if ( *((_QWORD *)a1 + 1) )
    RmpUtilRemoveEntryListAndClear((_QWORD *)a1 + 1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
