/*
 * XREFs of xxxInheritWindowMonitor @ 0x1C00712C4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C00A11FC (xxxSetWindowData.c)
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     xxxAddShadow @ 0x1C0138D4C (xxxAddShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 *     NtUserInheritWindowMonitor @ 0x1C0216520 (NtUserInheritWindowMonitor.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0054080 (InternalRemoveProp.c)
 *     GetNewMonitor @ 0x1C0070AA8 (GetNewMonitor.c)
 *     HasMaximizedState @ 0x1C00712A4 (HasMaximizedState.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C007219C (UpdateMonitorForWindowAndChildren.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     InternalSetProp @ 0x1C00A782C (InternalSetProp.c)
 *     xxxNotifyMonitorChanged @ 0x1C00AEA64 (xxxNotifyMonitorChanged.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxInheritWindowMonitor(struct tagWND *a1, struct tagWND *a2, int a3, int a4)
{
  struct tagRECT v4; // xmm0
  __int64 v7; // rcx
  unsigned int v10; // r15d
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 TopLevelWindow; // r13
  __int64 NewMonitor; // rbx
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  struct tagRECT v19; // [rsp+38h] [rbp-50h] BYREF

  v4 = (struct tagRECT)*((_OWORD *)a1 + 7);
  v7 = *((_QWORD *)a1 + 43);
  v19 = v4;
  v10 = 1;
  v11 = ValidateHmonitorNoRip(v7);
  TopLevelWindow = GetTopLevelWindow(a2, v12, v13, v14);
  if ( a4 )
  {
    if ( a2 )
      v10 = InternalSetProp(a1, (unsigned __int16)gatomMonitorInheritance, *(_QWORD *)a2, 1LL);
    else
      InternalRemoveProp();
  }
  if ( a2 == a1 )
    a2 = 0LL;
  if ( !a2 || TopLevelWindow && (*(_BYTE *)(TopLevelWindow + 44) & 0x20) != 0 )
    goto LABEL_5;
  NewMonitor = ValidateHmonitorNoRip(*((_QWORD *)a2 + 43));
  if ( a3
    && !(unsigned int)HasMaximizedState(a1)
    && (*((_DWORD *)a1 + 88) & 0xF) == 2
    && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 568LL) & 0x2000000) == 0 )
  {
    if ( !NewMonitor )
    {
LABEL_5:
      NewMonitor = GetNewMonitor((__m128i *)a1, 0LL, &v19);
      goto LABEL_6;
    }
    if ( v11 )
      ScaleDPIRect(
        &v19,
        (char *)a1 + 112,
        *(unsigned __int16 *)(NewMonitor + 154),
        *(unsigned __int16 *)(v11 + 154),
        *((_QWORD *)a1 + 14),
        *((_QWORD *)a1 + 14));
  }
  if ( !NewMonitor )
    goto LABEL_5;
LABEL_6:
  if ( (unsigned int)UpdateMonitorForWindowAndChildren(a1, NewMonitor, &v18, 0LL) )
  {
    if ( a3 )
      xxxNotifyMonitorChanged(a1);
    else
      FreeHwndList(v18);
  }
  return v10;
}
