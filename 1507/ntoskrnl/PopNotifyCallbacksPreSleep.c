/*
 * XREFs of PopNotifyCallbacksPreSleep @ 0x140564A20
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     ExNotifyCallback @ 0x1400EDED0 (ExNotifyCallback.c)
 *     PopDiagTracePreSleepCallbacks @ 0x140564A4C (PopDiagTracePreSleepCallbacks.c)
 */

__int64 __fastcall PopNotifyCallbacksPreSleep(__int64 a1)
{
  LOBYTE(a1) = 1;
  PopDiagTracePreSleepCallbacks(a1);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
  return PopDiagTracePreSleepCallbacks(0LL);
}
