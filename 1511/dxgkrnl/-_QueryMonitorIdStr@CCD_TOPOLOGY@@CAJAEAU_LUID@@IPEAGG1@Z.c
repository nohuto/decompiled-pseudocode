/*
 * XREFs of ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z @ 0x1C005D208
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00A2B34 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1C00011C8 (RtlStringCchLengthW.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     sub_1C005D37C @ 0x1C005D37C (sub_1C005D37C.c)
 *     MonitorIsHMDDevicePresent @ 0x1C005D554 (MonitorIsHMDDevicePresent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C008DB7C (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C008DC14 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C00A0070 (MonitorGetCCDMonitorID.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_QueryMonitorIdStr(
        struct _LUID *a1,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned __int16 a4,
        unsigned __int16 *a5)
{
  __int64 v6; // r15
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGADAPTER *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  VIDPN_MGR *v19; // r13
  int ConnectedMonitorHandle; // eax
  __int64 v21; // rcx
  size_t v22; // rbx
  int CCDMonitorID; // r14d
  int v24; // eax
  __int64 v25; // rcx
  NTSTATUS v26; // eax
  __int64 v27; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _BYTE v34[8]; // [rsp+20h] [rbp-60h] BYREF
  size_t pcchLength; // [rsp+28h] [rbp-58h] BYREF
  __int64 v36; // [rsp+30h] [rbp-50h] BYREF
  struct DXGADAPTER *v37; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v38[64]; // [rsp+40h] [rbp-40h] BYREF

  v6 = a2;
  Global = DXGGLOBAL::GetGlobal();
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
  v37 = v10;
  v15 = v10;
  if ( !v10 )
  {
    v29 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v29 + 24) = a1->HighPart;
    *(_QWORD *)(v29 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v29);
    LODWORD(v18) = -1073741810;
    goto LABEL_13;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, v10, 0LL);
  v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v38);
  v18 = v16;
  if ( v16 < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v30[3] = v18;
    v30[4] = v15;
    v30[5] = a1->HighPart;
    v30[6] = a1->LowPart;
    WdLogEvent5_WdError(v30);
    goto LABEL_12;
  }
  v19 = *(VIDPN_MGR **)(*((_QWORD *)v15 + 248) + 112LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v36, (__int64)v19);
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v19, v6, (struct HDXGMONITOR__ **)&pcchLength);
  v18 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v31[3] = v18;
    v31[4] = v6;
    v31[5] = v15;
    v31[6] = a1->HighPart;
    v31[7] = a1->LowPart;
    WdLogEvent5_WdError(v31);
    goto LABEL_11;
  }
  v22 = pcchLength;
  LODWORD(v18) = 0;
  v34[0] = 0;
  MonitorIsHMDDevicePresent(pcchLength, v34);
  if ( v34[0] )
  {
    *a5 = 0;
    goto LABEL_11;
  }
  CCDMonitorID = MonitorGetCCDMonitorID(v22, a4, a3);
  if ( CCDMonitorID == -2147483643 )
    CCDMonitorID = -1073741789;
  v24 = VIDPN_MGR::ReleaseMonitorHandle(v19, (struct HDXGMONITOR__ *)v22);
  v18 = v24;
  if ( v24 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdAssertion(v25);
    v32[4] = v6;
LABEL_21:
    v32[3] = v18;
    v32[5] = v22;
    v32[6] = a1->HighPart;
    v32[7] = a1->LowPart;
    WdLogEvent5_WdAssertion(v32);
    goto LABEL_11;
  }
  if ( CCDMonitorID < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v33[3] = CCDMonitorID;
    v33[4] = v6;
    v33[5] = v22;
    v33[6] = a1->HighPart;
    v33[7] = a1->LowPart;
    WdLogEvent5_WdError(v33);
    LODWORD(v18) = CCDMonitorID;
    goto LABEL_11;
  }
  v22 = a4;
  v26 = RtlStringCchLengthW(a3, a4, &pcchLength);
  v18 = v26;
  if ( v26 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdAssertion(v27);
    v32[4] = a3;
    goto LABEL_21;
  }
  *a5 = pcchLength;
LABEL_11:
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v36 + 40));
LABEL_12:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
LABEL_13:
  sub_1C005D37C(&v37);
  return (unsigned int)v18;
}
