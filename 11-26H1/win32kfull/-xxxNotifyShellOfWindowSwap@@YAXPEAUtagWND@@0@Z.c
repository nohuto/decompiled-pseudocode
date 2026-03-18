/*
 * XREFs of ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1401662D4
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140165EB4 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14001E1A0 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

void __fastcall xxxNotifyShellOfWindowSwap(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 UserSessionState; // rax

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  _PostShellHookMsgWorker(*(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19904) + 1378LL), v2, v3, 0LL);
  PostShellHookMessagesEx((LastWokenThread *)0xE, v3);
  PostShellHookMessagesEx((LastWokenThread *)0xD, v2);
  xxxCallHook(13LL, v2, v3, 10);
}
