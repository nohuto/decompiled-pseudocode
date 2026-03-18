/*
 * XREFs of ?GetRectangleCount@CAtlasedRectsMesh@@UEAAIXZ @ 0x180026EC0
 * Callers:
 *     ?GetOpacitiesCore@CAtlasedRectsGroup@@MEAAJPEAMI@Z @ 0x1800261F0 (-GetOpacitiesCore@CAtlasedRectsGroup@@MEAAJPEAMI@Z.c)
 *     ?GetDestinationRectanglesCore@CAtlasedRectsGroup@@MEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180026320 (-GetDestinationRectanglesCore@CAtlasedRectsGroup@@MEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?GetSourceRectanglesCore@CAtlasedRectsGroup@@MEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180026450 (-GetSourceRectanglesCore@CAtlasedRectsGroup@@MEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?GetRectangleCount@CAtlasedRectsGroup@@UEAAIXZ @ 0x1800266B0 (-GetRectangleCount@CAtlasedRectsGroup@@UEAAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasedRectsMesh::GetRectangleCount(CAtlasedRectsMesh *this)
{
  return *((unsigned int *)this + 36);
}
