/*
 * XREFs of ?Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801450D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x1801230A0 (-DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 */

__int64 __fastcall CYCbCrSurface::Draw(__int64 a1, CDrawingContext *a2, __int64 a3, bool *a4)
{
  bool v4; // bl
  struct CResource *v6; // rdx
  __int64 result; // rax
  struct CResource *v10; // r8

  v4 = 0;
  v6 = *(struct CResource **)(a1 + 112);
  result = 0LL;
  if ( v6 )
  {
    v10 = *(struct CResource **)(a1 + 120);
    if ( v10 )
      result = CDrawingContext::DrawYCbCrBitmap(a2, v6, v10, (enum D2D1_YCBCR_CHROMA_SUBSAMPLING)*(_DWORD *)(a1 + 128));
  }
  if ( *(_QWORD *)(a1 + 112) )
    v4 = *(_QWORD *)(a1 + 120) != 0LL;
  *a4 = v4;
  return result;
}
