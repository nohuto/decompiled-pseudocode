/*
 * XREFs of _CreateSaDevice_::_1_::dtor$4 @ 0x18008C679
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CreateSaDevice_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<CVolumeStrip>::~CComPtr<CVolumeStrip>((CVolumeStrip **)(a2 + 136));
}
