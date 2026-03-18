/*
 * XREFs of CheckGrantedAccess @ 0x1C00858B4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     ?xxxMouseEventDirect@@YAHKKKKK_K0@Z @ 0x1C0084AE8 (-xxxMouseEventDirect@@YAHKKKKK_K0@Z.c)
 *     NtUserGetDoubleClickTime @ 0x1C0085750 (NtUserGetDoubleClickTime.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00857B8 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     NtUserGetCaretBlinkTime @ 0x1C0085850 (NtUserGetCaretBlinkTime.c)
 *     xxxInjectTouchInput @ 0x1C01DD214 (xxxInjectTouchInput.c)
 *     _SwapMouseButton @ 0x1C01E9C80 (_SwapMouseButton.c)
 *     NtUserGetClipCursor @ 0x1C0219D00 (NtUserGetClipCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall CheckGrantedAccess(ACCESS_MASK a1, ACCESS_MASK a2)
{
  if ( RtlAreAllAccessesGranted(a1, a2) )
    return 1LL;
  UserSetLastError(5);
  return 0LL;
}
