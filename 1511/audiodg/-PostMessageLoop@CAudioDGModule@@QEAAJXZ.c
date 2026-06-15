/*
 * XREFs of ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140027604
 * Callers:
 *     wWinMain @ 0x14000195C (wWinMain.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ @ 0x140001D08 (-InternalRelease@-$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     ?WriteSqmInfo@CAudioDGModule@@AEAAXXZ @ 0x140027C00 (-WriteSqmInfo@CAudioDGModule@@AEAAXXZ.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     _TlgWrite @ 0x140027EFC (_TlgWrite.c)
 */

__int64 __fastcall CAudioDGModule::PostMessageLoop(CAudioDGModule *this)
{
  unsigned __int64 v2; // rbx
  HRESULT v3; // edi
  unsigned __int64 v4; // rax
  DWORD v5; // ecx
  RPC_STATUS v6; // eax
  char *v7; // rcx
  CAudioDGModule *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  _UNKNOWN **v11; // rcx
  int v13; // [rsp+30h] [rbp-29h] BYREF
  int v14; // [rsp+34h] [rbp-25h] BYREF
  int v15; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v17; // [rsp+60h] [rbp+7h]
  int v18; // [rsp+68h] [rbp+Fh]
  int v19; // [rsp+6Ch] [rbp+13h]
  int *v20; // [rsp+70h] [rbp+17h]
  int v21; // [rsp+78h] [rbp+1Fh]
  int v22; // [rsp+7Ch] [rbp+23h]
  int *v23; // [rsp+80h] [rbp+27h]
  int v24; // [rsp+88h] [rbp+2Fh]
  int v25; // [rsp+8Ch] [rbp+33h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids);
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
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Du,
        (__int64)&WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids,
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
  CAudioDGModule::WriteSqmInfo(v8);
  if ( hProvider > 4u
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
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_140045559, v9, v10, 5u, &pData);
  }
  CoUninitialize();
  v11 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids);
    v11 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v3 < 0 && v11 != &WPP_GLOBAL_Control && (*((_DWORD *)v11 + 7) & 0x40000) != 0 && *((_BYTE *)v11 + 25) >= 2u )
    WPP_SF_D((__int64)v11[2], 0x1Fu, (__int64)&WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids, v3);
  return (unsigned int)v3;
}
