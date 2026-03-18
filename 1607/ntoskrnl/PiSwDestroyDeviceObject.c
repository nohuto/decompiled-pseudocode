/*
 * XREFs of PiSwDestroyDeviceObject @ 0x1404C3958
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1403F1680 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x1404C62E4 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     PiSwUnassociateDeviceObject @ 0x1404C3A00 (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(struct _DEVICE_OBJECT *a1)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = a1->DeviceExtension;
  PiSwUnassociateDeviceObject(a1);
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(a1);
}
