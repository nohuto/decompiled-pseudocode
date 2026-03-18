/*
 * XREFs of xxxEnableChildWindowDpiMessageX @ 0x1C00B2504
 * Callers:
 *     NtUserEnableChildWindowDpiMessage @ 0x1C00B25C0 (NtUserEnableChildWindowDpiMessage.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01485F0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     UpdateMonitorForWindowAndChildren @ 0x1C007219C (UpdateMonitorForWindowAndChildren.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C00AEA64 (xxxNotifyMonitorChanged.c)
 */

__int64 __fastcall xxxEnableChildWindowDpiMessageX(struct tagWND *a1)
{
  unsigned int v1; // edi
  int v3; // r9d
  __int64 v4; // rax
  struct tagBWL *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !a1 || (*((_DWORD *)a1 + 88) & 0xF) != 2 || !(unsigned int)IsTopLevelWindow((__int64)a1) )
    return 0LL;
  if ( v3 )
  {
    *((_DWORD *)a1 + 72) |= 0xC0000000;
    v4 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 43));
  }
  else
  {
    *((_DWORD *)a1 + 72) &= 0x3FFFFFFFu;
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
  return v1;
}
