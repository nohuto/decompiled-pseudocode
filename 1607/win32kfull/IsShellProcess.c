/*
 * XREFs of IsShellProcess @ 0x1C009B064
 * Callers:
 *     _RegisterHotKey @ 0x1C0097DFC (_RegisterHotKey.c)
 *     _GetWindowTrackInfoAsync @ 0x1C0098B90 (_GetWindowTrackInfoAsync.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0099858 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     CheckAllowForeground @ 0x1C009AD00 (CheckAllowForeground.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00ED9E0 (_RegisterWindowArrangementCallout.c)
 *     NtUserRegisterEdgy @ 0x1C01214A0 (NtUserRegisterEdgy.c)
 *     NtUserRegisterShellPTPListener @ 0x1C0132FC0 (NtUserRegisterShellPTPListener.c)
 *     IsWheelTargetDesktopApp @ 0x1C01D21F0 (IsWheelTargetDesktopApp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellProcess(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 304);
  v2 = 0;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 168LL) == a1;
  return v2;
}
