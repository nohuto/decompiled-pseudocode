/*
 * XREFs of ?OnChanged@CAtlasedRects@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800DC770
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeCaches@CAtlasedRects@@AEAAXXZ @ 0x180070308 (-FreeCaches@CAtlasedRects@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRects::OnChanged(void **a1)
{
  CAtlasedRects::FreeCaches(a1);
  return 1LL;
}
