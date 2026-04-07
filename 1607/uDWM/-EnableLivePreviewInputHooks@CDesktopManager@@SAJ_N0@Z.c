/*
 * XREFs of ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x180076B48
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180033768 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045230 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x1800768A0 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x180078754 (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::EnableLivePreviewInputHooks(char a1, char a2)
{
  HWND v4; // rcx
  unsigned int v5; // edi
  HWND v6; // rcx

  if ( !a1 )
  {
    CIconicBitmapRegistry::OnLivePreviewDismissed(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance
                                                  + 26));
    v4 = (HWND)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 189);
    if ( v4 )
      RemovePropW(v4, aLivepreviewwin);
  }
  v5 = CDesktopManager::EnableInputHooksHelper(
         a1,
         a2,
         L"LivePreview",
         (HWND *)CDesktopManager::s_pDesktopManagerInstance + 189);
  if ( a1 )
  {
    v6 = (HWND)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 189);
    if ( v6 )
      SetPropW(v6, aLivepreviewwin, HANDLE_FLAG_INHERIT);
  }
  return v5;
}
