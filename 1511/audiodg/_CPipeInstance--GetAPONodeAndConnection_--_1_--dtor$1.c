/*
 * XREFs of _CPipeInstance::GetAPONodeAndConnection_::_1_::dtor$1 @ 0x140030F42
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::GetAPONodeAndConnection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IMMDeviceEnumerator>::~CComPtr<IMMDeviceEnumerator>((_QWORD *)(a2 + 112));
}
