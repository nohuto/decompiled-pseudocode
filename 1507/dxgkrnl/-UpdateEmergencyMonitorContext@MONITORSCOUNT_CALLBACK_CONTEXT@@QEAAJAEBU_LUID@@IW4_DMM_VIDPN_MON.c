/*
 * XREFs of ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0151734
 * Callers:
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0151318 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00AE364 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 */

__int64 __fastcall MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(
        __int64 a1,
        struct _LUID *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // esi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  _QWORD *v14; // rax
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  _BYTE v22[64]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a3;
  Global = DXGGLOBAL::GetGlobal(a1, (__int64)a2, a3, a4);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a2);
  v13 = (__int64)v8;
  if ( !v8 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    v14[3] = 0LL;
    v14[4] = a2->HighPart;
    v14[5] = a2->LowPart;
    return 3223191554LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v8, 0LL);
  v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v13);
  if ( v16 >= 0 )
  {
    MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, v13, v4);
    goto LABEL_7;
  }
  if ( v16 == -1073741130 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
    v21[3] = v13;
    v21[4] = (int)HIDWORD(*(_QWORD *)(v13 + 252));
    v21[5] = *(unsigned int *)(v13 + 252);
LABEL_7:
    v16 = 0;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
  return (unsigned int)v16;
}
