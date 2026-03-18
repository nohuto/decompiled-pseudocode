/*
 * XREFs of ?Release@CRenderDataDrawFrame@@QEAAKXZ @ 0x18011FE50
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18009ECF0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ??_GCRenderDataDrawFrame@@AEAAPEAXI@Z @ 0x18011FCA0 (--_GCRenderDataDrawFrame@@AEAAPEAXI@Z.c)
 *     ?EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEAU3@@Z @ 0x18011FD18 (-EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEA.c)
 * Callees:
 *     ??_GCRenderDataDrawFrame@@AEAAPEAXI@Z @ 0x18011FCA0 (--_GCRenderDataDrawFrame@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall CRenderDataDrawFrame::Release(CRenderDataDrawFrame *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v1 && this )
    CRenderDataDrawFrame::`scalar deleting destructor'((CMILCOMBase **)this);
  return v1;
}
