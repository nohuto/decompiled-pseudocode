/*
 * XREFs of ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x18005EE4C
 * Callers:
 *     ?UpdateSpriteClipShape@CWindowNode@@AEAAJXZ @ 0x18005EF3C (-UpdateSpriteClipShape@CWindowNode@@AEAAJXZ.c)
 *     ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x18005EFE0 (-IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180061320 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800617E0 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800629E0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180063FA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x18012380C (-GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x180123A0C (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 *     ?RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180123E1C (-RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1800644A8 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 */

struct CShape *__fastcall CWindowNode::GetDxClipShapeNoRef(CWindowNode *this)
{
  __int64 v2; // rax
  struct CShape *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( *((_QWORD *)this + 143) )
  {
    CGeometry::GetShapeDataNoRef(*((CGeometry **)this + 143), (const struct D2D_SIZE_F *)((char *)this + 132), &v3);
    return v3;
  }
  else
  {
    v2 = *((_QWORD *)this + 150);
    if ( v2 && *(_BYTE *)(v2 + 16) )
      return *(struct CShape **)(v2 + 8);
    else
      return (struct CShape *)&CRectangleShape::s_emptyShape;
  }
}
