/*
 * XREFs of ?RmpActivityHostCleanupModule@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18002E094
 * Callers:
 *     RmpDestroyResourceManagerServer @ 0x18002A6E4 (RmpDestroyResourceManagerServer.c)
 * Callees:
 *     ?RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x1800339CC (-RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z.c)
 */

void __fastcall RmpActivityHostCleanupModule(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void *v4; // r8
  void *v5; // r8

  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 16));
  v2 = *((_QWORD *)a1 + 152);
  if ( v2 )
    TpReleaseCleanupGroup(v2);
  v3 = *((_QWORD *)a1 + 163);
  if ( v3 )
    TpReleaseCleanupGroup(v3);
  if ( *((_QWORD *)a1 + 162) )
    TpReleasePool();
  v4 = (void *)*((_QWORD *)a1 + 149);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  v5 = (void *)*((_QWORD *)a1 + 151);
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
}
