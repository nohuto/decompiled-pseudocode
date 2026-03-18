/*
 * XREFs of ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0067AF4
 * Callers:
 *     ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0062FB8 (-PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0063030 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C0063104 (-PageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0067308 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00679D0 (-AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReportVidMmState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C007BD74 (-ReportVidMmState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ResumeMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007BEC0 (-ResumeMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?SuspendMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007C1A8 (-SuspendMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C007D678 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C004C4D0 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueueSystemCommandAndWait(VIDMM_GLOBAL *this, struct _VIDMM_SYSTEM_COMMAND *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // r8
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v2 = *((_QWORD *)this + 5008);
  v3 = *((unsigned int *)a2 + 1);
  v4 = *(_QWORD *)(v2 + 64);
  if ( (_DWORD)v3 == -1 )
    v5 = *(_QWORD *)(v2 + 64);
  else
    v5 = v4 + 160 * v3;
  return VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
           this,
           a2,
           (PVOID *)v5,
           *(struct _VIDSCH_SYNC_OBJECT **)(160LL * *(unsigned int *)(v5 + 144) + v4 + 152),
           v7);
}
