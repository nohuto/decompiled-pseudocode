/*
 * XREFs of std::_Func_impl__lambda_6e97336237950b521c09fad48fc4540a__std::allocator_int__void_IMPCInputProviderBase_____ptr64_::_Do_call @ 0x18004E100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

bool *__fastcall std::_Func_impl__lambda_6e97336237950b521c09fad48fc4540a__std::allocator_int__void_IMPCInputProviderBase_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  bool v3; // bl
  bool *result; // rax

  v3 = 0;
  if ( **(_BYTE **)(a1 + 8) )
    v3 = (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 40LL))(*a2) != 0;
  result = *(bool **)(a1 + 8);
  *result = v3;
  return result;
}
