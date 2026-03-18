/*
 * XREFs of ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008D0CC
 * Callers:
 *     ?Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00B94FC (-Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     DxgkPersistPathsModality @ 0x1C00DABF0 (DxgkPersistPathsModality.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179100 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179C4C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C008AB70 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C008BD3C (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C008C930 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C008DF00 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C008E13C (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C008E390 (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x1C00B6B84 (-RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00B87F0 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00B8870 (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B8BD4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?Purge@CDS_JOURNAL@CCD_BTL@@QEAAJXZ @ 0x1C00B94A4 (-Purge@CDS_JOURNAL@CCD_BTL@@QEAAJXZ.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C00C0F88 (-LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Persist(struct _D3DKMT_GETPATHSMODALITY **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  CCD_BTL *v7; // rcx
  int ConnectivitySetId; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct CCD_BTL *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rcx
  struct _STRING *ConnectedSetStr; // rax
  struct _D3DKMT_GETPATHSMODALITY *v28; // r8
  bool v29; // r9
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdi
  CCD_TOPOLOGY *v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  unsigned int v36; // edx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdi
  _QWORD *v44; // rax
  struct CCD_BTL *v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  unsigned int v49; // edx
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  struct _STRING v56; // [rsp+30h] [rbp-50h] BYREF
  int v57; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v58[3]; // [rsp+48h] [rbp-38h] BYREF
  __int16 v59; // [rsp+60h] [rbp-20h]
  __int64 v60; // [rsp+68h] [rbp-18h]
  __int64 v61; // [rsp+70h] [rbp-10h]

  v5 = (unsigned int)a2;
  if ( g_bDMgrIsSetupRunning == 1 )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    return 0LL;
  }
  else
  {
    if ( *((_WORD *)CCD_TOPOLOGY::GetModalitySetId((void **)this) + 4) )
    {
      v57 = 0;
      memset(v58, 0, sizeof(v58));
      v60 = 0LL;
      v61 = 0LL;
      v59 = 0;
      CCD_BTL::Global();
      ConnectivitySetId = CCD_BTL::RetrieveConnectivitySetId(v7, (struct CCD_SET_STRING_ID *)&v57);
      v10 = ConnectivitySetId;
      if ( ConnectivitySetId < 0 )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdError(v9);
        v47[3] = v10;
        v47[4] = this;
        v47[5] = this[8];
        WdLogEvent5_WdError(v47);
        v36 = 1;
        goto LABEL_21;
      }
      if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v57) )
      {
        if ( (v5 & 0x40000000) != 0 )
        {
LABEL_8:
          if ( (int)v5 < 0 )
          {
            v36 = 4;
          }
          else
          {
            v20 = CCD_BTL::Global();
            if ( *((struct CCD_BTL **)v20 + 14) != (struct CCD_BTL *)((char *)v20 + 112) )
            {
              v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
              v44[3] = v5;
              LODWORD(v5) = v5 | 1;
              v44[4] = this;
              v44[5] = this[8];
              v45 = CCD_BTL::Global();
              CCD_BTL::CDS_JOURNAL::Purge((struct CCD_BTL *)((char *)v45 + 88));
            }
            if ( (v5 & 1) == 0 )
            {
              v38 = CCD_STORE::ForTopology(
                      (const struct CCD_SET_STRING_ID *)this,
                      anonymous_namespace_::_UpdateTimestampTopologySetCallback,
                      this,
                      0);
              v43 = v38;
              if ( v38 >= 0 )
              {
LABEL_15:
                if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v57) )
                {
                  v30 = CCD_STORE::ForConnectedSet(
                          (const struct CCD_SET_STRING_ID *)&v57,
                          anonymous_namespace_::_UpdateConnectedSetCallback,
                          this,
                          v29);
                  v32 = v30;
                  if ( v30 < 0 )
                  {
                    v54 = (_QWORD *)WdLogNewEntry5_WdError(v31);
                    v54[4] = v58;
                    v54[3] = v32;
                    v54[5] = this;
                    v54[6] = this[8];
                    WdLogEvent5_WdError(v54);
                    DxgkLogCodePointPacket(0x3Fu, 6u, v5, v32);
                  }
                }
                v33 = CCD_BTL::Global();
                v34 = CCD_TOPOLOGY::CopyInheritScope(v33, (const struct CCD_TOPOLOGY *)this);
                v10 = v34;
                if ( v34 < 0 )
                {
                  v55 = (_QWORD *)WdLogNewEntry5_WdError(v35);
                  v55[3] = v10;
                  v55[4] = this;
                  v55[5] = this[8];
                  WdLogEvent5_WdError(v55);
                  DxgkLogCodePointPacket(0x3Fu, 7u, v5, v10);
                  LODWORD(v10) = 0;
                }
                v36 = 8;
                goto LABEL_21;
              }
              v52 = (_QWORD *)WdLogNewEntry5_WdTrace(v40, v39, v41, v42);
              v52[3] = v43;
              v52[4] = this;
              v52[5] = this[8];
            }
            v25 = CCD_STORE::ForTopology(
                    (const struct CCD_SET_STRING_ID *)this,
                    anonymous_namespace_::_SaveTopologySetCallback,
                    this,
                    1);
            v10 = v25;
            if ( v25 >= 0 )
            {
              if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 752) )
              {
                ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)this);
                v28 = this[8];
                v56 = *ConnectedSetStr;
                LogCddDatabaseAccessPacket(0, v10, v28, &v56, 0);
              }
              goto LABEL_15;
            }
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v26);
            v53[3] = v10;
            v53[4] = this;
            v53[5] = this[8];
            WdLogEvent5_WdError(v53);
            v36 = 5;
          }
LABEL_21:
          DxgkLogCodePointPacket(0x3Fu, v36, v5, v10);
LABEL_22:
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v57);
          return (unsigned int)v10;
        }
        v15 = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)this, (const struct CCD_SET_STRING_ID *)&v57);
        v10 = v15;
        if ( v15 != -1073741266 )
        {
          if ( v15 < 0 )
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdError(v17);
            v51[3] = v10;
            v51[4] = this[8];
            v51[5] = v5;
            WdLogEvent5_WdError(v51);
            v36 = 3;
            goto LABEL_21;
          }
          goto LABEL_8;
        }
        v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
        v50[3] = -1073741266LL;
        v50[4] = this[8];
        v50[5] = v5;
        WdLogEvent5_WdWarning(v50);
        v49 = 3;
      }
      else
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
        v48[3] = -1073741266LL;
        v48[4] = this[8];
        v48[5] = v5;
        WdLogEvent5_WdWarning(v48);
        v49 = 2;
      }
      DxgkLogCodePointPacket(0x3Fu, v49, v5, 0xC000022E);
      LODWORD(v10) = -1073741266;
      goto LABEL_22;
    }
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    v46[3] = this;
    v46[4] = this[8];
    v46[5] = *(int *)this;
    WdLogEvent5_WdError(v46);
    DxgkLogCodePointPacket(0x3Fu, 0, v5, 0xC0000001);
    return 3221225473LL;
  }
}
