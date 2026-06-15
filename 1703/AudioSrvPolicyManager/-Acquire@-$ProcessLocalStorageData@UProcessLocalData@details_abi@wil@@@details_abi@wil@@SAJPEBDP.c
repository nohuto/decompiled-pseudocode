/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800032E8
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180002F54 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001420 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002848 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002878 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002890 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180002A68 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180003770 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x180003A2C (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     __security_check_cookie @ 0x180020A40 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  void *v5; // rbx
  HANDLE Mutex; // rax
  const char *v7; // r9
  int LastError; // edi
  __int64 v9; // r8
  const char *v10; // r9
  unsigned __int64 v11; // r12
  _DWORD *v12; // r14
  __int64 v13; // rdx
  bool *v14; // r9
  int ValueInternal; // eax
  __int64 v16; // r8
  const char *v17; // r9
  int v18; // eax
  HANDLE v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE hMutex[2]; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 120, a1);
  v5 = 0LL;
  v20 = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  if ( Mutex )
  {
    v5 = Mutex;
    v20 = Mutex;
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x15B0,
                  (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
                  v7);
  }
  if ( LastError < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x11A,
      (__int64)"wil",
      (const char *)(unsigned int)LastError);
    goto LABEL_6;
  }
  wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
    &v20,
    hMutex);
  v11 = 0LL;
  v21 = 0LL;
  v12 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Name, v13, &v21, v14);
  LastError = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v11 = v21;
    LastError = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x61,
      (__int64)"wil",
      (const char *)(unsigned int)ValueInternal);
  }
  if ( LastError >= 0 )
  {
    v12 = (_DWORD *)(4 * v11);
    LastError = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6A,
      (__int64)"wil",
      (const char *)(unsigned int)LastError);
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
      v18 = wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
              Name,
              &v20,
              a2);
      LastError = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x126,
          (__int64)"wil",
          (const char *)(unsigned int)v18);
        goto LABEL_20;
      }
    }
    LastError = 0;
LABEL_20:
    v5 = v20;
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x11E,
    (__int64)"wil",
    (const char *)(unsigned int)LastError);
LABEL_21:
  if ( hMutex[0] && !ReleaseMutex(hMutex[0]) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x87B, v16, v17);
    JUMPOUT(0x180003526LL);
  }
LABEL_6:
  if ( v5 && !CloseHandle(v5) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x875, v9, v10);
    __debugbreak();
  }
  return (unsigned int)LastError;
}
