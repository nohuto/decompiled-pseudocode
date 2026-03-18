/*
 * XREFs of ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@0PEA_N0PEAVCDrawingContext@@@Z @ 0x180104A44
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x180027DB0 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x1800F4768 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@00PEA_N@Z @ 0x1800FCD1C (-SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@Coordin.c)
 *     ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x18010388C (-CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInf.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x180103C8C (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CVisual::SetLastLocalToWorldTransform(
        CVisual *a1,
        CBaseMatrix *a2,
        __int128 *a3,
        _BYTE *a4,
        _OWORD *a5,
        struct CDrawingContext *a6)
{
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rax
  struct CDrawingContext *v10; // rdx
  CVisual *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  int LocalToWorldTransform; // eax
  struct CMoveRenderPassInfo *v16; // [rsp+30h] [rbp-18h] BYREF

  MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(a1, a6);
  v16 = MoveRenderPassInfoRef;
  if ( !MoveRenderPassInfoRef )
  {
    v12 = CVisual::CreateMoveRenderPassInfoForContext(v11, v10, &v16);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xEA3u);
      return v13;
    }
    MoveRenderPassInfoRef = v16;
  }
  LocalToWorldTransform = CMoveRenderPassInfo::SetLastLocalToWorldTransform(
                            (__int64)MoveRenderPassInfoRef,
                            a2,
                            a3,
                            a5,
                            a4);
  v13 = LocalToWorldTransform;
  if ( LocalToWorldTransform < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, LocalToWorldTransform, 0xEAAu);
  return v13;
}
