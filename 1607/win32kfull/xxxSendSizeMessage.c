/*
 * XREFs of xxxSendSizeMessage @ 0x1C010B400
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     xxxHandleWindowPosChanged @ 0x1C010B33C (xxxHandleWindowPosChanged.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     _GetClientRect @ 0x1C010B47C (_GetClientRect.c)
 */

__int64 __fastcall xxxSendSizeMessage(struct tagWND *a1, unsigned int a2)
{
  _WORD v5[12]; // [rsp+50h] [rbp-18h] BYREF

  GetClientRect(a1, v5);
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(
           a1,
           5LL,
           a2,
           (unsigned __int16)(v5[4] - v5[0]) | ((unsigned __int16)(v5[6] - v5[2]) << 16),
           0,
           0,
           0LL,
           1,
           0);
}
