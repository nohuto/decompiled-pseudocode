/*
 * XREFs of PostIAMShellHookMessageEx @ 0x1C007AFD0
 * Callers:
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C0004690 (-RequestModernAppClose@@YAHXZ.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0040454 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSetForegroundWindow @ 0x1C00450B0 (xxxSetForegroundWindow.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0066904 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C0079630 (HandleDisplayChangeForInactiveDesktops.c)
 *     xxxDeactivate @ 0x1C007D9B8 (xxxDeactivate.c)
 *     xxxNotifyMonitorChanged @ 0x1C007E314 (xxxNotifyMonitorChanged.c)
 *     xxxUpdateTray @ 0x1C007FA48 (xxxUpdateTray.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     NtUserLayoutCompleted @ 0x1C00FADE0 (NtUserLayoutCompleted.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C00FEB68 (SetWindowCompositionFreezeSWR.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C0100ABC (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     IAMKeyAcquired @ 0x1C007B0A0 (IAMKeyAcquired.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 */

void __fastcall PostIAMShellHookMessageEx(__int64 a1, int a2, unsigned __int16 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( a1 && (*(_DWORD *)(gpsi + 2104LL) & 8) != 0 && (unsigned int)IAMKeyAcquired() )
  {
    if ( a2 != 35 )
    {
      v6 = *(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)a3 + gSharedInfo[1]);
      if ( a2 == 18 )
      {
        *(_BYTE *)(v6 + 290) &= ~2u;
      }
      else
      {
        *(_BYTE *)(v6 + 290) |= 2u;
        if ( ((a2 - 19) & 0xFFFFFFFB) == 0 && (!gpqForeground || *(_QWORD *)(gpqForeground + 80LL) != v6) )
          return;
      }
    }
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL);
    if ( v7 )
      PostMessage(v7, *(unsigned int *)(gpsi + 912LL));
  }
}
