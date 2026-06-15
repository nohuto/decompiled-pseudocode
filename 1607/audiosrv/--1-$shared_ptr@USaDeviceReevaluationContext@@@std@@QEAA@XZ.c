/*
 * XREFs of ??1?$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ @ 0x1800507F8
 * Callers:
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$0 @ 0x180039A9D (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$0.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$3 @ 0x18003AF14 (_CAudioResourceManager--DestroyStream_--_1_--dtor$3.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180004D1C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<SaDeviceReevaluationContext>::~shared_ptr<SaDeviceReevaluationContext>(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
