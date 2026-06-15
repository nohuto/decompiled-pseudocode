/*
 * XREFs of ??1?$CInterfaceArray@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@QEAA@XZ @ 0x180091E50
 * Callers:
 *     _CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::dtor$3 @ 0x180093166 (_CMonitorManager--DoHandleDefaultDeviceChanged_--_1_--dtor$3.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@CAXPEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@_K@Z @ 0x180092180 (-CallDestructors@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V.c)
 */

void __fastcall ATL::CInterfaceArray<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>::~CInterfaceArray<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::CallDestructors(
      v2,
      *(_QWORD *)(a1 + 8));
    free(*(void **)a1);
  }
}
