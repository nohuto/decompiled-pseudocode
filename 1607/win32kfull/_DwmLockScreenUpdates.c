/*
 * XREFs of _DwmLockScreenUpdates @ 0x1C0133EA0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsCurrentDesktopComposed @ 0x1C00DF580 (IsCurrentDesktopComposed.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DwmLockScreenUpdates(int a1)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    g_bLockUpdatesForDwm = a1;
    if ( grpdeskRitInput && g_bLockUpdatesForDwm && !a1 && !(unsigned int)IsCurrentDesktopComposed() )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
      v6[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v6;
      v6[1] = v3;
      if ( v3 )
        ++*(_DWORD *)(v3 + 8);
      xxxRedrawWindow((struct tagWND *)v3, 0LL, 0LL, 133);
      ThreadUnlock1(v5, v4);
    }
  }
  else
  {
    UserSetLastError(5LL);
  }
  return 0LL;
}
