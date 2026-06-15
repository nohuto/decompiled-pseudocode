/*
 * XREFs of ?KsNotifications_ServiceStop@@YAXXZ @ 0x18009B684
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x180069810 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x18009B3B0 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 */

void KsNotifications_ServiceStop(void)
{
  void *v0; // rcx
  _QWORD *v1; // rax
  CKsNotificationsMonitor *v2; // rdi

  while ( 1 )
  {
    v0 = g_lstKsNotificationMonitors;
    if ( !g_lstKsNotificationMonitors )
      break;
    v1 = *(_QWORD **)g_lstKsNotificationMonitors;
    v2 = (CKsNotificationsMonitor *)*((_QWORD *)g_lstKsNotificationMonitors + 2);
    g_lstKsNotificationMonitors = v1;
    if ( v1 )
      v1[1] = 0LL;
    else
      qword_1800E6890 = 0LL;
    operator delete(v0);
    --dword_1800E6898;
    CKsNotificationsMonitor::Dispose(v2);
    (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( g_bKsNotificationLockInitialized )
    DeleteCriticalSection(&g_csKsNotificationMonitors);
}
