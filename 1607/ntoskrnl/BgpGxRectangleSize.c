/*
 * XREFs of BgpGxRectangleSize @ 0x140129D34
 * Callers:
 *     AnFwDisplayFade @ 0x14072664C (AnFwDisplayFade.c)
 *     BgpGxReservePoolRectangleSize @ 0x140727904 (BgpGxReservePoolRectangleSize.c)
 *     AnFwConfigureProgressResources @ 0x140727B18 (AnFwConfigureProgressResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return (((a3 * a2 * a1 + 7) & 0xFFFFFFF8) >> 3) + 72;
}
