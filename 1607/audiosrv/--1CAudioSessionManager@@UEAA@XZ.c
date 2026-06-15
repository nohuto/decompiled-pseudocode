/*
 * XREFs of ??1CAudioSessionManager@@UEAA@XZ @ 0x1800618B4
 * Callers:
 *     ??_GCAudioSessionManager@@UEAAPEAXI@Z @ 0x1800619E8 (--_GCAudioSessionManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x180028B58 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ??1?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800508D0 (--1-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotificationPr.c)
 *     ?RemoveAll@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXXZ @ 0x180062ED0 (-RemoveAll@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?RemoveAt@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180062F68 (-RemoveAt@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotific.c)
 */

void __fastcall CAudioSessionManager::~CAudioSessionManager(CAudioSessionManager *this)
{
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 30) - 24LL));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  while ( *((_QWORD *)this + 23) )
    ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::RemoveAt(
      (char *)this + 176,
      0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)this + 26);
  ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::~CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>((void **)this + 22);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAll((char *)this + 64);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
