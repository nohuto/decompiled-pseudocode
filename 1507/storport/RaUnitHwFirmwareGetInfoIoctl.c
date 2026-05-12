/*
 * XREFs of RaUnitHwFirmwareGetInfoIoctl @ 0x1C0030FB0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00036E0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C002F61C (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaTranslateMiniportFirmwareInfoToHwFirmwareInfo @ 0x1C002FB50 (RaTranslateMiniportFirmwareInfoToHwFirmwareInfo.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C00339DC (RaidUnitSendSrbIoControlSynchronously.c)
 */

NTSTATUS __fastcall RaUnitHwFirmwareGetInfoIoctl(__int64 *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  _IRP *MasterIrp; // rsi
  __int64 v5; // rbx
  bool v7; // cf
  signed int InfoBufferForMiniport; // ebx
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 Length; // rax
  int v13; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = a1[12];
  P = 0LL;
  v7 = CurrentStackLocation->Parameters.Create.Options < 0x10;
  v13 = 0;
  if ( !v7 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length < 0x38 )
    {
      InfoBufferForMiniport = -1073741789;
      goto LABEL_3;
    }
    if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 )
    {
      ++a2->CurrentLocation;
      a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(*(PDEVICE_OBJECT *)(a1[3] + 8), a2);
    }
    memset(MasterIrp, 0, CurrentStackLocation->Parameters.Read.Length);
    LOBYTE(MasterIrp->MdlAddress) |= 1u;
    *(_DWORD *)&MasterIrp->Type = 56;
    *(_DWORD *)(&MasterIrp->Size + 1) = 56;
    *(_DWORD *)((char *)&MasterIrp->MdlAddress + 1) = 16711681;
    MasterIrp->Flags = 4096;
    *(&MasterIrp->Flags + 1) = 0x10000;
    BYTE1(MasterIrp->ThreadListEntry.Flink) &= ~1u;
    MasterIrp->AssociatedIrp.IrpCount = 32;
    HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = 32;
    LOBYTE(MasterIrp->ThreadListEntry.Flink) = 0;
    v10 = a1[17];
    if ( v10 && (*(_DWORD *)(*(_QWORD *)(a1[3] + 528) + 184LL) & 0x40) != 0 )
      MasterIrp->ThreadListEntry.Blink = *(_LIST_ENTRY **)(v10 + 41);
    else
      LODWORD(MasterIrp->ThreadListEntry.Blink) = *(_DWORD *)(v5 + 32);
    InfoBufferForMiniport = RaBuildHwFirmwareGetInfoBufferForMiniport(a1[1], v10, &P, &v13);
    if ( InfoBufferForMiniport >= 0 && P )
    {
      v11 = RaidUnitSendSrbIoControlSynchronously(
              (_DWORD)a1,
              (_DWORD)a2,
              (_DWORD)P,
              v13,
              (__int64)PortSrbTranslateFirmwareIoctlStatusToNtStatus);
      InfoBufferForMiniport = v11;
      if ( v11 >= 0 )
      {
        InfoBufferForMiniport = RaTranslateMiniportFirmwareInfoToHwFirmwareInfo((__int64)a2, (__int64)P);
LABEL_19:
        if ( InfoBufferForMiniport != -1073741801 && InfoBufferForMiniport != -1073741670 )
        {
          Length = *(unsigned int *)(&MasterIrp->Size + 1);
          if ( CurrentStackLocation->Parameters.Read.Length < (unsigned int)Length )
            Length = CurrentStackLocation->Parameters.Read.Length;
          a2->IoStatus.Information = Length;
        }
        goto LABEL_25;
      }
      if ( v11 != -1073741801 )
      {
        if ( v11 != -1073741670 )
          InfoBufferForMiniport = 0;
        goto LABEL_19;
      }
    }
    else
    {
      a2->IoStatus.Information = 0LL;
    }
LABEL_25:
    if ( P )
      ExFreePoolWithTag(P, 0x72536152u);
    return RaidCompleteRequestEx(a2, 0, InfoBufferForMiniport);
  }
  InfoBufferForMiniport = -1073741820;
LABEL_3:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, InfoBufferForMiniport);
}
