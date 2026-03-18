/*
 * XREFs of CheckGrantedAccess @ 0x1C005CD60
 * Callers:
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C005BA48 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     NtUserGetCaretBlinkTime @ 0x1C00F66F0 (NtUserGetCaretBlinkTime.c)
 *     NtUserGetDoubleClickTime @ 0x1C00F6F10 (NtUserGetDoubleClickTime.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00@Z @ 0x1C01D8FD8 (-xxxMouseEventDirect@@YAHKKKK_K00@Z.c)
 *     xxxInjectTouchInput @ 0x1C01DCB84 (xxxInjectTouchInput.c)
 *     _SwapMouseButton @ 0x1C01E9660 (_SwapMouseButton.c)
 *     NtUserGetClipCursor @ 0x1C0219F90 (NtUserGetClipCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall CheckGrantedAccess(ACCESS_MASK a1, ACCESS_MASK a2)
{
  if ( RtlAreAllAccessesGranted(a1, a2) )
    return 1LL;
  UserSetLastError(5LL);
  return 0LL;
}
