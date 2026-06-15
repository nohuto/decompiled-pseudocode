/*
 * XREFs of ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F590
 * Callers:
 *     ?SetGraphState@CSystemAudioDeviceSharedNew@@IEAAJW4GRAPH_STATE@@@Z @ 0x14000E020 (-SetGraphState@CSystemAudioDeviceSharedNew@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14000EDF8 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 * Callees:
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x1400043F0 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x1400049C0 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x14000C620 (-UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ @ 0x14000CDC0 (-RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140015388 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 */

__int64 __fastcall CAudioDeviceGraph::Stop(CAudioDeviceGraph *this)
{
  int v2; // r14d
  GraphStreamingResourceManager *v3; // rbx
  unsigned __int64 v4; // rcx
  double v5; // xmm0_8
  double v6; // xmm0_8
  double v7; // xmm1_8
  __int64 v8; // rdi
  __int64 v9; // rdi
  void (__fastcall *v10)(GraphStreamingResourceManager *, struct DeviceRegistrationToken__ *); // rsi
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  CPipeInstance *v13; // rsi
  int v14; // esi
  int v15; // edi
  void (__fastcall *v16)(GraphStreamingResourceManager *); // rdi
  __int64 v17; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v20; // [rsp+28h] [rbp-40h]
  _QWORD v21[2]; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+8h] BYREF
  __int64 v23; // [rsp+78h] [rbp+10h]

  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 46LL, &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids);
  }
  v2 = 0;
  v3 = 0LL;
  v23 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 56) )
  {
    if ( *((_QWORD *)this + 35) )
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      v4 = *((_QWORD *)this + 34);
      if ( v4 && PerformanceCount.QuadPart > v4 )
      {
        v5 = (double)(PerformanceCount.LowPart - (int)v4);
        if ( (__int64)(PerformanceCount.QuadPart - v4) < 0 )
          v5 = v5 + 1.844674407370955e19;
        v6 = v5 * 10000000.0;
        v7 = (double)(int)g_u64QPCFrequency;
        if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
          v7 = v7 + 1.844674407370955e19;
        _InterlockedExchangeAdd(&dword_140055B48, (int)(v6 / v7) / 0x2710u);
        v8 = *((_QWORD *)this + 35);
        v21[0] = &g_EndpointStatistics;
        v21[1] = (char *)this + 344;
        (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v8 + 24LL))(v8, 2LL, v21);
        _InterlockedIncrement((_DWORD *)&g_EndpointStatistics + 1);
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            47LL,
            &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
            g_EndpointStatistics);
        }
      }
      v9 = *((_QWORD *)this + 35);
      if ( v9 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 35));
        *((_QWORD *)this + 35) = 0LL;
      }
    }
    v3 = 0LL;
    if ( *((_QWORD *)this + 45)
      || (int)CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 45) >= 0 )
    {
      v3 = (GraphStreamingResourceManager *)*((_QWORD *)this + 45);
      if ( v3 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 45));
    }
    if ( *((_QWORD *)this + 46) && v3 )
    {
      v10 = *(void (__fastcall **)(GraphStreamingResourceManager *, struct DeviceRegistrationToken__ *))(*(_QWORD *)v3 + 64LL);
      if ( v10 == GraphStreamingResourceManager::UnregisterDevice )
        GraphStreamingResourceManager::UnregisterDevice(v3, *((struct DeviceRegistrationToken__ **)this + 46));
      else
        v10(v3, *((struct DeviceRegistrationToken__ **)this + 46));
      *((_QWORD *)this + 46) = 0LL;
    }
    v20 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v11 = (_QWORD *)*((_QWORD *)this + 17);
    v12 = *(_QWORD *)&WPP_GLOBAL_Control;
    while ( v11 )
    {
      v13 = (CPipeInstance *)v11[2];
      v11 = (_QWORD *)*v11;
      if ( (unsigned int *)v12 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v12 + 28) & 0x20000) != 0
        && *(_BYTE *)(v12 + 25) >= 4u )
      {
        WPP_SF_(*(_QWORD *)(v12 + 16), 48LL, &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids);
      }
      v14 = CPipeInstance::Stop(v13);
      v12 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          49LL,
          &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids);
        v12 = *(_QWORD *)&WPP_GLOBAL_Control;
      }
      if ( v14 < 0 )
        v2 = v14;
    }
    if ( v20 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v12 = *(_QWORD *)&WPP_GLOBAL_Control;
    }
    if ( (unsigned int *)v12 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v12 + 28) & 0x20000) != 0
      && *(_BYTE *)(v12 + 25) >= 4u )
    {
      WPP_SF_(*(_QWORD *)(v12 + 16), 50LL, &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids);
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 40LL))(*((_QWORD *)this + 15));
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        51LL,
        &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids);
    }
    if ( v15 < 0 )
      v2 = v15;
    CPipeInstance::ResetAPOs(*((CPipeInstance **)this + 16));
    if ( v3 )
    {
      v16 = *(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v3 + 80LL);
      if ( v16 == GraphStreamingResourceManager::RemoveFromCpuManager )
        GraphStreamingResourceManager::RemoveFromCpuManager(v3);
      else
        v16(v3);
    }
  }
  else
  {
    v2 = -2005139437;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  v17 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 52LL, &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids);
    v17 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( v2 < 0
    && (unsigned int *)v17 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v17 + 28) & 0x20000) != 0
    && *(_BYTE *)(v17 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v17 + 16), 53LL, &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids, (unsigned int)v2);
  }
  if ( v3 )
    (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v2;
}
