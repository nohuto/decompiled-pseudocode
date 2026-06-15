/*
 * XREFs of ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140005F50
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002F0C0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ??0CWatchDogTimer@@QEAA@PEBG@Z @ 0x1400029EC (--0CWatchDogTimer@@QEAA@PEBG@Z.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140002A38 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x14000506C (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140005760 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000A5F0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000AB80 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::Initialize(
        CSystemAudioDeviceSharedBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IUnknown *a3,
        int a4)
{
  HRESULT Instance; // edi
  __int64 v9; // rsi
  int v10; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-29h] BYREF
  char v13; // [rsp+40h] [rbp-21h]
  __int64 v14; // [rsp+48h] [rbp-19h] BYREF
  __int64 v15; // [rsp+50h] [rbp-11h]
  __int64 v16; // [rsp+58h] [rbp-9h]
  __int128 v17; // [rsp+60h] [rbp-1h]
  __int64 v18; // [rsp+70h] [rbp+Fh]
  __int64 v19; // [rsp+78h] [rbp+17h]
  __int64 v20; // [rsp+80h] [rbp+1Fh]
  __int64 v21; // [rsp+88h] [rbp+27h]
  __int64 v22; // [rsp+90h] [rbp+2Fh]
  HANDLE Timer; // [rsp+C8h] [rbp+67h] BYREF

  CWatchDogTimer::CWatchDogTimer((CWatchDogTimer *)&Timer, L"CSystemAudioDeviceSharedBase::Initialize");
  if ( g_u32AEWMILogLevel >= 3 )
  {
    v19 = 0LL;
    v14 = 0x900000050LL;
    v18 = 0x2000000000000LL;
    v15 = 0LL;
    v16 = 0LL;
    v17 = AEWMIGUID_PERFORMANCE;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, &v14);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 176);
  v13 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( !a2 || !a3 )
  {
    Instance = -2147024809;
    goto LABEL_15;
  }
  Instance = CoCreateInstance(
               &GUID_add18bf7_ab60_4283_a580_d7544dd255d2,
               0LL,
               0x17u,
               &GUID_42eb6c09_7f95_415f_9f57_900343701309,
               (LPVOID *)this + 38);
  if ( Instance < 0 )
    goto LABEL_15;
  *((_DWORD *)this + 54) = a4;
  if ( *((struct IUnknown **)this + 37) != a3 )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 37, a3);
  v9 = *((_QWORD *)this + 38);
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 33);
  Instance = (*(__int64 (__fastcall **)(__int64, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, char *, _QWORD))(*(_QWORD *)v9 + 24LL))(
               v9,
               a2,
               (char *)this + 8,
               *((unsigned int *)this + 54));
  if ( Instance < 0 )
    goto LABEL_15;
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 82) = *((_DWORD *)a2 + 24);
  v10 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
  *((_DWORD *)this + 79) = v10;
  if ( !v10 )
  {
    Instance = -2147024882;
LABEL_15:
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)this + 200LL))(this);
    goto LABEL_16;
  }
  Instance = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 1);
  if ( Instance < 0 )
    goto LABEL_15;
  if ( *((_DWORD *)this + 82) == 1 )
    CSystemAudioDeviceSharedBase::SetGraphState((__int64)this, 3);
LABEL_16:
  if ( g_u32AEWMILogLevel >= 3 )
  {
    v19 = 0LL;
    v14 = 0xA00000050LL;
    v18 = 0x2000000000000LL;
    v15 = 0LL;
    v16 = 0LL;
    v17 = AEWMIGUID_PERFORMANCE;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, &v14);
  }
  if ( Instance < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_c59105ced4022a196d4cc1b91b2ab5a7_Traceguids,
      (unsigned int)Instance);
  }
  PublishDeviceGraphWnfState();
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  if ( Timer )
    DeleteTimerQueueTimer(0LL, Timer, 0LL);
  return (unsigned int)Instance;
}
