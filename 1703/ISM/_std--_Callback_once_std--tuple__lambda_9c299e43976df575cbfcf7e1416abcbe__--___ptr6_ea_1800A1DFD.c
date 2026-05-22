/*
 * XREFs of _std::_Callback_once_std::tuple__lambda_9c299e43976df575cbfcf7e1416abcbe__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$58 @ 0x1800A1DFD
 * Callers:
 *     <none>
 * Callees:
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x1800073FC (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::_Callback_once_std::tuple__lambda_9c299e43976df575cbfcf7e1416abcbe_______ptr64_std::exception_ptr_____ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch_58(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx
  void *v4; // rax

  v3 = **(void ***)(a2 + 40);
  v4 = std::current_exception((void *)(a2 + 72));
  __ExceptionPtrAssign(v3, v4);
  __ExceptionPtrDestroy((void *)(a2 + 72));
  return &loc_180057427;
}
