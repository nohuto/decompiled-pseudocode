/*
 * XREFs of ??1CDuckingManager@@UEAA@XZ @ 0x1800A15F8
 * Callers:
 *     ??_ECDuckingManager@@UEAAPEAXI@Z @ 0x1800A1820 (--_ECDuckingManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x180034584 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180034B00 (-RemoveAt@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x180065AC4 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180065DF8 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ??A?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAAEAVCAudioSessionNotificationProcess@@_K@Z @ 0x18006637C (--A-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotificationPr.c)
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x180066A4C (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     ??_GCActiveAudioSession@@QEAAPEAXI@Z @ 0x180066D50 (--_GCActiveAudioSession@@QEAAPEAXI@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ??1?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA@XZ @ 0x1800A15C8 (--1-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA@.c)
 *     ??_GCDuckWorkItem@@QEAAPEAXI@Z @ 0x1800A17E8 (--_GCDuckWorkItem@@QEAAPEAXI@Z.c)
 */

void __fastcall CDuckingManager::~CDuckingManager(CDuckingManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r14
  unsigned int v3; // ebp
  unsigned __int64 v4; // rdi
  const wchar_t **v5; // r9
  CActiveAudioSession *v6; // rcx
  const wchar_t **v7; // rax
  unsigned int v8; // edx
  CDuckWorkItem *v9; // rdi
  void *v10; // rcx

  *((_DWORD *)this + 78) = 1;
  *(_QWORD *)this = &CDuckingManager::`vftable'{for `CUnknown'};
  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  *((_QWORD *)this + 2) = &CDuckingManager::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 3) = &CDuckingManager::`vftable'{for `IAudioDuckingManager'};
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = 0;
  if ( *((_QWORD *)this + 10) )
  {
    v4 = 0LL;
    do
    {
      v5 = *(const wchar_t ***)ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::operator[](
                                 (_QWORD *)this + 9,
                                 v4);
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xBu,
          (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
          *v5);
      }
      v6 = *(CActiveAudioSession **)ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::operator[](
                                      (_QWORD *)this + 9,
                                      v4);
      if ( v6 )
        CActiveAudioSession::`scalar deleting destructor'(v6);
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(
        (_QWORD *)this + 9,
        v4);
      v4 = ++v3;
    }
    while ( (unsigned __int64)v3 < *((_QWORD *)this + 10) );
  }
  LeaveCriticalSection(v1);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 208));
  while ( *((_QWORD *)this + 33) )
  {
    v7 = (const wchar_t **)ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((__int64)this + 248);
    v9 = (CDuckWorkItem *)v7;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xCu,
        (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
        *v7);
    }
    if ( v9 )
      CDuckWorkItem::`scalar deleting destructor'(v9, v8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 208));
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((__int64)this + 248);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 208));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  while ( *((_QWORD *)this + 19) )
    ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::RemoveAt((_QWORD *)this + 18, 0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)this + 22);
  ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::~CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>((__int64)this + 144);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v10 = (void *)*((_QWORD *)this + 9);
  if ( v10 )
    free(v10);
  DeleteCriticalSection(v1);
  *(_QWORD *)this = &CUnknown::`vftable';
}
