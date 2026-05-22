/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@UInputProvider@@@std@@@std@@QEAAXPEAUInputProvider@@_K@Z @ 0x1800052BC
 * Callers:
 *     _std::vector_InputProvider_std::allocator_InputProvider___::emplace_back_InputProvider__::_1_::catch$103 @ 0x1800A0C73 (_std--vector_InputProvider_std--allocator_InputProvider___--emplace_back_InputProvider__--_1_--c.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<InputProvider>>::deallocate(__int64 a1, char *a2, unsigned __int64 a3)
{
  std::_Deallocate(a2, a3, 0x18uLL);
}
