/*
 * XREFs of Template_p @ 0x1C0006E98
 * Callers:
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C000F300 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     VidSchiStartNodeYield @ 0x1C001A53C (VidSchiStartNodeYield.c)
 *     ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C001BDC0 (-VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00307E0 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0032600 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C00327C0 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00337A8 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C0033878 (-StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C003A93C (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C003ABE8 (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004CB80 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C004D098 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004D130 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C00506B0 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?UnlockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C0053DA0 (-UnlockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005936C (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C005D260 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0066784 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C006A234 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z.c)
 *     VidSchiControlVSync @ 0x1C007A1EC (VidSchiControlVSync.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 */

NTSTATUS Template_p(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy((va_list)v4.Ptr, va);
  v4.Reserved = 0;
  v4.Size = 8;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 1u, &v4);
}
