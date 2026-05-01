/*
 * XREFs of RmpCpuSetManagerCleanup @ 0x180031370
 * Callers:
 *     RmpDestroyResourceManagerServer @ 0x180029DB0 (RmpDestroyResourceManagerServer.c)
 * Callees:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800032EC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerDestroyAllProcessRegistrations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18002FD58 (-RmpCpuSetManagerDestroyAllProcessRegistrations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerDestroyClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x180030074 (-RmpCpuSetManagerDestroyClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x180030FA8 (-RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATI.c)
 */

NTSTATUS __fastcall RmpCpuSetManagerCleanup(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int i; // edi
  _QWORD **v3; // r14
  _QWORD *v4; // rsi
  struct _RM_CPU_SET_ALLOCATION *v5; // rdx
  _QWORD *v6; // rdi
  struct _RM_CPU_SET_ALLOCATION *v7; // rdx
  _QWORD *j; // rdi
  void *v9; // r8
  void *v10; // r8
  void *v11; // r8

  v1 = a1 + 1944;
  RtlEnterCriticalSection(&RmpGlobalLock);
  for ( i = 0; i < 4; ++i )
  {
    if ( i && i != 3 )
    {
      v3 = (_QWORD **)(16LL * (int)i + v1 + 232);
      v4 = *v3;
      while ( v4 != v3 )
      {
        v5 = (struct _RM_CPU_SET_ALLOCATION *)(v4 - 7);
        v4 = (_QWORD *)*v4;
        RmpCpuSetManagerReleaseAllocationInternal((struct _RM_CPU_SET_MANAGER *)v1, v5, 0);
      }
    }
  }
  v6 = *(_QWORD **)(v1 + 312);
  while ( v6 != (_QWORD *)(v1 + 312) )
  {
    v7 = (struct _RM_CPU_SET_ALLOCATION *)(v6 - 7);
    v6 = (_QWORD *)*v6;
    RmpCpuSetManagerReleaseAllocationInternal((struct _RM_CPU_SET_MANAGER *)v1, v7, 0);
  }
  RmpCpuSetManagerDestroyAllProcessRegistrations((struct _RM_CPU_SET_MANAGER *)v1);
  RmpCpuSetManagerApplyAllPolicyChanges((struct _RM_CPU_SET_MANAGER *)v1);
  for ( j = (_QWORD *)(v1 + 8);
        (_QWORD *)*j != j;
        RmpCpuSetManagerDestroyClientContext((struct _RM_CPU_SET_CLIENT_CONTEXT *)(*j - 8LL)) )
  {
    ;
  }
  v9 = *(void **)(v1 + 32);
  if ( v9 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  v10 = *(void **)(v1 + 48);
  if ( v10 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  v11 = *(void **)(v1 + 64);
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  return RtlLeaveCriticalSection(&RmpGlobalLock);
}
