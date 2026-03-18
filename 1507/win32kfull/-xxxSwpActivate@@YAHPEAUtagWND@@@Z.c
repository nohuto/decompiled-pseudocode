/*
 * XREFs of ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C0044810
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     xxxActivateWindow @ 0x1C0044954 (xxxActivateWindow.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSwpActivate(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx

  if ( !a1 )
    return 0LL;
  if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
  {
    xxxSendMessage(a1, 34LL, 0LL);
    return 0LL;
  }
  if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL) == a1 || !(unsigned int)xxxActivateWindow(a1) )
    return 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
  if ( v2 )
    SetOrClrWF(1LL, v2, 257LL, 1LL);
  v3 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 88LL);
  if ( v3 )
    SetOrClrWF(1LL, v3, 257LL, 1LL);
  return 1LL;
}
