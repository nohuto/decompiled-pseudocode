/*
 * XREFs of _EnumerateDevices_::_1_::dtor$2 @ 0x1800A2F3B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EnumerateDevices_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::HString::~HString((HSTRING *)(a2 + 80));
}
