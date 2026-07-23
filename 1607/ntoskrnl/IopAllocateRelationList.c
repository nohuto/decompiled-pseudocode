/*
 * XREFs of IopAllocateRelationList @ 0x140485D8C
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x14048545C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x140485900 (PnpInvalidateRelationsInList.c)
 *     PnpBuildRemovalRelationList @ 0x140485F74 (PnpBuildRemovalRelationList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14062DE34 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     IopFreeRelationList @ 0x140485DE0 (IopFreeRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x140485E34 (PiAllocateDeviceObjectList.c)
 *     PnpAllocateCriticalMemory @ 0x140485EEC (PnpAllocateCriticalMemory.c)
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
