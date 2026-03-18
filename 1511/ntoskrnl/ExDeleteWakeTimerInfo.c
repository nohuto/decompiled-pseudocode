/*
 * XREFs of ExDeleteWakeTimerInfo @ 0x140214504
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopFreeWakeSource @ 0x140635E18 (PopFreeWakeSource.c)
 * Callees:
 *     <none>
 */

void __fastcall ExDeleteWakeTimerInfo(void *a1)
{
  ExFreePoolWithTag(a1, 0x53577254u);
}
