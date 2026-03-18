/*
 * XREFs of ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x18002601C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18002C2EC (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18002CBC0 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004B8AC (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180140104 (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 */

__int64 __fastcall CWindowNode::ProcessSetDxClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETDXCLIP *a3)
{
  CShape *v3; // rbp
  CShape *v4; // r14
  __int64 v6; // rdx
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
  v6 = *((unsigned int *)a3 + 2);
  v7 = 0;
  Resource = 0LL;
  v16[0] = 0LL;
  if ( (_DWORD)v6 )
  {
    Resource = (CGeometry *)CResourceTable::GetResource(a2, v6, 66LL);
    if ( !Resource )
    {
      v7 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x8C3u);
      return v7;
    }
  }
  if ( Resource != *((CGeometry **)this + 119) )
  {
    v11 = 0;
    if ( Resource )
    {
      ShapeDataNoRef = CGeometry::GetShapeDataNoRef(Resource, (const struct D2D_SIZE_F *)this + 24, v15);
      v7 = ShapeDataNoRef;
      if ( ShapeDataNoRef < 0 )
      {
        v14 = 2262;
        goto LABEL_23;
      }
      v3 = v15[0];
    }
    v13 = (CGeometry *)*((_QWORD *)this + 119);
    if ( v13 )
    {
      ShapeDataNoRef = CGeometry::GetShapeDataNoRef(v13, (const struct D2D_SIZE_F *)this + 24, v16);
      v7 = ShapeDataNoRef;
      if ( ShapeDataNoRef < 0 )
      {
        v14 = 2267;
        goto LABEL_23;
      }
      v4 = v16[0];
    }
    if ( v3 && CShape::IsAxisAlignedRectangle(v3) && v4 && CShape::IsAxisAlignedRectangle(v4) )
    {
      CWindowNode::GetGeometryBounds(this, Resource, v15);
      CWindowNode::GetGeometryBounds(this, *((_QWORD *)this + 119), v16);
      v11 = (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(v15, v16) != 0;
    }
    ShapeDataNoRef = CResource::RegisterNotifier(this, Resource);
    v7 = ShapeDataNoRef;
    if ( ShapeDataNoRef >= 0 )
    {
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 119));
      *((_QWORD *)this + 119) = Resource;
      *((_BYTE *)this + 1032) = 1;
      if ( !v11 )
        CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
      return v7;
    }
    v14 = 2284;
LABEL_23:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, v14);
  }
  return v7;
}
