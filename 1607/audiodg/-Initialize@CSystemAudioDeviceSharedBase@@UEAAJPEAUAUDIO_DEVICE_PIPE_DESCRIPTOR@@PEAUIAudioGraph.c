/*
 * XREFs of ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400059E0
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002D8E0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x14000364C (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140004BD0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140005348 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140006FA0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012AA0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x1400161B0 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::Initialize(
        CSystemAudioDeviceSharedBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IUnknown *a3,
        int a4)
{
  DWORD DueTime; // edi
  HRESULT Instance; // edi
  CAudioDeviceGraph *v10; // rcx
  struct IAudioGraphCallback *v11; // r8
  __int64 v12; // r9
  __int64 (__fastcall *v13)(CAudioDeviceGraph *__hidden, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, struct IAudioGraphCallback *, unsigned int); // rax
  int v14; // eax
  int v15; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-49h] BYREF
  char v18; // [rsp+50h] [rbp-41h]
  void *phNewTimer[2]; // [rsp+58h] [rbp-39h] BYREF
  DWORD CurrentThreadId; // [rsp+68h] [rbp-29h]
  const wchar_t *v21; // [rsp+70h] [rbp-21h]
  _WORD v22[2]; // [rsp+78h] [rbp-19h] BYREF
  __int16 v23; // [rsp+7Ch] [rbp-15h]
  __int128 v24; // [rsp+90h] [rbp-1h]
  int v25; // [rsp+A4h] [rbp+13h]
  __int64 v26; // [rsp+A8h] [rbp+17h]
  int v27; // [rsp+B0h] [rbp+1Fh]
  __int64 v28; // [rsp+B8h] [rbp+27h]
  __int64 v29; // [rsp+C0h] [rbp+2Fh]

  DueTime = g_AudioDgWatchDogTimerInMs;
  phNewTimer[0] = 0LL;
  phNewTimer[1] = &dword_1400540B0;
  CurrentThreadId = GetCurrentThreadId();
  v21 = L"CSystemAudioDeviceSharedBase::Initialize";
  if ( DueTime >= 0x3E8 )
    CreateTimerQueueTimer(phNewTimer, 0LL, CWatchdogTimer::TimerCallback, phNewTimer, DueTime, 0, 0x20u);
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset_0(v22, 0, 0x40uLL);
    v22[0] = 80;
    v24 = AEWMIGUID_PERFORMANCE;
    v25 = 0x20000;
    v23 = 1033;
    v26 = 0LL;
    v27 = 0;
    v28 = 0LL;
    v29 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v22);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 176);
  v18 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( !a2 || !a3 )
  {
    Instance = -2147024809;
    goto LABEL_28;
  }
  Instance = CoCreateInstance(
               &GUID_add18bf7_ab60_4283_a580_d7544dd255d2,
               0LL,
               0x17u,
               &GUID_dc9818ba_b592_4bda_9b82_9d4dffdbd058,
               (LPVOID *)this + 38);
  if ( Instance < 0 )
    goto LABEL_28;
  *((_DWORD *)this + 54) = a4;
  if ( *((struct IUnknown **)this + 37) != a3 )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 37, a3);
  v10 = (CAudioDeviceGraph *)*((_QWORD *)this + 38);
  v11 = (CSystemAudioDeviceSharedBase *)((char *)this + 8);
  v12 = *((unsigned int *)this + 54);
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 34);
  v13 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, struct IAudioGraphCallback *, unsigned int))(*(_QWORD *)v10 + 24LL);
  v14 = v13 == CAudioDeviceGraph::Initialize ? CAudioDeviceGraph::Initialize(v10, a2, v11, v12) : v13(v10, a2, v11, v12);
  Instance = v14;
  if ( v14 < 0 )
    goto LABEL_28;
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 82) = *((_DWORD *)a2 + 25);
  v15 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
  *((_DWORD *)this + 79) = v15;
  if ( !v15 )
  {
    Instance = -2147024882;
    goto LABEL_28;
  }
  Instance = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 1);
  if ( Instance < 0 )
  {
LABEL_28:
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)this + 200LL))(this);
    goto LABEL_17;
  }
  if ( *((_DWORD *)this + 82) == 1 )
    CSystemAudioDeviceSharedBase::SetGraphState((__int64)this, 3);
LABEL_17:
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset_0(v22, 0, 0x40uLL);
    v25 = 0x20000;
    v24 = AEWMIGUID_PERFORMANCE;
    v22[0] = 80;
    v23 = 1034;
    v26 = 0LL;
    v27 = 0;
    v28 = 0LL;
    v29 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v22);
  }
  if ( Instance < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16LL,
        &WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids,
        (unsigned int)Instance);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::Initialize", 0xB8u, Instance);
  }
  PublishDeviceGraphWnfState();
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  if ( phNewTimer[0] )
    DeleteTimerQueueTimer(0LL, phNewTimer[0], (HANDLE)0xFFFFFFFFFFFFFFFFLL);
  return (unsigned int)Instance;
}
