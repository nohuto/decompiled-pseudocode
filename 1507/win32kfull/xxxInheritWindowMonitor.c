/*
 * XREFs of xxxInheritWindowMonitor @ 0x1C005BED4
 * Callers:
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C0067F10 (xxxSetWindowData.c)
 *     xxxCreateDesktopEx @ 0x1C00DBDE0 (xxxCreateDesktopEx.c)
 *     xxxAddShadow @ 0x1C0104418 (xxxAddShadow.c)
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117B2C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     UpdateMonitorForWindowAndChildren @ 0x1C005C038 (UpdateMonitorForWindowAndChildren.c)
 *     GetNewMonitor @ 0x1C005C238 (GetNewMonitor.c)
 *     HasMaximizedState @ 0x1C005C9DC (HasMaximizedState.c)
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     xxxNotifyMonitorChanged @ 0x1C007E314 (xxxNotifyMonitorChanged.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall xxxInheritWindowMonitor(struct tagWND *a1, __int64 a2, int a3)
{
  _QWORD *v3; // r15
  struct tagRECT v5; // xmm0
  __int64 v6; // rcx
  __int64 v9; // rbp
  __int64 TopLevelWindow; // rax
  __int64 NewMonitor; // rsi
  __int64 result; // rax
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v14; // [rsp+38h] [rbp-40h] BYREF

  v3 = (_QWORD *)((char *)a1 + 112);
  v5 = (struct tagRECT)*((_OWORD *)a1 + 7);
  v6 = *((_QWORD *)a1 + 44);
  v14 = v5;
  v9 = ValidateHmonitorNoRip(v6);
  TopLevelWindow = GetTopLevelWindow(a2);
  if ( !a2 || TopLevelWindow && (*(_BYTE *)(TopLevelWindow + 44) & 0x20) != 0 )
    goto LABEL_2;
  NewMonitor = ValidateHmonitorNoRip(*(_QWORD *)(a2 + 352));
  if ( a3
    && !(unsigned int)HasMaximizedState(a1)
    && *((_DWORD *)a1 + 86) == 2
    && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 576LL) & 0x2000000) == 0 )
  {
    if ( !NewMonitor )
    {
LABEL_2:
      NewMonitor = GetNewMonitor(a1, 0LL, &v14);
      goto LABEL_3;
    }
    if ( v9 )
      ScaleDPIRect(&v14, v3, *(unsigned __int16 *)(NewMonitor + 152), *(unsigned __int16 *)(v9 + 152), *v3, *v3);
  }
  if ( !NewMonitor )
    goto LABEL_2;
LABEL_3:
  result = UpdateMonitorForWindowAndChildren(a1, NewMonitor, &v13, 0LL);
  if ( (_DWORD)result )
  {
    if ( a3 )
      return xxxNotifyMonitorChanged(a1);
    else
      return FreeHwndList(v13);
  }
  return result;
}
