/*
 * XREFs of CheckGrantedAccess @ 0x1C007163C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     NtUserGetCaretBlinkTime @ 0x1C0112540 (NtUserGetCaretBlinkTime.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C01185F8 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     NtUserGetDoubleClickTime @ 0x1C011E730 (NtUserGetDoubleClickTime.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00@Z @ 0x1C01D14C8 (-xxxMouseEventDirect@@YAHKKKK_K00@Z.c)
 *     xxxInjectTouchInput @ 0x1C01D4AF4 (xxxInjectTouchInput.c)
 *     _SwapMouseButton @ 0x1C01E0580 (_SwapMouseButton.c)
 *     NtUserGetClipCursor @ 0x1C0212AC0 (NtUserGetClipCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall CheckGrantedAccess(ACCESS_MASK a1, ACCESS_MASK a2)
{
  if ( RtlAreAllAccessesGranted(a1, a2) )
    return 1LL;
  UserSetLastError(5LL);
  return 0LL;
}
