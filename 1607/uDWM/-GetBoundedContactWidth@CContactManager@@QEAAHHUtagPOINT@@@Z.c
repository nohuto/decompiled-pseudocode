/*
 * XREFs of ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x1800487C8
 * Callers:
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x1800480A4 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x180088280 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ @ 0x180088C6C (-_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x18008B604 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 * Callees:
 *     ?GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x180048814 (-GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x18004883C (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 */

__int64 __fastcall CContactManager::GetBoundedContactWidth(CContactManager *this, int a2, struct tagPOINT a3)
{
  int MinimumContactWidth; // ecx
  int v5; // eax
  int v6; // eax

  MinimumContactWidth = CContactManager::GetMinimumContactWidth(a3);
  if ( a2 >= MinimumContactWidth )
  {
    v5 = CDesktopManager::MonitorDpiFromPoint(a3);
    v6 = MulDiv(150, v5, 96);
    MinimumContactWidth = a2;
    if ( a2 > v6 )
      return (unsigned int)v6;
  }
  return (unsigned int)MinimumContactWidth;
}
