/*
 * XREFs of BgpGxRectangleSize @ 0x14011E5FC
 * Callers:
 *     AnFwDisplayFade @ 0x1406DA060 (AnFwDisplayFade.c)
 *     BgpGxReservePoolRectangleSize @ 0x1406DB844 (BgpGxReservePoolRectangleSize.c)
 *     AnFwConfigureProgressResources @ 0x1406DBAD4 (AnFwConfigureProgressResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return (((a3 * a2 * a1 + 7) & 0xFFFFFFF8) >> 3) + 72;
}
