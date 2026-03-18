/*
 * XREFs of ?GetRectangleCount@CAtlasedRectsMesh@@UEAAIXZ @ 0x18009CC90
 * Callers:
 *     ?GetDestinationRectanglesCore@CAtlasedRectsGroup@@MEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18009D180 (-GetDestinationRectanglesCore@CAtlasedRectsGroup@@MEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?GetOpacitiesCore@CAtlasedRectsGroup@@MEAAJPEAMI@Z @ 0x18009D290 (-GetOpacitiesCore@CAtlasedRectsGroup@@MEAAJPEAMI@Z.c)
 *     ?GetSourceRectanglesCore@CAtlasedRectsGroup@@MEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18009D4B0 (-GetSourceRectanglesCore@CAtlasedRectsGroup@@MEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?GetRectangleCount@CAtlasedRectsGroup@@UEAAIXZ @ 0x18009D5E0 (-GetRectangleCount@CAtlasedRectsGroup@@UEAAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasedRectsMesh::GetRectangleCount(CAtlasedRectsMesh *this)
{
  return *((unsigned int *)this + 54);
}
