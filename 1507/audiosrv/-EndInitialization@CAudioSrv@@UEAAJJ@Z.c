/*
 * XREFs of ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x18003A6B0
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x180039F48 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     Template_zq @ 0x180005150 (Template_zq.c)
 *     ?CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180006E10 (-CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     _TlgWrite @ 0x1800315C0 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     _TlgKeywordOn @ 0x180037F6C (_TlgKeywordOn.c)
 *     ?ListenTo_Initialize@@YAJXZ @ 0x180039994 (-ListenTo_Initialize@@YAJXZ.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x18003AD28 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::EndInitialization(CAudioSrv *this, HRESULT a2)
{
  const GUID *v2; // r8
  HRESULT Instance; // eax
  PTP_WORK (__fastcall *v5)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *); // rdi
  PTP_WORK Work; // rax
  int v7; // eax
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r9
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
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x1Cu,
          (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
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
      LODWORD(v2) = StartRpcServer((unsigned __int16 *)this, L"Audiosrv", L"`", SecurityDescriptor);
      v11 = (int)v2;
      *((_DWORD *)this + 12) = (_DWORD)v2 == 0;
      if ( !(_DWORD)v2 )
      {
        LODWORD(v2) = StartRpcServer((unsigned __int16 *)this, L"PlaybackManagerRpc", L"`", 0LL);
        v11 = (int)v2;
        *((_DWORD *)this + 13) = (_DWORD)v2 == 0;
        if ( !(_DWORD)v2 )
        {
          LODWORD(v2) = StartRpcServer((unsigned __int16 *)this, L"AudioSrvDiagnosticsRpc", L"`", 0LL);
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
  if ( (unsigned int)dword_1800E7500 > 5 && TlgKeywordOn(this, 0x400000000000uLL) )
  {
    v17 = &v11;
    v18 = 4;
    v19 = 0;
    TlgWrite(v9, &unk_1800C65F1, v2, v10, 3u, &pData);
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
