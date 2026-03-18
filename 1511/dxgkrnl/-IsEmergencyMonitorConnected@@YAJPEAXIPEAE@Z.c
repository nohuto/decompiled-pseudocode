/*
 * XREFs of ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00ADA04
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00AD640 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00900C8 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C00ADA98 (MonitorGetNumConnectedMonitor.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C00ADB10 (MonitorIsUsingSimulatedMonitor.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C0165028 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 */

__int64 __fastcall IsEmergencyMonitorConnected(DXGADAPTER *this, __int64 a2, unsigned __int8 *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD *v8; // rbx
  __int64 CurrentProcess; // rax
  _BYTE v10[88]; // [rsp+20h] [rbp-58h] BYREF

  *a3 = 0;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v10);
  v6 = v4;
  if ( v4 < 0 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v8[3] = v6;
    CurrentProcess = PsGetCurrentProcess();
    v8[5] = this;
    v8[4] = CurrentProcess;
    WdLogEvent5_WdError(v8);
  }
  else
  {
    MonitorIsUsingSimulatedMonitor(this);
    MonitorGetNumConnectedMonitor(this);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10);
  return (unsigned int)v6;
}
