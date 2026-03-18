/*
 * XREFs of ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C0107B34
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C0065EE4 (IsToplevelWindowDesktopComposed.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     _GetMenuState @ 0x1C0107C3C (_GetMenuState.c)
 *     xxxGetSysMenu @ 0x1C0107D14 (xxxGetSysMenu.c)
 *     xxxDCETrackCaptionButton @ 0x1C01082B0 (xxxDCETrackCaptionButton.c)
 *     xxxHandleNCMouseGuys @ 0x1C02024F4 (xxxHandleNCMouseGuys.c)
 *     xxxTrackCaptionButton @ 0x1C02387C8 (xxxTrackCaptionButton.c)
 */

void __fastcall xxxDWP_NCMouse(struct tagWND *a1, unsigned int a2, unsigned int a3, struct _LARGE_STRING *a4)
{
  unsigned __int16 v8; // ax
  unsigned int v9; // esi
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
    v9 = a3 + 61431;
  }
  else
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) && (*((_BYTE *)a1 + 50) & 8) != 0 )
      v8 = xxxDCETrackCaptionButton(a1, a3);
    else
      v8 = xxxTrackCaptionButton(a1, a3);
    v9 = v8;
  }
  if ( !v9 )
  {
LABEL_18:
    xxxHandleNCMouseGuys(a1, a2, a3, a4);
    return;
  }
  if ( v9 == 61824
    || (*((_BYTE *)a1 + 54) & 8) == 0
    || (*((_BYTE *)a1 + 55) & 0xC0) == 0x40
    || (SysMenu = xxxGetSysMenu(a1, 1LL), (GetMenuState(SysMenu, (unsigned __int16)v9 & 0xFFF0) & 3) == 0) )
  {
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(a1, 0x112u, v9, a4, 0, 0, 0LL, 1, 1);
  }
}
