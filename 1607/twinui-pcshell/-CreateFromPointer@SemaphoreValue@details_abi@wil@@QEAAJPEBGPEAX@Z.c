/*
 * XREFs of ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180002FC4
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000476C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180001840 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002EA8 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180004668 (-create@-$semaphore_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromPointer(
        wil::details_abi::SemaphoreValue *this,
        char *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  signed __int64 v8; // r8
  unsigned __int16 *v9; // rcx
  unsigned int v10; // edi
  unsigned __int16 v11; // ax
  __int64 v12; // r8
  unsigned __int64 v13; // rsi
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  unsigned __int16 v20[264]; // [rsp+30h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  if ( (a3 & 3) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
  v6 = a3 >> 2;
  if ( (v6 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
  v7 = 260LL;
  v8 = a2 - (char *)v20;
  v9 = v20;
  v10 = 1;
  do
  {
    if ( v7 == -2147483386 )
      break;
    v11 = *(unsigned __int16 *)((char *)v9 + v8);
    if ( !v11 )
      break;
    *v9++ = v11;
    --v7;
  }
  while ( v7 );
  if ( !v7 )
    --v9;
  *v9 = 0;
  StringCchCatW(v20, v7, (char *)L"_p0");
  v12 = 1LL;
  v13 = v6 >> 31;
  v14 = v6 & 0x7FFFFFFF;
  if ( v14 )
    v12 = v14;
  v15 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
          this,
          v14,
          v12,
          v20);
  v17 = v15;
  if ( v15 >= 0 )
  {
    StringCchCatW(v20, v16, (char *)L"h");
    if ( (_DWORD)v13 )
      v10 = v13;
    v15 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
            (char *)this + 8,
            (unsigned int)v13,
            v10,
            v20);
    v17 = v15;
    if ( v15 >= 0 )
      return 0;
    v18 = 136LL;
  }
  else
  {
    v18 = 132LL;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v18, (__int64)"wil", (const char *)(unsigned int)v15);
  return v17;
}
