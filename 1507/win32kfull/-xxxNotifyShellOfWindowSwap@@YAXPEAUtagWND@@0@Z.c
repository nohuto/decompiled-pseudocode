/*
 * XREFs of ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0118004
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117B2C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0085FE0 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

void __fastcall xxxNotifyShellOfWindowSwap(struct tagWND *a1, struct _LARGE_STRING **a2)
{
  unsigned __int64 v2; // rdi
  struct _LARGE_STRING *v3; // rbx

  v2 = *(_QWORD *)a1;
  v3 = *a2;
  _PostShellHookMsgWorker(*(unsigned __int16 *)(gpsi + 1362LL), *(_QWORD *)a1, *a2, 0LL);
  PostShellHookMessagesEx(0xEu, (__int64)v3, 0LL);
  PostShellHookMessagesEx(0xDu, v2, 0LL);
  xxxCallHook(13, v2, (__int64)v3, 0xAu);
}
