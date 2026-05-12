/*
 * XREFs of RaUnitProtocolCommandIoctl @ 0x1C0035610
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0001D30 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaGetProtocolCommandEffects @ 0x1C002650C (RaGetProtocolCommandEffects.c)
 *     RaValidateProtocolCommandIoctl @ 0x1C0034128 (RaValidateProtocolCommandIoctl.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C003862C (RaidUnitSendSrbProtocolCommandSynchronously.c)
 */

NTSTATUS __fastcall RaUnitProtocolCommandIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  signed int ProtocolCommandEffects; // eax
  __int64 MdlAddress_high; // rcx
  IRP *v7; // rdx
  __int64 v9; // r8
  char v10; // [rsp+38h] [rbp+10h] BYREF
  char v11; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v11 = 0;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x10 )
  {
    ProtocolCommandEffects = -1073741820;
LABEL_11:
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, ProtocolCommandEffects);
  }
  MdlAddress_high = HIDWORD(a2->AssociatedIrp.MasterIrp->MdlAddress);
  if ( (int)MdlAddress_high < 0 )
  {
    ++a2->CurrentLocation;
    a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
    v7 = a2;
    return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), v7);
  }
  ProtocolCommandEffects = RaValidateProtocolCommandIoctl(MdlAddress_high, (__int64)a2);
  if ( ProtocolCommandEffects < 0 )
    goto LABEL_11;
  ProtocolCommandEffects = RaGetProtocolCommandEffects(*(_QWORD *)(a1 + 8), (__int64)a2, &v10, &v11);
  if ( ProtocolCommandEffects < 0 )
    goto LABEL_11;
  v7 = a2;
  if ( v10 )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), v7);
  }
  LOBYTE(v9) = v11;
  ProtocolCommandEffects = RaidUnitSendSrbProtocolCommandSynchronously(a1, a2, v9);
  if ( ProtocolCommandEffects < 0 )
    goto LABEL_11;
  return RaidCompleteRequestEx(a2, 0, ProtocolCommandEffects);
}
