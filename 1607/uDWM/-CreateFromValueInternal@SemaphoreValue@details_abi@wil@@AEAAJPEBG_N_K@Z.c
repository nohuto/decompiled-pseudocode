/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800710A4
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180071DB8 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800155D0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800506AC (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800722D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800725B4 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1800728CC (-create@-$semaphore_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details_abi::SemaphoreValue *this,
        size_t *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v6; // rdi
  unsigned int v7; // esi
  unsigned int v8; // ebx
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v14; // [rsp+20h] [rbp-248h]
  unsigned __int16 v15[264]; // [rsp+30h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
  StringCchCopyW(v15, 0x104uLL, a2);
  StringCchCatW(v15, 0x104uLL, L"_p0");
  v6 = a4 >> 31;
  v7 = 1;
  v8 = a4 & 0x7FFFFFFF;
  v9 = 1LL;
  if ( v8 )
    v9 = v8;
  v10 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
          this,
          v8,
          v9,
          v15);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 132LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v12, (unsigned int)"wil", (const char *)(unsigned int)v10, v14);
    return v11;
  }
  StringCchCatW(v15, 0x104uLL, L"h");
  if ( (_DWORD)v6 )
    v7 = v6;
  v10 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
          (char *)this + 8,
          (unsigned int)v6,
          v7,
          v15);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 136LL;
    goto LABEL_7;
  }
  return 0LL;
}
