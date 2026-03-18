/*
 * XREFs of ?GetMonitorIdFromTargetId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C005F310
 * Callers:
 *     ?AppendMonitorId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C005F29C (-AppendMonitorId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 * Callees:
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C009653C (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00965D4 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C0099B70 (MonitorGetCCDMonitorID.c)
 */

__int64 __fastcall GetMonitorIdFromTargetId(
        unsigned int a1,
        struct _LUID *a2,
        struct VIDPN_MGR *a3,
        unsigned __int16 a4,
        unsigned __int16 *a5)
{
  __int64 v6; // rsi
  int ConnectedMonitorHandle; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  struct HDXGMONITOR__ *v13; // rbp
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  struct HDXGMONITOR__ *v23; // [rsp+20h] [rbp-18h] BYREF

  v6 = a1;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(a3, a1, &v23);
  v11 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v21[5] = a2->HighPart;
    v21[6] = a2->LowPart;
    v21[3] = v11;
    goto LABEL_10;
  }
  v12 = a4;
  v13 = v23;
  LODWORD(v11) = MonitorGetCCDMonitorID(v23, v12, a5);
  if ( (_DWORD)v11 == -2147483643 )
    LODWORD(v11) = -1073741789;
  v14 = VIDPN_MGR::ReleaseMonitorHandle(a3, v13);
  v19 = v14;
  if ( v14 >= 0 )
  {
    if ( (int)v11 >= 0 )
      return (unsigned int)v11;
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v21[3] = (int)v11;
    v21[6] = a2->HighPart;
    v21[7] = a2->LowPart;
    v21[5] = v13;
LABEL_10:
    v21[4] = v6;
    WdLogEvent5_WdError(v21);
    return (unsigned int)v11;
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
  v22[6] = a2->HighPart;
  v22[7] = a2->LowPart;
  v22[3] = v19;
  v22[4] = v6;
  v22[5] = v13;
  WdLogEvent5_WdAssertion(v22);
  return (unsigned int)v19;
}
