/*
 * XREFs of ?DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00AEDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C00AEE74 (MonitorDestroyAllSameTypeSimulatedMonitor.c)
 */

__int64 __fastcall DisplayConfigDestroySimulatedMonitors(struct DXGADAPTER *this, void *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v13; // rax
  _QWORD v14[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0;
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v13 + 24) = 2485LL;
    WdLogEvent5_WdAssertion(v13);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, this, 0LL);
  v6 = COREADAPTERACCESS::AcquireExclusive(v14);
  if ( v6 >= 0 )
  {
    v6 = MonitorDestroyAllSameTypeSimulatedMonitor(this);
    goto LABEL_8;
  }
  if ( v6 != -1073741130 )
  {
LABEL_8:
    v4 = v6;
    goto LABEL_6;
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v11[3] = this;
  v11[4] = (int)HIDWORD(*(_QWORD *)((char *)this + 252));
  v11[5] = *((unsigned int *)this + 63);
LABEL_6:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
  return v4;
}
