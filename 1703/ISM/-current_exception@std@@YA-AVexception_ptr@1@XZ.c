/*
 * XREFs of ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x1800073FC
 * Callers:
 *     _std::_Callback_once_std::tuple__lambda_4bfd0116db80ce4255855ce8af72e9c8__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$35 @ 0x18009F208 (_std--_Callback_once_std--tuple__lambda_4bfd0116db80ce4255855ce8af72e9c8__--___ptr6_ea_18009F208.c)
 *     _std::_Callback_once_std::tuple__lambda_a6dafc035b20d634b29ec3c0443d964a__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$9 @ 0x1800A18A7 (_std--_Callback_once_std--tuple__lambda_a6dafc035b20d634b29ec3c0443d964a__--___ptr6_ea_1800A18A7.c)
 *     _std::_Callback_once_std::tuple__lambda_9c299e43976df575cbfcf7e1416abcbe__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$58 @ 0x1800A1DFD (_std--_Callback_once_std--tuple__lambda_9c299e43976df575cbfcf7e1416abcbe__--___ptr6_ea_1800A1DFD.c)
 * Callees:
 *     ?_Current_exception@exception_ptr@std@@SA?AV12@XZ @ 0x1800073D8 (-_Current_exception@exception_ptr@std@@SA-AV12@XZ.c)
 */

void *__fastcall std::current_exception(void *a1)
{
  std::exception_ptr::_Current_exception(a1);
  return a1;
}
