/*
 * XREFs of ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14000F970
 * Callers:
 *     ?SetGraphState@CSystemAudioDeviceSharedNew@@IEAAJW4GRAPH_STATE@@@Z @ 0x14000E020 (-SetGraphState@CSystemAudioDeviceSharedNew@@IEAAJW4GRAPH_STATE@@@Z.c)
 * Callees:
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140004AB0 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x14000C6D0 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x14000CE20 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140015388 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?GetProcessingQuantum@CAudioDeviceGraph@@UEAA_JXZ @ 0x140018AA0 (-GetProcessingQuantum@CAudioDeviceGraph@@UEAA_JXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::Start(CAudioDeviceGraph *this, struct ISaDeviceCallback *a2)
{
  struct CpuManager **v3; // rdi
  __int64 (__fastcall *v5)(CAudioDeviceGraph *__hidden); // rbp
  __int64 ProcessingQuantum; // rax
  __int64 (__fastcall *v7)(struct CpuManager **, __int64); // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 (__fastcall *v12)(GraphStreamingResourceManager *, struct IAudioDeviceEndpoint *, struct DeviceRegistrationToken__ **); // rbp
  int v13; // ebp
  _QWORD *v14; // rbx
  CPipeInstance *v15; // rcx
  LARGE_INTEGER v17; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v22 = 0LL;
  v3 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*((_DWORD *)this + 56) )
  {
    v13 = -2005139437;
    goto LABEL_34;
  }
  if ( *((_QWORD *)this + 45)
    || (int)CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 45) >= 0 )
  {
    v3 = (struct CpuManager **)*((_QWORD *)this + 45);
    if ( v3 )
    {
      (*((void (__fastcall **)(_QWORD))*v3 + 1))(*((_QWORD *)this + 45));
      v5 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden))(*((_QWORD *)this + 2) + 56LL);
      if ( v5 == CAudioDeviceGraph::GetProcessingQuantum )
        ProcessingQuantum = CAudioDeviceGraph::GetProcessingQuantum((CAudioDeviceGraph *)((char *)this + 16));
      else
        ProcessingQuantum = v5((CAudioDeviceGraph *)((char *)this + 16));
      v7 = (__int64 (__fastcall *)(struct CpuManager **, __int64))*((_QWORD *)*v3 + 9);
      if ( v7 == GraphStreamingResourceManager::AddToCpuManager )
        GraphStreamingResourceManager::AddToCpuManager(v3, ProcessingQuantum);
      else
        v7(v3, ProcessingQuantum);
    }
  }
  v8 = *((_QWORD *)this + 16);
  v20 = 0LL;
  v9 = *(_QWORD *)(v8 + 24);
  if ( !v9 )
    ATL::AtlThrowImpl(-2147467259);
  v10 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(v9 + 16) + 32LL))(
          **(_QWORD **)(*(_QWORD *)(v9 + 16) + 32LL),
          &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
          &v20);
  if ( v10 < 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        43LL,
        &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
        (unsigned int)v10);
    }
  }
  else
  {
    v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v20)(
            v20,
            &GUID_8470a266_1068_4032_a9c7_69a3081e7b62,
            (char *)this + 280);
    if ( v11 < 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          44LL,
          &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
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
      if ( !v20 )
        goto LABEL_21;
      (**(void (__fastcall ***)(__int64, GUID *, LARGE_INTEGER *))v20)(
        v20,
        &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
        &PerformanceCount);
      if ( PerformanceCount.QuadPart )
      {
        v12 = (__int64 (__fastcall *)(GraphStreamingResourceManager *, struct IAudioDeviceEndpoint *, struct DeviceRegistrationToken__ **))*((_QWORD *)*v3 + 7);
        if ( v12 == GraphStreamingResourceManager::RegisterDevice )
          GraphStreamingResourceManager::RegisterDevice(
            (GraphStreamingResourceManager *)v3,
            (struct IAudioDeviceEndpoint *)PerformanceCount.QuadPart,
            (struct DeviceRegistrationToken__ **)this + 46);
        else
          v12(
            (GraphStreamingResourceManager *)v3,
            (struct IAudioDeviceEndpoint *)PerformanceCount.QuadPart,
            (struct DeviceRegistrationToken__ **)this + 46);
        if ( PerformanceCount.QuadPart )
          (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)PerformanceCount.QuadPart + 16LL))(PerformanceCount);
      }
    }
  }
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_21:
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, struct ISaDeviceCallback *, struct CpuManager **))(**((_QWORD **)this + 15) + 32LL))(
          *((_QWORD *)this + 15),
          &v22,
          a2,
          v3);
  if ( v13 >= 0 )
  {
    v19 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v14 = (_QWORD *)*((_QWORD *)this + 17);
    if ( v14 )
    {
      while ( 1 )
      {
        v15 = (CPipeInstance *)v14[2];
        v14 = (_QWORD *)*v14;
        v13 = CPipeInstance::Start(v15);
        if ( v13 < 0 )
          break;
        if ( !v14 )
          goto LABEL_25;
      }
      if ( !v19 )
      {
LABEL_27:
        if ( v13 >= 0 )
          goto LABEL_28;
        goto LABEL_34;
      }
    }
    else
    {
LABEL_25:
      if ( !v19 )
        goto LABEL_27;
    }
    LeaveCriticalSection(lpCriticalSection);
    goto LABEL_27;
  }
LABEL_34:
  v17 = *(LARGE_INTEGER *)this;
  *((_QWORD *)this + 34) = 0LL;
  (*(void (__fastcall **)(CAudioDeviceGraph *))(v17.QuadPart + 96))(this);
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      45LL,
      &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
      (unsigned int)v13);
  }
LABEL_28:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( v3 )
    (*((void (__fastcall **)(struct CpuManager **))*v3 + 2))(v3);
  return (unsigned int)v13;
}
