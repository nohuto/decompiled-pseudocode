/*
 * XREFs of std::_Func_impl__lambda_11fb7fb51c16b82804315061782d9f94__std::allocator_int__void__MIT_INPUT_FOCUS_MESSAGE_const_____ptr64_::_Do_call @ 0x180019900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl__lambda_11fb7fb51c16b82804315061782d9f94__std::allocator_int__void__MIT_INPUT_FOCUS_MESSAGE_const_____ptr64_::_Do_call(
        __int64 a1,
        const struct _MIT_INPUT_FOCUS_MESSAGE **a2)
{
  DWMInputRouter::OnFocusedThreadChanged(*(DWMInputRouter **)(a1 + 8), *a2);
}
