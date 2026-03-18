/*
 * XREFs of ApiSetEnsurePointerDeviceHasMonitor @ 0x1C00CE804
 * Callers:
 *     rimProcessPTPDeviceInput @ 0x1C00CD9FC (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CDE70 (rimProcessPointerDeviceInput.c)
 * Callees:
 *     IsEnsurePointerDeviceHasMonitorSupported_0 @ 0x1C0002CB0 (IsEnsurePointerDeviceHasMonitorSupported_0.c)
 */

__int64 ApiSetEnsurePointerDeviceHasMonitor()
{
  if ( (int)IsEnsurePointerDeviceHasMonitorSupported_0() < 0 )
    return 0LL;
  else
    return EnsurePointerDeviceHasMonitor_0();
}
