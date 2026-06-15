/*
 * XREFs of _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$3 @ 0x14003067F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::CreateStreamPipeInstance_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>((CAudioMediaType **)(a2 + 72));
}
