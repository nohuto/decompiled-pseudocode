/*
 * XREFs of ?ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00DC730
 * Callers:
 *     ndisPnPDispatch @ 0x1C00A8060 (ndisPnPDispatch.c)
 * Callees:
 *     ?ExtensionFromDevice@@YAPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0027614 (-ExtensionFromDevice@@YAPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_DEVICE_OBJECT@@@Z.c)
 */

NTSTATUS __fastcall ndisSetupDevicePnp(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  struct NDIS_SETUP_DEVICE_EXTENSION *v2; // rax
  struct _IRP *v3; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  struct NDIS_SETUP_DEVICE_EXTENSION *v5; // rcx
  unsigned __int8 MinorFunction; // al

  v2 = ExtensionFromDevice(a1);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  v5 = v2;
  MinorFunction = CurrentStackLocation->MinorFunction;
  switch ( MinorFunction )
  {
    case 0u:
      return ndisSetupDeviceStart(v5, v3);
    case 2u:
      return ndisSetupDeviceRemove(v5, v3);
    case 9u:
      return ndisSetupDeviceQueryCapabilities(v5);
    case 0x17u:
      return ndisSetupDeviceSurpriseRemoval(v5, v3);
  }
  ++v3->CurrentLocation;
  v3->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
  return IofCallDriver(v5->NextDeviceObject, v3);
}
