/*
 * XREFs of ?_Tidy@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@IEAAXXZ @ 0x180079560
 * Callers:
 *     ??_GCAudioResourceManager@@UEAAPEAXI@Z @ 0x180077BC0 (--_GCAudioResourceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180004D1C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::deque<std::shared_ptr<SaDeviceReevaluationContext>>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v3 = *(std::_Ref_count_base **)(*(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[3] - 1LL + v2))) + 8LL);
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  v5 = a1[2];
  while ( v5 )
  {
    --v5;
    v6 = *(_QWORD **)(a1[1] + 8 * v5);
    if ( v6 )
      std::_Deallocate(v6, 1uLL, 0x10uLL);
  }
  v7 = (_QWORD *)a1[1];
  if ( v7 )
    std::_Deallocate(v7, a1[2], 8uLL);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
