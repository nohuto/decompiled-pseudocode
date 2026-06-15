/*
 * XREFs of ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x140014C0C
 * Callers:
 *     wWinMain @ 0x1400177C0 (wWinMain.c)
 * Callees:
 *     ?AtlComModuleRegisterClassObjects@ATL@@YAJPEAU_ATL_COM_MODULE70@1@KK@Z @ 0x140013370 (-AtlComModuleRegisterClassObjects@ATL@@YAJPEAU_ATL_COM_MODULE70@1@KK@Z.c)
 *     ?InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z @ 0x14001464C (-InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z.c)
 *     ?InitializeCpuManager@@YAJXZ @ 0x140017434 (-InitializeCpuManager@@YAJXZ.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027518 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioDGModule::PreMessageLoop(CAudioDGModule *this)
{
  SC_HANDLE v1; // r14
  SC_HANDLE v2; // r15
  HRESULT v4; // eax
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
  unsigned __int64 v15; // rcx
  int v16; // eax
  HRESULT v17; // edi
  __int64 v18; // rcx
  void *v19; // rcx
  __int64 v21; // rdx
  __int64 v22; // r9
  signed int LastError; // eax
  signed int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  signed int v27; // eax
  DWORD v28; // eax
  signed int v29; // eax
  __int64 *v30; // rbx
  HRESULT v31; // eax
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  struct ATL::_ATL_COM_MODULE70 *pvData; // [rsp+40h] [rbp-19h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-11h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-9h] BYREF
  DWORD pdwType; // [rsp+54h] [rbp-5h] BYREF
  LARGE_INTEGER Frequency; // [rsp+58h] [rbp-1h] BYREF
  BYTE Buffer[4]; // [rsp+60h] [rbp+7h] BYREF
  int v40; // [rsp+64h] [rbp+Bh]
  DWORD dwProcessId; // [rsp+7Ch] [rbp+23h]

  v1 = 0LL;
  pdwType = 36;
  v2 = 0LL;
  SecurityDescriptor = 0LL;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 11LL, &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids);
  }
  QueryPerformanceFrequency(&Frequency);
  g_u64QPCFrequency = Frequency.QuadPart;
  v4 = CoInitializeEx(0LL, 4u);
  v5 = v4;
  if ( v4 < 0 )
  {
    v18 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) < 4u )
    {
      goto LABEL_45;
    }
    v21 = 12LL;
    v22 = (unsigned int)v4;
    goto LABEL_60;
  }
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 14) = EventW;
  if ( !EventW )
    goto LABEL_61;
  v7 = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 15) = v7;
  if ( !v7 )
    goto LABEL_61;
  v5 = InitializeCpuManager();
  if ( v5 < 0 )
    goto LABEL_45;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
LABEL_61:
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError <= 0 )
      goto LABEL_45;
    v5 = (unsigned __int16)LastError;
    goto LABEL_63;
  }
  v8 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioDeviceGraph", SecurityDescriptor);
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      13LL,
      &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids,
      (unsigned int)v8);
  }
  v9 = v8 <= 0;
  if ( v8 )
    goto LABEL_110;
  v8 = RpcServerRegisterIf3(L"`", 0LL, 0LL, 33LL, 1234, 0, AudioDGRpcIfCallback, SecurityDescriptor);
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      14LL,
      &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids,
      (unsigned int)v8);
  }
  v9 = v8 <= 0;
  if ( v8 )
  {
LABEL_110:
    if ( v9 )
      v5 = v8;
    else
      v5 = (unsigned __int16)v8 | 0x80070000;
    goto LABEL_45;
  }
  if ( !SetEvent(*((HANDLE *)this + 18)) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        15LL,
        &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids,
        *((_QWORD *)this + 18));
    }
    goto LABEL_45;
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
    v25 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) < 4u )
    {
      goto LABEL_45;
    }
    v26 = 16LL;
LABEL_74:
    WPP_SF_D(*(_QWORD *)(v25 + 16), v26, &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids, (unsigned int)v5);
    goto LABEL_45;
  }
  v2 = OpenServiceW(v10, L"AUDIOSRV", 4u);
  if ( !v2 )
  {
    v27 = GetLastError();
    v5 = v27;
    if ( v27 > 0 )
      v5 = (unsigned __int16)v27 | 0x80070000;
    v25 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) < 4u )
    {
      goto LABEL_45;
    }
    v26 = 17LL;
    goto LABEL_74;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 18LL, &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids);
  }
  if ( !QueryServiceStatusEx(v2, SC_STATUS_PROCESS_INFO, Buffer, 0x24u, &pdwType) )
  {
    v28 = GetLastError();
    v5 = v28;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        19LL,
        &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids,
        v28);
    }
    if ( v5 <= 0 )
      goto LABEL_45;
    v5 = (unsigned __int16)v5;
LABEL_63:
    v5 |= 0x80070000;
    goto LABEL_45;
  }
  if ( ((v40 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        20LL,
        &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids,
        dwProcessId);
    }
    v11 = dwProcessId;
    *((_DWORD *)this + 34) = dwProcessId;
    v12 = OpenProcess(0x100000u, 0, v11);
    *((_QWORD *)this + 16) = v12;
    if ( v12 )
    {
      v5 = CAudioDGModule::InitializeSecurity(v13);
      if ( v5 < 0 )
        goto LABEL_45;
      pcbData = 4;
      LODWORD(pvData) = 0;
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
      v15 = g_AudioDgWatchDogTimerInMs;
      if ( !ValueW )
        v15 = (unsigned int)pvData;
      g_AudioDgWatchDogTimerInMs = v15;
      v16 = ATL::AtlComModuleRegisterClassObjects((IUnknown *)v15);
      v17 = v16;
      if ( v16 >= 0 )
      {
        if ( v16 )
        {
          *((_BYTE *)this + 96) = 0;
        }
        else
        {
          if ( *((_BYTE *)this + 96) )
          {
            v17 = CoResumeClassObjects();
            if ( v17 < 0 )
            {
              SetEvent(*((HANDLE *)this + 10));
              WaitForSingleObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2 * *((_DWORD *)this + 22));
            }
            CloseHandle((HANDLE)0xFFFFFFFFFFFFFFFFLL);
          }
          else
          {
            v17 = CoResumeClassObjects();
          }
          if ( v17 < 0 )
          {
            v30 = (__int64 *)qword_140055C70;
            v31 = 0;
            v32 = qword_140055C78;
            while ( (unsigned __int64)v30 < v32 && !v31 )
            {
              v33 = *v30;
              if ( *v30 && *(_DWORD *)(v33 + 40) )
              {
                v31 = CoRevokeClassObject(*(_DWORD *)(v33 + 40));
                v32 = qword_140055C78;
              }
              ++v30;
            }
          }
        }
      }
      v5 = v17;
      v18 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) < 4u )
      {
        goto LABEL_45;
      }
      v21 = 24LL;
      v22 = (unsigned int)v17;
LABEL_60:
      WPP_SF_D(*(_QWORD *)(v18 + 16), v21, &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids, v22);
      goto LABEL_45;
    }
    v29 = GetLastError();
    v5 = v29;
    if ( v29 > 0 )
      v5 = (unsigned __int16)v29 | 0x80070000;
    v18 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      v21 = 22LL;
      v22 = (unsigned int)v5;
      goto LABEL_60;
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        21LL,
        &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids);
    }
    v5 = -2147467259;
  }
LABEL_45:
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
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      25LL,
      &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids,
      (unsigned int)v5);
  }
  return (unsigned int)v5;
}
