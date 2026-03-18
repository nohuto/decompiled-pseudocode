/*
 * XREFs of ?IsVidMmWorkerThread@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C004C590
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00553A0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::IsVidMmWorkerThread(VIDMM_GLOBAL *this)
{
  return KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL);
}
