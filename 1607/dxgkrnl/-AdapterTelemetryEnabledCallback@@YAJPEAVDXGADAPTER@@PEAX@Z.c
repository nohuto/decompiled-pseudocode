/*
 * XREFs of ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0022B30
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E477C (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     MonitorInventoryTelemetry @ 0x1C01B05F8 (MonitorInventoryTelemetry.c)
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
  _BYTE v11[80]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v12[8]; // [rsp+70h] [rbp-58h] BYREF

  memset(v12, 0, sizeof(v12));
  EtwActivityIdControl(3u, (LPGUID)&v12[1]);
  v12[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v12[3]) = 33;
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
      goto LABEL_5;
    }
  }
  else if ( (*((_DWORD *)a1 + 75) & 4) == 0 )
  {
    DXGADAPTER::AdapterTelemetry(a1, 1LL, v12);
    MonitorInventoryTelemetry(a1);
  }
  LODWORD(v8) = 0;
LABEL_5:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
  return (unsigned int)v8;
}
