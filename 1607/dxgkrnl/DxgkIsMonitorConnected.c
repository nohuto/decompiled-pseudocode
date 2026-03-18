/*
 * XREFs of DxgkIsMonitorConnected @ 0x1C014EC30
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01AC31C (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     MonitorIsMonitorConnected @ 0x1C00C3C08 (MonitorIsMonitorConnected.c)
 */

__int64 __fastcall DxgkIsMonitorConnected(__int64 a1, unsigned int a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // r14
  __int64 v6; // rax
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v9; // rax
  __int64 v10; // rcx
  DXGADAPTER *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rax
  int IsMonitorConnected; // eax
  __int64 v22; // rcx
  _BYTE v23[80]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+A8h] [rbp+38h] BYREF

  v4 = a2;
  if ( !a4 )
  {
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = 6721LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  *a4 = 0;
  Global = DXGGLOBAL::GetGlobal(a1);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, (struct _LUID)a1, &v25);
  v11 = v9;
  if ( !v9 )
  {
    v6 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v6 + 24) = SHIDWORD(a1);
    *(_QWORD *)(v6 + 32) = (unsigned int)a1;
    goto LABEL_3;
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v9) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 6742LL;
    WdLogEvent5_WdAssertion(v13);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, v11, 0LL);
  DXGADAPTER::ReleaseReference(v11);
  if ( *((_QWORD *)v11 + 266) )
  {
    v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23);
    v16 = v17;
    if ( v17 >= 0 )
    {
      if ( *((_BYTE *)v11 + 2053) )
      {
        v20 = WdLogNewEntry5_WdEvent(v18);
        *(_QWORD *)(v20 + 24) = SHIDWORD(a1);
        *(_QWORD *)(v20 + 32) = (unsigned int)a1;
        WdLogEvent5_WdEvent(v20);
        LODWORD(v16) = -1073741130;
        goto LABEL_17;
      }
      IsMonitorConnected = MonitorIsMonitorConnected(v11, (unsigned int)v4, 0LL, a4);
      v16 = IsMonitorConnected;
      if ( IsMonitorConnected >= 0 )
        goto LABEL_17;
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v19[3] = v4;
      v19[4] = SHIDWORD(a1);
      v19[5] = (unsigned int)a1;
      v19[6] = v16;
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v19[3] = SHIDWORD(a1);
      v19[4] = (unsigned int)a1;
      v19[5] = v16;
    }
    WdLogEvent5_WdError(v19);
    goto LABEL_17;
  }
  v15 = WdLogNewEntry5_WdError(v14);
  *(_QWORD *)(v15 + 24) = SHIDWORD(a1);
  *(_QWORD *)(v15 + 32) = (unsigned int)a1;
  WdLogEvent5_WdError(v15);
  LODWORD(v16) = -1073741811;
LABEL_17:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23);
  return (unsigned int)v16;
}
