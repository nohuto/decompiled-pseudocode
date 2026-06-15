/*
 * XREFs of _CDeviceProcessNode::_CDeviceProcessNode_::_1_::dtor$2 @ 0x14001B38C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceProcessNode::_CDeviceProcessNode_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(*(_QWORD *)(a2 + 88));
}
