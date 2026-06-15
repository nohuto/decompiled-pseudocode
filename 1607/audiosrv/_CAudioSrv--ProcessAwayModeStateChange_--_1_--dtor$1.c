/*
 * XREFs of _CAudioSrv::ProcessAwayModeStateChange_::_1_::dtor$1 @ 0x180052F38
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSrv::ProcessAwayModeStateChange_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<CVolumeStrip>::~CComPtr<CVolumeStrip>((CVolumeStrip **)(a2 + 48));
}
