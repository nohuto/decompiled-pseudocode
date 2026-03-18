/*
 * XREFs of IopAllocateRelationList @ 0x140535F08
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x140535188 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpBuildRemovalRelationList @ 0x140535628 (PnpBuildRemovalRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x140535D44 (PnpInvalidateRelationsInList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14067E6F8 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     PiAllocateDeviceObjectList @ 0x140535F5C (PiAllocateDeviceObjectList.c)
 *     IopFreeRelationList @ 0x140535FC0 (IopFreeRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x140536EA0 (PnpAllocateCriticalMemory.c)
 */

_BYTE *__fastcall IopAllocateRelationList(__int64 a1)
{
  unsigned int v1; // edi
  _BYTE *CriticalMemory; // rbx
  __int64 DeviceObjectList; // rax

  v1 = a1;
  CriticalMemory = (_BYTE *)PnpAllocateCriticalMemory(a1, 1LL, 16LL, 1416654416LL);
  if ( CriticalMemory )
  {
    DeviceObjectList = PiAllocateDeviceObjectList(v1, 8LL);
    *(_QWORD *)CriticalMemory = DeviceObjectList;
    if ( DeviceObjectList )
    {
      CriticalMemory[8] = 0;
    }
    else
    {
      IopFreeRelationList(CriticalMemory);
      return 0LL;
    }
  }
  return CriticalMemory;
}
