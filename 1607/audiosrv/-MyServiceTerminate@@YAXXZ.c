/*
 * XREFs of ?MyServiceTerminate@@YAXXZ @ 0x180082EC0
 * Callers:
 *     OnServiceShutdown @ 0x180082870 (OnServiceShutdown.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     McGenEventUnregister @ 0x180083318 (McGenEventUnregister.c)
 */

void MyServiceTerminate(void)
{
  bool v0; // di
  CAudioSrv *v1; // rcx
  CAudioThreadPool *v2; // rbx
  struct _TP_CLEANUP_GROUP *v3; // rcx

  v0 = CoInitializeEx(0LL, 0) >= 0;
  (*(void (**)(void))(*(_QWORD *)g_AudioService + 24LL))();
  v1 = g_AudioService;
  if ( *((_QWORD *)g_AudioService + 1) )
  {
    CM_Unregister_Notification(*((_QWORD *)g_AudioService + 1));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 1) = 0LL;
  }
  if ( *((_QWORD *)v1 + 2) )
  {
    CM_Unregister_Notification(*((_QWORD *)v1 + 2));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 2) = 0LL;
  }
  if ( *((_QWORD *)v1 + 3) )
  {
    CM_Unregister_Notification(*((_QWORD *)v1 + 3));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 3) = 0LL;
  }
  if ( *((_QWORD *)v1 + 5) )
  {
    PowerSettingUnregisterNotification(*((HPOWERNOTIFY *)v1 + 5));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 5) = 0LL;
  }
  if ( *((_QWORD *)v1 + 4) )
  {
    PowerSettingUnregisterNotification(*((HPOWERNOTIFY *)v1 + 4));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 4) = 0LL;
  }
  if ( *((_QWORD *)v1 + 6) )
  {
    PowerSettingUnregisterNotification(*((HPOWERNOTIFY *)v1 + 6));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 6) = 0LL;
  }
  if ( g_EventWorkerThreadHandle )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids);
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
  v2 = ThreadPool;
  if ( ThreadPool )
  {
    v3 = (struct _TP_CLEANUP_GROUP *)*((_QWORD *)ThreadPool + 10);
    if ( v3 )
    {
      CloseThreadpoolCleanupGroupMembers(v3, 0, 0LL);
      CloseThreadpoolCleanupGroup(*((PTP_CLEANUP_GROUP *)v2 + 10));
      *((_QWORD *)v2 + 10) = 0LL;
      v2 = ThreadPool;
    }
    if ( v2 )
      (**(void (__fastcall ***)(CAudioThreadPool *, __int64))v2)(v2, 1LL);
  }
  ThreadPool = 0LL;
  if ( (char *)g_WorkerEventPort - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_WorkerEventPort);
    g_WorkerEventPort = 0LL;
  }
  if ( g_AudioService )
    (*(void (__fastcall **)(CAudioSrv *, __int64))(*(_QWORD *)g_AudioService + 104LL))(g_AudioService, 1LL);
  g_AudioService = 0LL;
  McGenEventUnregister(&Microsoft_Windows_AudioHandle);
  if ( v0 )
    CoUninitialize();
}
