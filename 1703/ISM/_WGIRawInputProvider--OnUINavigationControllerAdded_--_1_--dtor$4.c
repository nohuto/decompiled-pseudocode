/*
 * XREFs of _WGIRawInputProvider::OnUINavigationControllerAdded_::_1_::dtor$4 @ 0x1800A2240
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 */

void __fastcall WGIRawInputProvider::OnUINavigationControllerAdded_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  MPCMouseProcessor::Initialize3DComponents(*(MPCMouseProcessor **)(a2 + 72));
}
