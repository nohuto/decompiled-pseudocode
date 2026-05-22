/*
 * XREFs of ??$destroy@VHString@Wrappers@WRL@Microsoft@@@?$_Wrap_alloc@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAAXPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18007B914
 * Callers:
 *     _std::vector_Microsoft::WRL::Wrappers::HString_std::allocator_Microsoft::WRL::Wrappers::HString___::emplace_back_Microsoft::WRL::Wrappers::HString__::_1_::catch$102 @ 0x1800A327A (_std--vector_Microsoft--WRL--Wrappers--HString_std--allocator_Microsoft--WRL--Wrappers--HString_.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall std::_Wrap_alloc<std::allocator<Microsoft::WRL::Wrappers::HString>>::destroy<Microsoft::WRL::Wrappers::HString>(
        __int64 a1,
        HSTRING *a2)
{
  HRESULT result; // eax

  result = WindowsDeleteString(*a2);
  *a2 = 0LL;
  return result;
}
