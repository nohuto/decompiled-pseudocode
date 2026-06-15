/*
 * XREFs of ?Add@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAA_KAEBVCAudioSessionNotificationProcess@@@Z @ 0x18007EDF0
 * Callers:
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180030D2C (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x18007EFA0 (-AddInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotif.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@AEAA_N_K@Z @ 0x18007FBBC (-GrowBuffer@-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::Add(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned __int64 v4; // rbp
  _QWORD *v5; // rcx
  __int64 v6; // rdi

  v4 = a1[1];
  if ( v4 >= a1[2]
    && !(unsigned __int8)ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GrowBuffer(
                           a1,
                           v4 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  v5 = (_QWORD *)(*a1 + 8 * v4);
  if ( v5 )
  {
    v6 = *a2;
    *v5 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  ++a1[1];
  return v4;
}
