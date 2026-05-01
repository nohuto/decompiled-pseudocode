/*
 * XREFs of _std::vector_enum_SharedStartModel::LayoutSKU_std::allocator_enum_SharedStartModel::LayoutSKU___::_Reallocate_::_1_::catch$0 @ 0x180030DC6
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXPEAW4LayoutSKU@SharedStartModel@@_K@Z @ 0x18000BF94 (-deallocate@-$_Wrap_alloc@V-$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXPEAW4Layou.c)
 *     _CxxThrowException_0 @ 0x18002F35C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_enum_SharedStartModel::LayoutSKU_std::allocator_enum_SharedStartModel::LayoutSKU___::_Reallocate_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<enum SharedStartModel::LayoutSKU>>::deallocate(
    a1,
    *(char **)(a2 + 80),
    *(_QWORD *)(a2 + 88));
  throw;
}
