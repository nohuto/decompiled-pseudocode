/*
 * XREFs of xxxRedrawFrameAndHook @ 0x1C014BF70
 * Callers:
 *     <none>
 * Callees:
 *     IsTrayWindow @ 0x1C0058750 (IsTrayWindow.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 */

__int64 __fastcall xxxRedrawFrameAndHook(struct tagWND *a1)
{
  __int64 v2; // rbx

  xxxSetWindowPosAndBand(a1, 0, 0, 0, 0, 0, 55, 0);
  if ( (unsigned int)IsTrayWindow((__int64)a1) )
  {
    v2 = *(_QWORD *)a1;
    xxxCallHook(6u, v2, 0LL, 0xAu);
    PostShellHookMessagesEx(6u, v2, 0LL);
  }
  return 1LL;
}
