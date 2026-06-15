/*
 * XREFs of ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x1400072C0
 * Callers:
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140005760 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140006828 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 * Callees:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140004D34 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x1400097B0 (-UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ @ 0x140009F50 (-RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ.c)
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x14000BF50 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x14000C760 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
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
  void (__fastcall *v10)(GraphStreamingResourceManager *__hidden, struct DeviceRegistrationToken__ *); // rsi
  _QWORD *v11; // rdi
  _QWORD *v12; // rcx
  CPipeInstance *v13; // rsi
  int v14; // esi
  int v15; // edi
  void (__fastcall *v16)(GraphStreamingResourceManager *__hidden); // rdi
  _QWORD *v17; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v20; // [rsp+28h] [rbp-40h]
  _QWORD v21[2]; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+8h] BYREF
  __int64 v23; // [rsp+78h] [rbp+10h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 62LL, &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids);
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
        v21[1] = (char *)this + 352;
        (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v8 + 24LL))(v8, 2LL, v21);
        _InterlockedIncrement((_DWORD *)&g_EndpointStatistics + 1);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            63LL,
            &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids,
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
    if ( *((_QWORD *)this + 46)
      || (int)CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 46) >= 0 )
    {
      v3 = (GraphStreamingResourceManager *)*((_QWORD *)this + 46);
      if ( v3 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 46));
    }
    if ( *((_QWORD *)this + 47) && v3 )
    {
      v10 = *(void (__fastcall **)(GraphStreamingResourceManager *__hidden, struct DeviceRegistrationToken__ *))(*(_QWORD *)v3 + 64LL);
      if ( v10 == GraphStreamingResourceManager::UnregisterDevice )
        GraphStreamingResourceManager::UnregisterDevice(v3, *((struct DeviceRegistrationToken__ **)this + 47));
      else
        v10(v3, *((struct DeviceRegistrationToken__ **)this + 47));
      *((_QWORD *)this + 47) = 0LL;
    }
    v20 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v11 = (_QWORD *)*((_QWORD *)this + 17);
    v12 = WPP_GLOBAL_Control;
    while ( v11 )
    {
      v13 = (CPipeInstance *)v11[2];
      v11 = (_QWORD *)*v11;
      if ( v12 != &WPP_GLOBAL_Control && (*((_DWORD *)v12 + 7) & 0x20000) != 0 && *((_BYTE *)v12 + 25) >= 4u )
        WPP_SF_(v12[2], 64LL, &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids);
      v14 = CPipeInstance::Stop(v13);
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 65LL, &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids);
        v12 = WPP_GLOBAL_Control;
      }
      if ( v14 < 0 )
        v2 = v14;
    }
    if ( v20 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v12 = WPP_GLOBAL_Control;
    }
    if ( v12 != &WPP_GLOBAL_Control && (*((_DWORD *)v12 + 7) & 0x20000) != 0 && *((_BYTE *)v12 + 25) >= 4u )
      WPP_SF_(v12[2], 66LL, &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids);
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 40LL))(*((_QWORD *)this + 15));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 67LL, &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids);
    }
    if ( v15 < 0 )
      v2 = v15;
    CPipeInstance::ResetAPOs(*((CPipeInstance **)this + 16));
    if ( v3 )
    {
      v16 = *(void (__fastcall **)(GraphStreamingResourceManager *__hidden))(*(_QWORD *)v3 + 80LL);
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
  v17 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 68LL, &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids);
    v17 = WPP_GLOBAL_Control;
  }
  if ( v2 < 0 && v17 != &WPP_GLOBAL_Control && (*((_DWORD *)v17 + 7) & 0x20000) != 0 && *((_BYTE *)v17 + 25) >= 2u )
    WPP_SF_D(v17[2], 69LL, &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids, (unsigned int)v2);
  if ( v3 )
    (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v2;
}
