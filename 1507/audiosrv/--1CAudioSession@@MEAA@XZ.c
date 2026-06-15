/*
 * XREFs of ??1CAudioSession@@MEAA@XZ @ 0x18000FB3C
 * Callers:
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x180013F3C (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     _CPerStreamVolumeAudioSession::CPerStreamVolumeAudioSession_::_1_::dtor$0 @ 0x180046696 (_CPerStreamVolumeAudioSession--CPerStreamVolumeAudioSession_--_1_--dtor$0.c)
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x180076D64 (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 *     ??_ECAudioSession@@MEAAPEAXI@Z @ 0x180076F10 (--_ECAudioSession@@MEAAPEAXI@Z.c)
 *     _CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession_::_1_::dtor$0 @ 0x18007EC5D (_CPerEndpointVolumeAudioSession--CPerEndpointVolumeAudioSession_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ @ 0x180005D34 (--1-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x1800080EC (--1-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UISessionI.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?GetStartPosition@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18000B170 (-GetStartPosition@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementT.c)
 *     ?RemoveAll@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAXXZ @ 0x18000B400 (-RemoveAll@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@P.c)
 *     ?GetNextValue@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAAEAPEAVCGainStage@@AEAPEAU__POSITION@@@Z @ 0x18000B484 (-GetNextValue@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTrait.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18000BB2C (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x18002D17C (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x180067810 (-RemoveAt@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UIS.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qS @ 0x18006D1E0 (WPP_SF_qS.c)
 */

void __fastcall CAudioSession::~CAudioSession(CAudioSession *this)
{
  unsigned int v2; // r14d
  unsigned int v3; // r14d
  __int64 v4; // rdi
  __int64 v5; // rdi
  CRefCountedObject **NextValue; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 StartPosition; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)this = &CAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CAudioSession::`vftable'{for `CUnknown'};
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qS(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      95,
      (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      (_DWORD)this,
      *((_QWORD *)this + 88));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v2 = 0;
  if ( *((_QWORD *)this + 13) )
  {
    v7 = 0LL;
    do
    {
      _mm_lfence();
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 12) + 8 * v7) + 72LL))(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * v7));
      if ( v7 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      ++v2;
      *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v7) = 0LL;
      v7 = v2;
    }
    while ( (unsigned __int64)v2 < *((_QWORD *)this + 13) );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v3 = 0;
  if ( *((_QWORD *)this + 22) )
  {
    v8 = 0LL;
    do
    {
      _mm_lfence();
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 8 * v8) + 72LL))(*(_QWORD *)(*((_QWORD *)this + 21) + 8 * v8));
      if ( v8 >= *((_QWORD *)this + 22) )
        ATL::AtlThrowImpl(-2147024809);
      ++v3;
      *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v8) = 0LL;
      v8 = v3;
    }
    while ( (unsigned __int64)v3 < *((_QWORD *)this + 22) );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  operator delete(*((void **)this + 97));
  *((_QWORD *)this + 97) = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
  StartPosition = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetStartPosition((__int64 *)this + 48);
  while ( StartPosition )
  {
    NextValue = (CRefCountedObject **)ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNextValue(
                                        (__int64)this + 384,
                                        &StartPosition);
    CRefCountedObject::Release(*NextValue);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
  v4 = *((_QWORD *)this + 89);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 89));
    *((_QWORD *)this + 89) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 18);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSession *)((char *)this + 632));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 576));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 472));
  while ( *((_QWORD *)this + 65) )
    ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::RemoveAt(
      (char *)this + 512,
      0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 472));
  ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>((void **)this + 68);
  ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::~CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>((__int64)this + 512);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 472));
  v5 = *((_QWORD *)this + 58);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 58));
  ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::RemoveAll((__int64)this + 384);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 31) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 30) - 24LL));
  ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>((void **)this + 21);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>((void **)this + 12);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *((_QWORD *)this + 4) = &CUnknown::`vftable';
}
