/*
 * XREFs of _std::vector_PointData3D_std::allocator_PointData3D___::emplace_back_PointData3D_const_&___ptr64__::_1_::catch$101 @ 0x1800A0D9C
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@UPointData3D@@@std@@@std@@QEAAXPEAUPointData3D@@_K@Z @ 0x18002EF5C (-deallocate@-$_Wrap_alloc@V-$allocator@UPointData3D@@@std@@@std@@QEAAXPEAUPointData3D@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x18009E220 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_PointData3D_std::allocator_PointData3D___::emplace_back_PointData3D_const_____ptr64__::_1_::catch_101(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<PointData3D>>::deallocate(a1, *(char **)(a2 + 112), *(_QWORD *)(a2 + 96));
  throw;
}
