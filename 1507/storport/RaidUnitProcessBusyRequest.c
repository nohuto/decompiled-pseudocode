/*
 * XREFs of RaidUnitProcessBusyRequest @ 0x1C0010838
 * Callers:
 *     RaUnitAsyncError @ 0x1C000EA18 (RaUnitAsyncError.c)
 * Callees:
 *     RaidStartIoPacket @ 0x1C0001C90 (RaidStartIoPacket.c)
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     IsUntaggedRequest @ 0x1C0003360 (IsUntaggedRequest.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0003998 (RaUnitAcquireRemoveLock.c)
 *     RaidRestartIoQueue @ 0x1C0009DF8 (RaidRestartIoQueue.c)
 *     RaidUnitReleaseIrp @ 0x1C000EBBC (RaidUnitReleaseIrp.c)
 *     RaidStallDeviceQueue @ 0x1C001099C (RaidStallDeviceQueue.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C0010ACC (RaidDeleteDeviceQueueEntry.c)
 *     StorRemoveIoGatewayItem @ 0x1C0010B48 (StorRemoveIoGatewayItem.c)
 *     GetSrbScsiData @ 0x1C0020990 (GetSrbScsiData.c)
 *     RaidNtStatusToSrbStatus @ 0x1C00301D4 (RaidNtStatusToSrbStatus.c)
 */

void __fastcall RaidUnitProcessBusyRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  IRP *v5; // r13
  char v6; // cl
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  unsigned __int8 v9; // al
  int v10; // ebp
  unsigned int v11; // esi
  signed int v12; // esi
  int v13; // r8d
  BOOL v14; // [rsp+90h] [rbp+8h] BYREF
  _BYTE *v15; // [rsp+A0h] [rbp+18h]

  v15 = a3;
  v3 = *(_QWORD *)(a2 + 160);
  v5 = *(IRP **)(a2 + 152);
  v6 = 0;
  LOBYTE(v14) = 0;
  v7 = 0;
  v8 = 0;
  v9 = *(_BYTE *)(v3 + 2);
  if ( v9 == 40 )
  {
    v11 = *(_DWORD *)(v3 + 20);
    v10 = *(_DWORD *)(v3 + 24);
    if ( !v11 )
    {
      GetSrbScsiData(v3, 0, 0, (unsigned int)&v14, 0LL, 0LL);
      v6 = v14;
    }
  }
  else
  {
    v10 = *(_DWORD *)(v3 + 12);
    v6 = *(_BYTE *)(v3 + 4);
    v11 = v9;
  }
  if ( (*(_BYTE *)(v3 + 3) & 0x3F) == 5 || v6 == 8 )
  {
    v8 = *(_DWORD *)(a1 + 1504);
    v7 = 1;
  }
  if ( v6 == 40 )
  {
    v8 = *(_DWORD *)(a1 + 1500);
    v7 = 2;
  }
  v14 = IsUntaggedRequest(v10, v11);
  v12 = RaUnitAcquireRemoveLock(a1);
  if ( v12 >= 0 )
    *(_BYTE *)(v3 + 3) &= ~0x80u;
  RaidUnitReleaseIrp((__int64)v5);
  if ( (unsigned __int8)StorRemoveIoGatewayItem((PKSPIN_LOCK)(*(_QWORD *)(a1 + 24) + 768LL)) )
    KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(a1 + 24) + 1792LL), 0LL, 0LL);
  RaidDeleteDeviceQueueEntry(a1 + 400, v14);
  if ( v12 < 0 )
  {
    *(_BYTE *)(v3 + 3) = RaidNtStatusToSrbStatus((unsigned int)v12);
    RaidCompleteRequestEx(v5, 0, v12);
  }
  else
  {
    RaidStallDeviceQueue(a1 + 400, v7, v8, a1);
    if ( v15 )
      *v15 = 0;
    v13 = 0;
    if ( (v10 & 0x10) != 0 )
      v13 = 2;
    if ( (v10 & 0x80000) != 0 )
      v13 |= 4u;
    if ( v14 )
      v13 |= 1u;
    if ( !(unsigned int)RaidStartIoPacket(a1, (__int64)v5, v13) )
      RaidRestartIoQueue(a1);
  }
}
