/*
 * XREFs of ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x140012174
 * Callers:
 *     wWinMain @ 0x140015C78 (wWinMain.c)
 * Callees:
 *     ?InitializeCpuManager@@YAJXZ @ 0x1400011B8 (-InitializeCpuManager@@YAJXZ.c)
 *     ?AtlComModuleRegisterClassObjects@ATL@@YAJPEAU_ATL_COM_MODULE70@1@KK@Z @ 0x14000F628 (-AtlComModuleRegisterClassObjects@ATL@@YAJPEAU_ATL_COM_MODULE70@1@KK@Z.c)
 *     ?InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z @ 0x140011DDC (-InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x14002696C (WPP_SF_.c)
 *     WPP_SF_q @ 0x14002B2DC (WPP_SF_q.c)
 */

__int64 __fastcall CAudioDGModule::PreMessageLoop(CAudioDGModule *this)
{
  SC_HANDLE v1; // r14
  SC_HANDLE v2; // r15
  int v4; // ebx
  HANDLE EventW; // rax
  HANDLE v6; // rax
  bool v7; // cc
  SC_HANDLE v8; // rax
  DWORD v9; // r8d
  HANDLE v10; // rax
  CAudioDGModule *v11; // rcx
  LSTATUS ValueW; // eax
  unsigned __int64 v13; // rcx
  int v14; // eax
  HRESULT v15; // edi
  void *v16; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  signed int LastError; // eax
  signed int v21; // eax
  signed int v22; // eax
  signed int v23; // eax
  __int64 *v24; // rbx
  HRESULT v25; // eax
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  struct ATL::_ATL_COM_MODULE70 *pvData; // [rsp+40h] [rbp-19h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-11h] BYREF
  DWORD pdwType; // [rsp+50h] [rbp-9h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-5h] BYREF
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
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids);
  }
  QueryPerformanceFrequency(&Frequency);
  g_u64QPCFrequency = Frequency.QuadPart;
  v4 = CoInitializeEx(0LL, 4u);
  if ( v4 < 0 )
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_47;
    }
    v19 = 12LL;
    goto LABEL_61;
  }
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 14) = EventW;
  if ( !EventW )
    goto LABEL_62;
  v6 = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 15) = v6;
  if ( !v6 )
    goto LABEL_62;
  v4 = InitializeCpuManager();
  if ( v4 < 0 )
    goto LABEL_47;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
LABEL_62:
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError <= 0 )
      goto LABEL_47;
    v4 = (unsigned __int16)LastError;
LABEL_83:
    v4 |= 0x80070000;
    goto LABEL_47;
  }
  v4 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioDeviceGraph", SecurityDescriptor);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids,
      (unsigned int)v4);
  }
  v7 = v4 <= 0;
  if ( v4 )
    goto LABEL_81;
  v4 = RpcServerRegisterIf3(&unk_14003ECC0, 0LL, 0LL, 33LL, 1234, 0, AudioDGRpcIfCallback, SecurityDescriptor);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids,
      (unsigned int)v4);
  }
  v7 = v4 <= 0;
  if ( v4 )
  {
LABEL_81:
    if ( v7 )
      goto LABEL_47;
    v4 = (unsigned __int16)v4;
    goto LABEL_83;
  }
  fRpcStarted = 1;
  v8 = OpenSCManagerW(0LL, 0LL, 1u);
  v1 = v8;
  if ( !v8 )
  {
    v21 = GetLastError();
    v4 = v21;
    if ( v21 > 0 )
      v4 = (unsigned __int16)v21 | 0x80070000;
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_47;
    }
    v19 = 15LL;
LABEL_61:
    WPP_SF_D(v18[2], v19, &WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids, (unsigned int)v4);
    goto LABEL_47;
  }
  v2 = OpenServiceW(v8, L"AUDIOSRV", 4u);
  if ( !v2 )
  {
    v22 = GetLastError();
    v4 = v22;
    if ( v22 > 0 )
      v4 = (unsigned __int16)v22 | 0x80070000;
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_47;
    }
    v19 = 16LL;
    goto LABEL_61;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids);
  }
  if ( !QueryServiceStatusEx(v2, SC_STATUS_PROCESS_INFO, Buffer, 0x24u, &pdwType) )
  {
    v4 = GetLastError();
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        18LL,
        &WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids,
        (unsigned int)v4);
    }
    v7 = v4 <= 0;
    goto LABEL_81;
  }
  if ( ((v34 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids, dwProcessId);
    }
    v9 = dwProcessId;
    *((_DWORD *)this + 34) = dwProcessId;
    v10 = OpenProcess(0x100000u, 0, v9);
    *((_QWORD *)this + 16) = v10;
    if ( v10 )
    {
      v4 = CAudioDGModule::InitializeSecurity(v11);
      if ( v4 >= 0 )
      {
        pcbData = 4;
        LODWORD(pvData) = 0;
        g_EndpointStatistics = 0LL;
        dword_140054C10 = 0;
        ValueW = RegGetValueW(
                   HKEY_LOCAL_MACHINE,
                   L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                   L"AudioDgWatchDogTimerInMs",
                   0x18u,
                   0LL,
                   &pvData,
                   &pcbData);
        v13 = g_AudioDgWatchDogTimerInMs;
        if ( !ValueW )
          v13 = (unsigned int)pvData;
        g_AudioDgWatchDogTimerInMs = v13;
        v14 = ATL::AtlComModuleRegisterClassObjects((IUnknown *)v13);
        v15 = v14;
        if ( v14 >= 0 )
        {
          if ( v14 )
          {
            *((_BYTE *)this + 96) = 0;
          }
          else
          {
            if ( *((_BYTE *)this + 96) )
            {
              v15 = CoResumeClassObjects();
              if ( v15 < 0 )
              {
                SetEvent(*((HANDLE *)this + 10));
                WaitForSingleObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2 * *((_DWORD *)this + 22));
              }
              CloseHandle((HANDLE)0xFFFFFFFFFFFFFFFFLL);
            }
            else
            {
              v15 = CoResumeClassObjects();
            }
            if ( v15 < 0 )
            {
              v24 = (__int64 *)qword_140054D40;
              v25 = 0;
              v26 = qword_140054D48;
              while ( (unsigned __int64)v24 < v26 && !v25 )
              {
                v27 = *v24;
                if ( *v24 && *(_DWORD *)(v27 + 40) )
                {
                  v25 = CoRevokeClassObject(*(_DWORD *)(v27 + 40));
                  v26 = qword_140054D48;
                }
                ++v24;
              }
            }
          }
        }
        v4 = v15;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            23LL,
            &WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids,
            (unsigned int)v15);
        }
        if ( v15 >= 0
          && !SetEvent(*((HANDLE *)this + 18))
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            24LL,
            &WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids,
            *((_QWORD *)this + 18));
        }
      }
      goto LABEL_47;
    }
    v23 = GetLastError();
    v4 = v23;
    if ( v23 > 0 )
      v4 = (unsigned __int16)v23 | 0x80070000;
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v19 = 21LL;
      goto LABEL_61;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids);
    }
    v4 = -2147467259;
  }
LABEL_47:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  if ( v1 )
    CloseServiceHandle(v1);
  if ( v2 )
    CloseServiceHandle(v2);
  v16 = (void *)*((_QWORD *)this + 15);
  *((_DWORD *)this + 26) = v4;
  if ( v16 )
    SetEvent(v16);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        25LL,
        &WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids,
        (unsigned int)v4);
    }
    AudDGTraceLoggingErrorHelper("CAudioDGModule::PreMessageLoop", 0x1C8u, v4);
  }
  return (unsigned int)v4;
}
