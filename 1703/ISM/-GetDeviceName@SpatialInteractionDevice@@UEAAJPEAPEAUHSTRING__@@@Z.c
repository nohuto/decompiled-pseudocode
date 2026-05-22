/*
 * XREFs of ?GetDeviceName@SpatialInteractionDevice@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180064860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall SpatialInteractionDevice::GetDeviceName(HSTRING *this, HSTRING *a2)
{
  return WindowsDuplicateString(this[8], a2);
}
