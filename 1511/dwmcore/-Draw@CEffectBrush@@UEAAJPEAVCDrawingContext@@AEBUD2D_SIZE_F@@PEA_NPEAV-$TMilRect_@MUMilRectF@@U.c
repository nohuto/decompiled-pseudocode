/*
 * XREFs of ?Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180122930
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18000CA24 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x18000E09C (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180037068 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180043690 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z @ 0x1800F4D70 (-SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z @ 0x18010B978 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@QEBA_NXZ @ 0x180123054 (-IsReadyToDraw@CEffectBrush@@QEBA_NXZ.c)
 */

__int64 __fastcall CEffectBrush::Draw(struct CEffectBrush *a1, CDrawingContext *this, FLOAT *a3)
{
  __int64 v3; // rbx
  FLOAT v7; // xmm0_4
  FLOAT v8; // xmm1_4
  struct CVisual *CurrentVisual; // r14
  unsigned int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // r9
  int v13; // eax
  struct D2D_RECT_F v15; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( *a3 != 0.0 && a3[1] != 0.0 && CEffectBrush::IsReadyToDraw(a1) )
  {
    v7 = *a3;
    v8 = a3[1];
    v15.left = 0.0;
    v15.top = 0.0;
    v15.right = v7;
    v15.bottom = v8;
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 56));
    if ( !(unsigned __int8)CDrawingContext::IsBounding(this) )
    {
      v10 = *((_DWORD *)a1 + 52);
      if ( v10 )
      {
        v11 = v10;
        do
        {
          if ( (unsigned __int8)CCompositionSurfaceBitmap::IsSwapChain(*(CCompositionSurfaceBitmap **)(*(_QWORD *)(v3 + *((_QWORD *)a1 + 23)) + 64LL)) )
          {
            CDrawingContext::IsDirectRenderingToDisplayRenderTarget(this);
            CCompositionSurfaceBitmap::SetCompositionMode(v12 + 40);
          }
          v3 += 8LL;
          --v11;
        }
        while ( v11 );
      }
    }
    v13 = CDrawingContext::DrawBrushEffect(this, CurrentVisual, a1, &v15);
    LODWORD(v3) = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xA6u);
  }
  return (unsigned int)v3;
}
