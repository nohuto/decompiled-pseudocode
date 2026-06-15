/*
 * XREFs of _CAudioSrv::ProcessAwayModeStateChange_::_1_::dtor$1 @ 0x180068B64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAudioSrv::ProcessAwayModeStateChange_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<CVolumeStrip>::~CComPtr<CVolumeStrip>((CVolumeStrip **)(a2 + 64));
}
