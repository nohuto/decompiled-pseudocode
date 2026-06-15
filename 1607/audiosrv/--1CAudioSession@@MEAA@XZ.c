/*
 * XREFs of ??1CAudioSession@@MEAA@XZ @ 0x180014954
 * Callers:
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x1800028E0 (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x180009038 (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     _CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession_::_1_::dtor$0 @ 0x180039A4E (_CPerEndpointVolumeAudioSession--CPerEndpointVolumeAudioSession_--_1_--dtor$0.c)
 *     _CPerStreamVolumeAudioSession::CPerStreamVolumeAudioSession_::_1_::dtor$0 @ 0x180039D20 (_CPerStreamVolumeAudioSession--CPerStreamVolumeAudioSession_--_1_--dtor$0.c)
 *     ??_ECAudioSession@@MEAAPEAXI@Z @ 0x18005A444 (--_ECAudioSession@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800279B0 (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x180028B58 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x18002998C (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 *     ??1?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x180029BD4 (--1-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UISessionI.c)
 *     ?GetStartPosition@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18002C2A4 (-GetStartPosition@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementT.c)
 *     ?RemoveAll@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAXXZ @ 0x18002C4D8 (-RemoveAll@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@P.c)
 *     ?GetNextValue@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAAEAPEAVCGainStage@@AEAPEAU__POSITION@@@Z @ 0x18002C56C (-GetNextValue@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTrait.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x180050818 (-RemoveAt@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UIS.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qS @ 0x180055818 (WPP_SF_qS.c)
 */

void __fastcall CAudioSession::~CAudioSession(CAudioSession *this)
{
  unsigned int v2; // esi
  unsigned int v3; // esi
  unsigned int v4; // esi
  unsigned int v5; // esi
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  CRefCountedObject **NextValue; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-50h] BYREF
  char v24; // [rsp+38h] [rbp-48h]
  LPCRITICAL_SECTION v25; // [rsp+40h] [rbp-40h] BYREF
  char v26; // [rsp+48h] [rbp-38h]
  LPCRITICAL_SECTION v27; // [rsp+50h] [rbp-30h] BYREF
  char v28; // [rsp+58h] [rbp-28h]
  LPCRITICAL_SECTION v29; // [rsp+60h] [rbp-20h] BYREF
  char v30; // [rsp+68h] [rbp-18h]
  LPCRITICAL_SECTION v31; // [rsp+70h] [rbp-10h] BYREF
  char v32; // [rsp+78h] [rbp-8h]
  __int64 StartPosition; // [rsp+B0h] [rbp+30h] BYREF

  *(_QWORD *)this = &CAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CAudioSession::`vftable'{for `CUnknown'};
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      62,
      (unsigned int)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      (_DWORD)this,
      *((_QWORD *)this + 107));
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 272);
  v24 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v2 = 0;
  if ( *((_QWORD *)this + 40) )
  {
    v15 = 0LL;
    do
    {
      _mm_lfence();
      v16 = *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v15);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 72LL))(v16);
      if ( v15 >= *((_QWORD *)this + 40) )
        ATL::AtlThrowImpl(-2147024809);
      ++v2;
      *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v15) = 0LL;
      v15 = v2;
    }
    while ( (unsigned __int64)v2 < *((_QWORD *)this + 40) );
  }
  if ( v24 )
    LeaveCriticalSection(lpCriticalSection);
  v26 = 0;
  v25 = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v25);
  v3 = 0;
  if ( *((_QWORD *)this + 13) )
  {
    v17 = 0LL;
    do
    {
      _mm_lfence();
      v18 = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v17);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 72LL))(v18);
      if ( v17 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      ++v3;
      *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v17) = 0LL;
      v17 = v3;
    }
    while ( (unsigned __int64)v3 < *((_QWORD *)this + 13) );
  }
  if ( v26 )
    LeaveCriticalSection(v25);
  v28 = 0;
  v27 = (LPCRITICAL_SECTION)((char *)this + 128);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v27);
  v4 = 0;
  if ( *((_QWORD *)this + 22) )
  {
    v19 = 0LL;
    do
    {
      _mm_lfence();
      v20 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v19);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 72LL))(v20);
      if ( v19 >= *((_QWORD *)this + 22) )
        ATL::AtlThrowImpl(-2147024809);
      ++v4;
      *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v19) = 0LL;
      v19 = v4;
    }
    while ( (unsigned __int64)v4 < *((_QWORD *)this + 22) );
  }
  if ( v28 )
    LeaveCriticalSection(v27);
  v30 = 0;
  v29 = (LPCRITICAL_SECTION)((char *)this + 200);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v29);
  v5 = 0;
  if ( *((_QWORD *)this + 31) )
  {
    v21 = 0LL;
    do
    {
      _mm_lfence();
      v22 = *(_QWORD *)(*((_QWORD *)this + 30) + 8 * v21);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 72LL))(v22);
      if ( v21 >= *((_QWORD *)this + 31) )
        ATL::AtlThrowImpl(-2147024809);
      ++v5;
      *(_QWORD *)(*((_QWORD *)this + 30) + 8 * v21) = 0LL;
      v21 = v5;
    }
    while ( (unsigned __int64)v5 < *((_QWORD *)this + 31) );
  }
  if ( v30 )
    LeaveCriticalSection(v29);
  v6 = (void *)*((_QWORD *)this + 124);
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v6);
  *((_QWORD *)this + 124) = 0LL;
  v31 = (LPCRITICAL_SECTION)((char *)this + 496);
  v32 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v31);
  StartPosition = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetStartPosition((char *)this + 536);
  while ( StartPosition )
  {
    NextValue = (CRefCountedObject **)ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNextValue(
                                        (char *)this + 536,
                                        &StartPosition);
    CRefCountedObject::Release(*NextValue);
  }
  if ( v32 )
    LeaveCriticalSection(v31);
  v9 = *((_QWORD *)this + 108);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 108) = 0LL;
  }
  *((_QWORD *)this + 116) = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry((CAudioSession *)((char *)this + 928));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 872));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 107) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 103) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 100) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 99) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 98) - 24LL));
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
  v10 = *((_QWORD *)this + 77);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::RemoveAll((char *)this + 536);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 416));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 49) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 48) - 24LL));
  v11 = (void *)*((_QWORD *)this + 39);
  if ( v11 )
    free(v11);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
  v12 = (void *)*((_QWORD *)this + 30);
  if ( v12 )
    free(v12);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 5);
  v13 = (void *)*((_QWORD *)this + 21);
  if ( v13 )
    free(v13);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v14 = (void *)*((_QWORD *)this + 12);
  if ( v14 )
    free(v14);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *((_QWORD *)this + 4) = &CUnknown::`vftable';
}
