/*
 * XREFs of ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C000A900
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z @ 0x1C00784E4 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z.c)
 *     MonitorInventoryTelemetry @ 0x1C00B1598 (MonitorInventoryTelemetry.c)
 */

__int64 __fastcall AdapterTelemetryEnabledCallback(struct DXGADAPTER *a1, void *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v10; // rax
  _BYTE v11[72]; // [rsp+20h] [rbp-48h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, a1, 0LL);
  v3 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11);
  v8 = v3;
  if ( v3 < 0 )
  {
    if ( v3 != -1073741130 )
    {
      v10 = WdLogNewEntry5_WdWarning(v5, v4, v6, v7);
      *(_QWORD *)(v10 + 24) = a1;
      *(_QWORD *)(v10 + 32) = v8;
      WdLogEvent5_WdWarning(v10);
      goto LABEL_6;
    }
  }
  else if ( (*((_DWORD *)a1 + 71) & 2) == 0 )
  {
    DXGADAPTER::AdapterTelemetry(a1, 1LL);
    MonitorInventoryTelemetry(a1);
  }
  LODWORD(v8) = 0;
LABEL_6:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
  return (unsigned int)v8;
}
