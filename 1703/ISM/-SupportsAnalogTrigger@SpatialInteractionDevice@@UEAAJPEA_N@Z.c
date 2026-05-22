/*
 * XREFs of ?SupportsAnalogTrigger@SpatialInteractionDevice@@UEAAJPEA_N@Z @ 0x1800648E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialInteractionDevice::SupportsAnalogTrigger(
        SpatialInteractionDevices **this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        bool *a3)
{
  return SpatialInteractionDevices::SupportsAnalogTrigger(this[9], a2, a3);
}
