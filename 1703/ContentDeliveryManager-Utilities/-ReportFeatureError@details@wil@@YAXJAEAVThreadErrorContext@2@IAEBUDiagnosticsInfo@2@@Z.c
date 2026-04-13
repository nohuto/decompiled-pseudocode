/*
 * XREFs of ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000AB88
 * Callers:
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000B520 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18000D410 (-LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU-$IAsyncOperation@_.c)
 *     ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000DD00 (-LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800681D4 (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 * Callees:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x1800035AC (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800037E8 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?GetLastError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@J@Z @ 0x180003948 (-GetLastError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@J@Z.c)
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18000A2B8 (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 */

void __fastcall wil::details::ReportFeatureError(
        unsigned __int64 this,
        wil::ThreadErrorContext *a2,
        struct wil::ThreadErrorContext *a3,
        const struct wil::FailureInfo *a4)
{
  int v6; // esi
  char LastError; // al
  DWORD CurrentThreadId; // eax
  wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  unsigned int v10[12]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v11; // [rsp+50h] [rbp-68h]
  int v12; // [rsp+58h] [rbp-60h]
  __int64 v13; // [rsp+A0h] [rbp-18h]

  v6 = this;
  if ( *(_QWORD *)a2 )
    LastError = wil::ThreadErrorContext::GetLastError(a2, (struct wil::FailureInfo *)v10, this);
  else
    LastError = 0;
  if ( !LastError )
  {
    memset_0(v10, 0, 0x90uLL);
    v12 = *((unsigned __int16 *)a4 + 12);
    v11 = *((_QWORD *)a4 + 1);
    v13 = *(_QWORD *)a4;
    v10[1] = v6;
    CurrentThreadId = GetCurrentThreadId();
    this = (unsigned int)`wil::SetLastError'::`2'::lastThread;
    if ( `wil::SetLastError'::`2'::lastThread != CurrentThreadId )
    {
      this = (unsigned int)_InterlockedIncrement(&`wil::SetLastError'::`5'::depth);
      if ( (int)this < 4 )
      {
        `wil::SetLastError'::`2'::lastThread = CurrentThreadId;
        ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(0LL);
        if ( ThreadLocalDataCache )
          wil::details_abi::ThreadLocalData::SetLastError(ThreadLocalDataCache, (const struct wil::FailureInfo *)v10);
        `wil::SetLastError'::`2'::lastThread = 0;
      }
      _InterlockedDecrement(&`wil::SetLastError'::`5'::depth);
    }
    if ( *(_QWORD *)a2 )
      wil::ThreadErrorContext::GetLastError(a2, (struct wil::FailureInfo *)v10, v6);
  }
  wil::details::RecordFeatureError((wil::details *)this, (__int64)v10, a4, (const struct DiagnosticsInfo *)a4);
}
