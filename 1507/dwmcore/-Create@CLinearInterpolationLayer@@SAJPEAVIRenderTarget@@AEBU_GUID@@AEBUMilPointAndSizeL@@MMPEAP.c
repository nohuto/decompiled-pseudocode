/*
 * XREFs of ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z @ 0x1800FC17C
 * Callers:
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x1800F40AC (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 * Callees:
 *     ?GetScratchRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N6PEAPEAVIRenderTargetBitmap@@@Z @ 0x180001FC0 (-GetScratchRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSiz.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z @ 0x1800FBFCC (--0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z.c)
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
  unsigned int v11; // esi
  int v12; // eax
  int v13; // eax
  int ScratchRenderTargetBitmap; // eax
  struct IRenderTargetBitmap *v15; // r14
  CLinearInterpolationLayer *v16; // rax
  __int64 v18; // [rsp+30h] [rbp-41h]
  __int64 v19; // [rsp+38h] [rbp-39h]
  __int64 v20; // [rsp+40h] [rbp-31h]
  __int64 v21; // [rsp+58h] [rbp-19h] BYREF
  const char *v22; // [rsp+60h] [rbp-11h] BYREF
  int v23; // [rsp+68h] [rbp-9h]
  int v24; // [rsp+70h] [rbp-1h] BYREF
  __int64 v25; // [rsp+74h] [rbp+3h]
  _QWORD v26[3]; // [rsp+7Ch] [rbp+Bh] BYREF
  struct IRenderTargetBitmap *v27; // [rsp+C8h] [rbp+57h] BYREF

  v6 = a6;
  v27 = 0LL;
  v24 = 0;
  *a6 = 0LL;
  v25 = 0LL;
  memset(v26, 0, 12);
  v10 = (*(__int64 (__fastcall **)(struct IRenderTarget *, int *))(*(_QWORD *)a1 + 24LL))(a1, &v24);
  v11 = v10;
  if ( v10 >= 0 )
  {
    LODWORD(v25) = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 32LL))(a1);
    v12 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 40LL))(a1);
    *(_QWORD *)((char *)v26 + 4) = 0LL;
    HIDWORD(v25) = v12;
    v13 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *, struct CLinearInterpolationLayer ***))(*(_QWORD *)a1 + 104LL))(
            a1,
            &v21,
            &a6);
    v11 = v13;
    if ( v13 >= 0 )
    {
      v23 = 52;
      v22 = "DWM Scratch Rendertarget (linear interpolation layer";
      LOBYTE(v20) = 0;
      LOBYTE(v19) = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 160LL))(a1);
      LODWORD(v18) = (_DWORD)a6;
      ScratchRenderTargetBitmap = CExternalLayer::GetScratchRenderTargetBitmap(
                                    (__int64)&v22,
                                    (__int64)a2,
                                    a3,
                                    (__int128 *)&v24,
                                    v21,
                                    v18,
                                    v19,
                                    v20,
                                    &v27);
      v15 = v27;
      v11 = ScratchRenderTargetBitmap;
      if ( ScratchRenderTargetBitmap >= 0 )
      {
        v16 = (CLinearInterpolationLayer *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                             WPF::g_pProcessHeap,
                                             128LL);
        if ( v16 )
          v16 = CLinearInterpolationLayer::CLinearInterpolationLayer(v16, a3, v15, a4, a5);
        *v6 = v16;
        if ( !v16 )
        {
          v11 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x31u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ScratchRenderTargetBitmap, 0x2Bu);
      }
      if ( v15 )
        (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1Eu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x19u);
  }
  return v11;
}
