/*
 * XREFs of ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x1800308D0
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x18002F478 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004A28 (_TlgKeywordOn.c)
 *     ?CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x1800161B0 (-CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x180030F00 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     ?ListenTo_Initialize@@YAJXZ @ 0x1800313A4 (-ListenTo_Initialize@@YAJXZ.c)
 *     Template_zq @ 0x180034658 (Template_zq.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::EndInitialization(CAudioSrv *this, HRESULT a2)
{
  const GUID *v2; // r9
  HRESULT Instance; // eax
  PTP_WORK (__fastcall *v5)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *); // rax
  PTP_WORK Work; // rax
  unsigned __int16 *v7; // rcx
  unsigned __int16 *v8; // rcx
  unsigned __int16 *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  HRESULT v15; // [rsp+48h] [rbp-9h] BYREF
  DWORD pdwType[2]; // [rsp+50h] [rbp-1h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+7h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor[2]; // [rsp+60h] [rbp+Fh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp+1Fh] BYREF
  HRESULT *v20; // [rsp+90h] [rbp+3Fh]
  int v21; // [rsp+98h] [rbp+47h]
  int v22; // [rsp+9Ch] [rbp+4Bh]

  SecurityDescriptor[1] = (PSECURITY_DESCRIPTOR)-2LL;
  LODWORD(v2) = a2;
  v15 = a2;
  SecurityDescriptor[0] = 0LL;
  if ( !a2 )
  {
    *(_QWORD *)pdwType = 0LL;
    Instance = CoCreateInstance(
                 &CLSID_GlobalOptions,
                 0LL,
                 1u,
                 &GUID_0000015b_0000_0000_c000_000000000046,
                 (LPVOID *)pdwType);
    v15 = Instance;
    if ( Instance < 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          25LL,
          &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids,
          (unsigned int)Instance);
      }
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)pdwType + 24LL))(
              *(_QWORD *)pdwType,
              5LL,
              1LL);
    }
    if ( *(_QWORD *)pdwType )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)pdwType + 16LL))(*(_QWORD *)pdwType);
    if ( !*((_QWORD *)this + 25) )
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
      *((_QWORD *)this + 25) = Work;
    }
    LODWORD(v2) = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)&g_DeviceEnumerator + 48LL))(
                    *(_QWORD *)&g_DeviceEnumerator,
                    (char *)this + 72);
    v15 = (int)v2;
    if ( (int)v2 < 0 )
    {
LABEL_22:
      if ( !(_DWORD)v2 )
        goto LABEL_23;
      goto LABEL_34;
    }
    *((_DWORD *)this + 27) = 1;
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)",
           1u,
           SecurityDescriptor,
           0LL) )
    {
      LODWORD(v2) = v15;
    }
    else
    {
      LODWORD(v2) = GetLastError();
      v15 = (int)v2;
    }
    if ( !(_DWORD)v2 )
    {
      LODWORD(v2) = StartRpcServer(v7, L"Audiosrv", &unk_1800933E0, SecurityDescriptor[0]);
      v15 = (int)v2;
      *((_DWORD *)this + 14) = (_DWORD)v2 == 0;
      if ( !(_DWORD)v2 )
      {
        LODWORD(v2) = StartRpcServer(v8, L"PlaybackManagerRpc", &unk_180093380, 0LL);
        v15 = (int)v2;
        *((_DWORD *)this + 15) = (_DWORD)v2 == 0;
        if ( !(_DWORD)v2 )
        {
          LODWORD(v2) = StartRpcServer(v9, L"AudioSrvDiagnosticsRpc", &unk_180093320, 0LL);
          v15 = (int)v2;
          *((_DWORD *)this + 16) = (_DWORD)v2 == 0;
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
              v10 = ListenTo_Initialize();
              if ( v10 < 0 )
              {
                if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
                  Template_zq(v11, &EVT_AUDIOSRV_FAIL_SUBSYSTEM_STARTUP, L"ListenTo", (unsigned int)v10);
              }
              else
              {
                *((_DWORD *)this + 26) = 1;
              }
            }
            LODWORD(v2) = v15;
            goto LABEL_22;
          }
        }
      }
    }
  }
LABEL_34:
  if ( dword_1800CA040 > 2u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800CA040, 0x400000000000uLL) )
  {
    v20 = &v15;
    v21 = 4;
    v22 = 0;
    TlgWrite(v13, &unk_1800A7D95, v14, v2, 3u, &pData);
    LODWORD(v2) = v15;
  }
LABEL_23:
  if ( SecurityDescriptor[0] )
  {
    LocalFree(SecurityDescriptor[0]);
    LODWORD(v2) = v15;
  }
  return (unsigned int)v2;
}
