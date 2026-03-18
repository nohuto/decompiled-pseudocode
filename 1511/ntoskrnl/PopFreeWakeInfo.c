/*
 * XREFs of PopFreeWakeInfo @ 0x140635DF8
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x140636044 (PopUnlinkWakeSources.c)
 */

void __fastcall PopFreeWakeInfo(void *a1)
{
  PopUnlinkWakeSources(a1);
  ExFreePoolWithTag(a1, 0x206D654Du);
}
