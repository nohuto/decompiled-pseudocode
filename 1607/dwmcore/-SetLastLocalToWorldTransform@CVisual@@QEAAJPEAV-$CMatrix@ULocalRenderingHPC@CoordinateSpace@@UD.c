/*
 * XREFs of ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@0PEA_N0PEAVCDrawingContext@@@Z @ 0x180138CF8
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x180067CD4 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180124B50 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x180054908 (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@00PEA_N@Z @ 0x1800BB3C8 (-SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@Coordin.c)
 *     ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x180138058 (-CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInf.c)
 */

__int64 __fastcall CVisual::SetLastLocalToWorldTransform(
        CVisual *a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        struct CDrawingContext *a6)
{
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rax
  CVisual *v10; // r11
  int v11; // eax
  unsigned int v12; // ebx
  int LocalToWorldTransform; // eax
  struct CMoveRenderPassInfo *v15; // [rsp+30h] [rbp-18h] BYREF

  MoveRenderPassInfoRef = (struct CMoveRenderPassInfo *)CVisual::GetMoveRenderPassInfoRef(a1, a6);
  v15 = MoveRenderPassInfoRef;
  if ( !MoveRenderPassInfoRef )
  {
    v11 = CVisual::CreateMoveRenderPassInfoForContext(v10, a6, &v15);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xF21u);
      return v12;
    }
    MoveRenderPassInfoRef = v15;
  }
  LocalToWorldTransform = CMoveRenderPassInfo::SetLastLocalToWorldTransform(
                            (__int64)MoveRenderPassInfoRef,
                            a2,
                            a3,
                            a5,
                            a4);
  v12 = LocalToWorldTransform;
  if ( LocalToWorldTransform < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, LocalToWorldTransform, 0xF28u);
  return v12;
}
