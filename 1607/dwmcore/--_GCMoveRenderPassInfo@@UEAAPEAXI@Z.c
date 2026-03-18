/*
 * XREFs of ??_GCMoveRenderPassInfo@@UEAAPEAXI@Z @ 0x1801300E0
 * Callers:
 *     ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x180138058 (-CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInf.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x180138BAC (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CMoveRenderPassInfo@@UEAA@XZ @ 0x18013005C (--1CMoveRenderPassInfo@@UEAA@XZ.c)
 */

CMoveRenderPassInfo *__fastcall CMoveRenderPassInfo::`scalar deleting destructor'(CMoveRenderPassInfo *this, char a2)
{
  CMoveRenderPassInfo::~CMoveRenderPassInfo(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMoveRenderPassInfo *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
