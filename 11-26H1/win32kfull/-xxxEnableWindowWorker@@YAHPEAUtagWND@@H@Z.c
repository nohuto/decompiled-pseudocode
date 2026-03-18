/*
 * XREFs of ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x14015E3EC
 * Callers:
 *     xxxEnableWindow @ 0x14015E320 (xxxEnableWindow.c)
 *     NtUserDisableImmersiveOwner @ 0x1402B0FF0 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012B3C8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

__int64 __fastcall xxxEnableWindowWorker(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // ebp
  struct tagWND *v4; // rdi
  char v5; // si
  __int64 v6; // rcx
  __int64 UserSessionState; // rax

  v2 = 0;
  v3 = a2;
  v4 = a1;
  v5 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8;
  if ( (_DWORD)a2 )
  {
    *((_DWORD *)a1 + 95) &= ~0x100u;
  }
  else
  {
    xxxSendMessage(a1, 0x1Fu);
    a1 = (struct tagWND *)*((_QWORD *)PtiCurrent(v6) + 58);
    if ( v4 == *((struct tagWND **)a1 + 15) )
      xxxSetFocus(0LL);
  }
  UserSessionState = W32GetUserSessionState(a1, a2);
  SetOrClrWF(v3 == 0, v4, 0xF08u, (*(_DWORD *)(*(_QWORD *)(UserSessionState + 19176) + 48LL) >> 10) & 1);
  if ( (v5 == 0) != v3 )
  {
    xxxWindowEvent(0x800Au, v4, 0, 0, 0);
    xxxSendMessage(v4, 0xAu);
  }
  LOBYTE(v2) = v5 != 0;
  return v2;
}
