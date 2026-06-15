/*
 * XREFs of _std::_Uninit_move_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64_std::allocator_Microsoft::WRL::ComPtr_IStreamGroupProxy____Microsoft::WRL::ComPtr_IStreamGroupProxy____::_1_::catch$0 @ 0x18008DF50
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180047984 (_CxxThrowException_0.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180065958 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall __noreturn std::_Uninit_move_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64_std::allocator_Microsoft::WRL::ComPtr_IStreamGroupProxy____Microsoft::WRL::ComPtr_IStreamGroupProxy____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 *i; // rbx

  for ( i = *(__int64 **)(a2 + 88); i != *(__int64 **)(a2 + 80); ++i )
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(i);
  throw;
}
