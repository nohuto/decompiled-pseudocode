/*
 * XREFs of ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180003240
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180003770 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002878 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002890 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
        void **a1,
        LONG a2,
        LONG a3,
        const WCHAR *a4)
{
  unsigned int v5; // ebx
  const char *v6; // r9
  HANDLE Semaphore; // r14
  void *v8; // rdi
  DWORD LastError; // ebp
  __int64 v10; // r8
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 0;
  Semaphore = CreateSemaphoreExW(0LL, a2, a3, a4, 0, 0x1F0003u);
  if ( Semaphore )
  {
    v8 = *a1;
    if ( *a1 )
    {
      LastError = GetLastError();
      if ( !CloseHandle(v8) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x875, v10, v11);
        JUMPOUT(0x1800032E6LL);
      }
      SetLastError(LastError);
    }
    *a1 = Semaphore;
  }
  else
  {
    return (unsigned int)wil::details::in1diag3::Return_GetLastError(
                           retaddr,
                           (void *)0x15B0,
                           (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
                           v6);
  }
  return v5;
}
