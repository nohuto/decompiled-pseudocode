/*
 * XREFs of ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C004C618
 * Callers:
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C003FFBC (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0043EEC (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004DF58 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDRESS@@E@Z @ 0x1C0050838 (-VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDR.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0053EE4 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067C40 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C007AF44 (-FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C004C4D0 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(VIDMM_GLOBAL *this, struct _VIDMM_SYSTEM_COMMAND *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // r8
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v2 = *((_QWORD *)this + 5008);
  v3 = *((unsigned int *)a2 + 1);
  v4 = *(_QWORD *)(v2 + 72);
  if ( (_DWORD)v3 == -1 )
    v5 = *(_QWORD *)(v2 + 72);
  else
    v5 = v4 + 160 * v3;
  return VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
           this,
           a2,
           (PVOID *)v5,
           *(struct _VIDSCH_SYNC_OBJECT **)(160LL * *(unsigned int *)(v5 + 144) + v4 + 152),
           v7);
}
