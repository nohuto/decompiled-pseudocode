/*
 * XREFs of xxxRedrawFrameAndHook @ 0x1C0122250
 * Callers:
 *     <none>
 * Callees:
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 */

__int64 __fastcall xxxRedrawFrameAndHook(struct tagWND *a1)
{
  __int64 v2; // rbx

  xxxSetWindowPosAndBand(a1, 0LL, 0, 0, 0, 0, 55, 0);
  if ( (unsigned int)IsTrayWindow((__int64)a1) )
  {
    v2 = *(_QWORD *)a1;
    xxxCallHook(6, v2, 0LL, 0xAu);
    PostShellHookMessagesEx(6u, v2, 0LL);
  }
  return 1LL;
}
