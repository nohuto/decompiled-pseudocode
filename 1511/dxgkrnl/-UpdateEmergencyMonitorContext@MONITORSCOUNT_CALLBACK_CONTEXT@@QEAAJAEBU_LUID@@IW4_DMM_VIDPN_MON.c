/*
 * XREFs of ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0155984
 * Callers:
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01553A0 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00B9324 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 */

__int64 __fastcall MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(__int64 a1, struct _LUID *a2, int a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  _QWORD *v13; // rax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  _BYTE v21[64]; // [rsp+20h] [rbp-48h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1);
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a2);
  v12 = (__int64)v7;
  if ( !v7 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v13[3] = 0LL;
    v13[4] = a2->HighPart;
    v13[5] = a2->LowPart;
    return 3223191554LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v7, 0LL);
  v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v12);
  if ( v15 >= 0 )
  {
    MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, v12, a3);
    goto LABEL_7;
  }
  if ( v15 == -1073741130 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
    v20[3] = v12;
    v20[4] = (int)HIDWORD(*(_QWORD *)(v12 + 252));
    v20[5] = *(unsigned int *)(v12 + 252);
LABEL_7:
    v15 = 0;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
  return (unsigned int)v15;
}
