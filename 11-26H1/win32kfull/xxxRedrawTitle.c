/*
 * XREFs of xxxRedrawTitle @ 0x14001111C
 * Callers:
 *     xxxSetSysMenu @ 0x14000E260 (xxxSetSysMenu.c)
 *     xxxEnableMenuItem @ 0x14000E684 (xxxEnableMenuItem.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x14009449C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x140209D50 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     NtUserRedrawTitle @ 0x14024E720 (NtUserRedrawTitle.c)
 *     xxxHelpLoop @ 0x1402FAAB4 (xxxHelpLoop.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x14012ED78 (-IsInsideUserApiHook@@YAHXZ.c)
 */

__int64 __fastcall xxxRedrawTitle(struct tagWND *a1, __int64 a2)
{
  unsigned int v3; // edi
  _BYTE *v4; // rcx
  unsigned int v5; // ebp
  __int64 v7; // rbx
  HDC DCEx; // rbx

  v3 = a2;
  v4 = (_BYTE *)*((_QWORD *)a1 + 5);
  v5 = 1;
  if ( (v4[31] & 0x10) != 0 )
  {
    if ( (v4[30] & 0xC0) == 0xC0 )
    {
      if ( (v4[16] & 0x40) != 0
        && *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) == *(_QWORD *)(W32GetUserSessionState(v4, a2) + 18928) )
      {
        v3 |= 1u;
      }
      if ( (unsigned int)IsInsideUserApiHook() )
      {
        xxxSendMessage(a1, 174LL, v3, 0LL);
      }
      else
      {
        DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
        xxxDrawCaptionBar(a1, DCEx);
        _ReleaseDC(DCEx);
      }
    }
    else
    {
      v5 = 0;
    }
  }
  if ( (unsigned __int8)IsTrayWindow(a1, 1LL) && (v3 & 0xC) != 0 )
  {
    v7 = *(_QWORD *)a1;
    xxxCallHook(6, *(_QWORD *)a1, 0LL, 10);
    PostShellHookMessagesEx((LastWokenThread *)6, v7);
  }
  return v5;
}
