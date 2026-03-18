/*
 * XREFs of ?Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@PEAPEAV1@@Z @ 0x18012EC18
 * Callers:
 *     ?PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@@Z @ 0x18012425C (-PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
 * Callees:
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013E6C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ?GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002C8E0 (-GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CClippedBitmapLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@AEBUMilPoint2F@@PEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@@Z @ 0x18012EA04 (--0CClippedBitmapLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@AEBUMilPoint2F@@PEAU.c)
 */

__int64 __fastcall CClippedBitmapLayer::Create(
        __int64 *a1,
        struct _GUID *a2,
        __int64 a3,
        __int64 a4,
        CRegionShape *a5,
        __int64 *a6)
{
  struct IRenderTargetBitmap *v8; // rdi
  int TightBoundsNoBadNumber; // eax
  __m128 v11; // xmm4
  unsigned int v12; // ebx
  __m128 v13; // xmm0
  int v14; // eax
  __m128 v15; // xmm2
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  char v21; // al
  int v22; // eax
  __int64 v23; // rax
  int v25; // [rsp+54h] [rbp-65h] BYREF
  struct IRenderTargetBitmap *v26; // [rsp+58h] [rbp-61h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-59h] BYREF
  __int64 v28; // [rsp+68h] [rbp-51h] BYREF
  unsigned __int32 v29; // [rsp+70h] [rbp-49h]
  unsigned __int32 v30; // [rsp+74h] [rbp-45h]
  int v31; // [rsp+78h] [rbp-41h] BYREF
  __int64 v32; // [rsp+7Ch] [rbp-3Dh]
  _BYTE v33[12]; // [rsp+84h] [rbp-35h] BYREF
  struct _LUID v34; // [rsp+90h] [rbp-29h] BYREF
  struct _GUID *v35; // [rsp+98h] [rbp-21h]
  const char *v36; // [rsp+A0h] [rbp-19h] BYREF
  int v37; // [rsp+A8h] [rbp-11h]
  __m128 v38; // [rsp+B0h] [rbp-9h] BYREF

  v35 = a2;
  v26 = 0LL;
  *a6 = 0LL;
  v8 = 0LL;
  v31 = 0;
  v25 = 0;
  v32 = 0LL;
  memset(v33, 0, sizeof(v33));
  TightBoundsNoBadNumber = CShape::GetTightBoundsNoBadNumber(a5, &v38);
  v12 = TightBoundsNoBadNumber;
  if ( TightBoundsNoBadNumber < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBoundsNoBadNumber, 0x1Bu);
  }
  else
  {
    v13 = (__m128)v38.m128_u32[2];
    v27 = v38.m128_u64[0];
    v28 = 0LL;
    v14 = (int)(float)(v38.m128_f32[2] - v38.m128_f32[0]);
    v15.m128_f32[0] = v38.m128_f32[2] - v38.m128_f32[0];
    v13.m128_f32[0] = (float)v14;
    v29 = v14 - _mm_cmplt_ss(v13, v15).m128_u32[0];
    v13.m128_f32[0] = v38.m128_f32[3] - v38.m128_f32[1];
    v16 = (int)(float)(v38.m128_f32[3] - v38.m128_f32[1]);
    v11.m128_f32[0] = (float)v16;
    v30 = v16 - _mm_cmplt_ss(v11, v13).m128_u32[0];
    v17 = (*(__int64 (__fastcall **)(__int64 *, int *))(*a1 + 24))(a1, &v31);
    v12 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x2Bu);
      return v12;
    }
    v18 = *a1;
    LODWORD(v32) = 1;
    v19 = (*(__int64 (__fastcall **)(__int64 *))(v18 + 40))(a1);
    *(_QWORD *)&v33[4] = 0LL;
    HIDWORD(v32) = v19;
    v20 = (*(__int64 (__fastcall **)(__int64 *, struct _LUID *, int *, _QWORD))(*a1 + 104))(a1, &v34, &v25, 0LL);
    v12 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x30u);
      return v12;
    }
    v37 = 37;
    v36 = "DWM Scratch Rendertarget (clip layer)";
    v21 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 168))(a1);
    v22 = CExternalLayer::CreateRenderTargetBitmap(
            (int)&v36,
            v35,
            &v28,
            (__int128 *)&v31,
            v34,
            v25,
            v21,
            1,
            0,
            (__int64)&v26);
    v12 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x3Eu);
      v8 = v26;
    }
    else
    {
      v23 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              216LL);
      v8 = v26;
      if ( v23 )
        v23 = CClippedBitmapLayer::CClippedBitmapLayer(
                v23,
                (const struct MilPointAndSizeL *)&v28,
                v26,
                (__int64 *)&v27,
                a3,
                a4,
                (__int64)a5);
      *a6 = v23;
      if ( !v23 )
      {
        v12 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x46u);
      }
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v8 + 16LL))(v8);
  return v12;
}
