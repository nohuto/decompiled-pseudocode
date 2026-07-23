/*
 * XREFs of PopSetShutdownMarker @ 0x140581F80
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

void PopSetShutdownMarker()
{
  PopBsdShutdownInProgress = 1;
}
