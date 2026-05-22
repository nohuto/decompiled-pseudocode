/*
 * XREFs of _MPCRawInputProvider::Create_::_1_::dtor$2 @ 0x1800A1BCF
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 */

void __fastcall MPCRawInputProvider::Create_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  MPCMouseProcessor::Initialize3DComponents(*(MPCMouseProcessor **)(a2 + 48));
}
