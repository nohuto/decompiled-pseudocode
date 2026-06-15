/*
 * XREFs of ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x180034584
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x180027698 (--1CAudioSession@@MEAA@XZ.c)
 *     ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18003AFB8 (-ForEachEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     _CLockedList_CMasterVolumeNotificationProcess_1_0_::ForEachEntry_::_1_::dtor$0 @ 0x18004C4E0 (_CLockedList_CMasterVolumeNotificationProcess_1_0_--ForEachEntry_--_1_--dtor$0.c)
 *     ??1?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAA@XZ @ 0x18006FB9C (--1-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAA@XZ.c)
 *     ??1?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x18006FBF0 (--1-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ.c)
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x18006FE60 (--1CVolumeStrip@@MEAA@XZ.c)
 *     ??1CAudioSessionManager@@UEAA@XZ @ 0x180079E9C (--1CAudioSessionManager@@UEAA@XZ.c)
 *     ??1CDuckingManager@@UEAA@XZ @ 0x1800A15F8 (--1CDuckingManager@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    free(v1);
}
