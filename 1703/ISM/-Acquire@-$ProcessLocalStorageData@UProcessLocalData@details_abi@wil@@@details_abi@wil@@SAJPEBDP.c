/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180004BF4
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003B3C (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001D40 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000324C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180003380 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180003634 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?create@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEBGKKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1800051A4 (-create@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x180005254 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  int v5; // eax
  int v6; // edi
  const char *v7; // r9
  _DWORD *v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // rdx
  bool *v11; // r9
  int ValueInternal; // eax
  __int64 v13; // rdx
  const char *v14; // r9
  HANDLE ProcessHeap; // rax
  _WORD *v16; // rax
  _WORD *v17; // rbx
  int v18; // eax
  const char *v19; // r9
  const char *v20; // r9
  HANDLE v21; // rax
  HANDLE v22; // rax
  HANDLE v23; // rax
  HANDLE v24; // rax
  HANDLE hObject; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v27[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE hMutex[2]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Buffer[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Buffer, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 120, a1);
  hObject = 0LL;
  v5 = wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
         &hObject,
         Buffer);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x11A,
      (__int64)"wil",
      (const char *)(unsigned int)v5);
    goto LABEL_3;
  }
  wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
    &hObject,
    hMutex);
  v8 = 0LL;
  v28 = 0LL;
  v9 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Buffer, v10, &v28, v11);
  v6 = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v9 = v28;
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x61,
      (__int64)"wil",
      (const char *)(unsigned int)ValueInternal);
  }
  if ( v6 >= 0 )
  {
    v8 = (_DWORD *)(4 * v9);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)0x6A, (__int64)"wil", (const char *)(unsigned int)v6);
  }
  if ( v6 < 0 )
  {
    v13 = 286LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)v13, (__int64)"wil", (const char *)(unsigned int)v6);
    goto LABEL_17;
  }
  if ( !v8 )
  {
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v16 = HeapAlloc(ProcessHeap, 8u, 0x78uLL);
    v17 = v16;
    if ( v16 )
    {
      *(_OWORD *)v27 = 0LL;
      v18 = wil::details_abi::SemaphoreValue::CreateFromPointer(
              (wil::details_abi::SemaphoreValue *)v27,
              (char *)Buffer,
              (unsigned __int64)v16);
      v6 = v18;
      if ( v18 >= 0 )
      {
        v22 = hObject;
        hObject = 0LL;
        *(_DWORD *)v17 = 1;
        *((_QWORD *)v17 + 1) = v22;
        v23 = v27[0];
        v27[0] = 0LL;
        *((_QWORD *)v17 + 2) = v23;
        v24 = v27[1];
        v27[1] = 0LL;
        *((_QWORD *)v17 + 3) = v24;
        memset(v17 + 16, 0, 0x58uLL);
        v17[16] = 88;
        *((_DWORD *)v17 + 9) = 1;
        memset(v17 + 20, 0, 0x50uLL);
        v6 = 0;
        *a2 = v17;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x13D,
          (__int64)"wil",
          (const char *)(unsigned int)v18);
        if ( v27[1] && !CloseHandle(v27[1]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(
            retaddr,
            (void *)0x875,
            (__int64)"internal\\sdk\\inc\\wil\\resource.h",
            v19);
          __debugbreak();
        }
        if ( v27[0] && !CloseHandle(v27[0]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(
            retaddr,
            (void *)0x875,
            (__int64)"internal\\sdk\\inc\\wil\\resource.h",
            v20);
          JUMPOUT(0x180004F41LL);
        }
        v21 = GetProcessHeap();
        HeapFree(v21, 0, v17);
      }
      if ( v6 >= 0 )
        goto LABEL_16;
    }
    else
    {
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13A, (__int64)"wil", (const char *)0x8007000ELL);
    }
    v13 = 294LL;
    goto LABEL_31;
  }
  *a2 = v8;
  *(_DWORD *)*a2 = *v8 + 1;
LABEL_16:
  v6 = 0;
LABEL_17:
  if ( hMutex[0] && !ReleaseMutex(hMutex[0]) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x87B,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v14);
    __debugbreak();
  }
LABEL_3:
  if ( hObject && !CloseHandle(hObject) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x875,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v7);
    __debugbreak();
  }
  return (unsigned int)v6;
}
