/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x1C005C038
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C0058BB0 (NtUserUpdateLayeredWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C005BED4 (xxxInheritWindowMonitor.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C007C5B0 (xxxEnableChildWindowDpiMessageX.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?PruneHwndListForDPIChangedMessages@@YAPEAPEAUHWND__@@PEAUtagBWL@@@Z @ 0x1C0058B34 (-PruneHwndListForDPIChangedMessages@@YAPEAPEAUHWND__@@PEAUtagBWL@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C005C120 (UpdateWindowMonitor.c)
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UpdateMonitorForWindowAndChildren(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  _QWORD *i; // rsi
  struct tagWND *v11; // rax
  struct tagWND *v12; // rbx

  result = BuildHwndList(a1, 1LL, 0LL);
  v9 = result;
  if ( result )
  {
    if ( !a4 && *(_DWORD *)(a1 + 344) == 2 )
      PruneHwndListForDPIChangedMessages((struct tagBWL *)result, v8);
    for ( i = (_QWORD *)(v9 + 32); *i != 1LL; ++i )
    {
      LOBYTE(v8) = 1;
      v11 = (struct tagWND *)HMValidateHandleNoSecure(*i, v8);
      v12 = v11;
      if ( v11 )
      {
        UpdateWindowMonitor(v11);
        if ( a4 )
        {
          if ( !(unsigned int)IsTopLevelWindow(v12)
            || (*((_DWORD *)v12 + 72) & 0x10000000) != 0 && (*((_BYTE *)v12 + 40) & 0xF) != 0 )
          {
            *((_DWORD *)v12 + 72) |= 0x8000000u;
          }
        }
      }
    }
    if ( a3 )
      *a3 = v9;
    else
      FreeHwndList(v9);
    return 1LL;
  }
  return result;
}
