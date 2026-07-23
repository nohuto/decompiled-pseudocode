/*
 * XREFs of PipFreeDeviceObjectList @ 0x140485E14
 * Callers:
 *     IopFreeRelationList @ 0x140485DE0 (IopFreeRelationList.c)
 *     PipGrowDeviceObjectList @ 0x14064BCB4 (PipGrowDeviceObjectList.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x140485E98 (PiClearDeviceObjectList.c)
 */

void __fastcall PipFreeDeviceObjectList(void *a1)
{
  PiClearDeviceObjectList();
  ExFreePoolWithTag(a1, 0);
}
