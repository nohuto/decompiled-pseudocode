/*
 * XREFs of ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x180008D70
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18001B9C8 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18002A034 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ??0CContactManager@@QEAA@XZ @ 0x18004731C (--0CContactManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContactManager::RefreshPresentationModeSettings(CContactManager *this)
{
  BOOL v2; // eax
  bool v3; // dl
  int pvParam; // [rsp+38h] [rbp+10h] BYREF

  v2 = SystemParametersInfoW(0x2018u, 0, &pvParam, 0);
  v3 = 0;
  if ( v2 )
    v3 = pvParam == 2;
  *((_BYTE *)this + 324) = v3;
  return 0LL;
}
