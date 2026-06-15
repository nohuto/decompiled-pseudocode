/*
 * XREFs of ?KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z @ 0x18009E704
 * Callers:
 *     ?DeviceRemovalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x180069520 (-DeviceRemovalEvent@CAudioSrv@@UEAAJV-$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocato.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x18009E540 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 */

void __fastcall KsNotifications_AudioInterfaceRemoval(const unsigned __int16 *a1)
{
  void **v2; // r10
  void **v3; // rdi
  CKsNotificationsMonitor *v4; // rsi
  void **v5; // r8
  void **v6; // rax
  const unsigned __int16 *v7; // rax
  int v8; // r9d
  int v9; // ecx

  EnterCriticalSection(&g_csKsNotificationMonitors);
  v2 = (void **)g_lstKsNotificationMonitors;
  v3 = (void **)g_lstKsNotificationMonitors;
  if ( g_lstKsNotificationMonitors )
  {
    do
    {
      v4 = 0LL;
      v5 = v3;
      v6 = v3;
      if ( v3 )
      {
        v3 = (void **)*v3;
        v4 = (CKsNotificationsMonitor *)v6[2];
      }
      v7 = a1;
      do
      {
        v8 = *(const unsigned __int16 *)((char *)v7 + *((_QWORD *)v4 + 2) - (_QWORD)a1);
        v9 = *v7 - v8;
        if ( v9 )
          break;
        ++v7;
      }
      while ( v8 );
      if ( !v9 )
      {
        if ( v5 == v2 )
          g_lstKsNotificationMonitors = *v5;
        else
          *(_QWORD *)v5[1] = *v5;
        if ( v5 == (void **)qword_1800E88C0 )
          qword_1800E88C0 = (__int64)v5[1];
        else
          *((_QWORD *)*v5 + 1) = v5[1];
        --dword_1800E88C8;
        *v5 = 0LL;
        v5[1] = 0LL;
        operator delete(v5);
        CKsNotificationsMonitor::Dispose(v4);
        (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v4 + 16LL))(v4);
        v2 = (void **)g_lstKsNotificationMonitors;
      }
    }
    while ( v3 );
  }
  LeaveCriticalSection(&g_csKsNotificationMonitors);
}
