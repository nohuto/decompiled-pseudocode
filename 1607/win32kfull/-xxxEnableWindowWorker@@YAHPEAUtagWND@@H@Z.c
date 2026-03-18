/*
 * XREFs of ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C011B3C8
 * Callers:
 *     xxxEnableWindow @ 0x1C011B380 (xxxEnableWindow.c)
 *     xxxDisableImmersiveOwner @ 0x1C01FB834 (xxxDisableImmersiveOwner.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     xxxSetFocus @ 0x1C00A8300 (xxxSetFocus.c)
 */

__int64 __fastcall xxxEnableWindowWorker(struct tagWND *a1, int a2)
{
  unsigned __int64 v3; // rbp
  unsigned int v4; // edi
  int v5; // esi

  v3 = a2;
  v4 = *((_BYTE *)a1 + 55) & 8;
  if ( a2 )
  {
    v5 = *((_BYTE *)a1 + 55) & 8;
    SetOrClrWF(0, a1, 0xF08u, 0);
    *((_BYTE *)a1 + 290) &= ~1u;
  }
  else
  {
    v5 = ((unsigned __int8)~*((_BYTE *)a1 + 55) >> 3) & 1;
    xxxSendMessage(a1, 0x1Fu, 0LL, 0LL);
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL) )
      xxxSetFocus(0LL, 0LL);
    SetOrClrWF(1, a1, 0xF08u, 0);
  }
  if ( v5 )
  {
    xxxWindowEvent(0x800Au, (__int64 *)a1, 0, 0, 0);
    xxxSendMessage(a1, 0xAu, v3, 0LL);
  }
  return v4;
}
