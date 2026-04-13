/*
 * XREFs of ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800037E8
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180003B50 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000AB88 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000B520 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18000D410 (-LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU-$IAsyncOperation@_.c)
 *     ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000DD00 (-LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800681D4 (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 * Callees:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180012750 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 */

struct wil::details_abi::ThreadLocalData *__fastcall wil::details_abi::GetThreadLocalDataCache(wil::details_abi *this)
{
  __int64 v1; // rdi
  char v2; // r14
  signed __int64 i; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdi
  DWORD CurrentThreadId; // ebp
  unsigned __int64 v8; // rsi
  HANDLE ProcessHeap; // rax
  void *v10; // rax
  signed __int64 v11; // rax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = wil::details_abi::g_pProcessLocalData;
  v2 = (char)this;
  i = 0LL;
  if ( wil::details_abi::g_pProcessLocalData )
  {
    if ( !*(_QWORD *)(wil::details_abi::g_pProcessLocalData + 8) )
    {
      v4 = *(_QWORD *)wil::details_abi::g_pProcessLocalData;
      v13 = 0LL;
      if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(v4, &v13) >= 0
        && !*(_QWORD *)(v1 + 8) )
      {
        *(_QWORD *)(v1 + 8) = v13;
      }
    }
    v5 = *(_QWORD *)(v1 + 8);
    v6 = v5 ? v5 + 32 : 0LL;
    if ( v6 )
    {
      CurrentThreadId = GetCurrentThreadId();
      v8 = CurrentThreadId % 0xAuLL;
      for ( i = *(_QWORD *)(v6 + 8 * v8 + 8); i; i = *(_QWORD *)(i + 48) )
      {
        if ( *(_DWORD *)(i + 40) == CurrentThreadId )
          goto LABEL_20;
      }
      if ( v2
        && (ProcessHeap = GetProcessHeap(), v10 = HeapAlloc(ProcessHeap, 0, 0x38uLL), (i = (signed __int64)v10) != 0) )
      {
        memset_0(v10, 0, 0x28uLL);
        *(_WORD *)i = 40;
        *(_DWORD *)(i + 4) = 0;
        *(_QWORD *)(i + 8) = 0LL;
        *(_DWORD *)(i + 16) = 0;
        *(_QWORD *)(i + 24) = 0LL;
        *(_DWORD *)(i + 32) = 0;
        *(_DWORD *)(i + 40) = CurrentThreadId;
        *(_QWORD *)(i + 48) = 0LL;
        _m_prefetchw((const void *)(v6 + 8 * v8 + 8));
        do
        {
          v11 = *(_QWORD *)(v6 + 8 * v8 + 8);
          *(_QWORD *)(i + 48) = v11;
        }
        while ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 8 * v8 + 8), i, v11) );
      }
      else
      {
        i = 0LL;
      }
LABEL_20:
      if ( i && !*(_QWORD *)(i + 8) )
        *(_QWORD *)(i + 8) = v6 + 4;
    }
  }
  return (struct wil::details_abi::ThreadLocalData *)i;
}
