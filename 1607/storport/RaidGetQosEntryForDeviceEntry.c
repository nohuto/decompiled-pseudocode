/*
 * XREFs of RaidGetQosEntryForDeviceEntry @ 0x1C002BD38
 * Callers:
 *     RaidStartIoPacket @ 0x1C0003FF0 (RaidStartIoPacket.c)
 *     StorRemoveIoGatewayItem @ 0x1C0006F40 (StorRemoveIoGatewayItem.c)
 *     RiNormalizeDeviceQueue @ 0x1C0007570 (RiNormalizeDeviceQueue.c)
 *     RiEnqueueDeviceQueue @ 0x1C0007714 (RiEnqueueDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C00077A0 (StorSubmitIoGatewayItem.c)
 *     StorNextIoGatewayItem @ 0x1C00186EC (StorNextIoGatewayItem.c)
 *     RaidRemovePendingDeviceQueue @ 0x1C002BF10 (RaidRemovePendingDeviceQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetQosEntryForDeviceEntry(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  if ( *(_BYTE *)(v1 + 2) == 40 )
    v2 = *(_QWORD *)(v1 + 96);
  else
    v2 = *(_QWORD *)(v1 + 48);
  return v2 + 24;
}
