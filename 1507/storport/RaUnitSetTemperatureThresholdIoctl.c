/*
 * XREFs of RaUnitSetTemperatureThresholdIoctl @ 0x1C00314F8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00036E0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaBuildSetTemperatureThresholdBufferForMiniport @ 0x1C002FA6C (RaBuildSetTemperatureThresholdBufferForMiniport.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C00339DC (RaidUnitSendSrbIoControlSynchronously.c)
 */

NTSTATUS __fastcall RaUnitSetTemperatureThresholdIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int v4; // ebp
  signed int v5; // esi
  int v7; // [rsp+58h] [rbp+10h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  P = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = a1;
  v7 = 0;
  if ( CurrentStackLocation->Parameters.Create.Options >= 0x10 )
  {
    if ( ((__int64)a2->AssociatedIrp.MasterIrp->MdlAddress & 1) != 0 )
    {
      ++a2->CurrentLocation;
      a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
    }
    v5 = RaBuildSetTemperatureThresholdBufferForMiniport(*(_QWORD *)(a1 + 8), (__int64)a2, &P, &v7);
    if ( v5 >= 0 )
    {
      if ( !P )
        goto LABEL_10;
      v5 = RaidUnitSendSrbIoControlSynchronously(v4, (_DWORD)a2, (_DWORD)P, v7, 0LL);
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
