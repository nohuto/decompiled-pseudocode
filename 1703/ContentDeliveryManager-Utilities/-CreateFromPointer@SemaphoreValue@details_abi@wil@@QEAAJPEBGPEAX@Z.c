/*
 * XREFs of ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180003040
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180012254 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180012750 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180001590 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002E34 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180011E84 (-create@-$semaphore_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
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
  unsigned __int16 *v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  unsigned __int16 v18[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a3 & 3) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
  v4 = a3 >> 2;
  if ( ((a3 >> 2) & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
  v5 = a2 - (char *)v18;
  v6 = v18;
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
  v10 = v6 - 1;
  if ( v7 )
    v10 = v6;
  *v10 = 0;
  StringCchCatW(v18, 260LL, (char *)L"_p0");
  v11 = 1LL;
  v12 = v4 >> 31;
  v13 = v4 & 0x7FFFFFFF;
  if ( v13 )
    v11 = v13;
  v14 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
          this,
          v13,
          v11,
          v18);
  v15 = v14;
  if ( v14 >= 0 )
  {
    StringCchCatW(v18, 260LL, (char *)L"h");
    if ( (_DWORD)v12 )
      v8 = v12;
    v14 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
            (char *)this + 8,
            (unsigned int)v12,
            v8,
            v18);
    v15 = v14;
    if ( v14 >= 0 )
      return 0;
    v16 = 136LL;
  }
  else
  {
    v16 = 132LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)v16, (__int64)"wil", (const char *)(unsigned int)v14);
  return v15;
}
