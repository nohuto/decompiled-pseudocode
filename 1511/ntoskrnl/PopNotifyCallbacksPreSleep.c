/*
 * XREFs of PopNotifyCallbacksPreSleep @ 0x1404F6AB4
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     ExNotifyCallback @ 0x140092004 (ExNotifyCallback.c)
 *     PopDiagTracePreSleepCallbacks @ 0x1404F6AE0 (PopDiagTracePreSleepCallbacks.c)
 */

__int64 __fastcall PopNotifyCallbacksPreSleep(__int64 a1)
{
  LOBYTE(a1) = 1;
  PopDiagTracePreSleepCallbacks(a1);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
  return PopDiagTracePreSleepCallbacks(0LL);
}
