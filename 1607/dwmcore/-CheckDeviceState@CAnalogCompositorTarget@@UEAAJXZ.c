/*
 * XREFs of ?CheckDeviceState@CAnalogCompositorTarget@@UEAAJXZ @ 0x180167200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnalogCompositorTarget::CheckDeviceState(CAnalogCompositorTarget *this)
{
  return *((_BYTE *)this + 40) != 0 ? 0x87A0001 : 0;
}
