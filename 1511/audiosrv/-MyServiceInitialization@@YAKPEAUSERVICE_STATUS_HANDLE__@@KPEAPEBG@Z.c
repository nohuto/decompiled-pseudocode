/*
 * XREFs of ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x18003CBA4
 * Callers:
 *     ServiceStart @ 0x18003DAF0 (ServiceStart.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x18003BE60 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 *     ?RegisterPnpNotifications@CAudioSrv@@UEAAJPEAUSERVICE_STATUS_HANDLE__@@@Z @ 0x18003C100 (-RegisterPnpNotifications@CAudioSrv@@UEAAJPEAUSERVICE_STATUS_HANDLE__@@@Z.c)
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x18003C210 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 *     ?InitializeAudioThreadpool@@YAJXZ @ 0x18003CD58 (-InitializeAudioThreadpool@@YAJXZ.c)
 *     McGenEventRegister @ 0x18003CE20 (McGenEventRegister.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

unsigned int __fastcall MyServiceInitialization(
        struct SERVICE_STATUS_HANDLE__ *a1,
        DWORD a2,
        const unsigned __int16 **a3)
{
  unsigned int result; // eax
  CAudioSrv *v5; // rax
  unsigned int Instance; // ebx
  __int64 (__fastcall *v7)(CAudioSrv *, unsigned int); // rsi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 (__fastcall *v10)(HPOWERNOTIFY *, struct SERVICE_STATUS_HANDLE__ *); // rdi
  unsigned int v11; // eax
  __int64 (__fastcall *v12)(CAudioSrv *, HRESULT); // rsi
  int v13; // eax
  int v14; // ebx
  DWORD LastError; // eax
  DWORD v16; // eax
  DWORD ThreadId; // [rsp+48h] [rbp+10h] BYREF

  ThreadId = a2;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids);
  }
  result = CoInitializeEx(0LL, 0);
  if ( result <= 1 )
  {
    v5 = g_AudioService;
    *((_QWORD *)g_AudioService + 1) = 0LL;
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    *((_DWORD *)v5 + 12) = 0;
    *((_DWORD *)v5 + 13) = 0;
    *((_DWORD *)v5 + 14) = 0;
    McGenEventRegister();
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
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xCu,
          (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids,
          LastError);
      }
      if ( !Instance )
      {
LABEL_8:
        Instance = InitializeAudioThreadpool();
        if ( !Instance )
        {
          g_EventWorkerThreadHandle = CreateThread(
                                        0LL,
                                        0LL,
                                        (LPTHREAD_START_ROUTINE)EventWorkerThread,
                                        0LL,
                                        0,
                                        &ThreadId);
          if ( !g_EventWorkerThreadHandle )
          {
            v16 = GetLastError();
            Instance = v16;
            if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_D(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0xDu,
                (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids,
                v16);
            }
          }
        }
      }
    }
    v7 = **(__int64 (__fastcall ***)(CAudioSrv *, unsigned int))g_AudioService;
    if ( v7 == CAudioSrv::Initialize )
      v8 = CAudioSrv::Initialize(g_AudioService, Instance);
    else
      v8 = v7(g_AudioService, Instance);
    v9 = v8;
    if ( !v8 )
    {
      v10 = *(__int64 (__fastcall **)(HPOWERNOTIFY *, struct SERVICE_STATUS_HANDLE__ *))(*(_QWORD *)g_AudioService + 8LL);
      if ( v10 == CAudioSrv::RegisterPnpNotifications )
        v11 = CAudioSrv::RegisterPnpNotifications((HPOWERNOTIFY *)g_AudioService, a1);
      else
        v11 = v10((HPOWERNOTIFY *)g_AudioService, a1);
      v9 = v11;
    }
    v12 = *(__int64 (__fastcall **)(CAudioSrv *, HRESULT))(*(_QWORD *)g_AudioService + 16LL);
    if ( v12 == CAudioSrv::EndInitialization )
      v13 = CAudioSrv::EndInitialization(g_AudioService, v9);
    else
      v13 = v12(g_AudioService, v9);
    v14 = v13;
    CoUninitialize();
    return v14;
  }
  return result;
}
