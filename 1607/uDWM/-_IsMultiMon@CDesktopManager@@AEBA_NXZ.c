/*
 * XREFs of ?_IsMultiMon@CDesktopManager@@AEBA_NXZ @ 0x18001E29C
 * Callers:
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18001E170 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x180096F64 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 */

bool __fastcall CDesktopManager::_IsMultiMon(CDesktopManager *this)
{
  LONG v1; // r8d
  int v2; // edx
  RECT rc1; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_DWORD *)this + 319);
  rc1.left = *((_DWORD *)this + 318);
  rc1.right = *((_DWORD *)this + 320) + rc1.left;
  v2 = *((_DWORD *)this + 321);
  rc1.top = v1;
  rc1.bottom = v1 + v2;
  return !EqualRect(&rc1, (const RECT *)((char *)this + 1288));
}
