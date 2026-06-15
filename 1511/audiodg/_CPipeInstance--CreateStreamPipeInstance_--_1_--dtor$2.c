/*
 * XREFs of _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$2 @ 0x140030D6B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::CreateStreamPipeInstance_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>((CAudioMediaType **)(a2 + 96));
}
