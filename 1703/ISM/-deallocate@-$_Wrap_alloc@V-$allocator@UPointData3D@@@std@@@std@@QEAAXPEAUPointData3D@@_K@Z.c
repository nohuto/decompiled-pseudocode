/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@UPointData3D@@@std@@@std@@QEAAXPEAUPointData3D@@_K@Z @ 0x18002EF5C
 * Callers:
 *     _std::vector_PointData3D_std::allocator_PointData3D___::emplace_back_PointData3D_const_&___ptr64__::_1_::catch$101 @ 0x1800A0D9C (_std--vector_PointData3D_std--allocator_PointData3D___--emplace_back_PointData3D_const_-___ptr64.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<PointData3D>>::deallocate(__int64 a1, char *a2, unsigned __int64 a3)
{
  std::_Deallocate(a2, a3, 0x50uLL);
}
