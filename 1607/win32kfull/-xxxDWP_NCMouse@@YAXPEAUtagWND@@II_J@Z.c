/*
 * XREFs of ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00BB4F4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxGetSysMenu @ 0x1C00B83A0 (xxxGetSysMenu.c)
 *     _GetMenuState @ 0x1C00BB5FC (_GetMenuState.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BB630 (xxxDCETrackCaptionButton.c)
 *     xxxHandleNCMouseGuys @ 0x1C01F9BA4 (xxxHandleNCMouseGuys.c)
 *     xxxTrackCaptionButton @ 0x1C0230C3C (xxxTrackCaptionButton.c)
 */

void __fastcall xxxDWP_NCMouse(struct tagWND *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned __int16 v7; // ax
  unsigned int v8; // esi
  __int64 SysMenu; // rax

  if ( a2 != 161 )
  {
    if ( a2 <= 0xA1 || a2 > 0xA3 )
      return;
    goto LABEL_18;
  }
  if ( a3 < 8 || a3 > 9 && a3 - 20 > 1 )
  {
    if ( a3 - 10 > 7 )
      goto LABEL_18;
    v8 = a3 + 61431;
  }
  else
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) && (*((_BYTE *)a1 + 50) & 8) != 0 )
      v7 = xxxDCETrackCaptionButton(a1, a3);
    else
      v7 = xxxTrackCaptionButton(a1, a3);
    v8 = v7;
  }
  if ( !v8 )
  {
LABEL_18:
    xxxHandleNCMouseGuys(a1);
    return;
  }
  if ( v8 == 61824
    || (*((_BYTE *)a1 + 54) & 8) == 0
    || (*((_BYTE *)a1 + 55) & 0xC0) == 0x40
    || (SysMenu = xxxGetSysMenu(a1, 1), (GetMenuState(SysMenu, (unsigned __int16)v8 & 0xFFF0) & 3) == 0) )
  {
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(a1, 274LL, v8, a4, 0, 0, 0LL, 1, 1);
  }
}
