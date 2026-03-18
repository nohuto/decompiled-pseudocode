/*
 * XREFs of zzzInternalSetCursorPos @ 0x1C0040BC0
 * Callers:
 *     zzzSetCursorPosByType @ 0x1C003A608 (zzzSetCursorPosByType.c)
 *     zzzClipCursorEx @ 0x1C003D634 (zzzClipCursorEx.c)
 *     zzzResetSharedDesktops @ 0x1C003DE30 (zzzResetSharedDesktops.c)
 *     zzzEnableDwmPointerSupport @ 0x1C003E1F8 (zzzEnableDwmPointerSupport.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C007FBFC (xxxMakeWindowForegroundWithState.c)
 *     xxxUserResetDisplayDevice @ 0x1C01302D0 (xxxUserResetDisplayDevice.c)
 *     zzzActiveCursorTracking @ 0x1C01E2930 (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E6D28 (xxxCallJournalPlaybackHook.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C020C6A4 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     BoundCursor @ 0x1C00407FC (BoundCursor.c)
 *     GreMovePointer @ 0x1C0040870 (GreMovePointer.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C0040B44 (UpdateCursorImageForMonitorDpi.c)
 *     zzzSetFMouseMoved @ 0x1C00442B0 (zzzSetFMouseMoved.c)
 *     IsCurrentDesktopComposed @ 0x1C0057DE0 (IsCurrentDesktopComposed.c)
 *     _MonitorFromPoint @ 0x1C0082CA0 (_MonitorFromPoint.c)
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
  if ( ((__int64 (__fastcall *)(_QWORD, _QWORD))MonitorFromPoint)(gptCursorAsync, 32LL) )
    ghCursorMonitor = *(_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD))MonitorFromPoint)(gptCursorAsync, 32LL);
  else
    ghCursorMonitor = 0LL;
  UpdateCursorImageForMonitorDpi(v7);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))zzzSetFMouseMoved)((LARGE_INTEGER)PerformanceCounter.QuadPart, 0LL);
}
