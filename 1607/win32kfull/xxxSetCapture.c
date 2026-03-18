/*
 * XREFs of xxxSetCapture @ 0x1C00BB9A4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BB630 (xxxDCETrackCaptionButton.c)
 *     NtUserSetCapture @ 0x1C00BB910 (NtUserSetCapture.c)
 *     xxxIsDragging @ 0x1C0150E5C (xxxIsDragging.c)
 *     xxxTrackCaptionButton @ 0x1C0230C3C (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C023446C (xxxDragObject.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxCapture @ 0x1C00AACF4 (xxxCapture.c)
 */

_QWORD *__fastcall xxxSetCapture(__int64 *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  v1 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( (*(_DWORD *)(v1 + 340) & 0x100000) != 0 || a1 && *(_QWORD *)(a1[2] + 384) != v1 )
    return 0LL;
  if ( gspwndScreenCapture )
    return 0LL;
  v2 = *(_QWORD **)(v1 + 72);
  v3 = v2 ? *v2 : 0LL;
  xxxCapture(gptiCurrent, a1, 2);
  if ( !v3 )
    return 0LL;
  LOBYTE(v4) = 1;
  if ( !HMValidateHandleNoSecure(v3, v4, v5, v6) )
    return 0LL;
  else
    return v2;
}
