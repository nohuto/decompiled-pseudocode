/*
 * XREFs of ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x1400076A0
 * Callers:
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140005760 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140004C24 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140006754 (-GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegis.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140009220 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140009860 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140009FB0 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x14000C850 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ?GetProcessingQuantum@CAudioDeviceGraph@@UEAA_JXZ @ 0x140017CF0 (-GetProcessingQuantum@CAudioDeviceGraph@@UEAA_JXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::Start(CAudioDeviceGraph *this, struct ISaDeviceCallback *a2)
{
  GraphStreamingResourceManager *v3; // rdi
  __int64 (__fastcall *v5)(CAudioDeviceGraph *__hidden); // r14
  __int64 ProcessingQuantum; // rax
  __int64 (__fastcall *v7)(GraphStreamingResourceManager *__hidden, __int64); // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  int (*v12)(GraphStreamingResourceManager *__hidden, struct IAudioDeviceEndpoint *, struct DeviceRegistrationToken__ **); // r14
  __int64 (__fastcall *v13)(void *); // r14
  int v14; // r14d
  GraphStreamingResourceManager *v15; // rcx
  CPipeInstance **Next; // rax
  LARGE_INTEGER v18; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v20; // [rsp+28h] [rbp-8h]
  GraphStreamingResourceManager *v21; // [rsp+70h] [rbp+40h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+50h] BYREF
  __int64 v23; // [rsp+88h] [rbp+58h] BYREF

  v23 = 0LL;
  v3 = 0LL;
  v21 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*((_DWORD *)this + 56) )
  {
    v14 = -2005139437;
    goto LABEL_33;
  }
  CAudioDeviceGraph::GetStreamingResourceManagerInternal(this, &v21);
  v3 = v21;
  if ( v21 )
  {
    v5 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden))(*((_QWORD *)this + 2) + 56LL);
    if ( v5 == CAudioDeviceGraph::GetProcessingQuantum )
      ProcessingQuantum = CAudioDeviceGraph::GetProcessingQuantum((CAudioDeviceGraph *)((char *)this + 16));
    else
      ProcessingQuantum = v5((CAudioDeviceGraph *)((char *)this + 16));
    v7 = *(__int64 (__fastcall **)(GraphStreamingResourceManager *__hidden, __int64))(*(_QWORD *)v3 + 72LL);
    if ( v7 == GraphStreamingResourceManager::AddToCpuManager )
      GraphStreamingResourceManager::AddToCpuManager(v3, ProcessingQuantum);
    else
      v7(v3, ProcessingQuantum);
  }
  v8 = *((_QWORD *)this + 16);
  v21 = 0LL;
  v9 = *(_QWORD *)(v8 + 24);
  if ( !v9 )
    ATL::AtlThrowImpl(-2147467259);
  v10 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, GraphStreamingResourceManager **))(*(_QWORD *)(v9 + 16) + 32LL))(
          **(_QWORD **)(*(_QWORD *)(v9 + 16) + 32LL),
          &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
          &v21);
  if ( v10 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        59LL,
        &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids,
        (unsigned int)v10);
    }
  }
  else
  {
    v11 = (**(__int64 (__fastcall ***)(GraphStreamingResourceManager *, GUID *, char *))v21)(
            v21,
            &GUID_8470a266_1068_4032_a9c7_69a3081e7b62,
            (char *)this + 280);
    if ( v11 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          60LL,
          &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids,
          (unsigned int)v11);
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
      if ( !v21 )
        goto LABEL_21;
      (**(void (__fastcall ***)(GraphStreamingResourceManager *, GUID *, LARGE_INTEGER *))v21)(
        v21,
        &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
        &PerformanceCount);
      if ( PerformanceCount.QuadPart )
      {
        v12 = *(int (**)(GraphStreamingResourceManager *__hidden, struct IAudioDeviceEndpoint *, struct DeviceRegistrationToken__ **))(*(_QWORD *)v3 + 56LL);
        if ( v12 == GraphStreamingResourceManager::RegisterDevice )
          GraphStreamingResourceManager::RegisterDevice(
            v3,
            (struct IAudioDeviceEndpoint *)PerformanceCount.QuadPart,
            (struct DeviceRegistrationToken__ **)this + 47);
        else
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v12)(
            v3,
            (LARGE_INTEGER)PerformanceCount.QuadPart,
            (char *)this + 376);
        if ( PerformanceCount.QuadPart )
          (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)PerformanceCount.QuadPart + 16LL))(PerformanceCount);
      }
    }
  }
  if ( v21 )
  {
    v13 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v21 + 16LL);
    if ( v13 == ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(v21);
    else
      v13(v21);
  }
LABEL_21:
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, struct ISaDeviceCallback *, GraphStreamingResourceManager *))(**((_QWORD **)this + 15) + 32LL))(
          *((_QWORD *)this + 15),
          &v23,
          a2,
          v3);
  if ( v14 >= 0 )
  {
    v20 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v15 = (GraphStreamingResourceManager *)*((_QWORD *)this + 17);
    v21 = v15;
    if ( v15 )
    {
      while ( 1 )
      {
        Next = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                   (__int64)v15,
                                   (_QWORD **)&v21);
        v14 = CPipeInstance::Start(*Next);
        if ( v14 < 0 )
          break;
        if ( !v21 )
          goto LABEL_25;
      }
      if ( !v20 )
      {
LABEL_27:
        if ( v14 >= 0 )
          goto LABEL_28;
        goto LABEL_33;
      }
    }
    else
    {
LABEL_25:
      if ( !v20 )
        goto LABEL_27;
    }
    LeaveCriticalSection(lpCriticalSection);
    goto LABEL_27;
  }
LABEL_33:
  v18 = *(LARGE_INTEGER *)this;
  *((_QWORD *)this + 34) = 0LL;
  (*(void (__fastcall **)(CAudioDeviceGraph *))(v18.QuadPart + 128))(this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      61LL,
      &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids,
      (unsigned int)v14);
  }
LABEL_28:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( v3 )
    (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v14;
}
