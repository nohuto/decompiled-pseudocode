/*
 * XREFs of RaidUnitProcessBusyRequest @ 0x1C000999C
 * Callers:
 *     RaUnitAsyncError @ 0x1C0010D24 (RaUnitAsyncError.c)
 * Callees:
 *     StorRemoveIoGatewayItem @ 0x1C0002850 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaidStartIoPacket @ 0x1C00037C0 (RaidStartIoPacket.c)
 *     IsUntaggedRequest @ 0x1C00040D0 (IsUntaggedRequest.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000480C (RaUnitAcquireRemoveLock.c)
 *     GetSrbScsiData @ 0x1C0006DD4 (GetSrbScsiData.c)
 *     RaidStallDeviceQueue @ 0x1C0009B00 (RaidStallDeviceQueue.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C0009CDC (RaidDeleteDeviceQueueEntry.c)
 *     RaidRestartIoQueue @ 0x1C000C030 (RaidRestartIoQueue.c)
 *     RaidUnitReleaseIrp @ 0x1C0010ED8 (RaidUnitReleaseIrp.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0031310 (RaidNtStatusToSrbStatus.c)
 */

__int64 __fastcall RaidUnitProcessBusyRequest(__int64 a1, __int64 a2, _BYTE *a3)
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
  __int64 result; // rax
  _BYTE v15[16]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+40h] [rbp-48h]
  BOOL v17; // [rsp+90h] [rbp+8h] BYREF
  _BYTE *v18; // [rsp+A0h] [rbp+18h]

  v18 = a3;
  v3 = *(_QWORD *)(a2 + 168);
  v5 = *(IRP **)(a2 + 160);
  v6 = 0;
  LOBYTE(v17) = 0;
  v7 = 0;
  v16 = a2;
  v8 = 0;
  v9 = *(_BYTE *)(v3 + 2);
  if ( v9 == 40 )
  {
    v11 = *(_DWORD *)(v3 + 20);
    v10 = *(_DWORD *)(v3 + 24);
    if ( !v11 )
    {
      GetSrbScsiData(v3, 0LL, 0LL, &v17, 0LL, 0LL);
      v6 = v17;
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
    v8 = *(_DWORD *)(a1 + 1520);
    v7 = 1;
  }
  if ( v6 == 40 )
  {
    v8 = *(_DWORD *)(a1 + 1516);
    v7 = 2;
  }
  v17 = IsUntaggedRequest(v10, v11);
  v12 = RaUnitAcquireRemoveLock(a1);
  if ( v12 >= 0 )
    *(_BYTE *)(v3 + 3) &= ~0x80u;
  RaidUnitReleaseIrp(v5);
  if ( (unsigned __int8)StorRemoveIoGatewayItem(
                          (volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 768LL),
                          (__int64)v15,
                          0LL) )
    KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(a1 + 24) + 1792LL), 0LL, 0LL);
  RaidDeleteDeviceQueueEntry(a1 + 400, v17);
  if ( v12 < 0 )
  {
    *(_BYTE *)(v3 + 3) = RaidNtStatusToSrbStatus((unsigned int)v12);
    return RaidCompleteRequestEx(v5, 0, v12);
  }
  else
  {
    RaidStallDeviceQueue(a1 + 400, v7, v8, a1);
    if ( v18 )
      *v18 = 0;
    v13 = 0;
    if ( (v10 & 0x10) != 0 )
      v13 = 2;
    if ( (v10 & 0x80000) != 0 )
      v13 |= 4u;
    if ( v17 )
      v13 |= 1u;
    result = RaidStartIoPacket(a1, (__int64)v5, v13);
    if ( !(_DWORD)result )
      return RaidRestartIoQueue(a1);
  }
  return result;
}
