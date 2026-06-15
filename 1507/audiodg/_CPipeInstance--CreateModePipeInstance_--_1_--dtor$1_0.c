/*
 * XREFs of _CPipeInstance::CreateModePipeInstance_::_1_::dtor$1_0 @ 0x14002FB9A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::CreateModePipeInstance_::_1_::dtor_1_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>((CAudioMediaType **)(a2 + 80));
}
