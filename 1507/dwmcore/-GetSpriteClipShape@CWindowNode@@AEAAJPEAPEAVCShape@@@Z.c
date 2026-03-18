/*
 * XREFs of ?GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x180079C3C
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C1A0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x180105358 (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 *     ?RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180106284 (-RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18001793C (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateSpriteClipShape@CWindowNode@@AEAAJXZ @ 0x180079CD0 (-UpdateSpriteClipShape@CWindowNode@@AEAAJXZ.c)
 */

__int64 __fastcall CWindowNode::GetSpriteClipShape(CWindowNode *this, struct CShape **a2)
{
  struct CShape *v2; // rbx
  unsigned int v5; // esi
  int updated; // eax
  CGeometry *v7; // rcx
  struct CShape *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v5 = 0;
  v9 = 0LL;
  if ( *((_BYTE *)this + 1272) )
  {
    updated = CWindowNode::UpdateSpriteClipShape(this);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x144Eu);
      return v5;
    }
    *((_BYTE *)this + 1272) = 0;
  }
  if ( *((_QWORD *)this + 158) )
  {
    v2 = (struct CShape *)*((_QWORD *)this + 158);
  }
  else
  {
    v7 = (CGeometry *)*((_QWORD *)this + 135);
    if ( v7 )
    {
      CGeometry::GetShapeDataNoRef(v7, (const struct D2D_SIZE_F *)((char *)this + 148), &v9);
      v2 = v9;
    }
  }
  *a2 = v2;
  return v5;
}
