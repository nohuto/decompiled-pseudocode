/*
 * XREFs of _CStreamProcessNode::_CStreamProcessNode_::_1_::dtor$1 @ 0x14001B3AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamProcessNode::_CStreamProcessNode_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>(*(_QWORD *)(a2 + 96) + 48LL);
}
