/*
 * XREFs of ACPIIoctlUnregisterDeviceFirmwareLockHandler @ 0x1C0050E18
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00044E0 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     AcpiUnregisterDeviceFirmwareLockHandler @ 0x1C009A98C (AcpiUnregisterDeviceFirmwareLockHandler.c)
 */

__int64 __fastcall ACPIIoctlUnregisterDeviceFirmwareLockHandler(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v4; // ebx
  _IRP *MasterIrp; // rax

  if ( *(_DWORD *)(a3 + 16) >= 0x18u )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( *(_DWORD *)&MasterIrp->Type == 1432765505 && MasterIrp->AllocationProcessorNumber )
      v4 = AcpiUnregisterDeviceFirmwareLockHandler(LODWORD(MasterIrp->MdlAddress), *(_QWORD *)&MasterIrp->Flags);
    else
      v4 = -1072431089;
  }
  else
  {
    v4 = -1073741820;
  }
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  return v4;
}
