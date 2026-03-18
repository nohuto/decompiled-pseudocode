/*
 * XREFs of ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x1800796BC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18001793C (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004DE38 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180077F5C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801050F0 (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 */

__int64 __fastcall CWindowNode::ProcessSetDxClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETDXCLIP *a3)
{
  CShape *v3; // rbp
  CShape *v4; // r14
  unsigned int v6; // edx
  unsigned int v7; // ebx
  CGeometry *Resource; // rsi
  bool v11; // r15
  int ShapeDataNoRef; // eax
  CGeometry *v13; // rcx
  unsigned int v14; // [rsp+20h] [rbp-88h]
  struct CShape *v15[2]; // [rsp+40h] [rbp-68h] BYREF
  struct CShape *v16[2]; // [rsp+50h] [rbp-58h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v15[0] = 0LL;
  v6 = *((_DWORD *)a3 + 2);
  v7 = 0;
  Resource = 0LL;
  v16[0] = 0LL;
  if ( v6 )
  {
    Resource = (CGeometry *)CResourceTable::GetResource((__int64)a2, v6, 61LL);
    if ( !Resource )
    {
      v7 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x8C2u);
      return v7;
    }
  }
  if ( Resource != *((CGeometry **)this + 149) )
  {
    v11 = 0;
    if ( Resource )
    {
      ShapeDataNoRef = CGeometry::GetShapeDataNoRef(Resource, (const struct D2D_SIZE_F *)((char *)this + 148), v15);
      v7 = ShapeDataNoRef;
      if ( ShapeDataNoRef < 0 )
      {
        v14 = 2261;
        goto LABEL_21;
      }
      v3 = v15[0];
    }
    v13 = (CGeometry *)*((_QWORD *)this + 149);
    if ( v13 )
    {
      ShapeDataNoRef = CGeometry::GetShapeDataNoRef(v13, (const struct D2D_SIZE_F *)((char *)this + 148), v16);
      v7 = ShapeDataNoRef;
      if ( ShapeDataNoRef < 0 )
      {
        v14 = 2266;
        goto LABEL_21;
      }
      v4 = v16[0];
    }
    if ( v3 && CShape::IsAxisAlignedRectangle(v3) && v4 && CShape::IsAxisAlignedRectangle(v4) )
    {
      CWindowNode::GetGeometryBounds(this, Resource, v15);
      CWindowNode::GetGeometryBounds(this, *((_QWORD *)this + 149), v16);
      v11 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo((float *)v15, (float *)v16) != 0;
    }
    ShapeDataNoRef = CResource::RegisterNotifier(this, Resource);
    v7 = ShapeDataNoRef;
    if ( ShapeDataNoRef >= 0 )
    {
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 149));
      *((_QWORD *)this + 149) = Resource;
      *((_BYTE *)this + 1272) = 1;
      if ( !v11 )
        CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
      return v7;
    }
    v14 = 2283;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, v14);
  }
  return v7;
}
