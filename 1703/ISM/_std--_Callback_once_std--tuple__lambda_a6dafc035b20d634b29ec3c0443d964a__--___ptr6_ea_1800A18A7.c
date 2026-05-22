/*
 * XREFs of _std::_Callback_once_std::tuple__lambda_a6dafc035b20d634b29ec3c0443d964a__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$9 @ 0x1800A18A7
 * Callers:
 *     <none>
 * Callees:
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x1800073FC (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::_Callback_once_std::tuple__lambda_a6dafc035b20d634b29ec3c0443d964a_______ptr64_std::exception_ptr_____ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch_9(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx
  void *v4; // rax

  v3 = **(void ***)(a2 + 88);
  v4 = std::current_exception((void *)(a2 + 40));
  __ExceptionPtrAssign(v3, v4);
  __ExceptionPtrDestroy((void *)(a2 + 40));
  return &loc_18004DE18;
}
