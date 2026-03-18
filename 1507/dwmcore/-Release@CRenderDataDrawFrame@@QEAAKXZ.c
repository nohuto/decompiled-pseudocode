/*
 * XREFs of ?Release@CRenderDataDrawFrame@@QEAAKXZ @ 0x18010341C
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ??_GCRenderDataDrawFrame@@AEAAPEAXI@Z @ 0x18010326C (--_GCRenderDataDrawFrame@@AEAAPEAXI@Z.c)
 *     ?EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEAU3@@Z @ 0x1801032E4 (-EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEA.c)
 * Callees:
 *     ??_GCRenderDataDrawFrame@@AEAAPEAXI@Z @ 0x18010326C (--_GCRenderDataDrawFrame@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall CRenderDataDrawFrame::Release(CRenderDataDrawFrame *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v1 && this )
    CRenderDataDrawFrame::`scalar deleting destructor'((CMILCOMBase **)this);
  return v1;
}
