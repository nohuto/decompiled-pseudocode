/*
 * XREFs of ?MyServiceTerminate@@YAXXZ @ 0x18009D88C
 * Callers:
 *     OnServiceShutdown @ 0x18009D220 (OnServiceShutdown.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     McGenEventUnregister @ 0x18009DCF0 (McGenEventUnregister.c)
 */

void MyServiceTerminate(void)
{
  bool v0; // si
  CAudioSrv *v1; // rdi
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  CAudioThreadPool *v5; // rdi
  struct _TP_CLEANUP_GROUP *v6; // rcx

  v0 = CoInitializeEx(0LL, 0) >= 0;
  (*(void (__fastcall **)(CAudioSrv *))(*(_QWORD *)g_AudioService + 24LL))(g_AudioService);
  v1 = g_AudioService;
  if ( *((_QWORD *)g_AudioService + 1) )
  {
    CM_Unregister_Notification();
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 1) = 0LL;
  }
  if ( *((_QWORD *)v1 + 2) )
  {
    CM_Unregister_Notification();
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 2) = 0LL;
  }
  v2 = (void *)*((_QWORD *)v1 + 4);
  if ( v2 )
  {
    PowerSettingUnregisterNotification(v2);
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 4) = 0LL;
  }
  v3 = (void *)*((_QWORD *)v1 + 3);
  if ( v3 )
  {
    PowerSettingUnregisterNotification(v3);
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 3) = 0LL;
  }
  v4 = (void *)*((_QWORD *)v1 + 5);
  if ( v4 )
  {
    PowerSettingUnregisterNotification(v4);
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 5) = 0LL;
  }
  if ( g_EventWorkerThreadHandle )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0xEu,
        (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids);
    }
    if ( g_WorkerEventPort )
      PostQueuedCompletionStatus(g_WorkerEventPort, 0xFFFFFFFF, 0LL, 0LL);
    WaitForSingleObject(g_EventWorkerThreadHandle, 0xFFFFFFFF);
    if ( (char *)g_EventWorkerThreadHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      CloseHandle(g_EventWorkerThreadHandle);
      g_EventWorkerThreadHandle = 0LL;
    }
    v1 = g_AudioService;
  }
  (*(void (__fastcall **)(CAudioSrv *))(*(_QWORD *)v1 + 32LL))(v1);
  if ( *(_QWORD *)&g_DeviceEnumerator )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&g_DeviceEnumerator + 16LL))(*(_QWORD *)&g_DeviceEnumerator);
    *(_QWORD *)&g_DeviceEnumerator = 0LL;
  }
  CleanupDeviceAPI();
  v5 = ThreadPool;
  if ( ThreadPool )
  {
    v6 = (struct _TP_CLEANUP_GROUP *)*((_QWORD *)ThreadPool + 10);
    if ( v6 )
    {
      CloseThreadpoolCleanupGroupMembers(v6, 0, 0LL);
      CloseThreadpoolCleanupGroup(*((PTP_CLEANUP_GROUP *)v5 + 10));
      *((_QWORD *)v5 + 10) = 0LL;
      v5 = ThreadPool;
    }
    if ( v5 )
      (**(void (__fastcall ***)(CAudioThreadPool *, __int64))v5)(v5, 1LL);
  }
  ThreadPool = 0LL;
  if ( (char *)g_WorkerEventPort - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_WorkerEventPort);
    g_WorkerEventPort = 0LL;
  }
  operator delete(g_AudioService);
  g_AudioService = 0LL;
  McGenEventUnregister();
  if ( v0 )
    CoUninitialize();
}
