/*
 * XREFs of IopAllocateRelationList @ 0x1404C5958
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x1404C473C (PnpBuildRemovalRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1404C5028 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x1404C54CC (PnpInvalidateRelationsInList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14062DD80 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     IopFreeRelationList @ 0x1404C59AC (IopFreeRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x1404C5A00 (PiAllocateDeviceObjectList.c)
 *     PnpAllocateCriticalMemory @ 0x1404C5AB8 (PnpAllocateCriticalMemory.c)
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
