/*
 * XREFs of ?_Reset0@?$_Ptr_base@UNonDefaultSaDeviceReevaluationContext@@@std@@QEAAXPEAUNonDefaultSaDeviceReevaluationContext@@PEAV_Ref_count_base@2@@Z @ 0x180090DC4
 * Callers:
 *     ??$make_shared@UNonDefaultSaDeviceReevaluationContext@@@std@@YA?AV?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@0@XZ @ 0x18008F13C (--$make_shared@UNonDefaultSaDeviceReevaluationContext@@@std@@YA-AV-$shared_ptr@UNonDefaultSaDevi.c)
 *     ?push_back@?$deque@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@2@@Z @ 0x180090EE8 (-push_back@-$deque@V-$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V-$allocator@V-$s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180090B98 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Ptr_base<NonDefaultSaDeviceReevaluationContext>::_Reset0(_QWORD *a1, __int64 a2, __int64 a3)
{
  std::_Ref_count_base *v5; // rcx

  v5 = (std::_Ref_count_base *)a1[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  *a1 = a2;
  a1[1] = a3;
}
