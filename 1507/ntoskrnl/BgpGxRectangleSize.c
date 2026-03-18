/*
 * XREFs of BgpGxRectangleSize @ 0x14015287C
 * Callers:
 *     AnFwDisplayFade @ 0x14075D0A8 (AnFwDisplayFade.c)
 *     BgpGxReservePoolRectangleSize @ 0x14075E88C (BgpGxReservePoolRectangleSize.c)
 *     AnFwConfigureProgressResources @ 0x14075EB1C (AnFwConfigureProgressResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return (((a3 * a2 * a1 + 7) & 0xFFFFFFF8) >> 3) + 72;
}
