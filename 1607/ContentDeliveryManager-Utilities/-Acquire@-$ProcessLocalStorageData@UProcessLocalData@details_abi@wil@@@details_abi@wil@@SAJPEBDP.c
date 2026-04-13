/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000D17C
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003700 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001648 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002C68 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180002F3C (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800031FC (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?create@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEBGKKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x18000D874 (-create@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x18000D920 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180058F42 (memset_0.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  int v5; // eax
  int v6; // edi
  __int64 v7; // r8
  const char *v8; // r9
  _DWORD *v9; // rbx
  unsigned __int64 v10; // r15
  __int64 v11; // rdx
  bool *v12; // r9
  int ValueInternal; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  const char *v16; // r9
  HANDLE ProcessHeap; // rax
  _WORD *v18; // rax
  _WORD *v19; // rbx
  int v20; // eax
  __int64 v21; // r8
  const char *v22; // r9
  __int64 v23; // r8
  const char *v24; // r9
  HANDLE v25; // rax
  HANDLE v26; // rax
  HANDLE v27; // rax
  HANDLE v28; // rax
  HANDLE hObject; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v31[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
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
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x11B, (__int64)"wil", (const char *)(unsigned int)v5);
    goto LABEL_3;
  }
  wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
    &hObject,
    hMutex);
  v9 = 0LL;
  v32 = 0LL;
  v10 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Buffer, v11, &v32, v12);
  v6 = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v10 = v32;
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x61, (__int64)"wil", (const char *)(unsigned int)ValueInternal);
  }
  if ( v6 >= 0 )
  {
    v9 = (_DWORD *)(4 * v10);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6A, (__int64)"wil", (const char *)(unsigned int)v6);
  }
  if ( v6 < 0 )
  {
    v14 = 287LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v14, (__int64)"wil", (const char *)(unsigned int)v6);
    goto LABEL_17;
  }
  if ( !v9 )
  {
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v18 = HeapAlloc(ProcessHeap, 8u, 0x78uLL);
    v19 = v18;
    if ( v18 )
    {
      *(_OWORD *)v31 = 0LL;
      v20 = wil::details_abi::SemaphoreValue::CreateFromPointer(
              (wil::details_abi::SemaphoreValue *)v31,
              (char *)Buffer,
              (unsigned __int64)v18);
      v6 = v20;
      if ( v20 >= 0 )
      {
        v26 = hObject;
        hObject = 0LL;
        *(_DWORD *)v19 = 1;
        *((_QWORD *)v19 + 1) = v26;
        v27 = v31[0];
        v31[0] = 0LL;
        *((_QWORD *)v19 + 2) = v27;
        v28 = v31[1];
        v31[1] = 0LL;
        *((_QWORD *)v19 + 3) = v28;
        memset_0(v19 + 16, 0, 0x58uLL);
        v19[16] = 88;
        *((_DWORD *)v19 + 9) = 1;
        memset_0(v19 + 20, 0, 0x50uLL);
        v6 = 0;
        *a2 = v19;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13E, (__int64)"wil", (const char *)(unsigned int)v20);
        if ( v31[1] && !CloseHandle(v31[1]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v21, v22);
          __debugbreak();
        }
        if ( v31[0] && !CloseHandle(v31[0]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v23, v24);
          JUMPOUT(0x18000D4ADLL);
        }
        v25 = GetProcessHeap();
        HeapFree(v25, 0, v19);
      }
      if ( v6 >= 0 )
        goto LABEL_16;
    }
    else
    {
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13B, (__int64)"wil", (const char *)0x8007000ELL);
    }
    v14 = 295LL;
    goto LABEL_31;
  }
  *a2 = v9;
  *(_DWORD *)*a2 = *v9 + 1;
LABEL_16:
  v6 = 0;
LABEL_17:
  if ( hMutex[0] && !ReleaseMutex(hMutex[0]) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x629, v15, v16);
    __debugbreak();
  }
LABEL_3:
  if ( hObject && !CloseHandle(hObject) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v7, v8);
    __debugbreak();
  }
  return (unsigned int)v6;
}
