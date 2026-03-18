/*
 * XREFs of ?OnChanged@CAtlasedRects@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800F8FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeCaches@CAtlasedRects@@AEAAXXZ @ 0x1800254D4 (-FreeCaches@CAtlasedRects@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRects::OnChanged(void **a1)
{
  CAtlasedRects::FreeCaches(a1);
  return 1LL;
}
