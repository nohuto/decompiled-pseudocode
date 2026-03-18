/*
 * XREFs of xxxRedrawTitle @ 0x1C0047C70
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00815D0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxEnableMenuItem @ 0x1C0108034 (xxxEnableMenuItem.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0150050 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxHelpLoop @ 0x1C023CECC (xxxHelpLoop.c)
 * Callees:
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 */

__int64 __fastcall xxxRedrawTitle(_QWORD *a1, unsigned int a2)
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
      if ( (a1[5] & 0x40) != 0 && *(_QWORD *)(a1[2] + 392LL) == gpqForeground )
        v2 = a2 | 1;
      if ( gihmodUserApiHook < 0 )
      {
        DCEx = _GetDCEx(a1, 0LL, 65537LL);
        xxxDrawCaptionBar(a1, DCEx, v2);
        _ReleaseDC(DCEx);
      }
      else
      {
        xxxSendMessage(a1, 174LL, v2);
      }
    }
    else
    {
      v4 = 0;
    }
  }
  if ( (unsigned int)IsTrayWindow(a1) && (v2 & 0xC) != 0 )
  {
    v6 = *a1;
    xxxCallHook(6LL, *a1, 0LL);
    PostShellHookMessagesEx(6uLL, v6, 0LL);
  }
  return v4;
}
