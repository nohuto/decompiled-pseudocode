/*
 * XREFs of ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18010A208
 * Callers:
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180067B3C (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x180054908 (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?AddToVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180130124 (-AddToVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 *     ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x180138058 (-CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInf.c)
 */

__int64 __fastcall CVisual::AddToVisibleRegion(CVisual *this, __int64 a2, const struct CDrawingContext *a3)
{
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rax
  struct CDrawingContext *v6; // r11
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  struct CMoveRenderPassInfo *v11; // [rsp+58h] [rbp+20h] BYREF

  MoveRenderPassInfoRef = (struct CMoveRenderPassInfo *)CVisual::GetMoveRenderPassInfoRef(this, a3);
  v11 = MoveRenderPassInfoRef;
  if ( !MoveRenderPassInfoRef )
  {
    v7 = CVisual::CreateMoveRenderPassInfoForContext(this, v6, &v11);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xEDBu);
      return v8;
    }
    MoveRenderPassInfoRef = v11;
  }
  v9 = CMoveRenderPassInfo::AddToVisibleRegion(MoveRenderPassInfoRef, a2);
  v8 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xEDEu);
  return v8;
}
