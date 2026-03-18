/*
 * XREFs of ?Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@PEAPEAV1@@Z @ 0x1800FB310
 * Callers:
 *     ?PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@@Z @ 0x1800F3ED4 (-PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
 * Callees:
 *     ?GetScratchRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N6PEAPEAVIRenderTargetBitmap@@@Z @ 0x180001FC0 (-GetScratchRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSiz.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800781CC (-GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??0CClippedBitmapLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@AEBUMilPoint2F@@PEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@@Z @ 0x1800FB0F8 (--0CClippedBitmapLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@AEBUMilPoint2F@@PEAU.c)
 */

__int64 __fastcall CClippedBitmapLayer::Create(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        CRectangleShape *a5,
        __int64 *a6)
{
  int TightBoundsNoBadNumber; // eax
  __m128 v10; // xmm4
  unsigned int v11; // esi
  __m128 v12; // xmm0
  int v13; // eax
  __m128 v14; // xmm2
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  int ScratchRenderTargetBitmap; // eax
  struct IRenderTargetBitmap *v21; // r14
  __int64 v22; // rax
  __int64 v24; // [rsp+28h] [rbp-91h]
  __int64 v25; // [rsp+30h] [rbp-89h]
  __int64 v26; // [rsp+38h] [rbp-81h]
  int v27; // [rsp+54h] [rbp-65h] BYREF
  struct IRenderTargetBitmap *v28; // [rsp+58h] [rbp-61h] BYREF
  int v29; // [rsp+60h] [rbp-59h] BYREF
  __int64 v30; // [rsp+64h] [rbp-55h]
  _BYTE v31[12]; // [rsp+6Ch] [rbp-4Dh] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp-41h] BYREF
  __int64 v33; // [rsp+80h] [rbp-39h] BYREF
  unsigned __int32 v34; // [rsp+88h] [rbp-31h]
  unsigned __int32 v35; // [rsp+8Ch] [rbp-2Dh]
  __int64 v36; // [rsp+90h] [rbp-29h] BYREF
  __int64 v37; // [rsp+98h] [rbp-21h]
  const char *v38; // [rsp+A0h] [rbp-19h] BYREF
  int v39; // [rsp+A8h] [rbp-11h]
  __m128 v40; // [rsp+B0h] [rbp-9h] BYREF

  v37 = a3;
  v28 = 0LL;
  *a6 = 0LL;
  v29 = 0;
  v30 = 0LL;
  memset(v31, 0, sizeof(v31));
  TightBoundsNoBadNumber = CShape::GetTightBoundsNoBadNumber(a5, &v40, 0LL);
  v11 = TightBoundsNoBadNumber;
  if ( TightBoundsNoBadNumber >= 0 )
  {
    v12 = (__m128)v40.m128_u32[2];
    v33 = 0LL;
    v32 = v40.m128_u64[0];
    v13 = (int)(float)(v40.m128_f32[2] - v40.m128_f32[0]);
    v14.m128_f32[0] = v40.m128_f32[2] - v40.m128_f32[0];
    v12.m128_f32[0] = (float)v13;
    v34 = v13 - _mm_cmplt_ss(v12, v14).m128_u32[0];
    v12.m128_f32[0] = v40.m128_f32[3] - v40.m128_f32[1];
    v15 = (int)(float)(v40.m128_f32[3] - v40.m128_f32[1]);
    v10.m128_f32[0] = (float)v15;
    v35 = v15 - _mm_cmplt_ss(v10, v12).m128_u32[0];
    v16 = (*(__int64 (__fastcall **)(__int64 *, int *))(*a1 + 24))(a1, &v29);
    v11 = v16;
    if ( v16 >= 0 )
    {
      v17 = *a1;
      LODWORD(v30) = 1;
      v18 = (*(__int64 (__fastcall **)(__int64 *))(v17 + 40))(a1);
      *(_QWORD *)&v31[4] = 0LL;
      HIDWORD(v30) = v18;
      v19 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, int *))(*a1 + 104))(a1, &v36, &v27);
      v11 = v19;
      if ( v19 >= 0 )
      {
        v39 = 37;
        v38 = "DWM Scratch Rendertarget (clip layer)";
        LOBYTE(v26) = 0;
        LOBYTE(v25) = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 160))(a1);
        LODWORD(v24) = v27;
        ScratchRenderTargetBitmap = CExternalLayer::GetScratchRenderTargetBitmap(
                                      (__int64)&v38,
                                      a2,
                                      &v33,
                                      (__int128 *)&v29,
                                      v36,
                                      v24,
                                      v25,
                                      v26,
                                      &v28);
        v21 = v28;
        v11 = ScratchRenderTargetBitmap;
        if ( ScratchRenderTargetBitmap >= 0 )
        {
          v22 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                  WPF::g_pProcessHeap,
                  200LL);
          if ( v22 )
            v22 = CClippedBitmapLayer::CClippedBitmapLayer(
                    v22,
                    (const struct MilPointAndSizeL *)&v33,
                    v21,
                    (__int64 *)&v32,
                    v37,
                    a4,
                    (__int64)a5);
          *a6 = v22;
          if ( !v22 )
          {
            v11 = -2147024882;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x45u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, ScratchRenderTargetBitmap, 0x3Du);
        }
        if ( v21 )
          (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v21 + 16LL))(v21);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x30u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2Bu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBoundsNoBadNumber, 0x1Bu);
  }
  return v11;
}
