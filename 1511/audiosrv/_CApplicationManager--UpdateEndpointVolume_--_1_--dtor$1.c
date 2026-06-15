/*
 * XREFs of _CApplicationManager::UpdateEndpointVolume_::_1_::dtor$1 @ 0x18009F5F7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CApplicationManager::UpdateEndpointVolume_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<CVolumeStrip>::~CComPtr<CVolumeStrip>((CVolumeStrip **)(a2 + 128));
}
