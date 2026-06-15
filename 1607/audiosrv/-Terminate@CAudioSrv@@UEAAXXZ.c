/*
 * XREFs of ?Terminate@CAudioSrv@@UEAAXXZ @ 0x180053EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??R?$default_delete@VCPdcActivationClient@@@std@@QEBAXPEAVCPdcActivationClient@@@Z @ 0x1800359C8 (--R-$default_delete@VCPdcActivationClient@@@std@@QEBAXPEAVCPdcActivationClient@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180050610 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x180053FD0 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ?MME_ServiceStop@@YAXXZ @ 0x180079C28 (-MME_ServiceStop@@YAXXZ.c)
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x180083AF8 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x180084E1C (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 */

void __fastcall CAudioSrv::Terminate(CAudioSrv *this)
{
  __int64 v2; // rcx
  CPdcActivationClient *v3; // rdx
  CAudioDGProcess *v4; // rcx
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  void *v6; // rcx
  _QWORD *v7; // rax
  CKsNotificationsMonitor *v8; // rbx

  if ( g_ADGProcess )
    CAudioDGProcess::CancelADGTerminationTimer(g_ADGProcess);
  CAudioSrv::VAD_AudiosrvServiceStop(this);
  v3 = (CPdcActivationClient *)g_pdcActivationClient;
  g_pdcActivationClient = 0LL;
  if ( v3 )
    std::default_delete<CPdcActivationClient>::operator()(v2, v3);
  MME_ServiceStop();
  if ( g_ADGProcess )
  {
    CAudioDGProcess::TerminateADG(v4);
    v5 = g_ADGProcess;
    if ( g_ADGProcess )
    {
      DeleteCriticalSection((LPCRITICAL_SECTION)((char *)g_ADGProcess + 48));
      DeleteCriticalSection(v5);
      operator delete(v5, (const struct std::nothrow_t *)0x90);
    }
    g_ADGProcess = 0LL;
  }
  while ( 1 )
  {
    v6 = g_lstKsNotificationMonitors;
    if ( !g_lstKsNotificationMonitors )
      break;
    v7 = *(_QWORD **)g_lstKsNotificationMonitors;
    v8 = (CKsNotificationsMonitor *)*((_QWORD *)g_lstKsNotificationMonitors + 2);
    g_lstKsNotificationMonitors = v7;
    if ( v7 )
      v7[1] = 0LL;
    else
      qword_1800CB550 = 0LL;
    operator delete(v6);
    --dword_1800CB558;
    CKsNotificationsMonitor::Dispose(v8);
    (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( g_bKsNotificationLockInitialized )
    DeleteCriticalSection(&g_csKsNotificationMonitors);
}
