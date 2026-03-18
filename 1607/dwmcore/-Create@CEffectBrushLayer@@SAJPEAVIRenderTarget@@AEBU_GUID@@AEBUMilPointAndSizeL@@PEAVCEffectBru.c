/*
 * XREFs of ?Create@CEffectBrushLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEAPEAV1@@Z @ 0x18012E3AC
 * Callers:
 *     ?PushEffectBrushLayer@CDrawingContext@@QEAAJPEBVCVisual@@AEBUD2D_SIZE_F@@PEAVCEffectBrush@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801243FC (-PushEffectBrushLayer@CDrawingContext@@QEAAJPEBVCVisual@@AEBUD2D_SIZE_F@@PEAVCEffectBrush@@PEAPE.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180013A28 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013E6C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrushLayer::Create(
        struct IRenderTarget *a1,
        struct _GUID *a2,
        const struct MilPointAndSizeL *a3,
        struct CEffectBrush *a4,
        struct CEffectBrushLayer **a5)
{
  struct CEffectBrushLayer **v5; // r14
  struct IRenderTargetBitmap *v8; // rsi
  __int64 v9; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  char v17; // al
  int RenderTargetBitmap; // eax
  CExternalLayer *v19; // rax
  CExternalLayer *v20; // rdi
  struct IRenderTargetBitmap *v22; // [rsp+50h] [rbp-30h] BYREF
  const char *v23; // [rsp+58h] [rbp-28h] BYREF
  int v24; // [rsp+60h] [rbp-20h]
  int v25; // [rsp+68h] [rbp-18h] BYREF
  __int64 v26; // [rsp+6Ch] [rbp-14h]
  _BYTE v27[12]; // [rsp+74h] [rbp-Ch] BYREF
  int v28; // [rsp+B0h] [rbp+30h] BYREF

  v5 = a5;
  v26 = 0LL;
  memset(v27, 0, sizeof(v27));
  v8 = 0LL;
  v22 = 0LL;
  v9 = *(_QWORD *)a1;
  v25 = 0;
  v28 = 0;
  *a5 = 0LL;
  v12 = (*(__int64 (__fastcall **)(struct IRenderTarget *, int *))(v9 + 24))(a1, &v25);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x23u);
  }
  else
  {
    v14 = *(_QWORD *)a1;
    LODWORD(v26) = 1;
    v15 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(v14 + 40))(a1);
    *(_QWORD *)&v27[4] = 0LL;
    HIDWORD(v26) = v15;
    v16 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct CEffectBrushLayer ***, int *, _QWORD))(*(_QWORD *)a1 + 104LL))(
            a1,
            &a5,
            &v28,
            0LL);
    v13 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x28u);
      return v13;
    }
    v24 = 30;
    v23 = "BrushEffect Intermediate Input";
    v17 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 168LL))(a1);
    RenderTargetBitmap = CExternalLayer::CreateRenderTargetBitmap(
                           (int)&v23,
                           a2,
                           a3,
                           (__int128 *)&v25,
                           (struct _LUID)a5,
                           v28,
                           v17,
                           0,
                           1,
                           (__int64)&v22);
    v13 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x37u);
      v8 = v22;
    }
    else
    {
      v19 = (CExternalLayer *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                120LL);
      v20 = v19;
      v8 = v22;
      if ( v19 )
      {
        CExternalLayer::CExternalLayer(v19, a3, v22);
        *((_QWORD *)v20 + 14) = a4;
        *(_QWORD *)v20 = &CEffectBrushLayer::`vftable';
      }
      else
      {
        v20 = 0LL;
      }
      *v5 = v20;
      if ( !v20 )
      {
        v13 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x42u);
      }
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v8 + 16LL))(v8);
  return v13;
}
