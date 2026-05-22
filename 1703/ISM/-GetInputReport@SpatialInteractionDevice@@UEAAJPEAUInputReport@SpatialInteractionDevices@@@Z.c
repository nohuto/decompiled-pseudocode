/*
 * XREFs of ?GetInputReport@SpatialInteractionDevice@@UEAAJPEAUInputReport@SpatialInteractionDevices@@@Z @ 0x1800645C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialInteractionDevice::GetInputReport(
        SpatialInteractionDevices **this,
        struct SpatialInteractionDevices::InputReport *a2,
        struct SpatialInteractionDevices::InputReport *a3)
{
  return SpatialInteractionDevices::ParseInputReport(this[9], a2, a3);
}
