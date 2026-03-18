/*
 * XREFs of IsShellProcess @ 0x1C0080B7C
 * Callers:
 *     _RegisterHotKey @ 0x1C003D9A4 (_RegisterHotKey.c)
 *     _GetWindowTrackInfoAsync @ 0x1C007D610 (_GetWindowTrackInfoAsync.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0080104 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     CheckAllowForeground @ 0x1C0080810 (CheckAllowForeground.c)
 *     NtUserRegisterEdgy @ 0x1C00F7D50 (NtUserRegisterEdgy.c)
 *     _RegisterWindowArrangementCallout @ 0x1C0154AF0 (_RegisterWindowArrangementCallout.c)
 *     NtUserRegisterShellPTPListener @ 0x1C0155EE0 (NtUserRegisterShellPTPListener.c)
 *     IsWheelTargetDesktopApp @ 0x1C01D9E34 (IsWheelTargetDesktopApp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellProcess(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 312);
  v2 = 0;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 168LL) == a1;
  return v2;
}
