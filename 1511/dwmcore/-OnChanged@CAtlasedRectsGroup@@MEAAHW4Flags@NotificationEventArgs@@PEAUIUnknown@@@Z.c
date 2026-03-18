/*
 * XREFs of ?OnChanged@CAtlasedRectsGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800267A0
 * Callers:
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180085A00 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?FreeCaches@CAtlasedRects@@AEAAXXZ @ 0x1800254D4 (-FreeCaches@CAtlasedRects@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRectsGroup::OnChanged(__int64 a1)
{
  *(_DWORD *)(a1 + 180) |= 3u;
  CAtlasedRects::FreeCaches((void **)a1);
  return 1LL;
}
