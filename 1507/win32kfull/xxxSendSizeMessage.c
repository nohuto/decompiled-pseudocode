/*
 * XREFs of xxxSendSizeMessage @ 0x1C00E57B8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     xxxHandleWindowPosChanged @ 0x1C00E56F4 (xxxHandleWindowPosChanged.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     _GetClientRect @ 0x1C00E5834 (_GetClientRect.c)
 */

__int64 __fastcall xxxSendSizeMessage(struct tagWND *a1, unsigned int a2)
{
  _WORD v5[12]; // [rsp+50h] [rbp-18h] BYREF

  GetClientRect(a1, v5);
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(
           a1,
           5u,
           a2,
           (struct _LARGE_STRING *)((unsigned __int16)(v5[4] - v5[0]) | ((unsigned __int16)(v5[6] - v5[2]) << 16)),
           0,
           0,
           0LL,
           1,
           0);
}
