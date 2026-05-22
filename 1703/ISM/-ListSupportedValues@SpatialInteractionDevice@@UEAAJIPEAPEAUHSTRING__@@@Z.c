/*
 * XREFs of ?ListSupportedValues@SpatialInteractionDevice@@UEAAJIPEAPEAUHSTRING__@@@Z @ 0x180064820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall SpatialInteractionDevice::ListSupportedValues(
        SpatialInteractionDevices **this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        HSTRING *a3,
        HSTRING *a4)
{
  return SpatialInteractionDevices::ListSupportedValues(this[7], a2, (unsigned int)a3, a4);
}
