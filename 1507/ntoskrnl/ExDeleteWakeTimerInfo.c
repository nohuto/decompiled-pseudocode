/*
 * XREFs of ExDeleteWakeTimerInfo @ 0x1402644E8
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopFreeWakeSource @ 0x1406B56FC (PopFreeWakeSource.c)
 * Callees:
 *     <none>
 */

void __fastcall ExDeleteWakeTimerInfo(void *a1)
{
  ExFreePoolWithTag(a1, 0x53577254u);
}
