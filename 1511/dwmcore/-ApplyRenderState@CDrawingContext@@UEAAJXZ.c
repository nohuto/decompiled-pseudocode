/*
 * XREFs of ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x180046820
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18009ECF0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::ApplyRenderState(CDrawingContext *this)
{
  return CDrawingContext::ApplyRenderStateInternal(this, 0);
}
