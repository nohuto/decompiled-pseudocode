/*
 * XREFs of ?GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x180047728
 * Callers:
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x1800476DC (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800885A0 (-Initialize@CPressTapVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180047750 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 */

int __fastcall CContactManager::GetMinimumContactWidth(struct tagPOINT a1)
{
  int v1; // eax

  v1 = CDesktopManager::MonitorDpiFromPoint(a1);
  return MulDiv(50, v1, 96);
}
