/*
 * XREFs of ?SetBounds@CCoRenderContent@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180155518
 * Callers:
 *     ?SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z @ 0x180125A30 (-SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z.c)
 * Callees:
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18009BBA8 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 */

char __fastcall CCoRenderContent::SetBounds(__int64 a1, float *a2)
{
  _OWORD *v2; // rdx
  _OWORD *v3; // rcx
  char v4; // r8

  if ( operator!=((float *)(a1 + 128), a2) )
  {
    v4 = 1;
    *v3 = *v2;
  }
  return v4;
}
