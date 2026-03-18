/*
 * XREFs of ?UpdateSpriteClipShape@CWindowNode@@AEAAJXZ @ 0x1800267DC
 * Callers:
 *     ?GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x180026748 (-GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180027F90 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180028480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180001748 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x1800266EC (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x180026878 (-IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x180028FEC (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18002CBC0 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004B848 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800979B0 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180097F28 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetShapeBounds@CWindowNode@@AEBAJPEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180140288 (-GetShapeBounds@CWindowNode@@AEBAJPEAVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 */

__int64 __fastcall CWindowNode::UpdateSpriteClipShape(struct D2D_SIZE_F *this)
{
  struct CShape *v1; // rbx
  unsigned int v3; // edi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  struct CShape *v5; // rcx
  struct CShape *DxClipShapeNoRef; // rax
  __int64 v8; // r14
  CGeometry *v9; // rcx
  int RenderBounds; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // [rsp+20h] [rbp-59h]
  char v16; // [rsp+30h] [rbp-49h] BYREF
  char v17[7]; // [rsp+31h] [rbp-48h] BYREF
  struct CShape *v18; // [rsp+38h] [rbp-41h] BYREF
  struct CShape *v19[2]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v20[3]; // [rsp+50h] [rbp-29h] BYREF
  int v21; // [rsp+68h] [rbp-11h]
  int v22; // [rsp+6Ch] [rbp-Dh]
  int v23; // [rsp+70h] [rbp-9h]
  _BYTE v24[16]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v25; // [rsp+88h] [rbp+Fh]
  _BYTE v26[16]; // [rsp+90h] [rbp+17h] BYREF

  v1 = 0LL;
  v18 = 0LL;
  v3 = 0;
  if ( !CWindowNode::IsDxShapeExclusionNeeded((CWindowNode *)this) )
    goto LABEL_2;
  DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef((CWindowNode *)this);
  v23 = 0;
  v25 = 0LL;
  v8 = (__int64)DxClipShapeNoRef;
  v9 = (CGeometry *)this[105];
  v20[1] = v24;
  v20[2] = v24;
  v19[0] = 0LL;
  v20[0] = &CRectanglesShape::`vftable';
  v21 = 1;
  v22 = 1;
  if ( v9 )
  {
    CGeometry::GetShapeDataNoRef(v9, this + 24, v19);
    v1 = v19[0];
  }
  RenderBounds = CWindowNode::GetRenderBounds(this, *(_QWORD *)&this[100], v1, v19, &v16, 0LL);
  v3 = RenderBounds;
  if ( RenderBounds < 0 )
  {
    v15 = 5049;
    goto LABEL_30;
  }
  RenderBounds = CWindowNode::GetShapeBounds(v11, v8, v26, v17);
  v3 = RenderBounds;
  if ( RenderBounds < 0 )
  {
    v15 = 5050;
LABEL_30:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderBounds, v15);
    goto LABEL_31;
  }
  if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v19)
    || v16 && v17[0] && (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(v26, v19) )
  {
    goto LABEL_24;
  }
  if ( v1 )
    goto LABEL_19;
  if ( !*(_QWORD *)&this[100] )
  {
LABEL_24:
    v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            64LL);
    v1 = (struct CShape *)v14;
    if ( v14 )
    {
      *(_QWORD *)v14 = &CRectanglesShape::`vftable';
      *(_DWORD *)(v14 + 32) = 0;
      *(_QWORD *)(v14 + 8) = v14 + 40;
      *(_QWORD *)(v14 + 16) = v14 + 40;
      *(_DWORD *)(v14 + 24) = 1;
      *(_DWORD *)(v14 + 28) = 1;
      *(_QWORD *)(v14 + 56) = 0LL;
    }
    else
    {
      v1 = 0LL;
    }
    if ( v1 )
      goto LABEL_23;
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x13E6u);
LABEL_31:
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v20);
    return v3;
  }
  CRectanglesShape::SetSingleRect((CRectanglesShape *)v20, (const struct MilRectF *)v19);
  v1 = (struct CShape *)v20;
LABEL_19:
  if ( !v8 )
    goto LABEL_24;
  v13 = CShape::Combine((__int64)v1, v12, v8, 0LL, 2, &v18);
  v3 = v13;
  if ( v13 >= 0 )
  {
    v1 = v18;
LABEL_23:
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v20);
LABEL_2:
    v4 = (void (__fastcall ***)(_QWORD, __int64))this[128];
    if ( v4 )
      (**v4)(v4, 1LL);
    this[128] = (struct D2D_SIZE_F)v1;
    v5 = 0LL;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x13DFu);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v20);
  v5 = v18;
LABEL_5:
  if ( v5 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v5)(v5, 1LL);
  return v3;
}
