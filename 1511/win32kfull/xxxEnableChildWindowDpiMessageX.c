/*
 * XREFs of xxxEnableChildWindowDpiMessageX @ 0x1C0092C74
 * Callers:
 *     NtUserEnableChildWindowDpiMessage @ 0x1C0092D30 (NtUserEnableChildWindowDpiMessage.c)
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142AB0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C006CE7C (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x1C0091974 (xxxNotifyMonitorChanged.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01E57D4 (IsChildWindowDpiMessageEnabledX.c)
 */

__int64 __fastcall xxxEnableChildWindowDpiMessageX(struct tagWND *a1, int a2)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  struct tagBWL *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 && *((_DWORD *)a1 + 86) == 2 )
  {
    if ( a2 )
    {
      if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
      {
        *((_DWORD *)a1 + 91) = 1;
      }
      else
      {
        if ( *((_DWORD *)a1 + 91) != 2 )
          return v2;
        *((_DWORD *)a1 + 91) = 0;
        if ( !(unsigned int)IsChildWindowDpiMessageEnabledX(a1) )
          return v2;
      }
      v4 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 44));
    }
    else
    {
      *((_DWORD *)a1 + 91) = 2;
      v4 = *(_QWORD *)(gpDispInfo + 88LL);
    }
    if ( v4 )
    {
      v6 = 0LL;
      if ( (unsigned int)UpdateMonitorForWindowAndChildren((__int64)a1, v4, (__int64 *)&v6, 1) )
      {
        xxxNotifyMonitorChanged(a1, 0LL, v6);
        return 1;
      }
    }
    return v2;
  }
  return 0LL;
}
