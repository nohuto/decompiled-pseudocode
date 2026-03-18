/*
 * XREFs of ?Analog_SetCompositorInterface@@YAJPEAUIUnknown@@@Z @ 0x18013AFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Analog_SetCompositorInterface(struct IUnknown *a1)
{
  return CAnalogCompositorClient::SetCompositorInterface((CAnalogCompositorClient *)a1, a1);
}
