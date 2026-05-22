/*
 * XREFs of ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x180007414
 * Callers:
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800075AC (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x180056428 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 * Callees:
 *     ?_RethrowException@exception_ptr@std@@QEBAXXZ @ 0x1800073CC (-_RethrowException@exception_ptr@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn std::rethrow_exception(std::exception_ptr *a1)
{
  std::exception_ptr::_RethrowException(a1);
}
