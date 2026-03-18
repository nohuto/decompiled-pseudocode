/*
 * XREFs of xxxSetCapture @ 0x1C00F8EC0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     NtUserSetCapture @ 0x1C00F8E30 (NtUserSetCapture.c)
 *     xxxDCETrackCaptionButton @ 0x1C01082B0 (xxxDCETrackCaptionButton.c)
 *     xxxIsDragging @ 0x1C01239CC (xxxIsDragging.c)
 *     xxxTrackCaptionButton @ 0x1C02387C8 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C023C89C (xxxDragObject.c)
 * Callees:
 *     xxxCapture @ 0x1C004F540 (xxxCapture.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

_QWORD *__fastcall xxxSetCapture(__int64 *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rdi

  v1 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( (*(_DWORD *)(v1 + 332) & 0x100000) != 0 || a1 && *(_QWORD *)(a1[2] + 392) != v1 )
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
