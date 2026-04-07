/*
 * XREFs of ?GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x180048814
 * Callers:
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x1800487C8 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008B440 (-Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x18004883C (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 */

int __fastcall CContactManager::GetMinimumContactWidth(struct tagPOINT a1)
{
  int v1; // eax

  v1 = CDesktopManager::MonitorDpiFromPoint(a1);
  return MulDiv(50, v1, 96);
}
