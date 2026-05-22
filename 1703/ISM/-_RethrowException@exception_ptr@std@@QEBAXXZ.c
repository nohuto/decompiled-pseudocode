/*
 * XREFs of ?_RethrowException@exception_ptr@std@@QEBAXXZ @ 0x1800073CC
 * Callers:
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x180007414 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn std::exception_ptr::_RethrowException(std::exception_ptr *this)
{
  __ExceptionPtrRethrow(this);
  JUMPOUT(0x1800073D6LL);
}
