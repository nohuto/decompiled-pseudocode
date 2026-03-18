/*
 * XREFs of PipFreeDeviceObjectList @ 0x140535FF4
 * Callers:
 *     IopFreeRelationList @ 0x140535FC0 (IopFreeRelationList.c)
 *     PipGrowDeviceObjectList @ 0x140695A4C (PipGrowDeviceObjectList.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x140536014 (PiClearDeviceObjectList.c)
 */

void __fastcall PipFreeDeviceObjectList(void *a1)
{
  PiClearDeviceObjectList(a1);
  ExFreePoolWithTag(a1, 0);
}
