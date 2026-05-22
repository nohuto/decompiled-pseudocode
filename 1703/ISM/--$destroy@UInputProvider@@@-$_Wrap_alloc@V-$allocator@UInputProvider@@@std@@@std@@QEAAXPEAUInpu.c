/*
 * XREFs of ??$destroy@UInputProvider@@@?$_Wrap_alloc@V?$allocator@UInputProvider@@@std@@@std@@QEAAXPEAUInputProvider@@@Z @ 0x180005470
 * Callers:
 *     _std::vector_InputProvider_std::allocator_InputProvider___::emplace_back_InputProvider__::_1_::catch$103 @ 0x1800A0C73 (_std--vector_InputProvider_std--allocator_InputProvider___--emplace_back_InputProvider__--_1_--c.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Wrap_alloc<std::allocator<InputProvider>>::destroy<InputProvider>(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
