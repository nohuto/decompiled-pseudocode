/*
 * XREFs of PiSwDestroyDeviceObject @ 0x140493B44
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14049479C (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x140496838 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     PiSwUnassociateDeviceObject @ 0x1404944B8 (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(struct _DEVICE_OBJECT *a1)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = a1->DeviceExtension;
  PiSwUnassociateDeviceObject();
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(a1);
}
