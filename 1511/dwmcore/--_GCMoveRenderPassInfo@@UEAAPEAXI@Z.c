/*
 * XREFs of ??_GCMoveRenderPassInfo@@UEAAPEAXI@Z @ 0x180115E40
 * Callers:
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x180120C94 (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CMoveRenderPassInfo@@UEAA@XZ @ 0x180115D9C (--1CMoveRenderPassInfo@@UEAA@XZ.c)
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
