/*
 * XREFs of ?DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z @ 0x1800F1FFC
 * Callers:
 *     ?Draw@CCoRenderContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011C070 (-Draw@CCoRenderContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180071660 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x1800DDA3C (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawCoRenderContent(CDrawingContext *this, struct CCoRenderContent *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct ID2D1PrivateCompositorRenderer *v6; // rsi
  CD2DContext *v7; // rbx
  int v8; // eax

  v4 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( a2 )
      v6 = (struct CCoRenderContent *)((char *)a2 + 40);
    else
      v6 = 0LL;
    v7 = (CD2DContext *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 184LL))(*((_QWORD *)this + 47));
    CD2DContext::FlushDrawList(v7);
    v8 = CD2DContext::DrawCustomCallbackRendererInternal(v7, v6);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC16u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xC15u);
  }
  return v5;
}
