/*
 * XREFs of ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x180004604
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x180004A08 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 *     ?RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012F070 (-RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x1800039BC (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18002C950 (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x18006F230 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AF478 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@@Z @ 0x18012425C (-PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
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
  __int64 v11; // rdx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v16; // eax
  int v17; // eax
  __int128 v18; // [rsp+60h] [rbp-78h]
  __int128 v19; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp-50h]

  v9 = 0;
  if ( !CShape::IsEmpty(a4) )
  {
    if ( a5 < 0 || a5 > 1 && a5 != 4 || CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 128)) )
    {
      v16 = CDrawingContext::PushClippedBitmapLayer(this);
      v9 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xF94u);
      }
      else
      {
        v17 = CDrawingContext::PopLayerInternal((__int64)this);
        v9 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xF9Au);
      }
    }
    else
    {
      v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v9 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xFA0u);
      }
      else
      {
        DWORD1(v18) = a3[1];
        HIDWORD(v18) = a3[5];
        v11 = 0LL;
        LODWORD(v18) = *a3;
        DWORD2(v18) = a3[4];
        v20 = _mm_unpacklo_ps((__m128)(unsigned int)a3[12], (__m128)(unsigned int)a3[13]).m128_u64[0];
        v19 = v18;
        if ( a5 )
        {
          if ( a5 == 1 )
            v11 = 1LL;
          else
            v11 = 2LL;
        }
        v12 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 81), v11);
        v14 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, CShape *, __int64, __int128 *, _DWORD, bool, int, _DWORD, int))(**((_QWORD **)this + 57) + 120LL))(
                *((_QWORD *)this + 57),
                ((unsigned __int64)this + 128) & -(__int64)(this != 0LL),
                a4,
                a2,
                &v19,
                LODWORD(FLOAT_1_0),
                *((_DWORD *)this + 82) != 0,
                v12,
                0,
                v13);
        v9 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xFACu);
      }
    }
  }
  return v9;
}
