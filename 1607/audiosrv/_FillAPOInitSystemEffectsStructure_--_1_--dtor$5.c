/*
 * XREFs of _FillAPOInitSystemEffectsStructure_::_1_::dtor$5 @ 0x18008D137
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FillAPOInitSystemEffectsStructure_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IPolicyConfig>::~CComPtr<IPolicyConfig>((CPolicyConfig **)(a2 + 128));
}
