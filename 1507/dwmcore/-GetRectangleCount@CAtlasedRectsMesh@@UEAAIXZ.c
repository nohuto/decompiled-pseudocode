/*
 * XREFs of ?GetRectangleCount@CAtlasedRectsMesh@@UEAAIXZ @ 0x18006F5F0
 * Callers:
 *     ?GetDestinationRectanglesCore@CAtlasedRectsGroup@@MEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180016E30 (-GetDestinationRectanglesCore@CAtlasedRectsGroup@@MEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?GetOpacitiesCore@CAtlasedRectsGroup@@MEAAJPEAMI@Z @ 0x180016F40 (-GetOpacitiesCore@CAtlasedRectsGroup@@MEAAJPEAMI@Z.c)
 *     ?GetSourceRectanglesCore@CAtlasedRectsGroup@@MEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180017170 (-GetSourceRectanglesCore@CAtlasedRectsGroup@@MEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?GetRectangleCount@CAtlasedRectsGroup@@UEAAIXZ @ 0x1800172A0 (-GetRectangleCount@CAtlasedRectsGroup@@UEAAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasedRectsMesh::GetRectangleCount(CAtlasedRectsMesh *this)
{
  return *((unsigned int *)this + 36);
}
