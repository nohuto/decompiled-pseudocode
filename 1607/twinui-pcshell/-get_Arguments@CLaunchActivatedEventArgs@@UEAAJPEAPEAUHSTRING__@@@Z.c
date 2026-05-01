/*
 * XREFs of ?get_Arguments@CLaunchActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002C9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CLaunchActivatedEventArgs::get_Arguments(HSTRING *this, HSTRING *a2)
{
  return WindowsDuplicateString(this[6], a2);
}
