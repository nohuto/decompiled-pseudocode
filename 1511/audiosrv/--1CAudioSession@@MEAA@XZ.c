/*
 * XREFs of ??1CAudioSession@@MEAA@XZ @ 0x180027698
 * Callers:
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x1800360F4 (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     _CPerStreamVolumeAudioSession::CPerStreamVolumeAudioSession_::_1_::dtor$0 @ 0x18004C094 (_CPerStreamVolumeAudioSession--CPerStreamVolumeAudioSession_--_1_--dtor$0.c)
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x180071794 (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 *     ??_ECAudioSession@@MEAAPEAXI@Z @ 0x180071958 (--_ECAudioSession@@MEAAPEAXI@Z.c)
 *     _CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession_::_1_::dtor$0 @ 0x180079E7D (_CPerEndpointVolumeAudioSession--CPerEndpointVolumeAudioSession_--_1_--dtor$0.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180012550 (-GetStartPosition@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementT.c)
 *     ?RemoveAll@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAXXZ @ 0x180012830 (-RemoveAll@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@P.c)
 *     ?GetNextValue@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAAEAPEAVCGainStage@@AEAPEAU__POSITION@@@Z @ 0x1800128B4 (-GetNextValue@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTrait.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180014328 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??1?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ @ 0x18002FA1C (--1-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x180034584 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800399C4 (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     ??1?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x18003A0FC (--1-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UISessionI.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x1800660B4 (-RemoveAt@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UIS.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qS @ 0x18006BDEC (WPP_SF_qS.c)
 */

void __fastcall CAudioSession::~CAudioSession(CAudioSession *this)
{
  unsigned int v2; // r14d
  unsigned int v3; // r14d
  unsigned int v4; // r14d
  unsigned int v5; // r14d
  __int64 v6; // rdi
  __int64 v7; // rdi
  CRefCountedObject **NextValue; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rbp
  __int64 StartPosition; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)this = &CAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CAudioSession::`vftable'{for `CUnknown'};
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      95,
      (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      (_DWORD)this,
      *((_QWORD *)this + 107));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
  v2 = 0;
  if ( *((_QWORD *)this + 40) )
  {
    v9 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 39) + 8 * v9) + 72LL))(*(_QWORD *)(*((_QWORD *)this + 39) + 8 * v9));
      if ( v9 >= *((_QWORD *)this + 40) )
        ATL::AtlThrowImpl(-2147024809);
      ++v2;
      *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v9) = 0LL;
      v9 = v2;
    }
    while ( (unsigned __int64)v2 < *((_QWORD *)this + 40) );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v3 = 0;
  if ( *((_QWORD *)this + 13) )
  {
    v10 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 12) + 8 * v10) + 72LL))(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * v10));
      if ( v10 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      ++v3;
      *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v10) = 0LL;
      v10 = v3;
    }
    while ( (unsigned __int64)v3 < *((_QWORD *)this + 13) );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v4 = 0;
  if ( *((_QWORD *)this + 22) )
  {
    v11 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 8 * v11) + 72LL))(*(_QWORD *)(*((_QWORD *)this + 21) + 8 * v11));
      if ( v11 >= *((_QWORD *)this + 22) )
        ATL::AtlThrowImpl(-2147024809);
      ++v4;
      *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v11) = 0LL;
      v11 = v4;
    }
    while ( (unsigned __int64)v4 < *((_QWORD *)this + 22) );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v5 = 0;
  if ( *((_QWORD *)this + 31) )
  {
    v12 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 30) + 8 * v12) + 72LL))(*(_QWORD *)(*((_QWORD *)this + 30) + 8 * v12));
      if ( v12 >= *((_QWORD *)this + 31) )
        ATL::AtlThrowImpl(-2147024809);
      ++v5;
      *(_QWORD *)(*((_QWORD *)this + 30) + 8 * v12) = 0LL;
      v12 = v5;
    }
    while ( (unsigned __int64)v5 < *((_QWORD *)this + 31) );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this + 5);
  operator delete(*((void **)this + 116));
  *((_QWORD *)this + 116) = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  StartPosition = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetStartPosition((__int64 *)this + 67);
  while ( StartPosition )
  {
    NextValue = (CRefCountedObject **)ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNextValue(
                                        (__int64)this + 536,
                                        &StartPosition);
    CRefCountedObject::Release(*NextValue);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  v6 = *((_QWORD *)this + 108);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 108));
    *((_QWORD *)this + 108) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 872));
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSession *)((char *)this + 784));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 728));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 624));
  while ( *((_QWORD *)this + 84) )
    ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::RemoveAt(
      (char *)this + 664,
      0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 624));
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((char *)this + 696);
  ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::~CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>((char *)this + 664);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 624));
  v7 = *((_QWORD *)this + 77);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 77));
  ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::RemoveAll((__int64)this + 536);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 416));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 49) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 48) - 24LL));
  ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>((char *)this + 312);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
  ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>((char *)this + 240);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 5);
  ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>((char *)this + 168);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>((char *)this + 96);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *((_QWORD *)this + 4) = &CUnknown::`vftable';
}
