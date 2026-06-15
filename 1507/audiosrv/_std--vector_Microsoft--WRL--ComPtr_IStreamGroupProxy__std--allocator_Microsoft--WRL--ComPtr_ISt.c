/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IStreamGroupProxy__std::allocator_Microsoft::WRL::ComPtr_IStreamGroupProxy_____::_Reallocate_::_1_::catch$0 @ 0x18009128D
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     _CxxThrowException_0 @ 0x180043A40 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IStreamGroupProxy__std::allocator_Microsoft::WRL::ComPtr_IStreamGroupProxy_____::_Reallocate_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  operator delete(*(void **)(a2 + 88));
  throw;
}
