/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180070E84
 * Callers:
 *     ?GetShared@?$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUProcessLocalData@23@XZ @ 0x180071764 (-GetShared@-$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUPr.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800458D0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180071078 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180071DB8 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180071FD4 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800722B4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800722D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800726A0 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x18007286C (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18007292C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  const char *v5; // r9
  int LastError; // ebx
  void *v7; // rdx
  _DWORD *v8; // rsi
  unsigned __int64 v9; // r15
  bool v10; // dl
  bool *v11; // r9
  int ValueInternal; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v16; // eax
  int v17; // [rsp+20h] [rbp-E0h]
  wil::details *v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  wil::details *v20; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  v17 = 120;
  StringCchPrintfW(Name, 0x104uLL, (size_t *)L"Local\\SM0:%d:%d:%hs", CurrentProcessId);
  v18 = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  if ( Mutex )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      &v18,
      Mutex);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x14A1,
                  (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
                  v5);
  }
  if ( LastError < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11B,
      (unsigned int)"wil",
      (const char *)(unsigned int)LastError,
      120);
    goto LABEL_19;
  }
  wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
    &v18,
    &v20);
  v8 = 0LL;
  v19 = 0LL;
  v9 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(Name, v10, &v19, v11);
  LastError = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v9 = v19;
    LastError = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61,
      (unsigned int)"wil",
      (const char *)(unsigned int)ValueInternal,
      120);
  }
  if ( LastError >= 0 )
  {
    v8 = (_DWORD *)(4 * v9);
    LastError = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (unsigned int)"wil",
      (const char *)(unsigned int)LastError,
      v17);
  }
  if ( LastError >= 0 )
  {
    if ( v8 )
    {
      *a2 = v8;
      *(_DWORD *)*a2 = *v8 + 1;
    }
    else
    {
      v16 = wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(Name);
      LastError = v16;
      if ( v16 < 0 )
      {
        v13 = (unsigned int)v16;
        v14 = 295LL;
        goto LABEL_24;
      }
    }
    LastError = 0;
    goto LABEL_17;
  }
  v13 = (unsigned int)LastError;
  v14 = 287LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v14, (unsigned int)"wil", (const char *)v13, v17);
LABEL_17:
  if ( v20 )
    wil::details::ReleaseMutex(v20, v7);
LABEL_19:
  if ( v18 )
    wil::details::CloseHandle(v18, v7);
  return (unsigned int)LastError;
}
