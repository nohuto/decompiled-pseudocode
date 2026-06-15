/*
 * XREFs of _CProcess::DisconnectExclusiveModeStreams_::_1_::dtor$2 @ 0x1800A2FDF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::DisconnectExclusiveModeStreams_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((_QWORD *)(a2 + 96));
}
