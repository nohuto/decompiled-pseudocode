/*
 * XREFs of xxxSetCapture @ 0x14014AB08
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxTrackCaptionButton @ 0x140149F00 (xxxTrackCaptionButton.c)
 *     xxxIsDragging @ 0x14014A320 (xxxIsDragging.c)
 *     NtUserSetCapture @ 0x14014A990 (NtUserSetCapture.c)
 *     xxxDCETrackCaptionButton @ 0x14014B2F4 (xxxDCETrackCaptionButton.c)
 *     xxxDragObject @ 0x1402F2554 (xxxDragObject.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14014ABAC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 */

__int64 __fastcall xxxSetCapture(struct tagWND *a1)
{
  struct tagTHREADINFO *v2; // rbp
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 *v5; // rdi
  __int64 v6; // rbx

  v2 = PtiCurrent((__int64)a1);
  v4 = *((_QWORD *)PtiCurrent(v3) + 58);
  if ( (*(_DWORD *)(v4 + 436) & 0x100000) == 0
    && (!a1 || *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) == v4)
    && ((v5 = *(__int64 **)(v4 + 112)) != 0LL ? (v6 = *v5) : (v6 = 0LL), xxxCapture(v2, a1, 2u), v6) )
  {
    return (unsigned __int64)v5 & -(__int64)(HMValidateHandleNoSecure(v6, 1) != 0);
  }
  else
  {
    return 0LL;
  }
}
