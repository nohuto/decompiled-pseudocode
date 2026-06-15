/*
 * XREFs of ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180003424
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x1800262D0 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002770 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??_G?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180003588 (--_G-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x18000391C (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(_QWORD *lpMem)
{
  void *v3; // rbx
  DWORD LastError; // esi
  __int64 v5; // r8
  const char *v6; // r9
  void *v7; // rbx
  DWORD v8; // esi
  __int64 v9; // r8
  const char *v10; // r9
  HANDLE v11; // rbx
  DWORD v12; // esi
  __int64 v13; // r8
  const char *v14; // r9
  HANDLE v15; // rbx
  int v16; // eax
  HANDLE ProcessHeap; // rax
  __int64 v18; // r8
  const char *v19; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE hMutex; // [rsp+58h] [rbp+10h] BYREF

  wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
    lpMem + 1,
    &hMutex);
  if ( (*(_DWORD *)lpMem)-- == 1 )
  {
    v3 = (void *)lpMem[2];
    if ( v3 )
    {
      LastError = GetLastError();
      if ( !CloseHandle(v3) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v5, v6);
        __debugbreak();
      }
      SetLastError(LastError);
    }
    lpMem[2] = 0LL;
    v7 = (void *)lpMem[3];
    if ( v7 )
    {
      v8 = GetLastError();
      if ( !CloseHandle(v7) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v9, v10);
        __debugbreak();
      }
      SetLastError(v8);
    }
    lpMem[3] = 0LL;
    v11 = hMutex;
    if ( hMutex )
    {
      v12 = GetLastError();
      if ( !ReleaseMutex(v11) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x629, v13, v14);
        __debugbreak();
      }
      SetLastError(v12);
    }
    v15 = 0LL;
    hMutex = 0LL;
    if ( !wil::details::g_processShutdownInProgress )
    {
      v16 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
      if ( wil::details::g_pfnRtlDllShutdownInProgress )
        v16 = wil::details::g_pfnRtlDllShutdownInProgress();
      if ( !v16 )
      {
        wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::`scalar deleting destructor'(lpMem);
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
      }
    }
  }
  else
  {
    v15 = hMutex;
  }
  if ( v15 )
  {
    if ( !ReleaseMutex(v15) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x629, v18, v19);
      __debugbreak();
    }
  }
}
