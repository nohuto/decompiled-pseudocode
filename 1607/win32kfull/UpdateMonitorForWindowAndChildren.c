/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x1C007219C
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C0053B90 (NtUserUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00712C4 (xxxInheritWindowMonitor.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00B2504 (xxxEnableChildWindowDpiMessageX.c)
 * Callees:
 *     UpdateWindowMonitor @ 0x1C0072260 (UpdateWindowMonitor.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UpdateMonitorForWindowAndChildren(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  _QWORD *i; // rdi
  struct tagWND *v10; // rax
  struct tagWND *v11; // rbx

  result = BuildHwndList(a1, 1LL);
  v8 = result;
  if ( result )
  {
    for ( i = (_QWORD *)(result + 32); *i != 1LL; ++i )
    {
      LOBYTE(v7) = 1;
      v10 = (struct tagWND *)HMValidateHandleNoSecure(*i, v7);
      v11 = v10;
      if ( v10 )
      {
        UpdateWindowMonitor(v10);
        if ( a4 )
        {
          if ( !(unsigned int)IsTopLevelWindow(v11)
            || (*((_DWORD *)v11 + 72) & 0x10000000) != 0 && (*((_BYTE *)v11 + 40) & 0xF) != 0 )
          {
            *((_DWORD *)v11 + 72) |= 0x8000000u;
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
