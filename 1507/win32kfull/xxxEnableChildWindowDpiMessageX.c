/*
 * XREFs of xxxEnableChildWindowDpiMessageX @ 0x1C007C5B0
 * Callers:
 *     NtUserEnableChildWindowDpiMessage @ 0x1C007C530 (NtUserEnableChildWindowDpiMessage.c)
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     UpdateMonitorForWindowAndChildren @ 0x1C005C038 (UpdateMonitorForWindowAndChildren.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C007E314 (xxxNotifyMonitorChanged.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01E5344 (IsChildWindowDpiMessageEnabledX.c)
 */

__int64 __fastcall xxxEnableChildWindowDpiMessageX(struct tagWND *a1, int a2)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

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
      if ( (unsigned int)UpdateMonitorForWindowAndChildren((__int64)a1, v4, &v6, 1) )
      {
        xxxNotifyMonitorChanged(a1);
        return 1;
      }
    }
    return v2;
  }
  return 0LL;
}
