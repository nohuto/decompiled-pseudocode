/*
 * XREFs of _wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_bool______ptr64__::_2_::CompletionDelegate::Invoke @ 0x180040640
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002D8C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_bool______ptr64__::_2_::CompletionDelegate::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // r8
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 40) = a3;
  if ( !SetEvent(*(HANDLE *)(a1 + 48)) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x86F, v3, v4);
    JUMPOUT(0x18004066CLL);
  }
  return 0LL;
}
