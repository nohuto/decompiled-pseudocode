/*
 * XREFs of IsShellProcess @ 0x1C00738DC
 * Callers:
 *     CheckAllowForeground @ 0x1C0073590 (CheckAllowForeground.c)
 *     _RegisterHotKey @ 0x1C008A6EC (_RegisterHotKey.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C008F76C (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00D5A10 (_RegisterWindowArrangementCallout.c)
 *     NtUserRegisterEdgy @ 0x1C00FDEE0 (NtUserRegisterEdgy.c)
 *     _GetWindowTrackInfoAsync @ 0x1C01025C0 (_GetWindowTrackInfoAsync.c)
 *     NtUserRegisterShellPTPListener @ 0x1C0111900 (NtUserRegisterShellPTPListener.c)
 *     IsWheelTargetDesktopApp @ 0x1C01DA448 (IsWheelTargetDesktopApp.c)
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
