/*
 * XREFs of ?Release@CRenderDataDrawFrame@@QEAAKXZ @ 0x180137C90
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ??_GCRenderDataDrawFrame@@AEAAPEAXI@Z @ 0x180137B08 (--_GCRenderDataDrawFrame@@AEAAPEAXI@Z.c)
 *     ?EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEAU3@@Z @ 0x180137B64 (-EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEA.c)
 * Callees:
 *     ??_GCRenderDataDrawFrame@@AEAAPEAXI@Z @ 0x180137B08 (--_GCRenderDataDrawFrame@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall CRenderDataDrawFrame::Release(CRenderDataDrawFrame *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v1 && this )
    CRenderDataDrawFrame::`scalar deleting destructor'((CMILCOMBase **)this);
  return v1;
}
