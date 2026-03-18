/*
 * XREFs of ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1800F790C
 * Callers:
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x18003C6AC (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 * Callees:
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x18004D854 (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddToVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180115E98 (-AddToVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 *     ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x1801200E0 (-CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInf.c)
 */

__int64 __fastcall CVisual::AddToVisibleRegion(CVisual *a1, __int64 a2, const struct CDrawingContext *a3)
{
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rax
  struct CDrawingContext *v5; // rdx
  CVisual *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  struct CMoveRenderPassInfo *v11; // [rsp+58h] [rbp+20h] BYREF

  MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(a1, a3);
  v11 = MoveRenderPassInfoRef;
  if ( !MoveRenderPassInfoRef )
  {
    v7 = CVisual::CreateMoveRenderPassInfoForContext(v6, v5, &v11);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xDBFu);
      return v8;
    }
    MoveRenderPassInfoRef = v11;
  }
  v9 = CMoveRenderPassInfo::AddToVisibleRegion(MoveRenderPassInfoRef, a2);
  v8 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xDC2u);
  return v8;
}
