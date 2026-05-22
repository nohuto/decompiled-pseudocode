/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x1800073AC
 * Callers:
 *     _std::rethrow_exception_::_1_::dtor$0 @ 0x18009F01B (_std--rethrow_exception_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::GetInstance_::_1_::dtor$0 @ 0x18009F043 (_MPCHeadUpdateListener--GetInstance_--_1_--dtor$0.c)
 *     _std::_Callback_once_std::tuple__lambda_4bfd0116db80ce4255855ce8af72e9c8__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$0 @ 0x18009F24E (_std--_Callback_once_std--tuple__lambda_4bfd0116db80ce4255855ce8af72e9c8__--___ptr6_ea_18009F24E.c)
 *     _std::_Callback_once_std::tuple__lambda_9c299e43976df575cbfcf7e1416abcbe__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$0 @ 0x1800A1E43 (_std--_Callback_once_std--tuple__lambda_9c299e43976df575cbfcf7e1416abcbe__--___ptr6_ea_1800A1E43.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
