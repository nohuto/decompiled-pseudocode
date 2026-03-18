/*
 * XREFs of ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C008C694
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxActivateWindow @ 0x1C008CA64 (xxxActivateWindow.c)
 */

__int64 __fastcall xxxSwpActivate(struct tagWND *a1)
{
  _DWORD *v2; // rdx
  _DWORD *v3; // rdx

  if ( !a1 )
    return 0LL;
  if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
  {
    xxxSendMessage(a1, 0x22u, 0LL, 0LL);
    return 0LL;
  }
  if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL) == a1 || !(unsigned int)xxxActivateWindow(a1) )
    return 0LL;
  v2 = *(_DWORD **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
  if ( v2 )
    SetOrClrWF(1, v2, 0x101u, 1);
  v3 = *(_DWORD **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
  if ( v3 )
    SetOrClrWF(1, v3, 0x101u, 1);
  return 1LL;
}
