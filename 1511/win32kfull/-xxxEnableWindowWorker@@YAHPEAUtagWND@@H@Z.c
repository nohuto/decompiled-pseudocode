/*
 * XREFs of ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C0090D48
 * Callers:
 *     xxxEnableWindow @ 0x1C0090D00 (xxxEnableWindow.c)
 *     xxxDisableImmersiveOwner @ 0x1C02044E4 (xxxDisableImmersiveOwner.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxSetFocus @ 0x1C0080BD4 (xxxSetFocus.c)
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
    SetOrClrWF(0, a1, 0xF08u, 1);
    *((_BYTE *)a1 + 290) &= ~1u;
  }
  else
  {
    v5 = ((unsigned __int8)~*((_BYTE *)a1 + 55) >> 3) & 1;
    xxxSendMessage(a1, 0x1Fu, 0LL, 0LL);
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) )
      xxxSetFocus(0LL, 0LL);
    SetOrClrWF(1, a1, 0xF08u, 1);
  }
  if ( v5 )
  {
    xxxWindowEvent(0x800Au, (__int64 *)a1, 0, 0, 0);
    xxxSendMessage(a1, 0xAu, v3, 0LL);
  }
  return v4;
}
