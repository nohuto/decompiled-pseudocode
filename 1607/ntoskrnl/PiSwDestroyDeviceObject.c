/*
 * XREFs of PiSwDestroyDeviceObject @ 0x140483C74
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1403F0544 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x140484AEC (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     PiSwUnassociateDeviceObject @ 0x140483D1C (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(struct _DEVICE_OBJECT *a1)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = a1->DeviceExtension;
  PiSwUnassociateDeviceObject(a1);
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(a1);
}
