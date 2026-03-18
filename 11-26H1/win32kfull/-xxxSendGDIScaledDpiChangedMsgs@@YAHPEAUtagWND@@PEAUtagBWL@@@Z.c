/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1402A1DF8
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1402A1D70 (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxSendGDIScaledDpiChangedMsgs(struct tagWND *a1, struct tagBWL *a2)
{
  int v2; // eax
  unsigned int v3; // esi
  int v4; // ebp
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 *i; // rdi

  v2 = *((_DWORD *)a1 + 95);
  v3 = 0;
  v4 = 0;
  if ( (v2 & 0x40000) == 0 )
    return 0LL;
  *((_DWORD *)a1 + 95) = v2 & 0xFFFBFFFF;
  if ( PtiCurrent((__int64)a1) )
  {
    if ( *((_QWORD *)PtiCurrent(v8) + 61) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v9) + 61) + 8LL) + 64LL) & 1) != 0
        && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0x4000000F) == 0x40000000
        && IsTopLevelWindow((__int64)a1) )
      {
        if ( a2 || (a2 = BuildHwndList(a1, 1LL, 0LL, 1), v4 = 1, a2) )
        {
          v3 = xxxSendGDIScaledDpiChangedMessage(*(_QWORD *)a1);
          for ( i = (__int64 *)((char *)a2 + 40); (unsigned __int64)i < *((_QWORD *)a2 + 1); ++i )
            v3 |= xxxSendGDIScaledDpiChangedMessage(*i);
          if ( v4 )
            FreeHwndList(a2, v10);
        }
      }
    }
  }
  return v3;
}
