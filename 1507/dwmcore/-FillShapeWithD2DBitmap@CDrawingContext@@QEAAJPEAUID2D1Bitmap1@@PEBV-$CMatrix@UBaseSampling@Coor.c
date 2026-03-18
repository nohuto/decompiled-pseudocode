/*
 * XREFs of ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x18002A884
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x18002B104 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 *     ?RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FB7A0 (-RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180022D40 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180027F54 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18007824C (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@IEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x180097AB0 (-GetD2DInterpolationMode@CDrawingContext@@IEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@@Z @ 0x1800F3ED4 (-PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithD2DBitmap(
        CDrawingContext *this,
        __int64 a2,
        _DWORD *a3,
        CShape *a4,
        int a5)
{
  unsigned int v9; // ebx
  int v10; // eax
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  int v13; // xmm0_4
  int v14; // ebp
  __int64 v15; // r14
  BOOL v16; // edi
  enum D2D1_INTERPOLATION_MODE D2DInterpolationMode; // eax
  __int64 v18; // r8
  int v19; // eax
  int v21; // eax
  int v22; // eax
  __int128 v23; // [rsp+50h] [rbp-88h]
  __int128 v24; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp-60h]

  v9 = 0;
  if ( !CShape::IsEmpty(a4) )
  {
    if ( a5 < 0 || a5 > 1 && a5 != 4 || CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 56)) )
    {
      v21 = CDrawingContext::PushClippedBitmapLayer(this);
      v9 = v21;
      if ( v21 >= 0 )
      {
        v22 = CDrawingContext::PopLayerInternal((__int64)this);
        v9 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xFCDu);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xFC7u);
      }
    }
    else
    {
      v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v9 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xFD3u);
      }
      else
      {
        v11 = (__m128)(unsigned int)a3[13];
        DWORD1(v23) = a3[1];
        HIDWORD(v23) = a3[5];
        v12 = (__m128)(unsigned int)a3[12];
        LODWORD(v23) = *a3;
        v13 = a3[4];
        v14 = 0;
        DWORD2(v23) = v13;
        v25 = _mm_unpacklo_ps(v12, v11).m128_u64[0];
        v24 = v23;
        if ( a5 )
        {
          if ( a5 == 1 )
            v14 = 1;
          else
            v14 = 2;
        }
        v15 = *((_QWORD *)this + 47);
        v16 = *((_DWORD *)this + 62) != 0;
        D2DInterpolationMode = CDrawingContext::GetD2DInterpolationMode(this);
        v19 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, CShape *, __int64, __int128 *, _DWORD, BOOL, enum D2D1_INTERPOLATION_MODE, _DWORD, int))(v18 + 128))(
                v15,
                ((unsigned __int64)this + 56) & -(__int64)(this != 0LL),
                a4,
                a2,
                &v24,
                LODWORD(FLOAT_1_0),
                v16,
                D2DInterpolationMode,
                0,
                v14);
        v9 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xFDFu);
      }
    }
  }
  return v9;
}
