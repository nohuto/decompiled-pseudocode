/*
 * XREFs of BuildHwndList @ 0x1C0076E50
 * Callers:
 *     UpdateMonitorForWindowAndChildren @ 0x1C007219C (UpdateMonitorForWindowAndChildren.c)
 *     NtUserBuildHwndList @ 0x1C0076200 (NtUserBuildHwndList.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00775CC (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00934F0 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     xxxInternalEnumWindow @ 0x1C0099400 (xxxInternalEnumWindow.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C009C938 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C00AA034 (xxxBroadcastMessageEx.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00B0260 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxShowOwnedWindows @ 0x1C00B29B0 (xxxShowOwnedWindows.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00FBA30 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxDesktopRecalc @ 0x1C010DE48 (xxxDesktopRecalc.c)
 *     xxxDWP_UpdateUIState @ 0x1C01148BC (xxxDWP_UpdateUIState.c)
 *     xxxClientShutdown @ 0x1C0120F14 (xxxClientShutdown.c)
 *     AssociateInputContextEx @ 0x1C0122518 (AssociateInputContextEx.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0144604 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C014E1F0 (xxxArrangeIconicWindows.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01CD3F4 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01CE760 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01CEDD8 (xxxMetricsRecalc.c)
 *     DestroyInputContext @ 0x1C01D9C00 (DestroyInputContext.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01DD3C0 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F6CEC (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C02311C4 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@H@Z @ 0x1C0077040 (-InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@H@Z.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C008D6F0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C009E938 (IsWindowSubjectToShellWindowBehavior.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagBWL *__fastcall BuildHwndList(__int64 a1, struct tagWND *a2, __int64 a3)
{
  struct tagBWL *v3; // r14
  char v5; // di
  __int64 v7; // rsi
  int v8; // ecx
  __int64 v9; // rsi
  _QWORD *v10; // rcx
  struct tagBWL *result; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax

  v3 = pbwlCache;
  v5 = (char)a2;
  if ( pbwlCache )
  {
    pbwlCache = 0LL;
  }
  else
  {
    v15 = Win32AllocPool(296LL, 1819767637LL);
    v3 = (struct tagBWL *)v15;
    if ( !v15 )
      return 0LL;
    *(_QWORD *)(v15 + 16) = v15 + 280;
  }
  *((_QWORD *)v3 + 3) = a3;
  for ( *((_QWORD *)v3 + 1) = (char *)v3 + 32; a1; a1 = *(_QWORD *)(a1 + 72) )
  {
    v7 = *((_QWORD *)v3 + 3);
    if ( (v5 & 0x20) == 0 || (v8 = *(_DWORD *)(a1 + 304), (unsigned int)(v8 - 1) <= 1) || v8 == 16 )
    {
      if ( ((v5 & 0x40) == 0
         || (*(_BYTE *)(a1 + 55) & 0x11) != 0x10
         || (*(_BYTE *)(a1 + 44) & 0x40) != 0
         || !(unsigned int)IsWindowSubjectToShellWindowBehavior(a1, 127LL))
        && (!v7 || v7 == *(_QWORD *)(a1 + 16)) )
      {
        **((_QWORD **)v3 + 1) = *(_QWORD *)a1;
        *((_QWORD *)v3 + 1) += 8LL;
        v9 = *((_QWORD *)v3 + 1);
        if ( v9 == *((_QWORD *)v3 + 2) )
        {
          v12 = v9 - (_QWORD)v3;
          v13 = UserReAllocPool(v3, (unsigned int)v12 + 8LL, (unsigned int)v12 + 72LL, 1819767637LL);
          if ( !v13 )
            break;
          v14 = v13 + v12;
          v3 = (struct tagBWL *)v13;
          *(_QWORD *)(v13 + 8) = v14;
          *(_QWORD *)(v13 + 16) = v14 + 64;
        }
      }
    }
    if ( (v5 & 1) != 0 )
    {
      a2 = *(struct tagWND **)(a1 + 96);
      if ( a2 )
      {
        v3 = InternalBuildHwndList(v3, a2, 3u);
        if ( *((_QWORD *)v3 + 1) >= *((_QWORD *)v3 + 2) )
          break;
      }
    }
    if ( (v5 & 2) == 0 )
      break;
  }
  v10 = (_QWORD *)*((_QWORD *)v3 + 1);
  if ( (unsigned __int64)v10 >= *((_QWORD *)v3 + 2) )
  {
    Win32FreePool(v3, a2, a3);
    return 0LL;
  }
  *v10 = 1LL;
  if ( (v5 & 8) != 0 )
    v3 = InternalRebuildHwndListForIMEClass(v3, (v5 & 0x10) != 0);
  result = v3;
  *((_QWORD *)v3 + 3) = gptiCurrent;
  *(_QWORD *)v3 = gpbwlList;
  gpbwlList = v3;
  return result;
}
