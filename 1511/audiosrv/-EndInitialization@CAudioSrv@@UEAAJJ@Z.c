/*
 * XREFs of ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x18003BE60
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x18003CBA4 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     Template_zq @ 0x180002EC8 (Template_zq.c)
 *     _TlgKeywordOn @ 0x180005DB8 (_TlgKeywordOn.c)
 *     ?CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180033C10 (-CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x18003C4D8 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     ?ListenTo_Initialize@@YAJXZ @ 0x18003DDB8 (-ListenTo_Initialize@@YAJXZ.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     _TlgWrite @ 0x180069F24 (_TlgWrite.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::EndInitialization(CAudioSrv *this, HRESULT a2)
{
  const GUID *v2; // r9
  HRESULT Instance; // eax
  PTP_WORK (__fastcall *v5)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *); // rdi
  PTP_WORK Work; // rax
  int v7; // eax
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  HRESULT v11; // [rsp+48h] [rbp-29h] BYREF
  DWORD pdwType[2]; // [rsp+50h] [rbp-21h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-19h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp-11h] BYREF
  __int64 v15; // [rsp+68h] [rbp-9h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-1h] BYREF
  HRESULT *v17; // [rsp+90h] [rbp+1Fh]
  int v18; // [rsp+98h] [rbp+27h]
  int v19; // [rsp+9Ch] [rbp+2Bh]

  v15 = -2LL;
  LODWORD(v2) = a2;
  v11 = a2;
  SecurityDescriptor = 0LL;
  if ( !a2 )
  {
    *(_QWORD *)pdwType = 0LL;
    Instance = CoCreateInstance(
                 &CLSID_GlobalOptions,
                 0LL,
                 1u,
                 &GUID_0000015b_0000_0000_c000_000000000046,
                 (LPVOID *)pdwType);
    v11 = Instance;
    if ( Instance < 0 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Cu,
          (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids,
          Instance);
      }
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)pdwType + 24LL))(
              *(_QWORD *)pdwType,
              5LL,
              1LL);
    }
    if ( *(_QWORD *)pdwType )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)pdwType + 16LL))(*(_QWORD *)pdwType);
    if ( !*((_QWORD *)this + 24) )
    {
      v5 = *(PTP_WORK (__fastcall **)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *))(*(_QWORD *)ThreadPool + 56LL);
      if ( v5 == CAudioThreadPool::CreateWork )
        Work = CAudioThreadPool::CreateWork(
                 ThreadPool,
                 (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *))CAudioSrv::OnDeviceWorkItem,
                 this);
      else
        Work = v5(
                 ThreadPool,
                 (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *))CAudioSrv::OnDeviceWorkItem,
                 this);
      *((_QWORD *)this + 24) = Work;
    }
    LODWORD(v2) = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)&g_DeviceEnumerator + 48LL))(
                    *(_QWORD *)&g_DeviceEnumerator,
                    (char *)this + 64);
    v11 = (int)v2;
    if ( (int)v2 < 0 )
    {
LABEL_22:
      if ( !(_DWORD)v2 )
        goto LABEL_23;
      goto LABEL_34;
    }
    *((_DWORD *)this + 24) = 1;
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)",
           1u,
           &SecurityDescriptor,
           0LL) )
    {
      LODWORD(v2) = v11;
    }
    else
    {
      LODWORD(v2) = GetLastError();
      v11 = (int)v2;
    }
    if ( !(_DWORD)v2 )
    {
      LODWORD(v2) = StartRpcServer((unsigned __int16 *)this, L"Audiosrv", &unk_1800AEA40, SecurityDescriptor);
      v11 = (int)v2;
      *((_DWORD *)this + 12) = (_DWORD)v2 == 0;
      if ( !(_DWORD)v2 )
      {
        LODWORD(v2) = StartRpcServer((unsigned __int16 *)this, L"PlaybackManagerRpc", L"`", 0LL);
        v11 = (int)v2;
        *((_DWORD *)this + 13) = (_DWORD)v2 == 0;
        if ( !(_DWORD)v2 )
        {
          LODWORD(v2) = StartRpcServer((unsigned __int16 *)this, L"AudioSrvDiagnosticsRpc", &unk_1800AEAA0, 0LL);
          v11 = (int)v2;
          *((_DWORD *)this + 14) = (_DWORD)v2 == 0;
          if ( !(_DWORD)v2 )
          {
            pcbData = 4;
            if ( RegGetValueW(
                   HKEY_LOCAL_MACHINE,
                   L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                   L"EnableCaptureMonitor",
                   0x18u,
                   0LL,
                   pdwType,
                   &pcbData)
              || pdwType[0] )
            {
              v7 = ListenTo_Initialize();
              if ( v7 < 0 )
              {
                if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
                  Template_zq((__int64)this, (__int64)&EVT_AUDIOSRV_FAIL_SUBSYSTEM_STARTUP, L"ListenTo", v7);
              }
              else
              {
                *((_DWORD *)this + 22) = 1;
              }
            }
            LODWORD(v2) = v11;
            goto LABEL_22;
          }
        }
      }
    }
  }
LABEL_34:
  if ( (unsigned int)dword_1800E5500 > 2 && TlgKeywordOn(this, 0x400000000000uLL) )
  {
    v17 = &v11;
    v18 = 4;
    v19 = 0;
    TlgWrite(v9, &unk_1800C4A69, v10, v2, 3u, &pData);
    LODWORD(v2) = v11;
  }
LABEL_23:
  if ( SecurityDescriptor )
  {
    LocalFree(SecurityDescriptor);
    LODWORD(v2) = v11;
  }
  return (unsigned int)v2;
}
