/*
 * XREFs of HMValidateHandleNoRip @ 0x1C00809E4
 * Callers:
 *     xxxSetWindowData @ 0x1C0057B34 (xxxSetWindowData.c)
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     FindQMsg @ 0x1C005B2D0 (FindQMsg.c)
 *     ?xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C0064954 (-xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00804CC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxClientCopyImage @ 0x1C0080648 (xxxClientCopyImage.c)
 *     xxxEventWndProc @ 0x1C0080730 (xxxEventWndProc.c)
 *     xxxClientLoadMenu @ 0x1C00807C4 (xxxClientLoadMenu.c)
 *     DestroyWindowSmIcon @ 0x1C00F9404 (DestroyWindowSmIcon.c)
 *     DWP_GetIcon @ 0x1C00F9C60 (DWP_GetIcon.c)
 *     xxxCreateWindowSmIcon @ 0x1C00FE3C0 (xxxCreateWindowSmIcon.c)
 *     xxxSetClassData @ 0x1C0103C44 (xxxSetClassData.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01045A0 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     _CsDdeUninitialize @ 0x1C0110C70 (_CsDdeUninitialize.c)
 *     _RegisterClassEx @ 0x1C011C700 (_RegisterClassEx.c)
 *     xxxClientLoadImage @ 0x1C012031C (xxxClientLoadImage.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014A038 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C014AF54 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     _GetWindowIcon @ 0x1C014C5AC (_GetWindowIcon.c)
 *     xxxAssessPointerContactState @ 0x1C01CF118 (xxxAssessPointerContactState.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F026C (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F03E4 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01FF3E0 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C0200428 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     xxxMNKeyDown @ 0x1C0216CA8 (xxxMNKeyDown.c)
 *     NtUserUpdateInstance @ 0x1C0221910 (NtUserUpdateInstance.c)
 *     xxxSetClassIcon @ 0x1C0223AFC (xxxSetClassIcon.c)
 *     xxxRealDrawMenuItem @ 0x1C0242490 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoRip(__int64 a1, char a2)
{
  __int64 v3; // rbx
  __int64 *v5; // rdi

  v3 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v5 = (__int64 *)(*((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)a1 * *((_DWORD *)&gSharedInfo + 4));
    if ( (WORD1(a1) == *((_WORD *)v5 + 9)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
      && (*((_BYTE *)v5 + 17) & 1) == 0
      && *((_BYTE *)v5 + 16) == a2 )
    {
      v3 = *v5;
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) & 0x20000000) == 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0) & v3;
  if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
    return 0LL;
  return v3;
}
