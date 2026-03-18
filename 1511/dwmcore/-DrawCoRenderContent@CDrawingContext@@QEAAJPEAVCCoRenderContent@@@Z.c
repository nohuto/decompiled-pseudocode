/*
 * XREFs of ?DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z @ 0x18010C1A0
 * Callers:
 *     ?Draw@CCoRenderContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180132CB0 (-Draw@CCoRenderContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800207C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x1800FA3D4 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawCoRenderContent(CDrawingContext *this, struct CCoRenderContent *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct ID2D1PrivateCompositorRenderer *v6; // rsi
  struct ID2D1PrivateCompositorRenderer **v7; // rbx
  int v8; // eax

  v4 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( a2 )
      v6 = (struct CCoRenderContent *)((char *)a2 + 40);
    else
      v6 = 0LL;
    v7 = (struct ID2D1PrivateCompositorRenderer **)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 184LL))(*((_QWORD *)this + 47));
    CD2DContext::FlushDrawList(v7);
    v8 = CD2DContext::DrawCustomCallbackRendererInternal((CD2DContext *)v7, v6);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC2Bu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xC2Au);
  }
  return v5;
}
