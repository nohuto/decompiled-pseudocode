/*
 * XREFs of xxxRedrawTitle @ 0x1C0081B30
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxEnableMenuItem @ 0x1C0072DE0 (xxxEnableMenuItem.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00804CC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0223A90 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxHelpLoop @ 0x1C023D09C (xxxHelpLoop.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     IsTrayWindow @ 0x1C0058750 (IsTrayWindow.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     xxxDrawCaptionBar @ 0x1C00CAFD0 (xxxDrawCaptionBar.c)
 */

__int64 __fastcall xxxRedrawTitle(struct tagWND *a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebp
  __int64 v6; // rbx
  __int64 DCEx; // rbx

  v2 = a2;
  v4 = 1;
  if ( (*((_BYTE *)a1 + 55) & 0x10) != 0 )
  {
    if ( (*((_BYTE *)a1 + 54) & 0xC0) == 0xC0 )
    {
      if ( (*((_BYTE *)a1 + 40) & 0x40) != 0 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) == gpqForeground )
        v2 = a2 | 1;
      if ( gihmodUserApiHook < 0 )
      {
        DCEx = _GetDCEx(a1, 0LL, 65537LL);
        xxxDrawCaptionBar(a1, DCEx, v2);
        _ReleaseDC(DCEx);
      }
      else
      {
        xxxSendMessage(a1, 0xAEu, v2, 0LL);
      }
    }
    else
    {
      v4 = 0;
    }
  }
  if ( (unsigned int)IsTrayWindow((__int64)a1) && (v2 & 0xC) != 0 )
  {
    v6 = *(_QWORD *)a1;
    xxxCallHook(6LL, *(_QWORD *)a1, 0LL);
    PostShellHookMessagesEx(6uLL, v6, 0LL);
  }
  return v4;
}
