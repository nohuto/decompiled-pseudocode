/*
 * XREFs of zzzSetCursor @ 0x1C0070694
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00704E0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     NtUserSetCursor @ 0x1C0073910 (NtUserSetCursor.c)
 *     zzzHideCursorNoCapture @ 0x1C01E70D0 (zzzHideCursorNoCapture.c)
 *     xxxSwitchWndProc @ 0x1C0202370 (xxxSwitchWndProc.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020B08C (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C020CE20 (xxxInitializeMoveSizeData.c)
 *     xxxDragObject @ 0x1C023CA6C (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C023D09C (xxxHelpLoop.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0053910 (zzzUpdateCursorImage.c)
 */

__int64 __fastcall zzzSetCursor(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(gptiCurrent + 384LL);
  result = *(_QWORD *)(v1 + 320);
  if ( result != a1 )
  {
    result = HMAssignmentLock(v1 + 320, a1);
    if ( !gpqCursor )
      MEMORY[0] = v1;
    if ( v1 == gpqCursor )
    {
      v5[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v5;
      v5[1] = result;
      if ( result )
        ++*(_DWORD *)(result + 8);
      zzzUpdateCursorImage();
      return ThreadUnlock1(v4, v3);
    }
  }
  return result;
}
