/*
 * XREFs of _std::_Uninitialized_copy_al_unchecked1_InputProvider_____ptr64_InputProvider_____ptr64_std::allocator_InputProvider____::_1_::catch$5 @ 0x1800A0CD9
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@PEAUInputProvider@@@std@@YAXPEAUInputProvider@@0AEAU?$_Wrap_alloc@V?$allocator@UInputProvider@@@std@@@0@@Z @ 0x180005424 (--$_Destroy_range@V-$allocator@UInputProvider@@@std@@PEAUInputProvider@@@std@@YAXPEAUInputProvid.c)
 *     _CxxThrowException_0 @ 0x18009E220 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_copy_al_unchecked1_InputProvider_____ptr64_InputProvider_____ptr64_std::allocator_InputProvider____::_1_::catch_5(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<InputProvider>,InputProvider *>(*(__int64 **)(a2 + 104), *(__int64 **)(a2 + 96));
  throw;
}
