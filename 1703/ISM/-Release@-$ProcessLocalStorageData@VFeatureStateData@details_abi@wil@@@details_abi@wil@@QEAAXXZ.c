/*
 * XREFs of ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800432E8
 * Callers:
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x180042DE4 (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800A3E00 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000324C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x1800032DC (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x180005254 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18003F378 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18003F4AC (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(HANDLE *lpMem)
{
  HANDLE v3; // rbx
  DWORD LastError; // edi
  const char *v5; // r9
  HANDLE v6; // rbx
  int v7; // eax
  HANDLE v8; // rcx
  const char *v9; // r9
  HANDLE v10; // rcx
  const char *v11; // r9
  HANDLE v12; // rcx
  const char *v13; // r9
  HANDLE ProcessHeap; // rax
  const char *v15; // r9
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  HANDLE hMutex; // [rsp+80h] [rbp+18h] BYREF

  wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
    lpMem + 1,
    &hMutex);
  if ( (*(_DWORD *)lpMem)-- == 1 )
  {
    wil::details_abi::SemaphoreValue::Destroy((wil::details_abi::SemaphoreValue *)(lpMem + 2));
    v3 = hMutex;
    if ( hMutex )
    {
      LastError = GetLastError();
      if ( !ReleaseMutex(v3) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x87B,
          (__int64)"internal\\sdk\\inc\\wil\\resource.h",
          v5);
        __debugbreak();
      }
      SetLastError(LastError);
    }
    v6 = 0LL;
    hMutex = 0LL;
    if ( wil::details::g_processShutdownInProgress )
      goto LABEL_20;
    v7 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v7 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( v7 )
    {
LABEL_20:
      wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(lpMem + 4));
    }
    else
    {
      wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(lpMem + 4));
      wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)(lpMem + 5));
      v8 = lpMem[3];
      if ( v8 && !CloseHandle(v8) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x875,
          (__int64)"internal\\sdk\\inc\\wil\\resource.h",
          v9);
        __debugbreak();
      }
      v10 = lpMem[2];
      if ( v10 && !CloseHandle(v10) )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x875,
          (__int64)"internal\\sdk\\inc\\wil\\resource.h",
          v11);
      v12 = lpMem[1];
      if ( v12 && !CloseHandle(v12) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x875,
          (__int64)"internal\\sdk\\inc\\wil\\resource.h",
          v13);
        __debugbreak();
      }
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  else
  {
    v6 = hMutex;
  }
  if ( v6 )
  {
    if ( !ReleaseMutex(v6) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x87B,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v15);
      __debugbreak();
    }
  }
}
