/*
 * XREFs of ?Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180126C50
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x18003EBA0 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSnapshot::Draw(__int64 a1, CDrawingContext *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v6; // eax

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 && !*(_BYTE *)(a1 + 56) )
  {
    *(_BYTE *)(a1 + 56) = 1;
    v6 = CDrawingContext::DrawBitmap(a2, (struct CResource *)(v4 + 16));
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x61u);
    *(_BYTE *)(a1 + 56) = 0;
  }
  return v3;
}
