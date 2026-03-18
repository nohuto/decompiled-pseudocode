/*
 * XREFs of xxxRedrawFrameAndHook @ 0x1C0150DF0
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
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
