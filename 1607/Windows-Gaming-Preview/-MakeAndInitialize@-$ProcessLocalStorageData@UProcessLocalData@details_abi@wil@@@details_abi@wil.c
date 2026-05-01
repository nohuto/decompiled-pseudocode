/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180003CA4
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000380C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800016EC (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002C5C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002CBC (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180003728 (-create@-$semaphore_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@.c)
 *     __security_check_cookie @ 0x180026090 (__security_check_cookie.c)
 *     memset @ 0x18002705C (memset.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  HANDLE ProcessHeap; // rax
  unsigned __int64 v7; // rax
  wil::details::in1diag3 *v8; // rcx
  _WORD *v9; // rbx
  unsigned int v10; // edi
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned __int16 *v14; // rcx
  unsigned __int16 v15; // ax
  LONG v16; // r8d
  unsigned __int64 v17; // rsi
  LONG v18; // edi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  LONG v22; // r8d
  HANDLE v23; // r14
  HANDLE v24; // rsi
  HANDLE v25; // rax
  __int64 v26; // r8
  const char *v27; // r9
  __int64 v28; // r8
  const char *v29; // r9
  HANDLE v30; // rax
  HANDLE hObject[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v33[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x78uLL);
  v9 = (_WORD *)v7;
  if ( !v7 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13B, (__int64)"wil", (const char *)0x8007000ELL);
    return v10;
  }
  *(_OWORD *)hObject = 0LL;
  if ( (v7 & 3) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v8);
  v11 = v7 >> 2;
  if ( ((v7 >> 2) & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v8);
  v12 = 260LL;
  v13 = a1 - (_QWORD)v33;
  v14 = v33;
  do
  {
    if ( v12 == -2147483386 )
      break;
    v15 = *(unsigned __int16 *)((char *)v14 + v13);
    if ( !v15 )
      break;
    *v14++ = v15;
    --v12;
  }
  while ( v12 );
  if ( !v12 )
    --v14;
  *v14 = 0;
  StringCchCatW(v33, v12, (char *)L"_p0");
  v16 = 1;
  v17 = v11 >> 31;
  v18 = v11 & 0x7FFFFFFF;
  if ( v18 )
    v16 = v18;
  v19 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
          hObject,
          v18,
          v16,
          v33);
  v10 = v19;
  if ( v19 >= 0 )
  {
    StringCchCatW(v33, v20, (char *)L"h");
    v22 = 1;
    if ( (_DWORD)v17 )
      v22 = v17;
    v19 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
            &hObject[1],
            v17,
            v22,
            v33);
    v10 = v19;
    if ( v19 >= 0 )
    {
      v10 = 0;
      goto LABEL_21;
    }
    v21 = 136LL;
  }
  else
  {
    v21 = 132LL;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v21, (__int64)"wil", (const char *)(unsigned int)v19);
LABEL_21:
  if ( (v10 & 0x80000000) == 0 )
  {
    *(_DWORD *)v9 = 1;
    *((_QWORD *)v9 + 1) = *a2;
    v25 = hObject[0];
    *a2 = 0LL;
    v24 = 0LL;
    *((_QWORD *)v9 + 2) = v25;
    v23 = 0LL;
    *((HANDLE *)v9 + 3) = hObject[1];
    hObject[0] = 0LL;
    hObject[1] = 0LL;
    memset(v9 + 16, 0, 0x58uLL);
    v9[16] = 88;
    *((_DWORD *)v9 + 9) = 1;
    memset(v9 + 20, 0, 0x50uLL);
    v10 = 0;
    *a3 = v9;
    v9 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13E, (__int64)"wil", (const char *)v10);
    v23 = hObject[1];
    v24 = hObject[0];
  }
  if ( v23 && !CloseHandle(v23) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v26, v27);
    __debugbreak();
  }
  if ( v24 && !CloseHandle(v24) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v28, v29);
    JUMPOUT(0x180003F5ALL);
  }
  if ( v9 )
  {
    v30 = GetProcessHeap();
    HeapFree(v30, 0, v9);
  }
  return v10;
}
