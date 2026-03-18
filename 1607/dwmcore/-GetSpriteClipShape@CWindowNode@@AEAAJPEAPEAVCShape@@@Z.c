/*
 * XREFs of ?GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x180026748
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028D80 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x18014032C (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 *     ?RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180140714 (-RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateSpriteClipShape@CWindowNode@@AEAAJXZ @ 0x1800267DC (-UpdateSpriteClipShape@CWindowNode@@AEAAJXZ.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18002CBC0 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowNode::GetSpriteClipShape(struct D2D_SIZE_F *this, struct CShape **a2)
{
  struct CShape *v2; // rbx
  unsigned int v5; // esi
  int updated; // eax
  CGeometry *v7; // rcx
  struct CShape *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v5 = 0;
  v9 = 0LL;
  if ( LOBYTE(this[129].width) )
  {
    updated = CWindowNode::UpdateSpriteClipShape((CWindowNode *)this);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x141Cu);
      return v5;
    }
    LOBYTE(this[129].width) = 0;
  }
  if ( this[128] )
  {
    v2 = (struct CShape *)this[128];
  }
  else
  {
    v7 = (CGeometry *)this[105];
    if ( v7 )
    {
      CGeometry::GetShapeDataNoRef(v7, this + 24, &v9);
      v2 = v9;
    }
  }
  *a2 = v2;
  return v5;
}
