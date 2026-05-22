/*
 * XREFs of _DWMInputRouter::GetDisplayForDevice_::_1_::dtor$8 @ 0x18009FB0B
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 */

void __fastcall DWMInputRouter::GetDisplayForDevice_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  MPCMouseProcessor::Initialize3DComponents(*(MPCMouseProcessor **)(a2 + 96));
}
