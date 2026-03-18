/*
 * XREFs of ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z @ 0x1C00AF6E0
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C0064558 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     RtlStringCchLengthW @ 0x1C0008474 (RtlStringCchLengthW.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C009653C (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00965D4 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C0099B70 (MonitorGetCCDMonitorID.c)
 *     _BTL_TOPOLOGY_CONSTRUCTOR::AugmentTopology_::_24_::_AUTO::__AUTO @ 0x1C009C390 (_BTL_TOPOLOGY_CONSTRUCTOR--AugmentTopology_--_24_--_AUTO--__AUTO.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_QueryMonitorIdStr(
        struct _LUID *a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned __int16 *a5)
{
  unsigned __int16 v5; // r13
  __int64 v6; // rbp
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  DXGADAPTER *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  VIDPN_MGR *v19; // r12
  __int64 v20; // r9
  int ConnectedMonitorHandle; // eax
  __int64 v22; // rcx
  struct HDXGMONITOR__ *v23; // r15
  int CCDMonitorID; // ebx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  NTSTATUS v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  size_t pcchLength; // [rsp+20h] [rbp-78h] BYREF
  __int64 v44; // [rsp+28h] [rbp-70h] BYREF
  DXGADAPTER *v45; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v46[56]; // [rsp+38h] [rbp-60h] BYREF

  v5 = a4;
  v6 = (unsigned int)a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, (__int64)a3, a4);
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
  v45 = v10;
  v15 = v10;
  if ( !v10 )
  {
    v38 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v38 + 24) = a1->HighPart;
    *(_QWORD *)(v38 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v38);
    LODWORD(v18) = -1073741810;
    goto LABEL_12;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v46, v10, 0LL);
  v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v46);
  v18 = v16;
  if ( v16 < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v39[3] = v18;
    v39[4] = v15;
    v39[5] = a1->HighPart;
    v39[6] = a1->LowPart;
    WdLogEvent5_WdError(v39);
    goto LABEL_11;
  }
  v19 = *(VIDPN_MGR **)(*((_QWORD *)v15 + 247) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v44, (__int64)v19);
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(
                             v19,
                             (unsigned int)v6,
                             (struct HDXGMONITOR__ **)&pcchLength,
                             v20);
  v18 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v40[3] = v18;
    v40[4] = v6;
    v40[5] = v15;
    v40[6] = a1->HighPart;
    v40[7] = a1->LowPart;
    WdLogEvent5_WdError(v40);
    goto LABEL_10;
  }
  v23 = (struct HDXGMONITOR__ *)pcchLength;
  CCDMonitorID = MonitorGetCCDMonitorID((struct HDXGMONITOR__ *)pcchLength, v5, a3);
  if ( CCDMonitorID == -2147483643 )
    CCDMonitorID = -1073741789;
  v27 = VIDPN_MGR::ReleaseMonitorHandle(v19, v23, v25, v26);
  v18 = v27;
  if ( v27 < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
    v41[4] = v6;
    v41[5] = v23;
LABEL_19:
    v41[3] = v18;
    v41[6] = a1->HighPart;
    v41[7] = a1->LowPart;
    WdLogEvent5_WdAssertion(v41);
    goto LABEL_10;
  }
  if ( CCDMonitorID < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v29);
    v42[3] = CCDMonitorID;
    v42[4] = v6;
    v42[5] = v23;
    v42[6] = a1->HighPart;
    v42[7] = a1->LowPart;
    WdLogEvent5_WdError(v42);
    LODWORD(v18) = CCDMonitorID;
    goto LABEL_10;
  }
  v32 = RtlStringCchLengthW(a3, v5, &pcchLength);
  v18 = v32;
  if ( v32 < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
    v41[4] = a3;
    v41[5] = v5;
    goto LABEL_19;
  }
  *a5 = pcchLength;
LABEL_10:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v44 + 40));
LABEL_11:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46);
LABEL_12:
  BTL_TOPOLOGY_CONSTRUCTOR::AugmentTopology_::_24_::_AUTO::__AUTO(&v45);
  return (unsigned int)v18;
}
