/*
 * XREFs of ?StopHapticsFeedback@SpatialInteractionDevice@@UEAAJXZ @ 0x180064890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialInteractionDevice::StopHapticsFeedback(
        SpatialInteractionDevices **this,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  return SpatialInteractionDevices::SetHapticsWaveForm(
           this[9],
           (struct SpatialInteractionDevices::HID_HANDLE *)*((unsigned __int16 *)this + 40),
           0,
           a4);
}
