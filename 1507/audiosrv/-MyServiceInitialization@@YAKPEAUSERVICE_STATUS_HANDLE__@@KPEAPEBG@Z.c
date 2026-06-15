/*
 * XREFs of ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x180039F48
 * Callers:
 *     ServiceStart @ 0x180039720 (ServiceStart.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     McGenEventRegister @ 0x180039E48 (McGenEventRegister.c)
 *     ?InitializeAudioThreadpool@@YAJXZ @ 0x180039E80 (-InitializeAudioThreadpool@@YAJXZ.c)
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x18003A6B0 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 *     ?RegisterPnpNotifications@CAudioSrv@@UEAAJPEAUSERVICE_STATUS_HANDLE__@@@Z @ 0x18003A950 (-RegisterPnpNotifications@CAudioSrv@@UEAAJPEAUSERVICE_STATUS_HANDLE__@@@Z.c)
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x18003AA60 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

unsigned int __fastcall MyServiceInitialization(
        struct SERVICE_STATUS_HANDLE__ *a1,
        DWORD a2,
        const unsigned __int16 **a3)
{
  unsigned int result; // eax
  CAudioSrv *v5; // rax
  unsigned int Instance; // ebx
  __int64 (__fastcall *v7)(CAudioSrv *__hidden, int); // rsi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int (*v10)(CAudioSrv *__hidden, struct SERVICE_STATUS_HANDLE__ *); // rdi
  int v11; // eax
  __int64 (__fastcall *v12)(CAudioSrv *__hidden, int); // rsi
  int v13; // eax
  int v14; // ebx
  DWORD LastError; // eax
  DWORD v16; // eax
  DWORD ThreadId; // [rsp+48h] [rbp+10h] BYREF

  ThreadId = a2;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xAu,
      (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids);
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
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
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
          g_EventWorkerThreadHandle = CreateThread(0LL, 0LL, EventWorkerThread, 0LL, 0, &ThreadId);
          if ( !g_EventWorkerThreadHandle )
          {
            v16 = GetLastError();
            Instance = v16;
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
            {
              WPP_SF_D(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                0xDu,
                (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids,
                v16);
            }
          }
        }
      }
    }
    v7 = **(__int64 (__fastcall ***)(CAudioSrv *__hidden, int))g_AudioService;
    if ( v7 == CAudioSrv::Initialize )
      v8 = CAudioSrv::Initialize(g_AudioService, Instance);
    else
      v8 = v7(g_AudioService, Instance);
    v9 = v8;
    if ( !v8 )
    {
      v10 = *(int (**)(CAudioSrv *__hidden, struct SERVICE_STATUS_HANDLE__ *))(*(_QWORD *)g_AudioService + 8LL);
      if ( v10 == CAudioSrv::RegisterPnpNotifications )
        v11 = CAudioSrv::RegisterPnpNotifications(g_AudioService, a1);
      else
        v11 = ((__int64 (__fastcall *)(CAudioSrv *, struct SERVICE_STATUS_HANDLE__ *))v10)(g_AudioService, a1);
      v9 = v11;
    }
    v12 = *(__int64 (__fastcall **)(CAudioSrv *__hidden, int))(*(_QWORD *)g_AudioService + 16LL);
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
