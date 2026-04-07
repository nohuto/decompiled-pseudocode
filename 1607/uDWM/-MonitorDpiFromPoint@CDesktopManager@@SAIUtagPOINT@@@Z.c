/*
 * XREFs of ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x18004883C
 * Callers:
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x1800487C8 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x180048814 (-GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x1800847FC (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18008A544 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18008A9C4 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::MonitorDpiFromPoint(POINT a1)
{
  HMONITOR v1; // rax
  unsigned int v2; // ecx
  int DpiForMonitorInternal; // eax
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  char v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 96;
  v1 = MonitorFromPoint(a1, 0);
  if ( v1 )
  {
    DpiForMonitorInternal = GetDpiForMonitorInternal(v1, 0LL, &v6, &v5);
    v2 = v5;
    if ( !DpiForMonitorInternal )
      return 96;
  }
  else
  {
    return v5;
  }
  return v2;
}
