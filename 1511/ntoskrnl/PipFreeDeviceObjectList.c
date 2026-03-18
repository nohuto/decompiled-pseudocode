/*
 * XREFs of PipFreeDeviceObjectList @ 0x1404A05A4
 * Callers:
 *     IopFreeRelationList @ 0x1404A0570 (IopFreeRelationList.c)
 *     PipGrowDeviceObjectList @ 0x1406171AC (PipGrowDeviceObjectList.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x1404A05C4 (PiClearDeviceObjectList.c)
 */

void __fastcall PipFreeDeviceObjectList(void *a1)
{
  PiClearDeviceObjectList(a1);
  ExFreePoolWithTag(a1, 0);
}
