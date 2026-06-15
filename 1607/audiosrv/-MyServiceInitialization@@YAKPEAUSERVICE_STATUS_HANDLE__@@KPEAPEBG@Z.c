/*
 * XREFs of ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x18002F478
 * Callers:
 *     ServiceStart @ 0x180031A48 (ServiceStart.c)
 * Callees:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x1800308D0 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 *     ?RegisterPnpNotifications@CAudioSrv@@UEAAJPEAUSERVICE_STATUS_HANDLE__@@@Z @ 0x180030B40 (-RegisterPnpNotifications@CAudioSrv@@UEAAJPEAUSERVICE_STATUS_HANDLE__@@@Z.c)
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180030C50 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 *     ?InitializeAudioThreadpool@@YAJXZ @ 0x180031174 (-InitializeAudioThreadpool@@YAJXZ.c)
 *     McGenEventRegister @ 0x18003123C (McGenEventRegister.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

unsigned int __fastcall MyServiceInitialization(
        struct SERVICE_STATUS_HANDLE__ *a1,
        DWORD a2,
        const unsigned __int16 **a3)
{
  unsigned int result; // eax
  __int64 v5; // rdx
  CAudioSrv *v6; // rax
  unsigned int Instance; // ebx
  __int64 (__fastcall *v8)(CAudioSrv *__hidden, int); // rax
  unsigned int v9; // eax
  __int64 v10; // rdx
  int (*v11)(CAudioSrv *__hidden, struct SERVICE_STATUS_HANDLE__ *); // rax
  unsigned int v12; // eax
  __int64 (__fastcall *v13)(CAudioSrv *__hidden, int); // rax
  int v14; // eax
  int v15; // ebx
  DWORD LastError; // eax
  DWORD v17; // eax
  DWORD ThreadId; // [rsp+48h] [rbp+10h] BYREF

  ThreadId = a2;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids);
  }
  result = CoInitializeEx(0LL, 0);
  if ( result <= 1 )
  {
    v6 = g_AudioService;
    *((_QWORD *)g_AudioService + 1) = 0LL;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 6) = 0LL;
    *((_DWORD *)v6 + 14) = 0;
    *((_DWORD *)v6 + 15) = 0;
    *((_DWORD *)v6 + 16) = 0;
    McGenEventRegister(&AUDIO_EVENT_PROVIDER, v5, &AUDIO_EVENT_PROVIDER_Context, &Microsoft_Windows_AudioHandle);
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 3u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 (LPVOID *)&g_DeviceEnumerator);
    if ( !Instance )
    {
      g_WorkerEventPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
      if ( g_WorkerEventPort )
        goto LABEL_8;
      LastError = GetLastError();
      Instance = LastError;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids, LastError);
      }
      if ( !Instance )
      {
LABEL_8:
        Instance = InitializeAudioThreadpool();
        if ( !Instance )
        {
          g_EventWorkerThreadHandle = CreateThread(0LL, 0LL, EventWorkerThread, 0LL, 0, &ThreadId);
          if ( !g_EventWorkerThreadHandle )
          {
            v17 = GetLastError();
            Instance = v17;
            if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids, v17);
            }
          }
        }
      }
    }
    v8 = **(__int64 (__fastcall ***)(CAudioSrv *__hidden, int))g_AudioService;
    if ( v8 == CAudioSrv::Initialize )
      v9 = CAudioSrv::Initialize(g_AudioService, Instance);
    else
      v9 = v8(g_AudioService, Instance);
    v10 = v9;
    if ( !v9 )
    {
      v11 = *(int (**)(CAudioSrv *__hidden, struct SERVICE_STATUS_HANDLE__ *))(*(_QWORD *)g_AudioService + 8LL);
      if ( v11 == CAudioSrv::RegisterPnpNotifications )
        v12 = CAudioSrv::RegisterPnpNotifications(g_AudioService, a1);
      else
        v12 = ((__int64 (__fastcall *)(CAudioSrv *, struct SERVICE_STATUS_HANDLE__ *))v11)(g_AudioService, a1);
      v10 = v12;
    }
    v13 = *(__int64 (__fastcall **)(CAudioSrv *__hidden, int))(*(_QWORD *)g_AudioService + 16LL);
    if ( v13 == CAudioSrv::EndInitialization )
      v14 = CAudioSrv::EndInitialization(g_AudioService, v10);
    else
      v14 = v13(g_AudioService, v10);
    v15 = v14;
    CoUninitialize();
    return v15;
  }
  return result;
}
