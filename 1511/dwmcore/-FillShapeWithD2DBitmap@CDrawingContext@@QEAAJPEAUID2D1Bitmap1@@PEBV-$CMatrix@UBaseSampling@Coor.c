/*
 * XREFs of ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x18003F4A4
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x18003FD48 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 *     ?RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180115570 (-RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180037090 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18003CA58 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18004DE74 (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AC040 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@@Z @ 0x18010DDEC (-PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
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
  int v15; // eax
  int v16; // eax
  int v18; // eax
  int v19; // eax
  __int128 v20; // [rsp+50h] [rbp-88h]
  __int128 v21; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-60h]

  v9 = 0;
  if ( !CShape::IsEmpty(a4) )
  {
    if ( a5 < 0 || a5 > 1 && a5 != 4 || CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 56)) )
    {
      v18 = CDrawingContext::PushClippedBitmapLayer(this);
      v9 = v18;
      if ( v18 >= 0 )
      {
        v19 = CDrawingContext::PopLayerInternal((__int64)this);
        v9 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xFE4u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xFDEu);
      }
    }
    else
    {
      v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v9 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xFEAu);
      }
      else
      {
        v11 = (__m128)(unsigned int)a3[13];
        DWORD1(v20) = a3[1];
        HIDWORD(v20) = a3[5];
        v12 = (__m128)(unsigned int)a3[12];
        LODWORD(v20) = *a3;
        v13 = a3[4];
        v14 = 0;
        DWORD2(v20) = v13;
        v22 = _mm_unpacklo_ps(v12, v11).m128_u64[0];
        v21 = v20;
        if ( a5 )
        {
          if ( a5 == 1 )
            v14 = 1;
          else
            v14 = 2;
        }
        v15 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 61));
        v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, CShape *, __int64, __int128 *, _DWORD, bool, int, _DWORD, int))(**((_QWORD **)this + 47) + 128LL))(
                *((_QWORD *)this + 47),
                ((unsigned __int64)this + 56) & -(__int64)(this != 0LL),
                a4,
                a2,
                &v21,
                LODWORD(FLOAT_1_0),
                *((_DWORD *)this + 62) != 0,
                v15,
                0,
                v14);
        v9 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xFF6u);
      }
    }
  }
  return v9;
}
