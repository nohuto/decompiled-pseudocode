/*
 * XREFs of xxxSetCapture @ 0x1C0091F20
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     NtUserSetCapture @ 0x1C0091FB0 (NtUserSetCapture.c)
 *     xxxDCETrackCaptionButton @ 0x1C00CDE6C (xxxDCETrackCaptionButton.c)
 *     xxxIsDragging @ 0x1C014C940 (xxxIsDragging.c)
 *     xxxTrackCaptionButton @ 0x1C0238BDC (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C023CA6C (xxxDragObject.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     xxxCapture @ 0x1C008E5F8 (xxxCapture.c)
 */

_QWORD *__fastcall xxxSetCapture(__int64 *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rdi

  v1 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( (*(_DWORD *)(v1 + 332) & 0x100000) != 0 || a1 && *(_QWORD *)(a1[2] + 384) != v1 )
    return 0LL;
  if ( gspwndScreenCapture )
    return 0LL;
  v2 = *(_QWORD **)(v1 + 64);
  v3 = v2 ? *v2 : 0LL;
  xxxCapture(gptiCurrent, a1, 2);
  if ( !v3 || !HMValidateHandleNoSecure(v3, 1) )
    return 0LL;
  else
    return v2;
}
