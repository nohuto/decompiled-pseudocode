/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000CC6C
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4ServiceReportingKind@23@_K@Z @ 0x1800085B8 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4ServiceReportingKind@23@_K@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001648 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002C68 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180002F3C (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800031FC (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180008230 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?create@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEBGKKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x18000D874 (-create@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x18000D920 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180058F42 (memset_0.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
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
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  int v20; // eax
  __int64 v21; // r8
  const char *v22; // r9
  __int64 v23; // r8
  const char *v24; // r9
  HANDLE v25; // rax
  HANDLE v26; // rax
  HANDLE hObject; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE v30[2]; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE hMutex[2]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Buffer[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Buffer, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 232, a1);
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
  v29 = 0LL;
  v10 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Buffer, v11, &v29, v12);
  v6 = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v10 = v29;
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
    v18 = HeapAlloc(ProcessHeap, 8u, 0xE8uLL);
    v19 = v18;
    if ( v18 )
    {
      *(_OWORD *)v30 = 0LL;
      v20 = wil::details_abi::SemaphoreValue::CreateFromPointer(
              (wil::details_abi::SemaphoreValue *)v30,
              (char *)Buffer,
              (unsigned __int64)v18);
      v6 = v20;
      if ( v20 >= 0 )
      {
        v26 = hObject;
        hObject = 0LL;
        *(_DWORD *)v19 = 1;
        v19[1] = v26;
        v19[2] = v30[0];
        v19[3] = v30[1];
        memset_0(v19 + 4, 0, 0xC8uLL);
        v19[4] = 0LL;
        wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)(v19 + 5));
        v6 = 0;
        *a2 = v19;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13E, (__int64)"wil", (const char *)(unsigned int)v20);
        if ( v30[1] && !CloseHandle(v30[1]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v21, v22);
          __debugbreak();
        }
        if ( v30[0] && !CloseHandle(v30[0]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v23, v24);
          JUMPOUT(0x18000CF83LL);
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
