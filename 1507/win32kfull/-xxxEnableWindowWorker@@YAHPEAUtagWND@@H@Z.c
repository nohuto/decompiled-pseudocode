/*
 * XREFs of ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C0045988
 * Callers:
 *     xxxEnableWindow @ 0x1C0045940 (xxxEnableWindow.c)
 *     xxxDisableImmersiveOwner @ 0x1C0204174 (xxxDisableImmersiveOwner.c)
 * Callees:
 *     xxxSetFocus @ 0x1C0046624 (xxxSetFocus.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 */

__int64 __fastcall xxxEnableWindowWorker(struct tagWND *a1, int a2)
{
  __int64 v3; // rbp
  unsigned int v4; // edi
  int v5; // esi

  v3 = a2;
  v4 = *((_BYTE *)a1 + 55) & 8;
  if ( a2 )
  {
    v5 = *((_BYTE *)a1 + 55) & 8;
    SetOrClrWF(0LL, a1, 3848LL, 1LL);
    *((_BYTE *)a1 + 290) &= ~1u;
  }
  else
  {
    v5 = ((unsigned __int8)~*((_BYTE *)a1 + 55) >> 3) & 1;
    xxxSendMessage(a1, 31LL, 0LL);
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 392LL) + 72LL) )
      xxxSetFocus(0LL);
    SetOrClrWF(1LL, a1, 3848LL, 1LL);
  }
  if ( v5 )
  {
    xxxWindowEvent(32778, (_DWORD)a1, 0, 0, 0);
    xxxSendMessage(a1, 10LL, v3);
  }
  return v4;
}
