/*
 * XREFs of ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140006D20
 * Callers:
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140005348 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140001C70 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140003B70 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140004240 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 *     ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140006054 (-GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegis.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140008170 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ?GetProcessingQuantum@CAudioDeviceGraph@@UEAA_JXZ @ 0x140017310 (-GetProcessingQuantum@CAudioDeviceGraph@@UEAA_JXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::Start(CAudioDeviceGraph *this, struct ISaDeviceCallback *a2)
{
  struct CpuManager **v3; // rbx
  CAudioDeviceGraph *v5; // rcx
  __int64 (__fastcall *v6)(CAudioDeviceGraph *__hidden); // rax
  __int64 ProcessingQuantum; // rax
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(struct CpuManager **, __int64); // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, GraphStreamingResourceManager **); // rcx
  int v13; // eax
  int v14; // esi
  int v15; // eax
  struct DeviceRegistrationToken__ **v16; // r8
  __int64 (__fastcall *v17)(GraphStreamingResourceManager *, struct IAudioDeviceEndpoint *, struct DeviceRegistrationToken__ **); // rax
  int v18; // esi
  GraphStreamingResourceManager *v19; // rcx
  CPipeInstance **Next; // rax
  LARGE_INTEGER v22; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-10h] BYREF
  char v24; // [rsp+38h] [rbp-8h]
  GraphStreamingResourceManager *v25; // [rsp+80h] [rbp+40h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+90h] [rbp+50h] BYREF
  __int64 v27; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*((_DWORD *)this + 56) )
  {
    v18 = -2005139437;
    goto LABEL_33;
  }
  CAudioDeviceGraph::GetStreamingResourceManagerInternal(this, &v25);
  v3 = (struct CpuManager **)v25;
  if ( v25 )
  {
    v5 = (CAudioDeviceGraph *)((char *)this + 16);
    v6 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden))(*((_QWORD *)this + 2) + 56LL);
    if ( v6 == CAudioDeviceGraph::GetProcessingQuantum )
      ProcessingQuantum = CAudioDeviceGraph::GetProcessingQuantum(v5);
    else
      ProcessingQuantum = v6(v5);
    v8 = ProcessingQuantum;
    v9 = (__int64 (__fastcall *)(struct CpuManager **, __int64))*((_QWORD *)*v3 + 9);
    if ( v9 == GraphStreamingResourceManager::AddToCpuManager )
      GraphStreamingResourceManager::AddToCpuManager(v3, v8);
    else
      v9(v3, v8);
  }
  v10 = *((_QWORD *)this + 16);
  v25 = 0LL;
  v11 = *(_QWORD *)(v10 + 24);
  if ( !v11 )
    ATL::AtlThrowImpl(-2147467259);
  v12 = **(__int64 (__fastcall *****)(_QWORD, GUID *, GraphStreamingResourceManager **))(*(_QWORD *)(v11 + 16) + 32LL);
  v13 = (**v12)(v12, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, &v25);
  v14 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        40LL,
        &WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids,
        (unsigned int)v13);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::Start", 0x366u, v14);
  }
  else
  {
    v15 = (**(__int64 (__fastcall ***)(GraphStreamingResourceManager *, GUID *, char *))v25)(
            v25,
            &GUID_8470a266_1068_4032_a9c7_69a3081e7b62,
            (char *)this + 280);
    if ( v15 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          41LL,
          &WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids,
          (unsigned int)v15);
      }
      *((_QWORD *)this + 34) = 0LL;
    }
    else
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      *((LARGE_INTEGER *)this + 34) = PerformanceCount;
    }
    if ( v3 )
    {
      PerformanceCount.QuadPart = 0LL;
      if ( !v25 )
        goto LABEL_20;
      (**(void (__fastcall ***)(GraphStreamingResourceManager *, GUID *, LARGE_INTEGER *))v25)(
        v25,
        &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
        &PerformanceCount);
      if ( PerformanceCount.QuadPart )
      {
        v16 = (struct DeviceRegistrationToken__ **)((char *)this + 376);
        v17 = (__int64 (__fastcall *)(GraphStreamingResourceManager *, struct IAudioDeviceEndpoint *, struct DeviceRegistrationToken__ **))*((_QWORD *)*v3 + 7);
        if ( v17 == GraphStreamingResourceManager::RegisterDevice )
          GraphStreamingResourceManager::RegisterDevice(
            (GraphStreamingResourceManager *)v3,
            (struct IAudioDeviceEndpoint *)PerformanceCount.QuadPart,
            v16);
        else
          v17((GraphStreamingResourceManager *)v3, (struct IAudioDeviceEndpoint *)PerformanceCount.QuadPart, v16);
        if ( PerformanceCount.QuadPart )
          (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)PerformanceCount.QuadPart + 16LL))(PerformanceCount);
      }
    }
  }
  if ( v25 )
    (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v25 + 16LL))(v25);
LABEL_20:
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, struct ISaDeviceCallback *, struct CpuManager **))(**((_QWORD **)this + 15) + 32LL))(
          *((_QWORD *)this + 15),
          &v27,
          a2,
          v3);
  if ( v18 >= 0 )
  {
    v24 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v19 = (GraphStreamingResourceManager *)*((_QWORD *)this + 17);
    v25 = v19;
    if ( v19 )
    {
      while ( 1 )
      {
        Next = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                   (__int64)v19,
                                   (_QWORD **)&v25);
        v18 = CPipeInstance::Start(*Next);
        if ( v18 < 0 )
          break;
        if ( !v25 )
          goto LABEL_24;
      }
      if ( !v24 )
      {
LABEL_26:
        if ( v18 >= 0 )
          goto LABEL_27;
        goto LABEL_33;
      }
    }
    else
    {
LABEL_24:
      if ( !v24 )
        goto LABEL_26;
    }
    LeaveCriticalSection(lpCriticalSection);
    goto LABEL_26;
  }
LABEL_33:
  v22 = *(LARGE_INTEGER *)this;
  *((_QWORD *)this + 34) = 0LL;
  (*(void (__fastcall **)(CAudioDeviceGraph *))(v22.QuadPart + 128))(this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      42LL,
      &WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids,
      (unsigned int)v18);
  }
  AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::Start", 0x39Du, v18);
LABEL_27:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( v3 )
    (*((void (__fastcall **)(struct CpuManager **))*v3 + 2))(v3);
  return (unsigned int)v18;
}
