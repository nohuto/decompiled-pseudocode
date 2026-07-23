/*
 * XREFs of PopFreeWakeInfo @ 0x14066E284
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x14066E4D0 (PopUnlinkWakeSources.c)
 */

void __fastcall PopFreeWakeInfo(void *a1)
{
  PopUnlinkWakeSources(a1);
  ExFreePoolWithTag(a1, 0x206D654Du);
}
