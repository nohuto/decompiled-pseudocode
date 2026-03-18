/*
 * XREFs of ExDeleteWakeTimerInfo @ 0x14022E174
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopFreeWakeSource @ 0x14066E1C0 (PopFreeWakeSource.c)
 * Callees:
 *     <none>
 */

void __fastcall ExDeleteWakeTimerInfo(void *a1)
{
  ExFreePoolWithTag(a1, 0x53577254u);
}
