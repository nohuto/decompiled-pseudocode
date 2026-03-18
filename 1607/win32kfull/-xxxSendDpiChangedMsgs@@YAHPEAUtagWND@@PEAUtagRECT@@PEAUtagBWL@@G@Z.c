/*
 * XREFs of ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00B0260
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C00AEA64 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@G@Z @ 0x1C00B03A4 (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@G@Z.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C012E2DC (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 */

__int64 __fastcall xxxSendDpiChangedMsgs(struct tagWND *a1, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  int v4; // r10d
  unsigned int v5; // ebx
  char v10; // al
  unsigned __int16 v11; // r9
  int v12; // r10d
  HWND *i; // r14
  HWND *j; // rsi

  v4 = *((_DWORD *)a1 + 72);
  v5 = 0;
  if ( (v4 & 0x8000000) == 0 )
    return 0LL;
  v10 = *((_DWORD *)a1 + 88) & 0xF;
  *((_DWORD *)a1 + 72) = v4 & 0xD7FFFFFF;
  if ( v10 == 2 && (unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    if ( v12 < 0 )
    {
      if ( a3 || (a3 = BuildHwndList((__int64)a1, (struct tagWND *)1, 0LL)) != 0LL )
      {
        for ( i = (HWND *)*((_QWORD *)a3 + 1); --i > (HWND *)a3 + 4; v5 |= xxxSendDpiChangedMessageToChildWindow(*i, 1) )
          ;
        v5 |= xxxSendDpiChangedMessageToTopLevelWindow(a1, a2, a4);
        for ( j = (HWND *)((char *)a3 + 40); (unsigned __int64)j < *((_QWORD *)a3 + 1); ++j )
          v5 |= xxxSendDpiChangedMessageToChildWindow(*j, 0);
      }
    }
    else
    {
      return (unsigned int)xxxSendDpiChangedMessageToTopLevelWindow(a1, a2, v11);
    }
  }
  return v5;
}
