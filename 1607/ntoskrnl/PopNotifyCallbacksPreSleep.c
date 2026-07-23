/*
 * XREFs of PopNotifyCallbacksPreSleep @ 0x140530358
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     ExNotifyCallback @ 0x1400098D8 (ExNotifyCallback.c)
 *     PopCheckpointSystemSleep @ 0x1403CEBA4 (PopCheckpointSystemSleep.c)
 *     PopDiagTracePreSleepCallbacks @ 0x140530398 (PopDiagTracePreSleepCallbacks.c)
 */

unsigned __int64 __fastcall PopNotifyCallbacksPreSleep(__int64 a1)
{
  LOBYTE(a1) = 1;
  PopDiagTracePreSleepCallbacks(a1);
  PopCheckpointSystemSleep(8);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
  PopDiagTracePreSleepCallbacks(0LL);
  return PopCheckpointSystemSleep(9);
}
