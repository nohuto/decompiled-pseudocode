/*
 * XREFs of ??1?$function@$$A6AXXZ@wistd@@QEAA@XZ @ 0x180042AE0
 * Callers:
 *     _wil::details_abi::RecordWnfUsageIndex_::_1_::dtor$2 @ 0x1800A128D (_wil--details_abi--RecordWnfUsageIndex_--_1_--dtor$2.c)
 *     _std::_Callback_once_std::tuple__lambda_9c299e43976df575cbfcf7e1416abcbe__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$7 @ 0x1800A1DD9 (_std--_Callback_once_std--tuple__lambda_9c299e43976df575cbfcf7e1416abcbe__--___ptr64_std--except.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<void (void)>::~function<void (void)>(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, a2);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, a2);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  return result;
}
