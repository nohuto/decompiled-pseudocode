/*
 * XREFs of ??$destroy@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAAXPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Z @ 0x1800195E4
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal__std::allocator_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal_____::emplace_back_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal__const_&___ptr64__::_1_::catch$102 @ 0x18009FC73 (_std--vector_Microsoft--WRL--ComPtr_Windows--Graphics--Holographic--Internal--IHolographicDispla.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IMPCInputProviderBase__std::allocator_Microsoft::WRL::ComPtr_IMPCInputProviderBase_____::emplace_back_Microsoft::WRL::ComPtr_IMPCInputProviderBase____::_1_::catch$69 @ 0x1800A1804 (_std--vector_Microsoft--WRL--ComPtr_IMPCInputProviderBase__std--allocator_Microsoft--WRL--ComPtr.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IMPCInputProviderBase__std::allocator_Microsoft::WRL::ComPtr_IMPCInputProviderBase_____::emplace_back_Microsoft::WRL::ComPtr_IMPCInputProviderBase__const_&___ptr64__::_1_::catch$69 @ 0x1800A1847 (_std--vector_Microsoft--WRL--ComPtr_IMPCInputProviderBase__std--allocator_Microsoft_ea_1800A1847.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<IInputTarget>>>::destroy<Microsoft::WRL::ComPtr<IInputTarget>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
