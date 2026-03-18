/*
 * XREFs of ?SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z @ 0x1C013CC54
 * Callers:
 *     ?Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ @ 0x1C013E680 (-Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ.c)
 * Callees:
 *     ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C013CA04 (-GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 */

__int64 __fastcall CTDR_GDI_RESET_THREAD::SwitchGdi(CTDR_GDI_RESET_THREAD *this, char a2)
{
  _VIDEO_WIN32K_CALLBACKS_PARAMS v3; // [rsp+20h] [rbp-28h] BYREF

  v3.CalloutType = VideoDxgkFindAdapterTdrCallout;
  v3.PhysDisp = 0LL;
  v3.Status = -1073741816;
  v3.Param = a2 != 0;
  *(_DWORD *)&v3.LockUserSession = 0;
  return CTDR_GDI_RESET_THREAD::GdiCalloutLoop(this, &v3);
}
