/*
 * XREFs of ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z @ 0x1800127EC
 * Callers:
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x180003E44 (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 * Callees:
 *     ??0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z @ 0x1800129F0 (--0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013E6C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearInterpolationLayer::Create(
        struct IRenderTarget *a1,
        const struct _GUID *a2,
        const struct MilPointAndSizeL *a3,
        float a4,
        float a5,
        struct CLinearInterpolationLayer **a6)
{
  struct CLinearInterpolationLayer **v6; // r14
  struct IRenderTargetBitmap *v8; // rdi
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
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
  v8 = 0LL;
  v26 = 0;
  *a6 = 0LL;
  v23 = 0;
  v24 = 0LL;
  memset(v25, 0, 12);
  v11 = *(_QWORD *)a1;
  v20 = 0LL;
  v12 = (*(__int64 (__fastcall **)(struct IRenderTarget *, int *))(v11 + 24))(a1, &v23);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x19u);
  }
  else
  {
    LODWORD(v24) = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 32LL))(a1);
    v14 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 40LL))(a1);
    *(_QWORD *)((char *)v25 + 4) = 0LL;
    HIDWORD(v24) = v14;
    v15 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct CLinearInterpolationLayer ***, int *, _QWORD))(*(_QWORD *)a1 + 104LL))(
            a1,
            &a6,
            &v26,
            0LL);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1Eu);
      return v13;
    }
    v22 = 52;
    v21 = "DWM Scratch Rendertarget (linear interpolation layer";
    v19 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 168LL))(a1);
    v16 = CExternalLayer::CreateRenderTargetBitmap(&v21, a2, a3, &v23, a6, v26, v19, 1, 0, &v20);
    v13 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2Cu);
      v8 = v20;
    }
    else
    {
      v17 = (CLinearInterpolationLayer *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                           WPF::g_pProcessHeap,
                                           136LL);
      v8 = v20;
      if ( v17 )
        v17 = CLinearInterpolationLayer::CLinearInterpolationLayer(v17, a3, v20, a4, a5);
      *v6 = v17;
      if ( !v17 )
      {
        v13 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x32u);
      }
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v8 + 16LL))(v8);
  return v13;
}
