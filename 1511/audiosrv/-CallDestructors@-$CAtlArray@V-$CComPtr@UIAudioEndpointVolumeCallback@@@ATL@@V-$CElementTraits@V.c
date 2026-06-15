/*
 * XREFs of ?CallDestructors@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@CAXPEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@_K@Z @ 0x180092180
 * Callers:
 *     ??1?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x18003AF94 (--1-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V-$CComPtr@UIAu.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x1800707EC (-RemoveAt@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V-$CComP.c)
 *     ??1?$CInterfaceArray@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@QEAA@XZ @ 0x180091E50 (--1-$CInterfaceArray@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@QEAA@XZ.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x180092C48 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

_UNKNOWN **__fastcall ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::CallDestructors(
        __int64 a1,
        unsigned __int64 a2)
{
  _UNKNOWN **result; // rax
  unsigned __int64 i; // rdi
  __int64 v6; // rsi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a2 )
  {
    result = &retaddr;
    for ( i = 0LL; i < a2; ++i )
    {
      v6 = *(_QWORD *)(a1 + 8 * i);
      if ( v6 )
        result = (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*(_QWORD *)(a1 + 8 * i));
    }
  }
  return result;
}
