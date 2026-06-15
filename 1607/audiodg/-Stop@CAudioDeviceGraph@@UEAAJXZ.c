/*
 * XREFs of ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140006960
 * Callers:
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140005348 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140006120 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 * Callees:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140001958 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x140003AE0 (-UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ @ 0x1400041F0 (-RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x1400079F0 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x1400080A0 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x14002696C (WPP_SF_.c)
 */

__int64 __fastcall CAudioDeviceGraph::Stop(CAudioDeviceGraph *this)
{
  int v2; // esi
  GraphStreamingResourceManager *v3; // rbx
  unsigned __int64 v4; // rcx
  double v5; // xmm0_8
  double v6; // xmm0_8
  double v7; // xmm1_8
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct DeviceRegistrationToken__ *v10; // rdx
  void (__fastcall *v11)(GraphStreamingResourceManager *, struct DeviceRegistrationToken__ *); // rax
  _QWORD *v12; // r14
  _QWORD *v13; // rcx
  CPipeInstance *v14; // rbp
  int v15; // ebp
  signed int LowPart; // ebp
  void (__fastcall *v17)(GraphStreamingResourceManager *); // rax
  _QWORD *v18; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v21; // [rsp+28h] [rbp-40h]
  _QWORD v22[2]; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+78h] [rbp+10h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids);
  }
  v2 = 0;
  v3 = 0LL;
  v24 = 0LL;
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
        _InterlockedExchangeAdd(&dword_140054C10, (int)(v6 / v7) / 0x2710u);
        v8 = *((_QWORD *)this + 35);
        v22[0] = &g_EndpointStatistics;
        v22[1] = (char *)this + 352;
        (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v8 + 24LL))(v8, 2LL, v22);
        _InterlockedIncrement((_DWORD *)&g_EndpointStatistics + 1);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            44LL,
            &WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids,
            g_EndpointStatistics);
        }
      }
      v9 = *((_QWORD *)this + 35);
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        *((_QWORD *)this + 35) = 0LL;
      }
    }
    if ( *((_QWORD *)this + 46)
      || (int)CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 46) >= 0 )
    {
      v3 = (GraphStreamingResourceManager *)*((_QWORD *)this + 46);
      if ( v3 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 46));
    }
    v10 = (struct DeviceRegistrationToken__ *)*((_QWORD *)this + 47);
    if ( v10 && v3 )
    {
      v11 = *(void (__fastcall **)(GraphStreamingResourceManager *, struct DeviceRegistrationToken__ *))(*(_QWORD *)v3 + 64LL);
      if ( v11 == GraphStreamingResourceManager::UnregisterDevice )
        GraphStreamingResourceManager::UnregisterDevice(v3, v10);
      else
        ((void (__fastcall *)(GraphStreamingResourceManager *))v11)(v3);
      *((_QWORD *)this + 47) = 0LL;
    }
    v21 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v12 = (_QWORD *)*((_QWORD *)this + 17);
    v13 = WPP_GLOBAL_Control;
    while ( v12 )
    {
      v14 = (CPipeInstance *)v12[2];
      v12 = (_QWORD *)*v12;
      if ( v13 != &WPP_GLOBAL_Control && (*((_DWORD *)v13 + 7) & 0x20000) != 0 && *((_BYTE *)v13 + 25) >= 4u )
        WPP_SF_(v13[2], 45LL, &WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids);
      v15 = CPipeInstance::Stop(v14);
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids);
        v13 = WPP_GLOBAL_Control;
      }
      if ( v15 < 0 )
        v2 = v15;
    }
    if ( v21 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v13 = WPP_GLOBAL_Control;
    }
    if ( v13 != &WPP_GLOBAL_Control && (*((_DWORD *)v13 + 7) & 0x20000) != 0 && *((_BYTE *)v13 + 25) >= 4u )
      WPP_SF_(v13[2], 47LL, &WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids);
    LowPart = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 40LL))(*((_QWORD *)this + 15));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids);
    }
    if ( LowPart < 0 )
      v2 = LowPart;
    CPipeInstance::ResetAPOs(*((CPipeInstance **)this + 16));
    if ( v3 )
    {
      v17 = *(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v3 + 80LL);
      if ( v17 == GraphStreamingResourceManager::RemoveFromCpuManager )
        GraphStreamingResourceManager::RemoveFromCpuManager(v3);
      else
        v17(v3);
    }
  }
  else
  {
    LowPart = PerformanceCount.LowPart;
    v2 = -2005139437;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids);
    v18 = WPP_GLOBAL_Control;
  }
  if ( v2 < 0 )
  {
    if ( v18 != &WPP_GLOBAL_Control && (*((_DWORD *)v18 + 7) & 0x20000) != 0 && *((_BYTE *)v18 + 25) >= 2u )
      WPP_SF_D(v18[2], 50LL, &WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids, (unsigned int)v2);
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::Stop", 0x414u, LowPart);
  }
  if ( v3 )
    (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v2;
}
