/*
 * XREFs of ?Present@CAnalogCompositorTarget@@UEAAJ_NI@Z @ 0x18013D250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnalogCompositorTarget::Present(CAnalogCompositorTarget *this)
{
  return *((_BYTE *)this + 40) != 0 ? 0x87A0001 : 0;
}
