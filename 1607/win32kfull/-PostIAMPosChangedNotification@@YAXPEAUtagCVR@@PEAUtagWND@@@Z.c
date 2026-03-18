/*
 * XREFs of ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C009E380
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0079418 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C009E30C (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PostIAMPosChangedNotification(struct tagCVR *a1, struct tagWND *a2)
{
  if ( (*((_DWORD *)a1 + 8) & 0x10000) != 0 && (*((_BYTE *)a2 + 290) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 31LL, *(_QWORD *)a1);
}
