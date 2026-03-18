/*
 * XREFs of ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C00069F0
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C0006310 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01E2140 (PostMousePointerLeaveAndCleanup.c)
 * Callees:
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 */

void __fastcall StopMiPIdleNotificationTimer(struct tagWND *a1)
{
  __int64 v1; // r8

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 1120LL);
  if ( *(_QWORD *)a1 == *(_QWORD *)(v1 + 8) )
  {
    *(_QWORD *)(v1 + 8) = 0LL;
    FindTimer((_DWORD)a1, 65523, 2, 1, 0LL);
  }
}
