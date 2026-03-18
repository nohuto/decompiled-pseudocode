/*
 * XREFs of zzzSetCursor @ 0x1C0062174
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0064790 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserSetCursor @ 0x1C00EE590 (NtUserSetCursor.c)
 *     zzzHideCursorNoCapture @ 0x1C01E6C60 (zzzHideCursorNoCapture.c)
 *     xxxSwitchWndProc @ 0x1C0201FD0 (xxxSwitchWndProc.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020AB48 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C020C6A4 (xxxInitializeMoveSizeData.c)
 *     xxxDragObject @ 0x1C023C89C (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C023CECC (xxxHelpLoop.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C00906F0 (zzzUpdateCursorImage.c)
 */

__int64 __fastcall zzzSetCursor(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(gptiCurrent + 392LL);
  result = *(_QWORD *)(v1 + 320);
  if ( result != a1 )
  {
    result = HMAssignmentLock(v1 + 320, a1);
    if ( !gpqCursor )
      MEMORY[0] = v1;
    if ( v1 == gpqCursor )
    {
      v6[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v6;
      v6[1] = result;
      if ( result )
        ++*(_DWORD *)(result + 8);
      zzzUpdateCursorImage(v6, v3);
      return ThreadUnlock1(v5, v4);
    }
  }
  return result;
}
