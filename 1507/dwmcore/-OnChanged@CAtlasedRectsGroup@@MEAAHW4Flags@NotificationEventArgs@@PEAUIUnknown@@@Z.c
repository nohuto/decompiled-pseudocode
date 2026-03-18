/*
 * XREFs of ?OnChanged@CAtlasedRectsGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180017280
 * Callers:
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800484B0 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?FreeCaches@CAtlasedRects@@AEAAXXZ @ 0x180070308 (-FreeCaches@CAtlasedRects@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRectsGroup::OnChanged(CAtlasedRects *a1)
{
  *((_DWORD *)a1 + 45) |= 3u;
  CAtlasedRects::FreeCaches(a1);
  return 1LL;
}
