/*
 * XREFs of ?get_TileId@CLaunchActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002C9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CLaunchActivatedEventArgs::get_TileId(HSTRING *this, HSTRING *a2)
{
  return WindowsDuplicateString(this[7], a2);
}
