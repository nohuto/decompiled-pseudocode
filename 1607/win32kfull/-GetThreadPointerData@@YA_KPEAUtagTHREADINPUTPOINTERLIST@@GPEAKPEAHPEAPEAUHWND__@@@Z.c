/*
 * XREFs of ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01EFFF4
 * Callers:
 *     xxxPointerCallHook @ 0x1C000D47C (xxxPointerCallHook.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxHandleMenuMessages @ 0x1C0141790 (xxxHandleMenuMessages.c)
 *     GetPointerCursorIdInternal @ 0x1C01D74F8 (GetPointerCursorIdInternal.c)
 *     GetPointerFrameArrivalTimesInternal @ 0x1C01D7550 (GetPointerFrameArrivalTimesInternal.c)
 *     GetPointerFrameInfoInternal @ 0x1C01D75AC (GetPointerFrameInfoInternal.c)
 *     GetPointerInfoHistoryInternal @ 0x1C01D765C (GetPointerInfoHistoryInternal.c)
 *     GetPointerInfoInternal @ 0x1C01D76DC (GetPointerInfoInternal.c)
 *     GetPointerRawDataInternal @ 0x1C01D7754 (GetPointerRawDataInternal.c)
 *     GetPointerTransformInternal @ 0x1C01D77D0 (GetPointerTransformInternal.c)
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01D7C1C (xxxDiscardPointerFrameMessagesInternal.c)
 *     xxxPromotePointerToMouse @ 0x1C01D7C84 (xxxPromotePointerToMouse.c)
 *     xxxSendPointerMessage @ 0x1C01D8104 (xxxSendPointerMessage.c)
 *     NtUserGetPointerType @ 0x1C0214530 (NtUserGetPointerType.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000D1EC (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

struct _LIST_ENTRY *__fastcall GetThreadPointerData(
        struct _LIST_ENTRY *a1,
        __int16 a2,
        unsigned int *a3,
        int *a4,
        HWND *a5)
{
  struct _LIST_ENTRY *Blink; // r10
  unsigned int *v6; // r11

  Blink = a1[1].Blink;
  v6 = a3;
  if ( Blink )
  {
    if ( LOWORD(Blink[1].Flink) != a2 )
      return 0LL;
  }
  else
  {
    Blink = FindThreadPointerData(a1, a2);
  }
  if ( !Blink || ((__int64)Blink[3].Flink & 8) != 0 )
    return 0LL;
  if ( v6 )
    *v6 = HIDWORD(Blink[1].Flink);
  if ( a4 )
    *a4 = -((__int64)Blink[3].Flink & 1);
  if ( a5 )
    *a5 = (HWND)Blink[2].Blink;
  return Blink[1].Blink;
}
