/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180003204
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180002E50 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001400 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002714 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002750 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002770 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180002964 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180003674 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x18000391C (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  void *v5; // rbx
  HANDLE Mutex; // rax
  __int64 v7; // r8
  const char *v8; // r9
  int LastError; // edi
  __int64 v10; // r8
  const char *v11; // r9
  _DWORD *v12; // rsi
  unsigned __int64 v13; // r15
  __int64 v14; // rdx
  bool *v15; // r9
  int ValueInternal; // eax
  __int64 v17; // r8
  __int64 v18; // r8
  const char *v19; // r9
  int v20; // eax
  __int64 v21; // r8
  HANDLE v23; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE hMutex[2]; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 120, a1);
  v5 = 0LL;
  v23 = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  if ( Mutex )
  {
    v5 = Mutex;
    v23 = Mutex;
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x14A1,
                  (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
                  v8);
  }
  if ( LastError < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x11B, v7, (const char *)(unsigned int)LastError);
    goto LABEL_6;
  }
  wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
    &v23,
    hMutex);
  v12 = 0LL;
  v24 = 0LL;
  v13 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Name, v14, &v24, v15);
  LastError = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v13 = v24;
    LastError = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x61, v17, (const char *)(unsigned int)ValueInternal);
  }
  if ( LastError >= 0 )
  {
    v12 = (_DWORD *)(4 * v13);
    LastError = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6A, v17, (const char *)(unsigned int)LastError);
  }
  if ( LastError >= 0 )
  {
    if ( v12 )
    {
      *a2 = v12;
      *(_DWORD *)*a2 = *v12 + 1;
    }
    else
    {
      v20 = wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
              Name,
              &v23,
              a2);
      LastError = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x127, v21, (const char *)(unsigned int)v20);
        goto LABEL_20;
      }
    }
    LastError = 0;
LABEL_20:
    v5 = v23;
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x11F, v17, (const char *)(unsigned int)LastError);
LABEL_21:
  if ( hMutex[0] && !ReleaseMutex(hMutex[0]) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x629, v18, v19);
    JUMPOUT(0x18000341ALL);
  }
LABEL_6:
  if ( v5 && !CloseHandle(v5) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v10, v11);
    __debugbreak();
  }
  return (unsigned int)LastError;
}
