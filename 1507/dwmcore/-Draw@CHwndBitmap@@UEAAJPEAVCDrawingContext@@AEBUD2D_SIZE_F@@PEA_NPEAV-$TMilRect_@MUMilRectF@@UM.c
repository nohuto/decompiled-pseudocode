/*
 * XREFs of ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180011F00
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180010DD8 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x180011EC0 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x1800120B4 (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180022D40 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800299D8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndBitmap::Draw(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  bool v6; // r8
  int v7; // eax
  int v8; // eax
  struct CCommandListBitmapRepresentation *v10; // rdx
  int v11; // eax

  v2 = 0;
  if ( !*(_DWORD *)(a2 + 248)
    || *(_DWORD *)(a2 + 252)
    || *(_DWORD *)(a2 + 256)
    || CDrawingContext::IsIn3DMode((CDrawingContext *)(a2 + 56)) )
  {
    if ( a1 == 16 )
      v10 = 0LL;
    else
      v10 = (struct CCommandListBitmapRepresentation *)(a1 + 56);
    v11 = CDrawingContext::DrawCommandListBitmapRepresentation((struct ID2DContext **)a2, v10, 0LL);
    v2 = v11;
    if ( v11 >= 0 )
      return v2;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x13Du);
  }
  if ( CHwndBitmap::IsValidVisual((CHwndBitmap *)(a1 - 16)) )
  {
    v7 = CHwndBitmap::EnsureVisualTree((CVisual **)(a1 - 16), v5, v6);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x148u);
    }
    else
    {
      v8 = CDrawingContext::DrawVisual((CDrawingContext *)a2, *(struct CVisual **)(a1 + 432), *(_BYTE *)(a1 + 448));
      v2 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x14Du);
    }
  }
  return v2;
}
