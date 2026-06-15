/*
 * XREFs of _std::_Uninit_fill_n_Microsoft::WRL::WeakRef_____ptr64_unsigned___int64_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef__Microsoft::WRL::WeakRef__::_1_::catch$0 @ 0x18003BF4E
 * Callers:
 *     <none>
 * Callees:
 *     ??$destroy@VWeakRef@WRL@Microsoft@@@?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXPEAVWeakRef@WRL@Microsoft@@@Z @ 0x18002822C (--$destroy@VWeakRef@WRL@Microsoft@@@-$_Wrap_alloc@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@st.c)
 *     _CxxThrowException_0 @ 0x180038EF8 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninit_fill_n_Microsoft::WRL::WeakRef_____ptr64_unsigned___int64_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef__Microsoft::WRL::WeakRef__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 *i; // rbx

  for ( i = *(__int64 **)(a2 + 88); i != *(__int64 **)(a2 + 64); ++i )
    std::_Wrap_alloc<std::allocator<Microsoft::WRL::WeakRef>>::destroy<Microsoft::WRL::WeakRef>(a1, i);
  throw;
}
