/*
 * XREFs of _std::_Uninit_move_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64_std::allocator_Microsoft::WRL::ComPtr_IStreamGroupProxy____Microsoft::WRL::ComPtr_IStreamGroupProxy____::_1_::catch$0 @ 0x18007650C
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180038EF8 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn std::_Uninit_move_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64_std::allocator_Microsoft::WRL::ComPtr_IStreamGroupProxy____Microsoft::WRL::ComPtr_IStreamGroupProxy____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 *i; // rbx
  __int64 v4; // rcx

  for ( i = *(__int64 **)(a2 + 88); i != *(__int64 **)(a2 + 80); ++i )
  {
    v4 = *i;
    if ( *i )
    {
      *i = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  throw;
}
