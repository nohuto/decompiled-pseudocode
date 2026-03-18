/*
 * XREFs of ?IsWellOrdered@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180097B10
 * Callers:
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x1800377D0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsWellOrdered(
        float *a1)
{
  return a1[2] >= *a1 && a1[3] >= a1[1] && a1[5] >= a1[4];
}
