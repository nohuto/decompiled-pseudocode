/*
 * XREFs of ACPIDispatchForwardOrFailPowerIrp @ 0x1C0021EB4
 * Callers:
 *     ACPIWakeWaitIrp @ 0x1C0021D70 (ACPIWakeWaitIrp.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIDispatchForwardOrFailPowerIrp(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v5; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( (*(_BYTE *)DeviceExtension & 0x20) != 0 || !*(_QWORD *)(DeviceExtension + 720) )
  {
    v5 = -1073741822;
    a2->IoStatus.Status = -1073741822;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                           + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    return (unsigned int)PoCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 720), a2);
  }
  return v5;
}
