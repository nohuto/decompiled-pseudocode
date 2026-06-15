/*
 * XREFs of _CConnectionInstance::_CConnectionInstance_::_1_::dtor$0 @ 0x1400261E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnectionInstance::_CConnectionInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((_QWORD *)(*(_QWORD *)(a2 + 64) + 48LL));
}
