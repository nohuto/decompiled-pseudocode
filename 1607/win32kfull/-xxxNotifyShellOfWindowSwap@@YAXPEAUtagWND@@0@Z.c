/*
 * XREFs of ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0148DA4
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01485F0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0099324 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

void __fastcall xxxNotifyShellOfWindowSwap(struct tagWND *a1, int **a2)
{
  __int64 v2; // rdi
  int *v3; // rbx

  v2 = *(_QWORD *)a1;
  v3 = *a2;
  _PostShellHookMsgWorker(*(unsigned __int16 *)(gpsi + 1362LL), *(_QWORD *)a1, (__int64)*a2, 0LL);
  PostShellHookMessagesEx(0xEu, (__int64)v3, 0LL);
  PostShellHookMessagesEx(0xDu, v2, 0LL);
  xxxCallHook(0xDu, v2, v3, 0xAu);
}
