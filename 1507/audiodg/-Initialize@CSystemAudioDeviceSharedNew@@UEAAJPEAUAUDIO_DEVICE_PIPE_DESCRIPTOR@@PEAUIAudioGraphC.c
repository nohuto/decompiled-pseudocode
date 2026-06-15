/*
 * XREFs of ?Initialize@CSystemAudioDeviceSharedNew@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000E690
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D880 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FD30 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140010960 (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140010F40 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedNew::Initialize(
        CSystemAudioDeviceSharedNew *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IUnknown *a3,
        int a4)
{
  HRESULT Instance; // esi
  CAudioDeviceGraph *v9; // rsi
  unsigned int v10; // r15d
  __int64 (__fastcall *v11)(CAudioDeviceGraph *__hidden, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, struct IAudioGraphCallback *, unsigned int); // r12
  int v12; // eax
  int v13; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-29h] BYREF
  char v16; // [rsp+50h] [rbp-21h]
  _WORD v17[2]; // [rsp+58h] [rbp-19h] BYREF
  char v18; // [rsp+5Ch] [rbp-15h]
  __int128 v19; // [rsp+70h] [rbp-1h]
  int v20; // [rsp+84h] [rbp+13h]
  __int64 v21; // [rsp+88h] [rbp+17h]
  int v22; // [rsp+90h] [rbp+1Fh]
  __int64 v23; // [rsp+98h] [rbp+27h]
  __int64 v24; // [rsp+A0h] [rbp+2Fh]
  void *phNewTimer; // [rsp+D8h] [rbp+67h] BYREF

  phNewTimer = 0LL;
  if ( g_AudioDgWatchDogTimerInMs >= 0x3E8 )
    CreateTimerQueueTimer(
      &phNewTimer,
      0LL,
      CWatchDogTimer::TimerCallback,
      L"CSystemAudioDeviceSharedNew::Initialize",
      g_AudioDgWatchDogTimerInMs,
      0,
      0x20u);
  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(v17, 0, 0x40uLL);
    v17[0] = 80;
    v19 = AEWMIGUID_PERFORMANCE;
    v20 = 0x20000;
    v18 = 9;
    v21 = 0LL;
    v22 = 0;
    v23 = 0LL;
    v24 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v17);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 176);
  v16 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( a2 && a3 )
  {
    Instance = CoCreateInstance(
                 &GUID_add18bf7_ab60_4283_a580_d7544dd255d2,
                 0LL,
                 0x17u,
                 &GUID_e2bd719f_11ad_4d4d_b5cb_e1b102141726,
                 (LPVOID *)this + 45);
    if ( Instance >= 0 )
    {
      *((_DWORD *)this + 54) = a4;
      if ( *((struct IUnknown **)this + 44) != a3 )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 44, a3);
      v9 = (CAudioDeviceGraph *)*((_QWORD *)this + 45);
      v10 = *((_DWORD *)this + 54);
      *((_DWORD *)this + 58) = *((_DWORD *)a2 + 31);
      v11 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, struct IAudioGraphCallback *, unsigned int))(*(_QWORD *)v9 + 24LL);
      v12 = v11 == CAudioDeviceGraph::Initialize
          ? CAudioDeviceGraph::Initialize(v9, a2, (CSystemAudioDeviceSharedNew *)((char *)this + 8), v10)
          : v11(v9, a2, (CSystemAudioDeviceSharedNew *)((char *)this + 8), v10);
      Instance = v12;
      if ( v12 >= 0 )
      {
        *((_DWORD *)this + 6) = *((_DWORD *)a2 + 16);
        *((_DWORD *)this + 96) = *((_DWORD *)a2 + 22);
        v13 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
        *((_DWORD *)this + 93) = v13;
        if ( v13 )
        {
          Instance = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 1);
          if ( Instance >= 0 )
            goto LABEL_15;
        }
        else
        {
          Instance = -2147024882;
        }
      }
    }
  }
  else
  {
    Instance = -2147024809;
  }
  (*(void (__fastcall **)(CSystemAudioDeviceSharedNew *))(*(_QWORD *)this + 184LL))(this);
LABEL_15:
  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(v17, 0, 0x40uLL);
    v20 = 0x20000;
    v19 = AEWMIGUID_PERFORMANCE;
    v17[0] = 80;
    v18 = 10;
    v21 = 0LL;
    v22 = 0;
    v23 = 0LL;
    v24 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v17);
  }
  if ( Instance < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      16LL,
      &WPP_c0a199d1e000f5a39bc1451c73891527_Traceguids,
      (unsigned int)Instance);
  }
  PublishDeviceGraphWnfState();
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  if ( phNewTimer )
    DeleteTimerQueueTimer(0LL, phNewTimer, 0LL);
  return (unsigned int)Instance;
}
