/*
 * XREFs of ?Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@PEAPEAV1@@Z @ 0x18012F438
 * Callers:
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@@Z @ 0x18012430C (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180013A28 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013E6C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorTransformLayer::Create(
        __int64 *a1,
        struct _GUID *a2,
        const struct MilPointAndSizeL *a3,
        __int64 a4,
        CExternalLayer **a5)
{
  CExternalLayer **v5; // r14
  struct IRenderTargetBitmap *v8; // rsi
  __int64 v9; // rax
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  char v16; // al
  int RenderTargetBitmap; // eax
  CExternalLayer *v18; // rax
  CExternalLayer *v19; // rdi
  struct IRenderTargetBitmap *v21; // [rsp+50h] [rbp-30h] BYREF
  const char *v22; // [rsp+58h] [rbp-28h] BYREF
  int v23; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+68h] [rbp-18h] BYREF
  __int64 v25; // [rsp+6Ch] [rbp-14h]
  _BYTE v26[12]; // [rsp+74h] [rbp-Ch] BYREF
  int v27; // [rsp+B0h] [rbp+30h] BYREF

  v5 = a5;
  v25 = 0LL;
  memset(v26, 0, sizeof(v26));
  v8 = 0LL;
  v21 = 0LL;
  v9 = *a1;
  v24 = 0;
  v27 = 0;
  *a5 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, int *))(v9 + 24))(a1, &v24);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x18u);
  }
  else
  {
    LODWORD(v25) = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 32))(a1);
    v14 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 40))(a1);
    *(_QWORD *)&v26[4] = 0LL;
    HIDWORD(v25) = v14;
    v15 = (*(__int64 (__fastcall **)(__int64 *, CExternalLayer ***, int *, _QWORD))(*a1 + 104))(a1, &a5, &v27, 0LL);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1Eu);
      return v13;
    }
    v23 = 48;
    v22 = "DWM Scratch Rendertarget (color transform layer)";
    v16 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 168))(a1);
    RenderTargetBitmap = CExternalLayer::CreateRenderTargetBitmap(
                           (int)&v22,
                           a2,
                           a3,
                           (__int128 *)&v24,
                           (struct _LUID)a5,
                           v27,
                           v16,
                           1,
                           0,
                           (__int64)&v21);
    v13 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x2Cu);
      v8 = v21;
    }
    else
    {
      v18 = (CExternalLayer *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                120LL);
      v19 = v18;
      v8 = v21;
      if ( v18 )
      {
        CExternalLayer::CExternalLayer(v18, a3, v21);
        *((_QWORD *)v19 + 14) = a4;
        *(_QWORD *)v19 = &CColorTransformLayer::`vftable';
      }
      else
      {
        v19 = 0LL;
      }
      *v5 = v19;
      if ( !v19 )
      {
        v13 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x31u);
      }
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v8 + 16LL))(v8);
  return v13;
}
