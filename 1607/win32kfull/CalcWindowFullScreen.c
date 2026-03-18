/*
 * XREFs of CalcWindowFullScreen @ 0x1C00723E0
 * Callers:
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C00539B8 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0079418 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     CalcWindowsFullScreen @ 0x1C0123600 (CalcWindowsFullScreen.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     _MonitorFromWindow @ 0x1C00AFFA0 (_MonitorFromWindow.c)
 *     GetDPIMonitorRect @ 0x1C00B0210 (GetDPIMonitorRect.c)
 *     UnionRect @ 0x1C010C690 (UnionRect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall CalcWindowFullScreen(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int128 v6; // xmm0
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v8; // r8
  __int64 DPIMonitorRect; // rax
  unsigned __int64 v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( (unsigned int)IsTopLevelWindow(a1) && (*(_BYTE *)(a1 + 55) & 0x10) != 0 )
  {
    v5 = MonitorFromWindow(a1, 2LL);
    if ( v5 )
    {
      if ( (*(_BYTE *)(a1 + 54) & 0xC4) == 0xC4 )
        v6 = *(_OWORD *)(a1 + 128);
      else
        v6 = *(_OWORD *)(a1 + 112);
      v11 = v6;
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
      DPIMonitorRect = GetDPIMonitorRect(v8, MonitorFlagsFromWindow);
      UnionRect(v12, &v11, DPIMonitorRect);
      v4 = v12[0] - v11;
      if ( v12[0] == (_QWORD)v11 )
        v4 = v12[1] - *((_QWORD *)&v11 + 1);
      LOBYTE(v2) = v4 == 0;
    }
    result = (*(_DWORD *)(a1 + 288) >> 15) & 1;
    if ( v2 != (_DWORD)result )
    {
      *(_DWORD *)(a1 + 288) ^= ((unsigned __int16)*(_DWORD *)(a1 + 288) ^ (unsigned __int16)((_WORD)v2 << 15)) & 0x8000;
      if ( gpqForeground && *(_QWORD *)(gpqForeground + 88LL) == a1 )
      {
        if ( v2 )
          EtwTraceForegroundWindowFullScreenStart(0LL, v4, v5);
        else
          EtwTraceForegroundWindowFullScreenStop(0LL, v4, v5);
      }
      v10 = 54 - (unsigned int)(v2 != 0);
      return PostShellHookMessagesEx(v10, *(_QWORD *)a1, 0LL);
    }
  }
  else
  {
    result = *(unsigned int *)(a1 + 288);
    if ( (result & 0x8000) != 0 )
    {
      v10 = 54LL;
      *(_DWORD *)(a1 + 288) = result & 0xFFFF7FFF;
      return PostShellHookMessagesEx(v10, *(_QWORD *)a1, 0LL);
    }
  }
  return result;
}
