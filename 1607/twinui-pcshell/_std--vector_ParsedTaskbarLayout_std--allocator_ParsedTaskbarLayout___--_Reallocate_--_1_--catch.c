/*
 * XREFs of _std::vector_ParsedTaskbarLayout_std::allocator_ParsedTaskbarLayout___::_Reallocate_::_1_::catch$0 @ 0x180030D9C
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAXPEAUParsedTaskbarLayout@@_K@Z @ 0x18000BD74 (-deallocate@-$_Wrap_alloc@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAXPEAUParsedTaskbarL.c)
 *     _CxxThrowException_0 @ 0x18002F35C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_ParsedTaskbarLayout_std::allocator_ParsedTaskbarLayout___::_Reallocate_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<ParsedTaskbarLayout>>::deallocate(a1, *(char **)(a2 + 112), *(_QWORD *)(a2 + 120));
  throw;
}
