/*
 * XREFs of ?_IsMultiMon@CDesktopManager@@AEBA_NXZ @ 0x18001BEBC
 * Callers:
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18001BD84 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x180098AE0 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

bool __fastcall CDesktopManager::_IsMultiMon(CDesktopManager *this)
{
  LONG v1; // r8d
  int v2; // edx
  RECT rc1; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_DWORD *)this + 323);
  rc1.left = *((_DWORD *)this + 322);
  rc1.right = *((_DWORD *)this + 324) + rc1.left;
  v2 = *((_DWORD *)this + 325);
  rc1.top = v1;
  rc1.bottom = v1 + v2;
  return !EqualRect(&rc1, (const RECT *)((char *)this + 1304));
}
