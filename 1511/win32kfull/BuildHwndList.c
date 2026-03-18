/*
 * XREFs of BuildHwndList @ 0x1C006D970
 * Callers:
 *     UpdateMonitorForWindowAndChildren @ 0x1C006CE7C (UpdateMonitorForWindowAndChildren.c)
 *     NtUserBuildHwndList @ 0x1C006D080 (NtUserBuildHwndList.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006D350 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxInternalDoSyncPaint @ 0x1C006D570 (xxxInternalDoSyncPaint.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxBroadcastMessageEx @ 0x1C0075B18 (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C008E100 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxInternalEnumWindow @ 0x1C0090834 (xxxInternalEnumWindow.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0091B34 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxShowOwnedWindows @ 0x1C00C94C4 (xxxShowOwnedWindows.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00D26D8 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00DD040 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxDesktopRecalc @ 0x1C00EF640 (xxxDesktopRecalc.c)
 *     xxxDWP_UpdateUIState @ 0x1C00F579C (xxxDWP_UpdateUIState.c)
 *     xxxClientShutdown @ 0x1C00FF368 (xxxClientShutdown.c)
 *     AssociateInputContextEx @ 0x1C0100D68 (AssociateInputContextEx.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C013EC54 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C0149340 (xxxArrangeIconicWindows.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D653C (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01D78AC (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01D7D60 (xxxMetricsRecalc.c)
 *     DestroyInputContext @ 0x1C01E333C (DestroyInputContext.c)
 *     xxxForceUpdateProcessDpiAwareness @ 0x1C01E6C34 (xxxForceUpdateProcessDpiAwareness.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01FF80C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C0239164 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@H@Z @ 0x1C006DB60 (-InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@H@Z.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006DDCC (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C006E7C4 (IsWindowSubjectToShellWindowBehavior.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagBWL *__fastcall BuildHwndList(__int64 a1, char a2, __int64 a3)
{
  struct tagBWL *v3; // r14
  __int64 v7; // rsi
  _QWORD *v8; // rax
  struct tagBWL *result; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // ecx
  struct tagWND *v15; // rdx
  __int64 v16; // rax

  v3 = pbwlCache;
  if ( pbwlCache )
  {
    pbwlCache = 0LL;
  }
  else
  {
    v16 = Win32AllocPool(296LL);
    v3 = (struct tagBWL *)v16;
    if ( !v16 )
      return 0LL;
    *(_QWORD *)(v16 + 16) = v16 + 280;
  }
  *((_QWORD *)v3 + 3) = a3;
  for ( *((_QWORD *)v3 + 1) = (char *)v3 + 32; a1; a1 = *(_QWORD *)(a1 + 72) )
  {
    v7 = *((_QWORD *)v3 + 3);
    if ( (a2 & 0x20) == 0 || (v14 = *(_DWORD *)(a1 + 304), (unsigned int)(v14 - 1) <= 1) || v14 == 16 )
    {
      if ( ((a2 & 0x40) == 0
         || (*(_BYTE *)(a1 + 55) & 0x11) != 0x10
         || (*(_BYTE *)(a1 + 44) & 0x40) != 0
         || !(unsigned int)IsWindowSubjectToShellWindowBehavior(a1, 127LL))
        && (!v7 || v7 == *(_QWORD *)(a1 + 16)) )
      {
        **((_QWORD **)v3 + 1) = *(_QWORD *)a1;
        *((_QWORD *)v3 + 1) += 8LL;
        v10 = *((_QWORD *)v3 + 1);
        if ( v10 == *((_QWORD *)v3 + 2) )
        {
          v11 = v10 - (_QWORD)v3;
          v12 = UserReAllocPool(v3, (unsigned int)v11 + 8LL, (unsigned int)v11 + 72LL, 1819767637LL);
          if ( !v12 )
            break;
          v13 = v12 + v11;
          v3 = (struct tagBWL *)v12;
          *(_QWORD *)(v12 + 8) = v13;
          *(_QWORD *)(v12 + 16) = v13 + 64;
        }
      }
    }
    if ( (a2 & 1) != 0 )
    {
      v15 = *(struct tagWND **)(a1 + 96);
      if ( v15 )
      {
        v3 = InternalBuildHwndList(v3, v15, 3u);
        if ( *((_QWORD *)v3 + 1) >= *((_QWORD *)v3 + 2) )
          break;
      }
    }
    if ( (a2 & 2) == 0 )
      break;
  }
  v8 = (_QWORD *)*((_QWORD *)v3 + 1);
  if ( (unsigned __int64)v8 >= *((_QWORD *)v3 + 2) )
  {
    Win32FreePool(v3);
    return 0LL;
  }
  *v8 = 1LL;
  if ( (a2 & 8) != 0 )
    v3 = InternalRebuildHwndListForIMEClass(v3, (a2 & 0x10) != 0);
  result = v3;
  *((_QWORD *)v3 + 3) = gptiCurrent;
  *(_QWORD *)v3 = gpbwlList;
  gpbwlList = v3;
  return result;
}
