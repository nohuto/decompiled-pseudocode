/*
 * XREFs of ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z @ 0x1800105C0
 * Callers:
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x18000DE94 (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 * Callees:
 *     ??0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z @ 0x1800109C4 (--0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z.c)
 *     ?GetScratchRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N6PEAPEAVIRenderTargetBitmap@@@Z @ 0x180011040 (-GetScratchRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSiz.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLinearInterpolationLayer::Create(
        struct IRenderTarget *a1,
        const struct _GUID *a2,
        const struct MilPointAndSizeL *a3,
        float a4,
        float a5,
        struct CLinearInterpolationLayer **a6)
{
  struct CLinearInterpolationLayer **v6; // r15
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  int ScratchRenderTargetBitmap; // eax
  struct IRenderTargetBitmap *v15; // rsi
  void *(__fastcall *v16)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // r14
  CLinearInterpolationLayer *v17; // rax
  char v19; // [rsp+38h] [rbp-39h]
  struct IRenderTargetBitmap *v20; // [rsp+58h] [rbp-19h] BYREF
  const char *v21; // [rsp+60h] [rbp-11h] BYREF
  int v22; // [rsp+68h] [rbp-9h]
  int v23; // [rsp+70h] [rbp-1h] BYREF
  __int64 v24; // [rsp+74h] [rbp+3h]
  _QWORD v25[3]; // [rsp+7Ch] [rbp+Bh] BYREF
  int v26; // [rsp+C8h] [rbp+57h] BYREF

  v6 = a6;
  v20 = 0LL;
  v23 = 0;
  *a6 = 0LL;
  v26 = 0;
  v24 = 0LL;
  memset(v25, 0, 12);
  v10 = (*(__int64 (__fastcall **)(struct IRenderTarget *, int *))(*(_QWORD *)a1 + 24LL))(a1, &v23);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x19u);
  }
  else
  {
    LODWORD(v24) = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 32LL))(a1);
    v12 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 40LL))(a1);
    *(_QWORD *)((char *)v25 + 4) = 0LL;
    HIDWORD(v24) = v12;
    v13 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct CLinearInterpolationLayer ***, int *))(*(_QWORD *)a1 + 104LL))(
            a1,
            &a6,
            &v26);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1Eu);
    }
    else
    {
      v22 = 52;
      v21 = "DWM Scratch Rendertarget (linear interpolation layer";
      v19 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 160LL))(a1);
      ScratchRenderTargetBitmap = CExternalLayer::GetScratchRenderTargetBitmap(
                                    &v21,
                                    a2,
                                    a3,
                                    &v23,
                                    a6,
                                    v26,
                                    v19,
                                    0,
                                    &v20);
      v15 = v20;
      v11 = ScratchRenderTargetBitmap;
      if ( ScratchRenderTargetBitmap < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ScratchRenderTargetBitmap, 0x2Bu);
      }
      else
      {
        v16 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL);
        if ( v16 == WPF::ProcessHeapImpl::Alloc )
          v17 = (CLinearInterpolationLayer *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x80uLL);
        else
          v17 = (CLinearInterpolationLayer *)v16(WPF::g_pProcessHeap, 128uLL);
        if ( v17 )
          v17 = CLinearInterpolationLayer::CLinearInterpolationLayer(v17, a3, v15, a4, a5);
        *v6 = v17;
        if ( !v17 )
        {
          v11 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x31u);
        }
      }
      if ( v15 )
        (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  return v11;
}
