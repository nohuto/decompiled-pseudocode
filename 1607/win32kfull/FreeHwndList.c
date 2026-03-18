/*
 * XREFs of FreeHwndList @ 0x1C0076DE0
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C00712C4 (xxxInheritWindowMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C007219C (UpdateMonitorForWindowAndChildren.c)
 *     NtUserBuildHwndList @ 0x1C0076200 (NtUserBuildHwndList.c)
 *     xxxInternalDoSyncPaint @ 0x1C0076920 (xxxInternalDoSyncPaint.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00775CC (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00934F0 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     xxxInternalEnumWindow @ 0x1C0099400 (xxxInternalEnumWindow.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C009C938 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C00AA034 (xxxBroadcastMessageEx.c)
 *     xxxNotifyMonitorChanged @ 0x1C00AEA64 (xxxNotifyMonitorChanged.c)
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
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01F75E8 (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C02311C4 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeHwndList(struct tagBWL *a1)
{
  struct tagBWL **v1; // rdx
  struct tagBWL *v2; // rax
  struct tagBWL *v3; // r8
  signed __int64 v4; // rdx

  v1 = (struct tagBWL **)gpbwlList;
  if ( gpbwlList )
  {
    while ( 1 )
    {
      v2 = *v1;
      if ( *v1 == a1 )
        break;
      v1 = (struct tagBWL **)*v1;
      if ( !*(_QWORD *)v2 )
        return;
    }
    *v1 = *(struct tagBWL **)a1;
    v3 = pbwlCache;
    if ( pbwlCache )
    {
      v4 = (*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( (__int64)((*((_QWORD *)a1 + 2) - (_QWORD)a1 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) > v4 )
      {
        pbwlCache = a1;
        a1 = v3;
      }
      Win32FreePool(a1, v4, v3);
    }
    else
    {
      pbwlCache = a1;
    }
  }
}
