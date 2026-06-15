/*
 * XREFs of _CDeviceProcessNode::_CDeviceProcessNode_::_1_::dtor$1 @ 0x14001B37C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceProcessNode::_CDeviceProcessNode_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>(*(_QWORD *)(a2 + 80) + 48LL);
}
