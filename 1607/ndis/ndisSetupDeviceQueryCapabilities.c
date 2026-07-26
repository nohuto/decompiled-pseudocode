/*
 * XREFs of ndisSetupDeviceQueryCapabilities @ 0x1C00E262C
 * Callers:
 *     ?ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00E25C4 (-ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisSetupDeviceQueryCapabilities(__int64 a1, _IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax

  *(_DWORD *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 4) |= 0x200u;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetLock + 24) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetLock
                                                                             + 24);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  return IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 40), a2);
}
