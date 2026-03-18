/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x1C006CE7C
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C0069CF0 (NtUserUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C006CD18 (xxxInheritWindowMonitor.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C0092C74 (xxxEnableChildWindowDpiMessageX.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     UpdateWindowMonitor @ 0x1C006CF60 (UpdateWindowMonitor.c)
 *     FreeHwndList @ 0x1C006D900 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 *     ?PruneHwndListForDPIChangedMessages@@YAPEAPEAUHWND__@@PEAUtagBWL@@@Z @ 0x1C0094710 (-PruneHwndListForDPIChangedMessages@@YAPEAPEAUHWND__@@PEAUtagBWL@@@Z.c)
 */

__int64 __fastcall UpdateMonitorForWindowAndChildren(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // rdi
  unsigned __int64 *i; // rsi
  struct tagWND *v10; // rax
  __int64 v11; // rbx

  result = BuildHwndList(a1, 1LL);
  v8 = result;
  if ( result )
  {
    if ( !a4 && *(_DWORD *)(a1 + 344) == 2 )
      PruneHwndListForDPIChangedMessages((struct tagBWL *)result);
    for ( i = (unsigned __int64 *)(v8 + 32); *i != 1; ++i )
    {
      v10 = (struct tagWND *)HMValidateHandleNoSecure(*i, 1);
      v11 = (__int64)v10;
      if ( v10 )
      {
        UpdateWindowMonitor(v10);
        if ( a4 )
        {
          if ( !(unsigned int)IsTopLevelWindow(v11)
            || (*(_DWORD *)(v11 + 288) & 0x10000000) != 0 && (*(_BYTE *)(v11 + 40) & 0xF) != 0 )
          {
            *(_DWORD *)(v11 + 288) |= 0x8000000u;
          }
        }
      }
    }
    if ( a3 )
      *a3 = v8;
    else
      FreeHwndList(v8);
    return 1LL;
  }
  return result;
}
