/*
 * XREFs of _std::_Uninit_move_Microsoft::WRL::WeakRef_____ptr64_Microsoft::WRL::WeakRef_____ptr64_std::allocator_Microsoft::WRL::WeakRef__Microsoft::WRL::WeakRef__::_1_::catch$0 @ 0x180049D9D
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180047984 (_CxxThrowException_0.c)
 *     ??$destroy@VWeakRef@WRL@Microsoft@@@?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXPEAVWeakRef@WRL@Microsoft@@@Z @ 0x180066990 (--$destroy@VWeakRef@WRL@Microsoft@@@-$_Wrap_alloc@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@st.c)
 */

void __fastcall __noreturn std::_Uninit_move_Microsoft::WRL::WeakRef_____ptr64_Microsoft::WRL::WeakRef_____ptr64_std::allocator_Microsoft::WRL::WeakRef__Microsoft::WRL::WeakRef__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(a2 + 88); i != *(_QWORD *)(a2 + 80); i += 8LL )
    std::_Wrap_alloc<std::allocator<Microsoft::WRL::WeakRef>>::destroy<Microsoft::WRL::WeakRef>(a1, i);
  throw;
}
