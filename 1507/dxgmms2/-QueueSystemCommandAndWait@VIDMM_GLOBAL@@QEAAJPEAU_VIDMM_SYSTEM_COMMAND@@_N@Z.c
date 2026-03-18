/*
 * XREFs of ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C003B628
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0039A20 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0039AA4 (-AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C0050D04 (-PageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C005139C (-PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?ReportVidMmState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0052F34 (-ReportVidMmState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0053334 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ResumeMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0053470 (-ResumeMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?SuspendMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00539AC (-SuspendMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C0055F38 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C003B4F8 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueueSystemCommandAndWait(VIDMM_GLOBAL *this, struct _VIDMM_SYSTEM_COMMAND *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // r8

  v3 = *((unsigned int *)a2 + 1);
  v4 = *((_QWORD *)this + 5001);
  v5 = *(_QWORD *)(v4 + 64);
  if ( (_DWORD)v3 == -1 )
    v6 = *(_QWORD *)(v4 + 64);
  else
    v6 = v5 + 152 * v3;
  return VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
           this,
           a2,
           (PVOID *)v6,
           *(struct _VIDSCH_SYNC_OBJECT **)(152LL * *(unsigned int *)(v6 + 136) + v5 + 144),
           1);
}
