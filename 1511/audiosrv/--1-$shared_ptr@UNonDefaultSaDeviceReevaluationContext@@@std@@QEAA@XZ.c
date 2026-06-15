/*
 * XREFs of ??1?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@QEAA@XZ @ 0x18008F218
 * Callers:
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$1 @ 0x18004985C (_CAudioResourceManager--DestroyStream_--_1_--dtor$1.c)
 *     _std::make_shared_NonDefaultSaDeviceReevaluationContext__::_1_::dtor$1 @ 0x18008F1B3 (_std--make_shared_NonDefaultSaDeviceReevaluationContext__--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180090B98 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<NonDefaultSaDeviceReevaluationContext>::~shared_ptr<NonDefaultSaDeviceReevaluationContext>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
