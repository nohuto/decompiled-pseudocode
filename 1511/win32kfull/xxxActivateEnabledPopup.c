/*
 * XREFs of xxxActivateEnabledPopup @ 0x1C0231730
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00704E0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     DWP_GetEnabledPopup @ 0x1C0009690 (DWP_GetEnabledPopup.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     xxxSetActiveWindow @ 0x1C010BCE0 (xxxSetActiveWindow.c)
 */

__int64 __fastcall xxxActivateEnabledPopup(struct tagWND *a1)
{
  __int64 EnabledPopup; // rbx
  int v3; // r8d
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v7[5]; // [rsp+40h] [rbp-28h] BYREF

  EnabledPopup = DWP_GetEnabledPopup(a1);
  if ( !EnabledPopup || EnabledPopup == *(_QWORD *)(GetDesktopWindow((__int64)a1) + 96) )
    return 0LL;
  v7[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v7;
  v7[1] = EnabledPopup;
  ++*(_DWORD *)(EnabledPopup + 8);
  xxxSetWindowPosAndBand(a1, 0, v3, 0, v3, v3, 19, v3);
  xxxSetActiveWindow(EnabledPopup);
  ThreadUnlock1(v5, v4);
  return 1LL;
}
