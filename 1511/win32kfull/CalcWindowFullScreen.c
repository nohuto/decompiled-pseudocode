/*
 * XREFs of CalcWindowFullScreen @ 0x1C0055DBC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0054A5C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C006BDDC (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     CalcWindowsFullScreen @ 0x1C01024A0 (CalcWindowsFullScreen.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     _MonitorFromWindow @ 0x1C0077FC0 (_MonitorFromWindow.c)
 *     GetDPIMonitorRect @ 0x1C007824C (GetDPIMonitorRect.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     UnionRect @ 0x1C00EB38C (UnionRect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall CalcWindowFullScreen(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  __int64 v4; // rsi
  __int128 v5; // xmm0
  __int64 v6; // rcx
  unsigned int MonitorFlags; // eax
  __int64 DPIMonitorRect; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( (unsigned int)IsTopLevelWindow(a1) && (*(_BYTE *)(a1 + 55) & 0x10) != 0 )
  {
    v4 = MonitorFromWindow(a1, 2LL);
    if ( v4 )
    {
      if ( (*(_BYTE *)(a1 + 54) & 0xC4) == 0xC4 )
        v5 = *(_OWORD *)(a1 + 128);
      else
        v5 = *(_OWORD *)(a1 + 112);
      v6 = *(_QWORD *)(a1 + 16);
      v11 = v5;
      MonitorFlags = GetMonitorFlags(*(_QWORD *)(v6 + 376));
      DPIMonitorRect = GetDPIMonitorRect(v4, MonitorFlags);
      UnionRect(v12, &v11, DPIMonitorRect);
      v9 = v12[0] - v11;
      if ( v12[0] == (_QWORD)v11 )
        v9 = v12[1] - *((_QWORD *)&v11 + 1);
      LOBYTE(v2) = v9 == 0;
    }
    result = (*(_DWORD *)(a1 + 288) >> 15) & 1;
    if ( v2 != (_DWORD)result )
    {
      *(_DWORD *)(a1 + 288) ^= ((unsigned __int16)*(_DWORD *)(a1 + 288) ^ (unsigned __int16)((_WORD)v2 << 15)) & 0x8000;
      if ( gpqForeground && *(_QWORD *)(gpqForeground + 80LL) == a1 )
      {
        if ( v2 )
          EtwTraceForegroundWindowFullScreenStart(0LL);
        else
          EtwTraceForegroundWindowFullScreenStop(0LL);
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
