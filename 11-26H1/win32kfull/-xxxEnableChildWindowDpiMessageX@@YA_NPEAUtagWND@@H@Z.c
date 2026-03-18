/*
 * XREFs of ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401663E8
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140165EB4 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     NtUserEnableChildWindowDpiMessage @ 0x140166350 (NtUserEnableChildWindowDpiMessage.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 * Callees:
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x14004B91C (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x14004BA00 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     UpdateWindowMonitor @ 0x14004BA40 (UpdateWindowMonitor.c)
 *     HMValidateCatHandleNoSecure @ 0x14004BD14 (HMValidateCatHandleNoSecure.c)
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x14004BFCC (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 */

char __fastcall xxxEnableChildWindowDpiMessageX(struct tagWND *a1)
{
  char v1; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // r10d
  int v7; // eax
  struct tagMONITOR *v8; // r12
  unsigned __int16 v9; // r13
  struct tagBWL *v10; // rax
  struct tagBWL *v11; // r15
  __int64 v12; // rdx
  struct tagWLDBI *v13; // rsi
  __int64 *i; // r14
  __int64 v16; // rbp
  __int64 v17; // rax

  v1 = 0;
  if ( !a1 || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 || !IsTopLevelWindow((__int64)a1) )
    return 0;
  v7 = *((_DWORD *)a1 + 95);
  if ( v6 )
  {
    *((_DWORD *)a1 + 95) = v7 | 0x180000;
    v8 = (struct tagMONITOR *)ValidateHmonitorNoRip(*(_QWORD *)(v5 + 256));
  }
  else
  {
    *((_DWORD *)a1 + 95) = v7 & 0xFFE7FFFF;
    v8 = *(struct tagMONITOR **)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 56968) + 96LL);
  }
  if ( v8 )
  {
    v9 = *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL);
    v10 = BuildHwndList(a1, 1LL, 0LL, 1);
    v11 = v10;
    if ( v10 )
    {
      v13 = BuildWindowListWithDpiBoundaryInfo(a1, *((struct tagWND **)a1 + 13), v10, 0LL);
      for ( i = (__int64 *)((char *)v11 + 32); *i != 1; ++i )
      {
        v16 = HMValidateCatHandleNoSecure(*i);
        UpdateWindowMonitor((struct tagWND *)v16, v8);
        if ( IsTopLevelWindow(v16) )
        {
          v17 = *(_QWORD *)(v16 + 40);
          if ( (*(_DWORD *)(v17 + 232) & 0x400) == 0 || (*(_BYTE *)(v17 + 16) & 0xF) == 0 )
            continue;
        }
        *(_DWORD *)(v16 + 380) |= 0x40000u;
      }
      if ( v13 )
      {
        UpdateWindowPositionsForDpiBoundaryChange(v13, v12);
        FreeListFree(v13);
      }
      xxxNotifyMonitorChanged(a1, 0LL, v11, v9);
      return 1;
    }
  }
  return v1;
}
