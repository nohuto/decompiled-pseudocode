/*
 * XREFs of ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x180001608
 * Callers:
 *     ?PushFilterEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCFilterEffect@@@Z @ 0x1800104D0 (-PushFilterEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180001D44 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?GetScratchRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N6PEAPEAVIRenderTargetBitmap@@@Z @ 0x180001FC0 (-GetScratchRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSiz.c)
 *     ?ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180002534 (-ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x1800026A0 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  struct CFilterEffectLayer **v7; // r12
  __int64 v11; // rax
  int v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  int v16; // eax
  int ScratchRenderTargetBitmap; // eax
  CExternalLayer *v18; // rax
  CExternalLayer *v19; // rbx
  struct IRenderTargetBitmap *v20; // rdi
  int v22; // eax
  char v23; // [rsp+30h] [rbp-50h]
  char v24; // [rsp+30h] [rbp-50h]
  __int64 v25; // [rsp+50h] [rbp-30h] BYREF
  const char *v26; // [rsp+58h] [rbp-28h] BYREF
  int v27; // [rsp+60h] [rbp-20h]
  int v28; // [rsp+68h] [rbp-18h] BYREF
  __int64 v29; // [rsp+6Ch] [rbp-14h]
  _BYTE v30[12]; // [rsp+74h] [rbp-Ch] BYREF
  struct IRenderTargetBitmap *v31; // [rsp+B0h] [rbp+30h] BYREF

  v7 = a7;
  v29 = 0LL;
  memset(v30, 0, sizeof(v30));
  v31 = 0LL;
  v11 = *(_QWORD *)a1;
  v28 = 0;
  *a7 = 0LL;
  v13 = (*(__int64 (__fastcall **)(struct IRenderTarget *, int *))(v11 + 24))(a1, &v28);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1Eu);
    return v14;
  }
  if ( CFilterEffect::IsOpaque(a4, a5) )
    LODWORD(v29) = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 32LL))(a1);
  else
    LODWORD(v29) = 1;
  v15 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 40LL))(a1);
  *(_QWORD *)&v30[4] = 0LL;
  HIDWORD(v29) = v15;
  v16 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *, struct CFilterEffectLayer ***))(*(_QWORD *)a1 + 104LL))(
          a1,
          &v25,
          &a7);
  v14 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x25u);
    return v14;
  }
  if ( (unsigned __int8)CFilterEffect::ContainEffectInChain(a4, 10LL)
    || (unsigned __int8)CFilterEffect::ContainEffectInChain(a4, 14LL) )
  {
    v27 = 46;
    v26 = "DWM Scratch Rendertarget (filter effect layer)";
    v23 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 160LL))(a1);
    ScratchRenderTargetBitmap = CExternalLayer::GetScratchRenderTargetBitmap(
                                  &v26,
                                  a2,
                                  a3,
                                  &v28,
                                  v25,
                                  (_DWORD)a7,
                                  v23,
                                  1,
                                  &v31);
    v14 = ScratchRenderTargetBitmap;
    if ( ScratchRenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ScratchRenderTargetBitmap, 0x36u);
      goto LABEL_23;
    }
LABEL_7:
    v18 = (CExternalLayer *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              128LL);
    v19 = v18;
    v20 = v31;
    if ( v18 )
    {
      CExternalLayer::CExternalLayer(v18, a3, v31);
      *((_QWORD *)v19 + 13) = a4;
      *(_QWORD *)v19 = &CFilterEffectLayer::`vftable';
    }
    else
    {
      v19 = 0LL;
    }
    *v7 = v19;
    if ( v19 )
    {
      *((_OWORD *)v19 + 7) = *(_OWORD *)a6;
    }
    else
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x49u);
    }
    goto LABEL_11;
  }
  v27 = 46;
  v26 = "DWM Scratch Rendertarget (filter effect layer)";
  v24 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 160LL))(a1);
  v22 = CExternalLayer::GetScratchRenderTargetBitmap(&v26, a2, a3, &v28, v25, (_DWORD)a7, v24, 0, &v31);
  v14 = v22;
  if ( v22 >= 0 )
    goto LABEL_7;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x42u);
LABEL_23:
  v20 = v31;
LABEL_11:
  if ( v20 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v20 + 16LL))(v20);
  return v14;
}
