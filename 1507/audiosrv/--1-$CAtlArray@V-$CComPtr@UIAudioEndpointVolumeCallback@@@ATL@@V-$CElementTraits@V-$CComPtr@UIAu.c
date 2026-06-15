/*
 * XREFs of ??1?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x180094620
 * Callers:
 *     ??1?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAA@XZ @ 0x1800714A4 (--1-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAA@XZ.c)
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x180071768 (--1CVolumeStrip@@MEAA@XZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180071C74 (-ForEachEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCL.c)
 *     _CLockedList_ATL::CComPtr_IAudioEndpointVolumeCallback__1_0_::ForEachEntry_::_1_::dtor$0 @ 0x180071D6F (_CLockedList_ATL--CComPtr_IAudioEndpointVolumeCallback__1_0_--ForEachEntry_--_1_--dtor$0.c)
 *     _CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::dtor$3 @ 0x180095936 (_CMonitorManager--DoHandleDefaultDeviceChanged_--_1_--dtor$3.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@CAXPEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@_K@Z @ 0x180094950 (-CallDestructors@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V.c)
 */

void __fastcall ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::~CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::CallDestructors(v2);
    free(*a1);
  }
}
