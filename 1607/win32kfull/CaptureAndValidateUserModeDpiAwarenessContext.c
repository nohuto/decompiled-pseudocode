/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0084C90
 * Callers:
 *     NtUserInvalidateRect @ 0x1C0059D00 (NtUserInvalidateRect.c)
 *     xxxGetCursorPos @ 0x1C005C1B0 (xxxGetCursorPos.c)
 *     NtUserGetTitleBarInfo @ 0x1C006EC50 (NtUserGetTitleBarInfo.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C006EEC0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C007A4F0 (xxxDCEWindowHitTestIndirect.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C00837D0 (TransformMessageBetweenCoordinateSpaces.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0084BE0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     NtUserGetScrollBarInfo @ 0x1C00AF510 (NtUserGetScrollBarInfo.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1C00FB600 (NtUserLogicalToPhysicalPoint.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

int *__fastcall CaptureAndValidateUserModeDpiAwarenessContext(__int64 a1)
{
  int *result; // rax
  int v2; // r8d

  result = *(int **)(a1 + 352);
  if ( result[1] )
  {
    v2 = *result;
    if ( *result && ((v2 & 0x7FFFFFEC) != 0 || (v2 & 0xF0) != 0x10 || (*result & 0xFu) > 2) )
      *result = 0;
    else
      *(_DWORD *)(a1 + 340) = v2;
    result[1] = 0;
  }
  return result;
}
