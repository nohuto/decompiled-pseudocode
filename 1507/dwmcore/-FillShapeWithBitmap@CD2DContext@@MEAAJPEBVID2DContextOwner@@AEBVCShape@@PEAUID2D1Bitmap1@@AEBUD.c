/*
 * XREFs of ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180071DB0
 * Callers:
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002C9D0 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 * Callees:
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180071408 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180071584 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180071660 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?SetBitmap@CD2DBitmapBrushWrapper@@QEAAXPEAUID2D1Bitmap1@@AEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@AEBUD2D1_BRUSH_PROPERTIES@@@Z @ 0x180072F84 (-SetBitmap@CD2DBitmapBrushWrapper@@QEAAXPEAUID2D1Bitmap1@@AEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@AEB.c)
 *     ??0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180076174 (--0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180077FF0 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800785F0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 *     Template_ffff @ 0x1800F4F28 (Template_ffff.c)
 */

__int64 __fastcall CD2DContext::FillShapeWithBitmap(
        CD2DBitmapBrushWrapper **this,
        const struct ID2DContextOwner *a2,
        const struct CShape *a3,
        struct ID2D1Bitmap1 *a4,
        const struct D2D_MATRIX_3X2_F *a5,
        FLOAT a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_INTERPOLATION_MODE a8,
        enum D2D1_EXTEND_MODE a9,
        enum D2D1_PRIMITIVE_BLEND a10)
{
  __int64 v14; // xmm1_8
  __int128 v15; // xmm0
  __int64 (__fastcall *v16)(CComplexShape *); // rbx
  int TightBounds; // eax
  unsigned int v18; // r14d
  __int64 (__fastcall *v19)(CRegionShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rbx
  int D2DGeometry; // eax
  CD2DBitmapBrushWrapper *v22; // rsi
  CD2DBitmapBrushWrapper *v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  unsigned int v29; // eax
  __int64 v30; // rcx
  struct ID2D1Geometry *v31; // [rsp+30h] [rbp-A9h] BYREF
  struct D2D_MATRIX_3X2_F v32; // [rsp+38h] [rbp-A1h] BYREF
  __int128 v33; // [rsp+50h] [rbp-89h] BYREF
  __int128 v34; // [rsp+60h] [rbp-79h] BYREF
  struct D2D1_BRUSH_PROPERTIES v35; // [rsp+70h] [rbp-69h] BYREF
  _BYTE v36[64]; // [rsp+90h] [rbp-49h] BYREF

  CD2DContext::FlushDrawList((CD2DContext *)this);
  v14 = *(_QWORD *)&a5->m[2][0];
  v31 = 0LL;
  v35.opacity = a6;
  v15 = *(_OWORD *)&a5->m11;
  LODWORD(v33) = a9;
  *(_QWORD *)((char *)&v33 + 4) = __PAIR64__(a8, a9);
  *(_OWORD *)&v35.transform.m11 = v15;
  *(_QWORD *)&v35.transform.m[2][0] = v14;
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v24 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v25, &EVTDESC_ETWGUID_DRAWEVENT_Start, 14LL, v24);
  }
  CD2DContext::SetCommonState((CD2DContext *)this, a2, a10, &a7, &v32);
  CD2DBitmapBrushWrapper::SetBitmap(this[19], a4, (const struct D2D1_BITMAP_BRUSH_PROPERTIES1 *)&v33, &v35);
  v16 = *(__int64 (__fastcall **)(CComplexShape *))(*(_QWORD *)a3 + 24LL);
  if ( v16 == CShape::GetTightBounds )
    TightBounds = CShape::GetTightBounds(a3);
  else
    TightBounds = ((__int64 (__fastcall *)(const struct CShape *, __int128 *, _QWORD))v16)(a3, &v34, 0LL);
  v18 = TightBounds;
  if ( TightBounds < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x59Fu);
  }
  else if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v34) )
  {
    if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
    {
      CMILMatrix::CMILMatrix((CMILMatrix *)v36, &v32);
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)v36, (const struct MilRectF *)&v34, (struct MilRectF *)&v33);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_ffff(v26, (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT, v27, v28, SBYTE8(v33), SBYTE12(v33));
    }
    if ( (*(unsigned int (__fastcall **)(const struct CShape *))(*(_QWORD *)a3 + 8LL))(a3) )
    {
      v19 = *(__int64 (__fastcall **)(CRegionShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a3 + 16LL);
      if ( v19 == CRegionShape::GetD2DGeometry )
        D2DGeometry = CRegionShape::GetD2DGeometry(a3, 0LL, &v31);
      else
        D2DGeometry = v19(a3, 0LL, &v31);
      v18 = D2DGeometry;
      if ( D2DGeometry < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DGeometry, 0x5BFu);
      else
        (*(void (__fastcall **)(CD2DBitmapBrushWrapper *, struct ID2D1Geometry *, _QWORD, _QWORD))(*(_QWORD *)this[5]
                                                                                                 + 184LL))(
          this[5],
          v31,
          *((_QWORD *)this[19] + 2),
          0LL);
    }
    else
    {
      v22 = this[5];
      v23 = this[19];
      v33 = v34;
      (*(void (__fastcall **)(CD2DBitmapBrushWrapper *, __int128 *, _QWORD))(*(_QWORD *)v22 + 136LL))(
        v22,
        &v33,
        *((_QWORD *)v23 + 2));
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this[19] + 2) + 88LL))(
    *((_QWORD *)this[19] + 2),
    *((_QWORD *)this[19] + 3));
  if ( v31 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v31 + 16LL))(v31);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v29 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v30, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 14LL, v29);
  }
  return v18;
}
