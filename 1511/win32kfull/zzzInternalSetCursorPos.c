/*
 * XREFs of zzzInternalSetCursorPos @ 0x1C009A8F8
 * Callers:
 *     zzzClipCursorEx @ 0x1C008AA64 (zzzClipCursorEx.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C008F264 (xxxMakeWindowForegroundWithState.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0096CD8 (zzzEnableDwmPointerSupport.c)
 *     zzzResetSharedDesktops @ 0x1C009A600 (zzzResetSharedDesktops.c)
 *     zzzSetCursorPosByType @ 0x1C009A758 (zzzSetCursorPosByType.c)
 *     xxxUserResetDisplayDevice @ 0x1C014F2F0 (xxxUserResetDisplayDevice.c)
 *     zzzActiveCursorTracking @ 0x1C01E2DC0 (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E7198 (xxxCallJournalPlaybackHook.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C020CE20 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0077F10 (_MonitorFromPoint.c)
 *     IsCurrentDesktopComposed @ 0x1C00874C0 (IsCurrentDesktopComposed.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C008823C (UpdateCursorImageForMonitorDpi.c)
 *     GreMovePointer @ 0x1C00882C0 (GreMovePointer.c)
 *     BoundCursor @ 0x1C00885BC (BoundCursor.c)
 *     zzzSetFMouseMoved @ 0x1C008BF80 (zzzSetFMouseMoved.c)
 */

__int64 __fastcall zzzInternalSetCursorPos(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  unsigned __int16 v7; // bx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v6 = ValidateHmonitorNoRip(ghCursorMonitor);
  if ( v6 )
    v7 = *(_WORD *)(v6 + 152);
  else
    v7 = 0;
  v10 = __PAIR64__(a2, a1);
  if ( a3 == 1 && (unsigned int)IsCurrentDesktopComposed() )
    LogicalToPhysicalDPIPoint(&v10, &v10, 0LL, 0LL);
  gptCursorAsync = (struct tagPOINT)v10;
  BoundCursor((LONG *)&gptCursorAsync, 0);
  *(struct tagPOINT *)(gpsi + 3976LL) = gptCursorAsync;
  GreMovePointer((HDEV)*gpDispInfo, *(_DWORD *)(gpsi + 3976LL), *(_DWORD *)(gpsi + 3980LL), 1);
  if ( MonitorFromPoint(*(_QWORD *)&gptCursorAsync, 0x20u) )
    ghCursorMonitor = *(_QWORD *)MonitorFromPoint(*(_QWORD *)&gptCursorAsync, 0x20u);
  else
    ghCursorMonitor = 0LL;
  UpdateCursorImageForMonitorDpi(v7);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  return zzzSetFMouseMoved(PerformanceCounter.QuadPart, 0LL);
}
