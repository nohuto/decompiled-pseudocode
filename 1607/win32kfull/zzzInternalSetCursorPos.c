/*
 * XREFs of zzzInternalSetCursorPos @ 0x1C00DB4DC
 * Callers:
 *     zzzEnableDwmPointerSupport @ 0x1C0094A9C (zzzEnableDwmPointerSupport.c)
 *     zzzSetCursorPosByType @ 0x1C0097338 (zzzSetCursorPosByType.c)
 *     zzzClipCursorEx @ 0x1C0097C50 (zzzClipCursorEx.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C009C580 (xxxMakeWindowForegroundWithState.c)
 *     zzzResetSharedDesktops @ 0x1C00D8AA0 (zzzResetSharedDesktops.c)
 *     xxxUserResetDisplayDevice @ 0x1C0154CD0 (xxxUserResetDisplayDevice.c)
 *     zzzActiveCursorTracking @ 0x1C01D9000 (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01DD958 (xxxCallJournalPlaybackHook.c)
 *     ?DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z @ 0x1C01E74D8 (-DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01EB354 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C0203F8C (xxxInitializeMoveSizeData.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C00AEF70 (_MonitorFromPoint.c)
 *     BoundCursor @ 0x1C00DB104 (BoundCursor.c)
 *     GreMovePointer @ 0x1C00DB180 (GreMovePointer.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C00DB460 (UpdateCursorImageForMonitorDpi.c)
 *     zzzSetFMouseMoved @ 0x1C00DC310 (zzzSetFMouseMoved.c)
 *     IsCurrentDesktopComposed @ 0x1C00DF580 (IsCurrentDesktopComposed.c)
 */

__int64 __fastcall zzzInternalSetCursorPos(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  unsigned __int16 v7; // bx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v6 = ValidateHmonitorNoRip(ghCursorMonitor);
  if ( v6 )
    v7 = *(_WORD *)(v6 + 154);
  else
    v7 = 0;
  v10 = __PAIR64__(a2, a1);
  if ( a3 == 1 && (unsigned int)IsCurrentDesktopComposed() )
    LogicalToPhysicalDPIPoint(&v10, &v10, 0LL, 0LL);
  gptCursorAsync = (struct tagPOINT)v10;
  BoundCursor((LONG *)&gptCursorAsync, 0);
  *(struct tagPOINT *)(gpsi + 5368LL) = gptCursorAsync;
  GreMovePointer((HDEV)*gpDispInfo, *(unsigned int *)(gpsi + 5368LL), *(unsigned int *)(gpsi + 5372LL), 1LL);
  if ( MonitorFromPoint(*(_QWORD *)&gptCursorAsync, 0x20u) )
    ghCursorMonitor = *(_QWORD *)MonitorFromPoint(*(_QWORD *)&gptCursorAsync, 0x20u);
  else
    ghCursorMonitor = 0LL;
  UpdateCursorImageForMonitorDpi(v7);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))zzzSetFMouseMoved)((LARGE_INTEGER)PerformanceCounter.QuadPart, 0LL);
}
