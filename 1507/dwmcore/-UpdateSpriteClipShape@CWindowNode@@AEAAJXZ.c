/*
 * XREFs of ?UpdateSpriteClipShape@CWindowNode@@AEAAJXZ @ 0x180079CD0
 * Callers:
 *     ?GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x180079C3C (-GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007B490 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18007B820 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18000D558 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18001793C (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004E010 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180078D54 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800790B4 (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180079110 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x180079D74 (-IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x18007C46C (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x180105094 (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?GetShapeBounds@CWindowNode@@AEBAJPEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1801052A4 (-GetShapeBounds@CWindowNode@@AEBAJPEAVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 */

__int64 __fastcall CWindowNode::UpdateSpriteClipShape(CWindowNode *this)
{
  CRectangleShape *v1; // rdi
  unsigned int v3; // esi
  void (__fastcall ***v4)(_QWORD, __int64); // r15
  CRectangleShape *v5; // rdi
  struct CShape *v7; // rbx
  struct CShape *DxClipShapeNoRef; // rdi
  CGeometry *v9; // rcx
  int RenderBounds; // eax
  __int64 v11; // rcx
  int v12; // r9d
  int v13; // eax
  CRectangleShape *v14; // rax
  unsigned int v15; // [rsp+28h] [rbp-39h]
  char v16; // [rsp+38h] [rbp-29h] BYREF
  char v17[7]; // [rsp+39h] [rbp-28h] BYREF
  CRectangleShape *v18; // [rsp+40h] [rbp-21h] BYREF
  struct CShape *v19[2]; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v20[32]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v21[16]; // [rsp+78h] [rbp+17h] BYREF

  v1 = 0LL;
  v18 = 0LL;
  v3 = 0;
  if ( !CWindowNode::IsDxShapeExclusionNeeded(this) )
    goto LABEL_2;
  v7 = 0LL;
  v19[0] = 0LL;
  DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
  CRectangleShape::CRectangleShape((CRectangleShape *)v20, 0.0, 0.0, 0.0, 0.0);
  v9 = (CGeometry *)*((_QWORD *)this + 135);
  if ( v9 )
  {
    CGeometry::GetShapeDataNoRef(v9, (const struct D2D_SIZE_F *)((char *)this + 148), v19);
    v7 = v19[0];
  }
  RenderBounds = CWindowNode::GetRenderBounds(this, *((_QWORD *)this + 130), v7, v19, &v16, 0LL);
  v3 = RenderBounds;
  if ( RenderBounds < 0 )
  {
    v15 = 5099;
LABEL_13:
    v12 = RenderBounds;
LABEL_15:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v15);
    CRectangleShape::~CRectangleShape((CRectangleShape *)v20);
    return v3;
  }
  RenderBounds = CWindowNode::GetShapeBounds(v11, DxClipShapeNoRef, v21, v17);
  v3 = RenderBounds;
  if ( RenderBounds < 0 )
  {
    v15 = 5100;
    goto LABEL_13;
  }
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v19)
    || v16 && v17[0] && TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)v21, (__int64)v19) )
  {
    goto LABEL_28;
  }
  if ( !v7 )
  {
    if ( !*((_QWORD *)this + 130) )
      goto LABEL_28;
    CRectangleShape::Set((CRectangleShape *)v20, (const struct MilRectF *)v19);
    v7 = (struct CShape *)v20;
  }
  if ( !DxClipShapeNoRef )
  {
LABEL_28:
    v14 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               32LL);
    if ( v14 )
      v1 = CRectangleShape::CRectangleShape(v14, 0.0, 0.0, 0.0, 0.0);
    else
      v1 = 0LL;
    if ( !v1 )
    {
      v3 = -2147024882;
      v15 = 5144;
      v12 = -2147024882;
      goto LABEL_15;
    }
LABEL_32:
    CRectangleShape::~CRectangleShape((CRectangleShape *)v20);
LABEL_2:
    v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 158);
    if ( v4 )
      (**v4)(*((_QWORD *)this + 158), 1LL);
    *((_QWORD *)this + 158) = v1;
    v5 = 0LL;
    goto LABEL_5;
  }
  v13 = CShape::Combine((__int64)v7, 0LL, (__int64)DxClipShapeNoRef, 0LL, 2, &v18);
  v3 = v13;
  if ( v13 >= 0 )
  {
    v1 = v18;
    goto LABEL_32;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1411u);
  CRectangleShape::~CRectangleShape((CRectangleShape *)v20);
  v5 = v18;
LABEL_5:
  if ( v5 )
    (**(void (__fastcall ***)(CRectangleShape *, __int64))v5)(v5, 1LL);
  return v3;
}
