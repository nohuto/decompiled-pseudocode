/*
 * XREFs of ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180002F3C
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000CC6C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000D17C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800014F8 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002D20 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x18000C94C (-create@-$semaphore_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromPointer(
        wil::details_abi::SemaphoreValue *this,
        char *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  signed __int64 v5; // r8
  unsigned __int16 *v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // edi
  unsigned __int16 v9; // ax
  __int64 v10; // r8
  unsigned __int64 v11; // rsi
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned __int16 v17[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a3 & 3) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
  v4 = a3 >> 2;
  if ( ((a3 >> 2) & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
  v5 = a2 - (char *)v17;
  v6 = v17;
  v7 = 260LL;
  v8 = 1;
  do
  {
    if ( v7 == -2147483386 )
      break;
    v9 = *(unsigned __int16 *)((char *)v6 + v5);
    if ( !v9 )
      break;
    *v6++ = v9;
    --v7;
  }
  while ( v7 );
  if ( !v7 )
    --v6;
  *v6 = 0;
  StringCchCatW(v17, 260LL, (char *)L"_p0");
  v10 = 1LL;
  v11 = v4 >> 31;
  v12 = v4 & 0x7FFFFFFF;
  if ( v12 )
    v10 = v12;
  v13 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
          this,
          v12,
          v10,
          v17);
  v14 = v13;
  if ( v13 >= 0 )
  {
    StringCchCatW(v17, 260LL, (char *)L"h");
    if ( (_DWORD)v11 )
      v8 = v11;
    v13 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
            (char *)this + 8,
            (unsigned int)v11,
            v8,
            v17);
    v14 = v13;
    if ( v13 >= 0 )
      return 0;
    v15 = 136LL;
  }
  else
  {
    v15 = 132LL;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v15, (__int64)"wil", (const char *)(unsigned int)v13);
  return v14;
}
