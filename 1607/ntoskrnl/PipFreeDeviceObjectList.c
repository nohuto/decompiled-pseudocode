/*
 * XREFs of PipFreeDeviceObjectList @ 0x1404C59E0
 * Callers:
 *     IopFreeRelationList @ 0x1404C59AC (IopFreeRelationList.c)
 *     PipGrowDeviceObjectList @ 0x14064BBD0 (PipGrowDeviceObjectList.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x1404C5A64 (PiClearDeviceObjectList.c)
 */

void __fastcall PipFreeDeviceObjectList(void *a1)
{
  PiClearDeviceObjectList();
  ExFreePoolWithTag(a1, 0);
}
