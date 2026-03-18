/*
 * XREFs of ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C007AE44
 * Callers:
 *     MonitorGetMonitorHandle @ 0x1C00BA610 (MonitorGetMonitorHandle.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGMONITOR::_AddReference(DXGMONITOR *this, void *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)((char *)this + 344), a2, &byte_1C00FF410, 1u, 0x20u) < 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v3);
  }
}
