/*
 * XREFs of ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18003AF0C
 * Callers:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x1800435B0 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180001AC4 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??1?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x18003AF94 (--1-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V-$CComPtr@UIAu.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??A?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAAEAVCAudioSessionNotificationProcess@@_K@Z @ 0x18006637C (--A-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotificationPr.c)
 *     ?Add@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAA_KAEBV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@@Z @ 0x1800700D8 (-Add@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V-$CComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, __int64 *))
{
  void (__fastcall ***v2)(_QWORD, __int64 *); // r14
  LPCRITICAL_SECTION v3; // rsi
  unsigned int v4; // edi
  unsigned int i; // ebx
  __int64 v7; // rax
  __int64 *v8; // rax
  ATL::CAtlException *v9; // [rsp+28h] [rbp-60h] BYREF
  ATL::CAtlException *v10; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-48h]
  __int64 v13; // [rsp+48h] [rbp-40h]
  int v14; // [rsp+50h] [rbp-38h]
  __int64 v20; // [rsp+A0h] [rbp+18h] BYREF

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; ; ++i )
  {
    LODWORD(v20) = i;
    if ( (unsigned __int64)i >= *(_QWORD *)&v3[1].LockCount )
      break;
    try
    {
      v7 = ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::operator[](
             &v3[1],
             i);
      ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::Add(
        &v11,
        v7);
    }
    catch ( ATL::CAtlException *v9 )
    {
      if ( *(_DWORD *)v9 == -1073741571 )
        _resetstkoflw();
      v4 = 0;
      v3 = lpCriticalSection;
      v2 = a2;
      i = v20;
      continue;
    }
  }
  LeaveCriticalSection(v3);
  while ( v4 < v12 )
  {
    try
    {
      v8 = (__int64 *)ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::operator[](
                        &v11,
                        v4);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v20, *v8);
      (**v2)(v2, &v20);
    }
    catch ( ATL::CAtlException *v10 )
    {
      if ( *(_DWORD *)v10 == -1073741571 )
        _resetstkoflw();
      v2 = a2;
    }
    ++v4;
  }
  ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::~CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>(&v11);
  return 0LL;
}
