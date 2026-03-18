/*
 * XREFs of ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C000E798
 * Callers:
 *     MonitorCreateMonitorManager @ 0x1C00DE5E4 (MonitorCreateMonitorManager.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

MONITOR_MGR *__fastcall MONITOR_MGR::MONITOR_MGR(MONITOR_MGR *this, struct ADAPTER_DISPLAY *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rax
  __int64 v7; // rax

  *((_DWORD *)this + 30) = 0;
  *(_DWORD *)this = 16777217;
  *((_WORD *)this + 2) = 0;
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 17) = (char *)this + 128;
  *((_QWORD *)this + 16) = (char *)this + 128;
  *((_QWORD *)this + 19) = (char *)this + 144;
  *((_QWORD *)this + 18) = (char *)this + 144;
  *((_DWORD *)this + 40) = -1;
  *((_DWORD *)this + 70) = 0;
  *((_BYTE *)this + 164) = 1;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v4 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v4 + 24) = this;
  *(_QWORD *)(v4 + 32) = *((_QWORD *)a2 + 2);
  ExInitializeResourceLite((PERESOURCE)((char *)this + 16));
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)this + 3);
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)this + 4);
  v5 = operator new[](0x30uLL, 0x4D677844u, (enum _POOL_TYPE)512);
  *((_QWORD *)this + 96) = v5;
  if ( v5 )
  {
    v5[4] = 1;
    *(_DWORD *)(*((_QWORD *)this + 96) + 20LL) = 0;
    KeInitializeEvent((PRKEVENT)(*((_QWORD *)this + 96) + 24LL), NotificationEvent, 1u);
    ExInterlockedInsertTailList(
      &MONITOR_MGR::_MonitorPendingEventTraceHead,
      *((PLIST_ENTRY *)this + 96),
      &MONITOR_MGR::_MonitorPendingEventTraceLock);
  }
  return this;
}
