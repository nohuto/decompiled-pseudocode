/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180003674
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180003204 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180001378 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002714 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002770 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800027D4 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180003154 (-create@-$semaphore_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     memset_0 @ 0x180024558 (memset_0.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  HANDLE ProcessHeap; // rax
  unsigned __int64 v7; // rax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // r8
  _WORD *v10; // rbx
  unsigned int v11; // edi
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rsi
  unsigned __int16 *v15; // rcx
  unsigned __int16 v16; // ax
  LONG v17; // r8d
  unsigned __int64 v18; // rsi
  LONG v19; // edi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  LONG v24; // r8d
  HANDLE v25; // r14
  HANDLE v26; // rsi
  HANDLE v27; // rax
  __int64 v28; // r8
  const char *v29; // r9
  __int64 v30; // r8
  const char *v31; // r9
  HANDLE v32; // rax
  HANDLE hObject[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v35[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x78uLL);
  v10 = (_WORD *)v7;
  if ( !v7 )
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13B, v9, (const char *)0x8007000ELL);
    return v11;
  }
  *(_OWORD *)hObject = 0LL;
  if ( (v7 & 3) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v8);
  v12 = v7 >> 2;
  if ( ((v7 >> 2) & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v8);
  v13 = 260LL;
  v14 = a1 - (_QWORD)v35;
  v15 = v35;
  do
  {
    if ( v13 == -2147483386 )
      break;
    v16 = *(unsigned __int16 *)((char *)v15 + v14);
    if ( !v16 )
      break;
    *v15++ = v16;
    --v13;
  }
  while ( v13 );
  if ( !v13 )
    --v15;
  *v15 = 0;
  StringCchCatW(v35, v13, (char *)L"_p0");
  v17 = 1;
  v18 = v12 >> 31;
  v19 = v12 & 0x7FFFFFFF;
  if ( v19 )
    v17 = v19;
  v20 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
          hObject,
          v19,
          v17,
          v35);
  v11 = v20;
  if ( v20 >= 0 )
  {
    StringCchCatW(v35, v21, (char *)L"h");
    v24 = 1;
    if ( (_DWORD)v18 )
      v24 = v18;
    v20 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
            &hObject[1],
            v18,
            v24,
            v35);
    v11 = v20;
    if ( v20 >= 0 )
    {
      v11 = 0;
      goto LABEL_21;
    }
    v23 = 136LL;
  }
  else
  {
    v23 = 132LL;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v23, v22, (const char *)(unsigned int)v20);
LABEL_21:
  if ( (v11 & 0x80000000) == 0 )
  {
    *(_DWORD *)v10 = 1;
    *((_QWORD *)v10 + 1) = *a2;
    v27 = hObject[0];
    *a2 = 0LL;
    v26 = 0LL;
    *((_QWORD *)v10 + 2) = v27;
    v25 = 0LL;
    *((HANDLE *)v10 + 3) = hObject[1];
    hObject[0] = 0LL;
    hObject[1] = 0LL;
    memset_0(v10 + 16, 0, 0x58uLL);
    v10[16] = 88;
    *((_DWORD *)v10 + 9) = 1;
    memset_0(v10 + 20, 0, 0x50uLL);
    v11 = 0;
    *a3 = v10;
    v10 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13E, v22, (const char *)v11);
    v25 = hObject[1];
    v26 = hObject[0];
  }
  if ( v25 && !CloseHandle(v25) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v28, v29);
    __debugbreak();
  }
  if ( v26 && !CloseHandle(v26) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v30, v31);
    JUMPOUT(0x180003915LL);
  }
  if ( v10 )
  {
    v32 = GetProcessHeap();
    HeapFree(v32, 0, v10);
  }
  return v11;
}
