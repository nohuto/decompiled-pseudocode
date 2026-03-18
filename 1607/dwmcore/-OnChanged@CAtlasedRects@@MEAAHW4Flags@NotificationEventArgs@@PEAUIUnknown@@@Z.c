/*
 * XREFs of ?OnChanged@CAtlasedRects@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18010E080
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeCaches@CAtlasedRects@@AEAAXXZ @ 0x18009BCE4 (-FreeCaches@CAtlasedRects@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRects::OnChanged(CAtlasedRects *a1)
{
  CAtlasedRects::FreeCaches(a1);
  return 1LL;
}
