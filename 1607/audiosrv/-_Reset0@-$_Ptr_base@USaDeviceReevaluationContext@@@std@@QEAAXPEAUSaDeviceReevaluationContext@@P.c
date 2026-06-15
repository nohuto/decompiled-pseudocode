/*
 * XREFs of ?_Reset0@?$_Ptr_base@USaDeviceReevaluationContext@@@std@@QEAAXPEAUSaDeviceReevaluationContext@@PEAV_Ref_count_base@2@@Z @ 0x18007951C
 * Callers:
 *     ??$make_shared@USaDeviceReevaluationContext@@$$V@std@@YA?AV?$shared_ptr@USaDeviceReevaluationContext@@@0@XZ @ 0x18007798C (--$make_shared@USaDeviceReevaluationContext@@$$V@std@@YA-AV-$shared_ptr@USaDeviceReevaluationCon.c)
 *     ?push_back@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@USaDeviceReevaluationContext@@@2@@Z @ 0x180079650 (-push_back@-$deque@V-$shared_ptr@USaDeviceReevaluationContext@@@std@@V-$allocator@V-$shared_ptr@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180004D1C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Ptr_base<SaDeviceReevaluationContext>::_Reset0(_QWORD *a1, __int64 a2, __int64 a3)
{
  std::_Ref_count_base *v5; // rcx

  v5 = (std::_Ref_count_base *)a1[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  *a1 = a2;
  a1[1] = a3;
}
