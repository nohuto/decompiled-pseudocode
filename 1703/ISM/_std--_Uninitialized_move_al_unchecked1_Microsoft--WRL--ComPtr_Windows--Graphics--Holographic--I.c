/*
 * XREFs of _std::_Uninitialized_move_al_unchecked1_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal______ptr64_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal______ptr64_std::allocator_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal______::_1_::catch$4 @ 0x18009FCC2
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@PEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@YAXPEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@0AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@0@@Z @ 0x18001939C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@PEAV-$Com.c)
 *     _CxxThrowException_0 @ 0x18009E220 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked1_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal______ptr64_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal______ptr64_std::allocator_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal______::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>,Microsoft::WRL::ComPtr<IMPCInputProviderBase> *>(
    *(__int64 **)(a2 + 88),
    *(__int64 **)(a2 + 80));
  throw;
}
