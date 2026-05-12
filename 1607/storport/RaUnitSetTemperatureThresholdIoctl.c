/*
 * XREFs of RaUnitSetTemperatureThresholdIoctl @ 0x1C0035E10
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0001D30 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C00171B0 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaBuildSetTemperatureThresholdBufferForMiniport @ 0x1C0033E58 (RaBuildSetTemperatureThresholdBufferForMiniport.c)
 */

NTSTATUS __fastcall RaUnitSetTemperatureThresholdIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  signed int v5; // esi
  __int64 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+58h] [rbp+10h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  P = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v8 = 0;
  if ( CurrentStackLocation->Parameters.Create.Options >= 0x10 )
  {
    if ( ((__int64)a2->AssociatedIrp.MasterIrp->MdlAddress & 1) != 0 )
    {
      ++a2->CurrentLocation;
      a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
    }
    v5 = RaBuildSetTemperatureThresholdBufferForMiniport(*(_QWORD *)(a1 + 8), (__int64)a2, &P, &v8);
    if ( v5 >= 0 )
    {
      if ( !P )
        goto LABEL_10;
      v5 = RaidUnitSendSrbIoControlSynchronously(a1, (__int64)a2, (__int64)P, v8, 0LL, v7, 128);
    }
    if ( P )
      ExFreePoolWithTag(P, 0x72536152u);
    goto LABEL_10;
  }
  v5 = -1073741820;
LABEL_10:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v5);
}
