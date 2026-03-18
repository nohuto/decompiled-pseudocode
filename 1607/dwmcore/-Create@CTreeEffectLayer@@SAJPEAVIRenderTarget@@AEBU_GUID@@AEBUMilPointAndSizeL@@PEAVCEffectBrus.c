/*
 * XREFs of ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x18012FB2C
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@PEA_N@Z @ 0x180003EC0 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180013A28 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013E6C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTreeEffectLayer::Create(
        struct IRenderTarget *a1,
        struct _GUID *a2,
        const struct MilPointAndSizeL *a3,
        struct CEffectBrush *a4,
        const struct CVisual *a5,
        const struct MilPointAndSizeF *a6,
        struct CTreeEffectLayer **a7)
{
  struct CTreeEffectLayer **v7; // r14
  const struct CVisual *v10; // rbx
  __int64 v11; // rax
  int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  char v19; // al
  int RenderTargetBitmap; // eax
  CExternalLayer *v21; // rax
  CExternalLayer *v22; // rsi
  const struct MilPointAndSizeF *v23; // rcx
  const char *v25; // [rsp+50h] [rbp-30h] BYREF
  int v26; // [rsp+58h] [rbp-28h]
  int v27; // [rsp+60h] [rbp-20h] BYREF
  __int64 v28; // [rsp+64h] [rbp-1Ch]
  _QWORD v29[2]; // [rsp+6Ch] [rbp-14h] BYREF
  int v30; // [rsp+B0h] [rbp+30h] BYREF

  v7 = a7;
  v28 = 0LL;
  memset(v29, 0, 12);
  v10 = 0LL;
  a5 = 0LL;
  v11 = *(_QWORD *)a1;
  v27 = 0;
  v30 = 0;
  *a7 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct IRenderTarget *, int *))(v11 + 24))(a1, &v27);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1Cu);
  }
  else
  {
    v16 = *(_QWORD *)a1;
    LODWORD(v28) = 1;
    v17 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(v16 + 40))(a1);
    *(_QWORD *)((char *)v29 + 4) = 0LL;
    HIDWORD(v28) = v17;
    v18 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct CTreeEffectLayer ***, int *, _QWORD))(*(_QWORD *)a1 + 104LL))(
            a1,
            &a7,
            &v30,
            0LL);
    v15 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x22u);
      return v15;
    }
    v26 = 44;
    v25 = "DWM Scratch Rendertarget (tree effect layer)";
    v19 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 168LL))(a1);
    RenderTargetBitmap = CExternalLayer::CreateRenderTargetBitmap(
                           (int)&v25,
                           a2,
                           a3,
                           (__int128 *)&v27,
                           (struct _LUID)a7,
                           v30,
                           v19,
                           1,
                           0,
                           (__int64)&a5);
    v15 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x32u);
      v10 = a5;
    }
    else
    {
      v21 = (CExternalLayer *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                136LL);
      v22 = v21;
      v10 = a5;
      if ( v21 )
      {
        CExternalLayer::CExternalLayer(v21, a3, a5);
        v23 = a6;
        *(_QWORD *)v22 = &CTreeEffectLayer::`vftable';
        *((_QWORD *)v22 + 16) = a4;
        *((_OWORD *)v22 + 7) = *(_OWORD *)v23;
      }
      else
      {
        v22 = 0LL;
      }
      *v7 = v22;
      if ( !v22 )
      {
        v15 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x38u);
      }
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(const struct CVisual *))(*(_QWORD *)v10 + 16LL))(v10);
  return v15;
}
