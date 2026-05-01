/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180026BB8
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180022194 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001538 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800029D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180002AEC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-ReleaseMutex@details@wil.c)
 *     ??0SemaphoreValue@details_abi@wil@@QEAA@$$QEAV012@@Z @ 0x180002B18 (--0SemaphoreValue@details_abi@wil@@QEAA@$$QEAV012@@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180002BCC (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180002E7C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ??0?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180003C20 (--0-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x180003C28 (--1-$unique_any_t@V-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@d.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180003D3C (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?create@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEBGKKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180003D90 (-create@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x180003E38 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ??0SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180003E98 (--0SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ??0?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@$$QEAV01@@Z @ 0x180003EF0 (--0-$unique_any_t@V-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@d.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180021DA0 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180028AF0 (__security_check_cookie.c)
 *     memset @ 0x180029C64 (memset.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // rbx
  unsigned __int64 v8; // r15
  __int64 v9; // rdx
  bool *v10; // r9
  int ValueInternal; // eax
  __int64 v12; // rdx
  HANDLE ProcessHeap; // rax
  _QWORD *v15; // rbx
  int v16; // eax
  HANDLE v17; // rax
  void *v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  void *v21[2]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Buffer[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Buffer, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 232, a1);
  Microsoft::WRL::ComPtr<IUnknown>::ComPtr<IUnknown>(&v18);
  v5 = wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
         &v18,
         Buffer);
  v6 = v5;
  if ( v5 >= 0 )
  {
    wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
      &v18,
      v21);
    v7 = 0LL;
    v19 = 0LL;
    v8 = 0LL;
    ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Buffer, v9, &v19, v10);
    v6 = ValueInternal;
    if ( ValueInternal >= 0 )
    {
      v8 = v19;
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
      v7 = (_DWORD *)(4 * v8);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6A,
        (__int64)"wil",
        (const char *)(unsigned int)v6);
    }
    if ( v6 < 0 )
    {
      v12 = 286LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v12,
        (__int64)"wil",
        (const char *)(unsigned int)v6);
      goto LABEL_14;
    }
    if ( v7 )
    {
      *a2 = v7;
      *(_DWORD *)*a2 = *v7 + 1;
LABEL_13:
      v6 = 0;
LABEL_14:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::ReleaseMutex(void *),wistd::integral_constant<unsigned __int64,2>,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::ReleaseMutex(void *),wistd::integral_constant<unsigned __int64,2>,void *,0,std::nullptr_t>>>(v21);
      goto LABEL_15;
    }
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v15 = HeapAlloc(ProcessHeap, 8u, 0xE8uLL);
    if ( v15 )
    {
      wil::details_abi::SemaphoreValue::SemaphoreValue((wil::details_abi::SemaphoreValue *)v20);
      v16 = wil::details_abi::SemaphoreValue::CreateFromPointer(
              (wil::details_abi::SemaphoreValue *)v20,
              (char *)Buffer,
              (unsigned __int64)v15);
      v6 = v16;
      if ( v16 >= 0 )
      {
        *(_DWORD *)v15 = 1;
        wil::unique_any_t<wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>::unique_any_t<wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>(
          v15 + 1,
          &v18);
        wil::details_abi::SemaphoreValue::SemaphoreValue(v15 + 2, v20);
        memset(v15 + 4, 0, 0xC8uLL);
        v15[4] = 0LL;
        wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)(v15 + 5));
        *a2 = v15;
        wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)v20);
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x13D,
          (__int64)"wil",
          (const char *)(unsigned int)v16);
        wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)v20);
        v17 = GetProcessHeap();
        HeapFree(v17, 0, v15);
      }
      if ( v6 >= 0 )
        goto LABEL_13;
    }
    else
    {
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13A, (__int64)"wil", (const char *)0x8007000ELL);
    }
    v12 = 294LL;
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)0x11A, (__int64)"wil", (const char *)(unsigned int)v5);
LABEL_15:
  wil::unique_any_t<wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>(&v18);
  return (unsigned int)v6;
}
