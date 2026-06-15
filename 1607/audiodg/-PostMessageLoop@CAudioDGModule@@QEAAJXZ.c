/*
 * XREFs of ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140026350
 * Callers:
 *     wWinMain @ 0x140015C78 (wWinMain.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1400012B8 (-InternalRelease@-$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x140016088 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140016124 (_TlgKeywordOn.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     ?WriteSqmInfo@CAudioDGModule@@AEAAXXZ @ 0x140026820 (-WriteSqmInfo@CAudioDGModule@@AEAAXXZ.c)
 *     WPP_SF_ @ 0x14002696C (WPP_SF_.c)
 */

__int64 __fastcall CAudioDGModule::PostMessageLoop(CAudioDGModule *this)
{
  unsigned __int64 v2; // rdi
  HRESULT v3; // ebx
  unsigned __int64 v4; // rax
  DWORD v5; // ecx
  RPC_STATUS v6; // eax
  char *v7; // rcx
  CAudioDGModule *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  _UNKNOWN **v12; // rcx
  int v14; // [rsp+38h] [rbp-29h] BYREF
  int v15; // [rsp+3Ch] [rbp-25h] BYREF
  int v16; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  int *v18; // [rsp+68h] [rbp+7h]
  int v19; // [rsp+70h] [rbp+Fh]
  int v20; // [rsp+74h] [rbp+13h]
  int *v21; // [rsp+78h] [rbp+17h]
  int v22; // [rsp+80h] [rbp+1Fh]
  int v23; // [rsp+84h] [rbp+23h]
  int *v24; // [rsp+88h] [rbp+27h]
  int v25; // [rsp+90h] [rbp+2Fh]
  int v26; // [rsp+94h] [rbp+33h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids);
  }
  v2 = qword_140054D40;
  v3 = 0;
  v4 = qword_140054D48;
  while ( v2 < v4 && !v3 )
  {
    if ( *(_QWORD *)v2 )
    {
      v5 = *(_DWORD *)(*(_QWORD *)v2 + 40LL);
      if ( v5 )
      {
        v3 = CoRevokeClassObject(v5);
        v4 = qword_140054D48;
      }
    }
    v2 += 8LL;
  }
  if ( *((_BYTE *)this + 96) )
    Sleep(*((_DWORD *)this + 23));
  if ( g_DeviceGraphWnfStateNameCreated )
  {
    NtDeleteWnfStateName(g_hSqmSession.Data4);
    g_DeviceGraphWnfStateNameCreated = 0;
    *(_QWORD *)g_hSqmSession.Data4 = 0LL;
  }
  if ( fRpcStarted )
  {
    v6 = RpcServerUnregisterIfEx(&unk_14003ECC0, 0LL, 1);
    if ( v6
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Du,
        (__int64)&WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids,
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
  Microsoft::WRL::ComPtr<CpuManager>::InternalRelease(&qword_140054CB8);
  NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
  v14 = -1;
  RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, &v14, 4LL, 0LL);
  CAudioDGModule::WriteSqmInfo(v8);
  if ( (unsigned int)dword_1400540B0 > 4 && TlgKeywordOn((TraceLoggingHProvider)&dword_1400540B0, 0x200000000000uLL) )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v14 = g_EndpointStatistics;
    v18 = &v14;
    v15 = *(&g_EndpointStatistics + 1);
    v21 = &v15;
    v16 = dword_140054C10;
    v24 = &v16;
    v19 = 4;
    v22 = 4;
    v25 = 4;
    TlgWrite(v9, &unk_140045C58, v10, v11, 5u, &pData);
  }
  CoUninitialize();
  v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids);
    v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v3 < 0 )
  {
    if ( v12 != &WPP_GLOBAL_Control && (*((_DWORD *)v12 + 7) & 0x40000) != 0 && *((_BYTE *)v12 + 25) >= 2u )
      WPP_SF_D((__int64)v12[2], 0x1Fu, (__int64)&WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids, v3);
    AudDGTraceLoggingErrorHelper("CAudioDGModule::PostMessageLoop", 588, v3);
  }
  return (unsigned int)v3;
}
