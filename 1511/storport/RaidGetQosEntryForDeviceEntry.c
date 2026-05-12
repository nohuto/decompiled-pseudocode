/*
 * XREFs of RaidGetQosEntryForDeviceEntry @ 0x1C00286B8
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C00016A0 (RaidUnitCompleteRequest.c)
 *     StorRemoveIoGatewayItem @ 0x1C0002850 (StorRemoveIoGatewayItem.c)
 *     RiNormalizeDeviceQueue @ 0x1C0002E4C (RiNormalizeDeviceQueue.c)
 *     RaidStartIoPacket @ 0x1C00037C0 (RaidStartIoPacket.c)
 *     RaidInsertDeviceQueue @ 0x1C0003D40 (RaidInsertDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C0009F7C (StorSubmitIoGatewayItem.c)
 *     StorNextIoGatewayItem @ 0x1C001322C (StorNextIoGatewayItem.c)
 *     RaidRemovePendingDeviceQueue @ 0x1C0028980 (RaidRemovePendingDeviceQueue.c)
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
