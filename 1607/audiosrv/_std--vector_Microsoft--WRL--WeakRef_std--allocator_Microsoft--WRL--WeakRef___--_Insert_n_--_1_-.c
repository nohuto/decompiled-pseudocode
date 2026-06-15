/*
 * XREFs of _std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Insert_n_::_1_::catch$0 @ 0x18003BE61
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x180038EF8 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180051154 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Insert_n_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  int v3; // esi
  _QWORD *v4; // rbx
  __int64 v5; // rdi

  v3 = *(_DWORD *)(a2 + 144);
  v4 = *(_QWORD **)(a2 + 168);
  v5 = *(_QWORD *)(a2 + 48);
  if ( v3 > 1 )
    std::vector<Microsoft::WRL::WeakRef>::_Destroy(a1, *(_QWORD *)(a2 + 168), &v4[v5]);
  if ( v3 > 0 )
    std::vector<Microsoft::WRL::WeakRef>::_Destroy(a1, &v4[v5], &v4[v5 + 1]);
  std::_Deallocate(v4, *(_QWORD *)(a2 + 56), 8uLL);
  throw;
}
