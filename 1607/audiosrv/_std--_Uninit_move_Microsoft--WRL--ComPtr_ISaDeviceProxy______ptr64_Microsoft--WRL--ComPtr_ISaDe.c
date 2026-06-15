/*
 * XREFs of _std::_Uninit_move_Microsoft::WRL::ComPtr_ISaDeviceProxy______ptr64_Microsoft::WRL::ComPtr_ISaDeviceProxy______ptr64_std::allocator_Microsoft::WRL::ComPtr_ISaDeviceProxy____Microsoft::WRL::ComPtr_ISaDeviceProxy____::_1_::catch$0 @ 0x180076484
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180025004 (-InternalRelease@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _CxxThrowException_0 @ 0x180038EF8 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninit_move_Microsoft::WRL::ComPtr_ISaDeviceProxy______ptr64_Microsoft::WRL::ComPtr_ISaDeviceProxy______ptr64_std::allocator_Microsoft::WRL::ComPtr_ISaDeviceProxy____Microsoft::WRL::ComPtr_ISaDeviceProxy____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 *i; // rbx

  for ( i = *(__int64 **)(a2 + 88); i != *(__int64 **)(a2 + 80); ++i )
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(i);
  throw;
}
