/*
 * XREFs of ?ExtensionFromDevice@@YAPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0027BC4
 * Callers:
 *     ndisWMIDispatch @ 0x1C00A883C (ndisWMIDispatch.c)
 *     ?ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00E25C4 (-ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

struct NDIS_SETUP_DEVICE_EXTENSION *__fastcall ExtensionFromDevice(struct _DEVICE_OBJECT *a1)
{
  return (struct NDIS_SETUP_DEVICE_EXTENSION *)a1->DeviceExtension;
}
