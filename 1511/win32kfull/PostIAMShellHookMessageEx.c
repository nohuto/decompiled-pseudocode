/*
 * XREFs of PostIAMShellHookMessageEx @ 0x1C00783D0
 * Callers:
 *     SetWindowCompositionFreezeSWR @ 0x1C0008C08 (SetWindowCompositionFreezeSWR.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C00758E4 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     xxxDeactivate @ 0x1C008C738 (xxxDeactivate.c)
 *     xxxSetForegroundWindow @ 0x1C008CF98 (xxxSetForegroundWindow.c)
 *     xxxUpdateTray @ 0x1C008F0B0 (xxxUpdateTray.c)
 *     xxxNotifyMonitorChanged @ 0x1C0091974 (xxxNotifyMonitorChanged.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0103828 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     NtUserLayoutCompleted @ 0x1C0103E50 (NtUserLayoutCompleted.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C010DB00 (HandleDisplayChangeForInactiveDesktops.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C01113E8 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01EA1D0 (-RequestModernAppClose@@YAHXZ.c)
 * Callees:
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 */

__int64 __fastcall PostIAMShellHookMessageEx(__int64 a1, unsigned int a2, __int64 a3)
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
          v5 = *(_QWORD *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)a3
                         + *((_QWORD *)&gSharedInfo + 1));
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
              if ( !gpqForeground || *(_QWORD *)(gpqForeground + 80LL) != v5 )
                return result;
            }
          }
        }
        result = *(_QWORD *)(a1 + 8);
        v6 = *(_QWORD *)(result + 184);
        if ( v6 )
          return PostMessage(v6, *(unsigned int *)(gpsi + 912LL), v3, a3);
      }
    }
  }
  return result;
}
