/*
 * XREFs of _std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Insert_n_::_1_::catch$1 @ 0x180049D55
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180047984 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180065874 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Insert_n_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::vector<Microsoft::WRL::WeakRef>::_Destroy(
    a1,
    *(_QWORD *)(a2 + 144) + 8LL,
    *(_QWORD *)(*(_QWORD *)(a2 + 128) + 8LL) + 8LL);
  throw;
}
