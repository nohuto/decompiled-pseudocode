/*
 * XREFs of ?RmpCpuSetManagerCleanup@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18002F278
 * Callers:
 *     RmpDestroyResourceManagerServer @ 0x18002A6E4 (RmpDestroyResourceManagerServer.c)
 * Callees:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001F6DC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x180030250 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x1800339CC (-RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z.c)
 */

void __fastcall RmpCpuSetManagerCleanup(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // rbx
  _QWORD *i; // rdi
  void *v3; // r8

  v1 = (char *)a1 + 648;
  RtlEnterCriticalSection(&RmpGlobalLock);
  for ( i = v1 + 8; (_QWORD *)*i != i; RmpCpuSetManagerReleaseClientContext((struct _RM_CPU_SET_CLIENT_CONTEXT *)(*i - 8LL)) )
    ;
  RmpCpuSetManagerApplyAllPolicyChanges((struct _RM_CPU_SET_MANAGER *)v1);
  RmpObjectTableCleanup((struct _RM_OBJECT_TABLE *)(v1 + 24));
  RmpObjectTableCleanup((struct _RM_OBJECT_TABLE *)(v1 + 48));
  v3 = (void *)*((_QWORD *)v1 + 10);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  RtlLeaveCriticalSection(&RmpGlobalLock);
}
