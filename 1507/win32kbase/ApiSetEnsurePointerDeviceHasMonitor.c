/*
 * XREFs of ApiSetEnsurePointerDeviceHasMonitor @ 0x1C00CD4C8
 * Callers:
 *     rimProcessPTPDeviceInput @ 0x1C00CC708 (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CCB80 (rimProcessPointerDeviceInput.c)
 * Callees:
 *     IsEnsurePointerDeviceHasMonitorSupported_0 @ 0x1C0002C80 (IsEnsurePointerDeviceHasMonitorSupported_0.c)
 */

__int64 ApiSetEnsurePointerDeviceHasMonitor()
{
  if ( (int)IsEnsurePointerDeviceHasMonitorSupported_0() < 0 )
    return 0LL;
  else
    return EnsurePointerDeviceHasMonitor_0();
}
