/*
 * XREFs of ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x1400088EC
 * Callers:
 *     wWinMain @ 0x14000195C (wWinMain.c)
 * Callees:
 *     ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x140001ACC (-PreMessageLoop@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 *     ?InitializeCpuManager@@YAJXZ @ 0x140001C2C (-InitializeCpuManager@@YAJXZ.c)
 *     ?InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z @ 0x14000854C (-InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027E68 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioDGModule::PreMessageLoop(CAudioDGModule *this)
{
  SC_HANDLE v1; // r14
  SC_HANDLE v2; // r15
  int v4; // eax
  int v5; // ebx
  HANDLE EventW; // rax
  HANDLE v7; // rax
  RPC_STATUS v8; // edi
  bool v9; // cc
  SC_HANDLE v10; // rax
  DWORD v11; // r8d
  HANDLE v12; // rax
  CAudioDGModule *v13; // rcx
  LSTATUS ValueW; // eax
  unsigned int v15; // edx
  unsigned int v16; // r8d
  DWORD v17; // ecx
  _QWORD *v18; // rcx
  void *v19; // rcx
  __int64 v21; // rdx
  __int64 v22; // r9
  signed int LastError; // eax
  signed int v24; // eax
  signed int v25; // eax
  DWORD v26; // eax
  signed int v27; // eax
  DWORD pvData; // [rsp+40h] [rbp-19h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-11h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-9h] BYREF
  DWORD pdwType; // [rsp+54h] [rbp-5h] BYREF
  LARGE_INTEGER Frequency; // [rsp+58h] [rbp-1h] BYREF
  BYTE Buffer[4]; // [rsp+60h] [rbp+7h] BYREF
  int v34; // [rsp+64h] [rbp+Bh]
  DWORD dwProcessId; // [rsp+7Ch] [rbp+23h]

  v1 = 0LL;
  pdwType = 36;
  v2 = 0LL;
  SecurityDescriptor = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids);
  }
  QueryPerformanceFrequency(&Frequency);
  g_u64QPCFrequency = Frequency.QuadPart;
  v4 = CoInitializeEx(0LL, 4u);
  v5 = v4;
  if ( v4 < 0 )
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_40;
    }
    v21 = 12LL;
LABEL_55:
    v22 = (unsigned int)v4;
LABEL_87:
    WPP_SF_D(v18[2], v21, &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids, v22);
    goto LABEL_40;
  }
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 14) = EventW;
  if ( !EventW )
    goto LABEL_56;
  v7 = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 15) = v7;
  if ( !v7 )
    goto LABEL_56;
  v5 = InitializeCpuManager();
  if ( v5 < 0 )
    goto LABEL_40;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
LABEL_56:
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError <= 0 )
      goto LABEL_40;
    v5 = (unsigned __int16)LastError;
    goto LABEL_96;
  }
  v8 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioDeviceGraph", SecurityDescriptor);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids,
      (unsigned int)v8);
  }
  v9 = v8 <= 0;
  if ( v8 )
    goto LABEL_93;
  v8 = RpcServerRegisterIf3(L"`", 0LL, 0LL, 33LL);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids,
      (unsigned int)v8);
  }
  v9 = v8 <= 0;
  if ( v8 )
  {
LABEL_93:
    if ( v9 )
    {
      v5 = v8;
      goto LABEL_40;
    }
    v5 = (unsigned __int16)v8;
    goto LABEL_96;
  }
  if ( !SetEvent(*((HANDLE *)this + 18)) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids,
        *((_QWORD *)this + 18),
        1234);
    }
    goto LABEL_40;
  }
  fRpcStarted = 1;
  v10 = OpenSCManagerW(0LL, 0LL, 1u);
  v1 = v10;
  if ( !v10 )
  {
    v24 = GetLastError();
    v5 = v24;
    if ( v24 > 0 )
      v5 = (unsigned __int16)v24 | 0x80070000;
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_40;
    }
    v21 = 16LL;
LABEL_86:
    v22 = (unsigned int)v5;
    goto LABEL_87;
  }
  v2 = OpenServiceW(v10, L"AUDIOSRV", 4u);
  if ( !v2 )
  {
    v25 = GetLastError();
    v5 = v25;
    if ( v25 > 0 )
      v5 = (unsigned __int16)v25 | 0x80070000;
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_40;
    }
    v21 = 17LL;
    goto LABEL_86;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids);
  }
  if ( !QueryServiceStatusEx(v2, SC_STATUS_PROCESS_INFO, Buffer, 0x24u, &pdwType) )
  {
    v26 = GetLastError();
    v5 = v26;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids, v26);
    }
    if ( v5 <= 0 )
      goto LABEL_40;
    v5 = (unsigned __int16)v5;
LABEL_96:
    v5 |= 0x80070000;
    goto LABEL_40;
  }
  if ( ((v34 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids, dwProcessId);
    }
    v11 = dwProcessId;
    *((_DWORD *)this + 34) = dwProcessId;
    v12 = OpenProcess(0x100000u, 0, v11);
    *((_QWORD *)this + 16) = v12;
    if ( v12 )
    {
      v5 = CAudioDGModule::InitializeSecurity(v13);
      if ( v5 < 0 )
        goto LABEL_40;
      pcbData = 4;
      pvData = 0;
      g_EndpointStatistics = 0LL;
      dword_140055B48 = 0;
      ValueW = RegGetValueW(
                 HKEY_LOCAL_MACHINE,
                 L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                 L"AudioDgWatchDogTimerInMs",
                 0x18u,
                 0LL,
                 &pvData,
                 &pcbData);
      v17 = g_AudioDgWatchDogTimerInMs;
      if ( !ValueW )
        v17 = pvData;
      g_AudioDgWatchDogTimerInMs = v17;
      v4 = ATL::CAtlExeModuleT<CAudioDGModule>::PreMessageLoop((__int64)this, v15, v16);
      v5 = v4;
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
        goto LABEL_40;
      }
      v21 = 24LL;
      goto LABEL_55;
    }
    v27 = GetLastError();
    v5 = v27;
    if ( v27 > 0 )
      v5 = (unsigned __int16)v27 | 0x80070000;
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v21 = 22LL;
      goto LABEL_86;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids);
    }
    v5 = -2147467259;
  }
LABEL_40:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  if ( v1 )
    CloseServiceHandle(v1);
  if ( v2 )
    CloseServiceHandle(v2);
  v19 = (void *)*((_QWORD *)this + 15);
  *((_DWORD *)this + 26) = v5;
  if ( v19 )
    SetEvent(v19);
  if ( v5 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      25LL,
      &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids,
      (unsigned int)v5);
  }
  return (unsigned int)v5;
}
