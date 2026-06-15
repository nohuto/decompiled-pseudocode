/*
 * XREFs of ??1?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x18006FBF0
 * Callers:
 *     _CVolumeStrip::CVolumeStrip_::_1_::dtor$0 @ 0x18004CA9E (_CVolumeStrip--CVolumeStrip_--_1_--dtor$0.c)
 *     _CVolumeStrip::_CVolumeStrip_::_1_::dtor$0 @ 0x18006FFB3 (_CVolumeStrip--_CVolumeStrip_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x180034584 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ?RemoveAt@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z @ 0x180034670 (-RemoveAt@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z.c)
 */

void __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::~CLockedList<CMasterVolumeNotificationProcess,1,0>(
        LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
  while ( *(_QWORD *)&lpCriticalSection[1].LockCount )
    ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&lpCriticalSection[1].DebugInfo, 0LL);
  LeaveCriticalSection(lpCriticalSection);
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)&lpCriticalSection[1].SpinCount);
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)&lpCriticalSection[1].DebugInfo);
  DeleteCriticalSection(lpCriticalSection);
}
