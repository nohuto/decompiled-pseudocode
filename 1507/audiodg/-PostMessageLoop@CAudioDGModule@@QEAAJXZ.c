/*
 * XREFs of ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014944
 * Callers:
 *     wWinMain @ 0x1400177C0 (wWinMain.c)
 * Callees:
 *     _TlgWrite @ 0x140002780 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ @ 0x140017348 (-InternalRelease@-$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     Template_q @ 0x1400273C4 (Template_q.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     WPP_SF_DDD @ 0x140027448 (WPP_SF_DDD.c)
 */

__int64 __fastcall CAudioDGModule::PostMessageLoop(CAudioDGModule *this)
{
  unsigned __int64 v2; // rbx
  HRESULT v3; // edi
  unsigned __int64 v4; // rax
  DWORD v5; // ecx
  unsigned int v6; // eax
  char *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // rcx
  __int64 v12; // rcx
  int v13; // [rsp+38h] [rbp-29h] BYREF
  int v14; // [rsp+3Ch] [rbp-25h] BYREF
  int v15; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  int *v17; // [rsp+68h] [rbp+7h]
  int v18; // [rsp+70h] [rbp+Fh]
  int v19; // [rsp+74h] [rbp+13h]
  int *v20; // [rsp+78h] [rbp+17h]
  int v21; // [rsp+80h] [rbp+1Fh]
  int v22; // [rsp+84h] [rbp+23h]
  int *v23; // [rsp+88h] [rbp+27h]
  int v24; // [rsp+90h] [rbp+2Fh]
  int v25; // [rsp+94h] [rbp+33h]

  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 28LL, &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids);
  }
  v2 = qword_140055C70;
  v3 = 0;
  v4 = qword_140055C78;
  while ( v2 < v4 && !v3 )
  {
    if ( *(_QWORD *)v2 )
    {
      v5 = *(_DWORD *)(*(_QWORD *)v2 + 40LL);
      if ( v5 )
      {
        v3 = CoRevokeClassObject(v5);
        v4 = qword_140055C78;
      }
      else
      {
        v3 = 0;
      }
    }
    v2 += 8LL;
  }
  if ( *((_BYTE *)this + 96) )
    Sleep(*((_DWORD *)this + 23));
  if ( g_DeviceGraphWnfStateNameCreated )
  {
    NtDeleteWnfStateName(&g_DeviceGraphWnfStateName);
    g_DeviceGraphWnfStateNameCreated = 0;
    g_DeviceGraphWnfStateName = 0LL;
  }
  if ( fRpcStarted )
  {
    v6 = RpcServerUnregisterIfEx(L"`", 0LL, 1);
    if ( v6
      && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        29LL,
        &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids,
        v6);
    }
    fRpcStarted = 0;
  }
  v7 = (char *)*((_QWORD *)this + 14);
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v7);
    *((_QWORD *)this + 14) = 0LL;
  }
  CleanupDeviceAPI();
  Microsoft::WRL::ComPtr<CpuManager>::InternalRelease(&qword_140055BE8);
  NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
  WinSqmIncrementDWORD(*(_QWORD *)&g_hSqmSession.Data1, 5470LL, g_EndpointStatistics);
  WinSqmIncrementDWORD(*(_QWORD *)&g_hSqmSession.Data1, 5951LL, *(&g_EndpointStatistics + 1));
  WinSqmIncrementDWORD(*(_QWORD *)&g_hSqmSession.Data1, 5933LL, (unsigned int)dword_140055B48);
  if ( g_EndpointStatistics > 0x32u )
  {
    WerRegisterMemoryBlock(&g_EndpointStatistics, 0xCu);
    ShipAssert(47106LL, g_EndpointStatistics);
    if ( (Microsoft_Windows_AudioEnableBits & 1) != 0 )
      Template_q(v12, &EVT_AUDIODG_GLITCH_THRESHOLD_EXCEEDED, g_EndpointStatistics);
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_DDD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        32LL,
        &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids,
        g_EndpointStatistics,
        *(&g_EndpointStatistics + 1),
        dword_140055B48);
    }
  }
  if ( hProvider > 5u
    && (qword_1400552A0 & 0x200000000000LL) != 0
    && (qword_1400552A8 & 0x200000000000LL) == qword_1400552A8 )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v15 = g_EndpointStatistics;
    v17 = &v15;
    v13 = *(&g_EndpointStatistics + 1);
    v20 = &v13;
    v14 = dword_140055B48;
    v23 = &v14;
    v18 = 4;
    v21 = 4;
    v24 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1400455C1, v8, v9, 5u, &pData);
  }
  CoUninitialize();
  v10 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 30LL, &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids);
    v10 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( v3 < 0
    && (unsigned int *)v10 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v10 + 28) & 0x40000) != 0
    && *(_BYTE *)(v10 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v10 + 16), 31LL, &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids, (unsigned int)v3);
  }
  return (unsigned int)v3;
}
