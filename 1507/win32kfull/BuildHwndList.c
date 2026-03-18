/*
 * XREFs of BuildHwndList @ 0x1C0062640
 * Callers:
 *     xxxDesktopRecalc @ 0x1C0039710 (xxxDesktopRecalc.c)
 *     xxxShowOwnedWindows @ 0x1C003F7A8 (xxxShowOwnedWindows.c)
 *     xxxBroadcastMessageEx @ 0x1C004D864 (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C004E3B8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C005C038 (UpdateMonitorForWindowAndChildren.c)
 *     xxxInternalDoSyncPaint @ 0x1C0062240 (xxxInternalDoSyncPaint.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C0062824 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     NtUserBuildHwndList @ 0x1C007BA50 (NtUserBuildHwndList.c)
 *     ?xxxSendDpiChangedMsgs@@YAXPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C007DE64 (-xxxSendDpiChangedMsgs@@YAXPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxInternalEnumWindow @ 0x1C007E7F8 (xxxInternalEnumWindow.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00D6AE0 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1C00EF9E4 (xxxDWP_UpdateUIState.c)
 *     AssociateInputContextEx @ 0x1C00F7494 (AssociateInputContextEx.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0114054 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C011FC70 (xxxArrangeIconicWindows.c)
 *     xxxClientShutdown @ 0x1C012CF00 (xxxClientShutdown.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C014A8F4 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D49B0 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01D5D80 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01D61DC (xxxMetricsRecalc.c)
 *     DestroyInputContext @ 0x1C01E2EAC (DestroyInputContext.c)
 *     xxxForceUpdateProcessDpiAwareness @ 0x1C01E67A4 (xxxForceUpdateProcessDpiAwareness.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01FF15C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C0238D50 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0076840 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0081EAC (IsWindowSubjectToShellWindowBehavior.c)
 *     ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@H@Z @ 0x1C00C7000 (-InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@H@Z.c)
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
    v16 = Win32AllocPool(296LL, 1819767637LL);
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
         || !(unsigned int)IsWindowSubjectToShellWindowBehavior(a1, 63LL))
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
