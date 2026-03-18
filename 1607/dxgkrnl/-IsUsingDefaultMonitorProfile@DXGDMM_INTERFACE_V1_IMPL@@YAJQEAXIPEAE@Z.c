/*
 * XREFs of ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C01A6A70
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C0082CBC (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C0082D54 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorIsUsingDefaultMonitorProfile @ 0x1C01B0764 (MonitorIsUsingDefaultMonitorProfile.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::IsUsingDefaultMonitorProfile(
        DXGDMM_INTERFACE_V1_IMPL *this,
        void *const a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  __int64 v5; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  VIDPN_MGR *v15; // r14
  int ConnectedMonitorHandle; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rax
  struct HDXGMONITOR__ *v20; // rdi
  __int64 v21; // rax
  int IsUsingDefaultMonitorProfile; // eax
  __int64 v23; // rcx
  struct HDXGMONITOR__ *v25; // [rsp+50h] [rbp+18h] BYREF
  __int64 v26; // [rsp+58h] [rbp+20h] BYREF

  v5 = (unsigned int)a2;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6056);
  if ( a3 )
  {
    if ( !this )
    {
      v11 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v11 + 24) = 0LL;
LABEL_12:
      WdLogEvent5_WdError(v11);
      LODWORD(v10) = -1071775742;
      goto LABEL_24;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v13);
    }
    v14 = *((_QWORD *)this + 266);
    if ( !v14 )
    {
      v11 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v11 + 24) = this;
      goto LABEL_12;
    }
    v15 = *(VIDPN_MGR **)(v14 + 88);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v26, (__int64)v15);
    v25 = 0LL;
    ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v15, v5, &v25);
    v10 = ConnectedMonitorHandle;
    if ( ConnectedMonitorHandle == -1073741275 )
    {
      v18 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v18 + 24) = v5;
      *(_QWORD *)(v18 + 32) = this;
      WdLogEvent5_WdError(v18);
      LODWORD(v10) = -1071774920;
    }
    else
    {
      if ( ConnectedMonitorHandle >= 0 )
      {
        v20 = v25;
        if ( !v25 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v17);
          WdLogEvent5_WdAssertion(v21);
        }
        IsUsingDefaultMonitorProfile = MonitorIsUsingDefaultMonitorProfile(v20, a3);
        v10 = IsUsingDefaultMonitorProfile;
        if ( IsUsingDefaultMonitorProfile >= 0 )
        {
          VIDPN_MGR::ReleaseMonitorHandle(v15, v20);
          LODWORD(v10) = 0;
          goto LABEL_23;
        }
        v19 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        v19[3] = v20;
        v19[4] = v10;
      }
      else
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdError(v17);
        v19[3] = v5;
        v19[4] = this;
        v19[5] = v10;
      }
      WdLogEvent5_WdError(v19);
    }
LABEL_23:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26 + 40));
    goto LABEL_24;
  }
  v7 = WdLogNewEntry5_WdError(this);
  *(_QWORD *)(v7 + 24) = 0LL;
  WdLogEvent5_WdError(v7);
  LODWORD(v10) = -1073741811;
LABEL_24:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v8, &EventProfilerExit, v9, 6056);
  return (unsigned int)v10;
}
