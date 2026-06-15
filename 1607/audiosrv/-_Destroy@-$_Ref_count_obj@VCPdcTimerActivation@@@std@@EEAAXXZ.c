/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x1800051F0
 * Callers:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180004D1C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_obj<CPdcTimerActivation>::_Destroy(__int64 a1)
{
  CPdcTimerActivation::~CPdcTimerActivation((CPdcTimerActivation *)(a1 + 16));
}
