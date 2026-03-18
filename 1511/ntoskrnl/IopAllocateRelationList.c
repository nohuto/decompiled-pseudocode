/*
 * XREFs of IopAllocateRelationList @ 0x1404A04B8
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x14049EDD4 (PnpBuildRemovalRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14049FEC0 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x1404A00B8 (PnpInvalidateRelationsInList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x140603984 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     PiAllocateDeviceObjectList @ 0x1404A050C (PiAllocateDeviceObjectList.c)
 *     IopFreeRelationList @ 0x1404A0570 (IopFreeRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x1404A0618 (PnpAllocateCriticalMemory.c)
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
