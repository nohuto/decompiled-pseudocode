/*
 * XREFs of ??1?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@QEAA@XZ @ 0x1800919B4
 * Callers:
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$1 @ 0x1800473F0 (_CAudioResourceManager--DestroyStream_--_1_--dtor$1.c)
 *     _std::make_shared_NonDefaultSaDeviceReevaluationContext__::_1_::dtor$1 @ 0x180091923 (_std--make_shared_NonDefaultSaDeviceReevaluationContext__--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180093308 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<NonDefaultSaDeviceReevaluationContext>::~shared_ptr<NonDefaultSaDeviceReevaluationContext>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
