/*
 * XREFs of ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x180012DA4
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@PEA_N@Z @ 0x180003EC0 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180013A28 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013E6C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x180014754 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001484C (-ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffectLayer::Create(
        struct IRenderTarget *a1,
        const struct _GUID *a2,
        const struct MilPointAndSizeL *a3,
        struct CFilterEffect *a4,
        const struct CVisual *a5,
        const struct MilPointAndSizeF *a6,
        struct CFilterEffectLayer **a7)
{
  struct CFilterEffectLayer **v7; // r15
  struct IRenderTargetBitmap *v10; // rsi
  __int64 v11; // rax
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  int v17; // eax
  bool v18; // di
  int v19; // eax
  CExternalLayer *v20; // rax
  CExternalLayer *v21; // rbx
  char v23; // [rsp+30h] [rbp-50h]
  struct IRenderTargetBitmap *v24; // [rsp+50h] [rbp-30h] BYREF
  const char *v25; // [rsp+58h] [rbp-28h] BYREF
  int v26; // [rsp+60h] [rbp-20h]
  int v27; // [rsp+68h] [rbp-18h] BYREF
  __int64 v28; // [rsp+6Ch] [rbp-14h]
  _BYTE v29[12]; // [rsp+74h] [rbp-Ch] BYREF
  int v30; // [rsp+B0h] [rbp+30h] BYREF

  v7 = a7;
  v28 = 0LL;
  memset(v29, 0, sizeof(v29));
  v10 = 0LL;
  v24 = 0LL;
  v11 = *(_QWORD *)a1;
  v27 = 0;
  v30 = 0;
  *a7 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct IRenderTarget *, int *))(v11 + 24))(a1, &v27);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1Eu);
  }
  else
  {
    if ( CFilterEffect::IsOpaque(a4, a5) )
      LODWORD(v28) = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 32LL))(a1);
    else
      LODWORD(v28) = 1;
    v16 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 40LL))(a1);
    *(_QWORD *)&v29[4] = 0LL;
    HIDWORD(v28) = v16;
    v17 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct CFilterEffectLayer ***, int *, _QWORD))(*(_QWORD *)a1 + 104LL))(
            a1,
            &a7,
            &v30,
            0LL);
    v15 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x25u);
      return v15;
    }
    v18 = (unsigned __int8)CFilterEffect::ContainEffectInChain(a4, 10LL)
       || (unsigned __int8)CFilterEffect::ContainEffectInChain(a4, 14LL);
    v26 = 46;
    v25 = "DWM Scratch Rendertarget (filter effect layer)";
    v23 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 168LL))(a1);
    v19 = CExternalLayer::CreateRenderTargetBitmap(&v25, a2, a3, &v27, a7, v30, v23, 1, v18, &v24);
    v15 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x37u);
      v10 = v24;
    }
    else
    {
      v20 = (CExternalLayer *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                136LL);
      v21 = v20;
      v10 = v24;
      if ( v20 )
      {
        CExternalLayer::CExternalLayer(v20, a3, v24);
        *((_QWORD *)v21 + 14) = a4;
        *(_QWORD *)v21 = &CFilterEffectLayer::`vftable';
      }
      else
      {
        v21 = 0LL;
      }
      *v7 = v21;
      if ( v21 )
      {
        *(_OWORD *)((char *)v21 + 120) = *(_OWORD *)a6;
      }
      else
      {
        v15 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Du);
      }
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v10 + 16LL))(v10);
  return v15;
}
