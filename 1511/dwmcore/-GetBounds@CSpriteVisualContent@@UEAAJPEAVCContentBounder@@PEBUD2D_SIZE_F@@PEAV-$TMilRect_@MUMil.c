/*
 * XREFs of ?GetBounds@CSpriteVisualContent@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801357D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVisualContent::GetBounds(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)a4 = 0LL;
  if ( a3 )
  {
    *(_DWORD *)(a4 + 8) = *a3;
    *(_DWORD *)(a4 + 12) = a3[1];
  }
  return 0LL;
}
