/*
 * XREFs of ?RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x1800339CC
 * Callers:
 *     ?RmpActivityHostCleanupModule@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18002E094 (-RmpActivityHostCleanupModule@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerCleanup@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18002F278 (-RmpCpuSetManagerCleanup@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpObjectTableCleanup(struct _RM_OBJECT_TABLE *a1)
{
  char *v1; // rbx
  void *v3; // rdi

  v1 = (char *)a1 + 16;
  RtlAcquireSRWLockExclusive((char *)a1 + 16);
  v3 = (void *)*((_QWORD *)a1 + 1);
  RtlReleaseSRWLockExclusive(v1);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
}
