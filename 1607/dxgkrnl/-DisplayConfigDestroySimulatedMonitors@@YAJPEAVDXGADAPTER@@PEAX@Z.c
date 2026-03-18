/*
 * XREFs of ?DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00D8AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C00D8B70 (MonitorDestroyAllSameTypeSimulatedMonitor.c)
 */

__int64 __fastcall DisplayConfigDestroySimulatedMonitors(struct DXGADAPTER *this, void *a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v11; // rax
  _QWORD v12[10]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 2622LL;
    WdLogEvent5_WdAssertion(v11);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireExclusive(v12);
  if ( v4 >= 0 )
  {
    v4 = MonitorDestroyAllSameTypeSimulatedMonitor(this);
    goto LABEL_8;
  }
  if ( v4 != -1073741130 )
  {
LABEL_8:
    v2 = v4;
    goto LABEL_6;
  }
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  v9[3] = this;
  v9[4] = *((int *)this + 68);
  v9[5] = *((unsigned int *)this + 67);
LABEL_6:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v12);
  return v2;
}
