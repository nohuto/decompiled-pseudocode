/*
 * XREFs of ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F3BB4
 * Callers:
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18007BFF0 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18007D438 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B7D20 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::PopStereoContext(__int64 a1, _OWORD *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rsi
  int v4; // eax
  unsigned int v5; // edi

  if ( a2 )
    *a2 = *(_OWORD *)(a1 + 5796);
  v2 = *(_DWORD *)(a1 + 544) - 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 520) + 8LL * v2);
  *(_DWORD *)(a1 + 544) = v2;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, a1);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1198u);
  (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
  return v5;
}
