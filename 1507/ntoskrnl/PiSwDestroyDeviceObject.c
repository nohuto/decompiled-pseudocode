/*
 * XREFs of PiSwDestroyDeviceObject @ 0x140539CF4
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14045ADD4 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x1405386E4 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     PiSwUnassociateDeviceObject @ 0x140539D20 (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(struct _DEVICE_OBJECT *a1)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = a1->DeviceExtension;
  PiSwUnassociateDeviceObject(a1);
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(a1);
}
