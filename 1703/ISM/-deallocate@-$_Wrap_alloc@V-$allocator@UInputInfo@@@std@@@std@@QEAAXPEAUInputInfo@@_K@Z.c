/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@UInputInfo@@@std@@@std@@QEAAXPEAUInputInfo@@_K@Z @ 0x180054854
 * Callers:
 *     _std::vector_InputInfo_std::allocator_InputInfo___::emplace_back_InputInfo_const_&___ptr64__::_1_::catch$95 @ 0x1800A1CA4 (_std--vector_InputInfo_std--allocator_InputInfo___--emplace_back_InputInfo_const_-___ptr64__--_1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<InputInfo>>::deallocate(__int64 a1, char *a2, unsigned __int64 a3)
{
  std::_Deallocate(a2, a3, 0x760uLL);
}
