/*
 * XREFs of HMValidateHandleNoRip @ 0x140095FE4
 * Callers:
 *     xxxClientLoadImage @ 0x140008ACC (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x14000A328 (xxxClientLoadMenu.c)
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     xxxCreateWindowSmIcon @ 0x140093E5C (xxxCreateWindowSmIcon.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x14009449C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     DestroyWindowSmIcon @ 0x140094E54 (DestroyWindowSmIcon.c)
 *     FindQMsg @ 0x1400955A0 (FindQMsg.c)
 *     _GetWindowIcon @ 0x14013E208 (_GetWindowIcon.c)
 *     _RegisterClassEx @ 0x14014ECE0 (_RegisterClassEx.c)
 *     xxxSetClassData @ 0x140151060 (xxxSetClassData.c)
 *     xxxClientCopyImage @ 0x1401529AC (xxxClientCopyImage.c)
 *     xxxSetClassIcon @ 0x140152AA8 (xxxSetClassIcon.c)
 *     ?FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z @ 0x1401ABC8C (-FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401B19BC (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     DWP_GetIcon @ 0x1401F66E0 (DWP_GetIcon.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 *     xxxEventWndProc @ 0x140216850 (xxxEventWndProc.c)
 *     NtUserCsDdeUninitialize @ 0x140259750 (NtUserCsDdeUninitialize.c)
 *     NtUserUpdateInstance @ 0x1402C0A20 (NtUserUpdateInstance.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CE9BC (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CEB64 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CED08 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall HMValidateHandleNoRip(__int64 a1, char a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 *v14; // r14
  __int64 v15; // rcx
  __int16 v16; // ax
  __int64 v17; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v20; // rdx
  __int16 v21; // r8
  _QWORD *v22; // rax
  __int64 v23; // rax

  v3 = 0LL;
  PtiCurrent(a1);
  v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19904);
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(v8 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v8, v7);
    v12 = *(_DWORD *)(W32GetUserSessionState(v11, v10) + 19928) * (unsigned int)(unsigned __int16)a1
        + *(_QWORD *)(UserSessionState + 19920);
    v14 = (__int64 *)HMPkheFromPhe(v12);
    v15 = 0x7FFFLL;
    v16 = WORD1(a1) & 0x7FFF;
    if ( (WORD1(a1) & 0x7FFF) == *(_WORD *)(v12 + 26)
      || v16 == 0x7FFF
      || !v16 && PsGetCurrentProcessWow64Process(0x7FFFLL, v13) )
    {
      if ( (*(_BYTE *)(v12 + 25) & 1) == 0 && *(_BYTE *)(v12 + 24) == a2 )
        v3 = *v14;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v15) + 130, 0, 0) & 0x20000000) != 0 )
      {
        v3 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 3LL) != 0);
      }
      else
      {
        v17 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
        v3 &= v17;
      }
      if ( *(char *)(v12 + 25) < 0 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v17);
        v20 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          if ( *CurrentProcessWin32Process )
          {
            v21 = gahti[12 * *(unsigned __int8 *)(v12 + 24) + 6];
            if ( (v21 & 2) != 0 )
            {
              v22 = (_QWORD *)v14[1];
            }
            else
            {
              if ( (v21 & 1) == 0 )
                return v3;
              v23 = v14[1];
              if ( !v23 )
                return v3;
              v22 = *(_QWORD **)(v23 + 456);
            }
            if ( v22 && v22 != v20 )
              return 0LL;
          }
        }
      }
    }
  }
  return v3;
}
