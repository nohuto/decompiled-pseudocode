/*
 * XREFs of _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$2 @ 0x14002E3D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>((CAudioMediaType **)(a2 + 112));
}
