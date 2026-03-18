/*
 * XREFs of PostIAMShellHookMessageEx @ 0x1C00A4BF0
 * Callers:
 *     SetWindowCompositionFreezeSWR @ 0x1C000C5B8 (SetWindowCompositionFreezeSWR.c)
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxDeactivate @ 0x1C0098E24 (xxxDeactivate.c)
 *     xxxUpdateTray @ 0x1C009C3D0 (xxxUpdateTray.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C009E380 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     xxxSetForegroundWindow @ 0x1C00A8FB4 (xxxSetForegroundWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C00AEA64 (xxxNotifyMonitorChanged.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00DAF30 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     NtUserLayoutCompleted @ 0x1C0126FC0 (NtUserLayoutCompleted.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C012F180 (HandleDisplayChangeForInactiveDesktops.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C0131034 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01E0A50 (-RequestModernAppClose@@YAHXZ.c)
 * Callees:
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 */

__int64 __fastcall PostIAMShellHookMessageEx(__int64 a1, unsigned int a2, unsigned __int16 a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( a1 )
  {
    v3 = a2;
    result = *(unsigned int *)(gpsi + 2104LL);
    if ( (result & 8) != 0 )
    {
      if ( *(_QWORD *)(a1 + 280) )
      {
        if ( a2 != 35 )
        {
          v5 = *(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)a3 + gSharedInfo[1]);
          if ( (_DWORD)v3 == 18 )
          {
            *(_BYTE *)(v5 + 290) &= ~2u;
          }
          else
          {
            *(_BYTE *)(v5 + 290) |= 2u;
            if ( (((_DWORD)v3 - 19) & 0xFFFFFFFB) == 0 )
            {
              result = gpqForeground;
              if ( !gpqForeground || *(_QWORD *)(gpqForeground + 88LL) != v5 )
                return result;
            }
          }
        }
        result = *(_QWORD *)(a1 + 8);
        v6 = *(_QWORD *)(result + 184);
        if ( v6 )
          return PostMessage(v6, *(unsigned int *)(gpsi + 912LL), v3);
      }
    }
  }
  return result;
}
