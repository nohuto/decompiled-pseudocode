/*
 * XREFs of ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18001256C
 * Callers:
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x180012038 (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800756B0 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002D8C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x180002FA8 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180009454 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1800096F4 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x180012ECC (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(_QWORD *lpMem)
{
  HANDLE v3; // rbx
  DWORD LastError; // edi
  __int64 v5; // r8
  const char *v6; // r9
  HANDLE v7; // rbx
  int v8; // eax
  void *v9; // rcx
  __int64 v10; // r8
  const char *v11; // r9
  void *v12; // rcx
  __int64 v13; // r8
  const char *v14; // r9
  void *v15; // rcx
  __int64 v16; // r8
  const char *v17; // r9
  HANDLE ProcessHeap; // rax
  __int64 v19; // r8
  const char *v20; // r9
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
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x87B, v5, v6);
        __debugbreak();
      }
      SetLastError(LastError);
    }
    v7 = 0LL;
    hMutex = 0LL;
    if ( wil::details::g_processShutdownInProgress )
      goto LABEL_20;
    v8 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v8 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( v8 )
    {
LABEL_20:
      wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(lpMem + 4));
    }
    else
    {
      wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(lpMem + 4));
      wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)(lpMem + 5));
      v9 = (void *)lpMem[3];
      if ( v9 && !CloseHandle(v9) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x875, v10, v11);
        __debugbreak();
      }
      v12 = (void *)lpMem[2];
      if ( v12 && !CloseHandle(v12) )
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x875, v13, v14);
      v15 = (void *)lpMem[1];
      if ( v15 && !CloseHandle(v15) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x875, v16, v17);
        __debugbreak();
      }
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  else
  {
    v7 = hMutex;
  }
  if ( v7 )
  {
    if ( !ReleaseMutex(v7) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x87B, v19, v20);
      __debugbreak();
    }
  }
}
