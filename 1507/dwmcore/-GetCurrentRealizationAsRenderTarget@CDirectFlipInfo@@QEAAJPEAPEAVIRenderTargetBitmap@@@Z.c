/*
 * XREFs of ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800EEF9C
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180007664 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ @ 0x180087B20 (-GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180132B30 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CDirectFlipInfo::GetCurrentRealizationAsRenderTarget(
        CDirectFlipInfo *this,
        struct IRenderTargetBitmap **a2)
{
  CCompositionSurfaceInfo *v3; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 *v6; // rdi
  struct CBitmapRealization *v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  struct CComposition *(__fastcall *v13)(CSurfaceManager *); // rdi
  struct CComposition *CompositionNoRef; // rax
  int RenderTargetBitmapFromTexture; // eax
  struct _LUID v17; // [rsp+58h] [rbp-28h] BYREF
  int v18[4]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h]
  int v20; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v21; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+48h] BYREF

  v21 = 0LL;
  v3 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 4);
  v22 = 0LL;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v3);
  v6 = (__int64 *)*((_QWORD *)this + 2);
  v7 = RenderingRealizationNoRef;
  v19 = 0LL;
  v8 = *v6;
  v18[0] = 87;
  v18[1] = 3;
  v18[2] = 1;
  v9 = (*(__int64 (__fastcall **)(__int64 *, struct _LUID *, int *))(v8 + 104))(v6, &v17, &v20);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(struct CBitmapRealization *, __int64 *, _QWORD))(*(_QWORD *)v7 + 80LL))(
            v7,
            &v21,
            0LL);
    v10 = v11;
    if ( v11 >= 0 )
    {
      v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v21)(
              v21,
              &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
              &v22);
      v10 = v12;
      if ( v12 >= 0 )
      {
        v13 = *(struct CComposition *(__fastcall **)(CSurfaceManager *))(**(_QWORD **)(*((_QWORD *)this + 4) + 24LL)
                                                                       + 8LL);
        if ( v13 == CSurfaceManager::GetCompositionNoRef )
          CompositionNoRef = CSurfaceManager::GetCompositionNoRef(*(CSurfaceManager **)(*((_QWORD *)this + 4) + 24LL));
        else
          CompositionNoRef = v13(*(CSurfaceManager **)(*((_QWORD *)this + 4) + 24LL));
        RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                          (int)&qword_180195D88,
                                          1,
                                          0,
                                          (int)v18,
                                          (struct _GUID *)((char *)CompositionNoRef + 252),
                                          v17,
                                          v20,
                                          v22,
                                          (__int64)a2);
        v10 = RenderTargetBitmapFromTexture;
        if ( RenderTargetBitmapFromTexture < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmapFromTexture, 0x1D8u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1CDu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1CBu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1C9u);
  }
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return v10;
}
