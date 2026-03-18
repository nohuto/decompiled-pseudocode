/*
 * XREFs of xxxRedrawTitle @ 0x1C00A0C90
 * Callers:
 *     xxxEnableMenuItem @ 0x1C0067B88 (xxxEnableMenuItem.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00A7ADC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0224590 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxHelpLoop @ 0x1C0234AF4 (xxxHelpLoop.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
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
  if ( (unsigned int)IsTrayWindow(a1) && (v2 & 0xC) != 0 )
  {
    v6 = *(_QWORD *)a1;
    xxxCallHook(6LL, *(_QWORD *)a1, 0LL, 10LL);
    PostShellHookMessagesEx(6u, v6, 0LL);
  }
  return v4;
}
