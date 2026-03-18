/*
 * XREFs of ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x18012D01C
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180112BF0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CDirectFlipInfo::GetCurrentRealizationAsRenderTarget(
        CDirectFlipInfo *this,
        struct IRenderTargetBitmap **a2)
{
  CCompositionSurfaceInfo *v3; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 *v6; // rcx
  struct CBitmapRealization *v7; // rdi
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64 *, struct _LUID *, int *, _QWORD); // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
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
  v20 = 0;
  v7 = RenderingRealizationNoRef;
  v19 = 0LL;
  v8 = *v6;
  v18[2] = 1;
  v18[0] = 87;
  v9 = *(__int64 (__fastcall **)(__int64 *, struct _LUID *, int *, _QWORD))(v8 + 104);
  v18[1] = 3;
  v10 = v9(v6, &v17, &v20, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1DFu);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(struct CBitmapRealization *, __int64 *, _QWORD))(*(_QWORD *)v7 + 80LL))(
            v7,
            &v21,
            0LL);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1E1u);
    }
    else
    {
      v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v21)(
              v21,
              &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
              &v22);
      v11 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1E3u);
      }
      else
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 24LL) + 8LL))(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL));
        RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                          (__int64)&qword_1801F0018,
                                          1LL,
                                          0LL,
                                          (__int64)v18,
                                          (struct _GUID *)(v14 + 252),
                                          v17,
                                          v20,
                                          v22,
                                          a2);
        v11 = RenderTargetBitmapFromTexture;
        if ( RenderTargetBitmapFromTexture < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmapFromTexture, 0x1EEu);
      }
    }
  }
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return v11;
}
