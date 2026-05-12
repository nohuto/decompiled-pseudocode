/*
 * XREFs of RaidRemoveIoQueue @ 0x1C0026BC0
 * Callers:
 *     RaUnitDisableDeviceIrp @ 0x1C0030D5C (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C0030DE0 (RaUnitFlushQueueSrb.c)
 *     RaidUnitCancelPendingRequests @ 0x1C00326C8 (RaidUnitCancelPendingRequests.c)
 * Callees:
 *     RaidRemovePendingDeviceQueue @ 0x1C0026788 (RaidRemovePendingDeviceQueue.c)
 */

__int64 *__fastcall RaidRemoveIoQueue(__int64 a1)
{
  __int64 *v1; // rax
  __int64 *v2; // rcx
  __int64 v3; // rdx

  v1 = RaidRemovePendingDeviceQueue(a1 + 16);
  v2 = 0LL;
  if ( v1 )
  {
    v2 = v1 - 15;
    v3 = *(_QWORD *)(v1[8] + 8);
    if ( *(_BYTE *)(v3 + 2) != 40 )
      *(_QWORD *)(v3 + 56) = *(_QWORD *)(v3 + 40);
  }
  return v2;
}
