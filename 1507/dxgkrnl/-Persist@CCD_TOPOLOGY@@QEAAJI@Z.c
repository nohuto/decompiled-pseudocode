/*
 * XREFs of ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006419C
 * Callers:
 *     ?Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00623BC (-Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     DxgkPersistPathsModality @ 0x1C00B1060 (DxgkPersistPathsModality.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0150824 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0151318 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 *     ?Purge@CDS_JOURNAL@CCD_BTL@@QEAAJXZ @ 0x1C00625E8 (-Purge@CDS_JOURNAL@CCD_BTL@@QEAAJXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0062EFC (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x1C006307C (-RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C0065230 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C0065D8C (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0066E5C (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0067128 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C006737C (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C006766C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C009EF48 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C009EFC8 (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C017D96C (-LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Persist(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  CCD_BTL *v10; // rcx
  int ConnectivitySetId; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  struct CCD_BTL *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // rdi
  CCD_TOPOLOGY *v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // edx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdi
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  struct CCD_BTL *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  unsigned int v52; // edx
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  struct _STRING *ConnectedSetStr; // rax
  struct _D3DKMT_GETPATHSMODALITY *v58; // r8
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  struct _STRING v61; // [rsp+30h] [rbp-50h] BYREF
  int v62; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v63[3]; // [rsp+48h] [rbp-38h] BYREF
  __int16 v64; // [rsp+60h] [rbp-20h]
  __int64 v65; // [rsp+68h] [rbp-18h]
  __int64 v66; // [rsp+70h] [rbp-10h]

  v5 = (unsigned int)a2;
  if ( g_bDMgrIsSetupRunning == 1 )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    return 0LL;
  }
  else
  {
    if ( *((_WORD *)CCD_TOPOLOGY::GetModalitySetId(this) + 4) )
    {
      v62 = 0;
      memset(v63, 0, sizeof(v63));
      v65 = 0LL;
      v66 = 0LL;
      v64 = 0;
      CCD_BTL::Global(v7, v6, v8, v9);
      ConnectivitySetId = CCD_BTL::RetrieveConnectivitySetId(v10, (struct CCD_SET_STRING_ID *)&v62);
      v13 = ConnectivitySetId;
      if ( ConnectivitySetId < 0 )
      {
        v50 = (_QWORD *)WdLogNewEntry5_WdError(v12);
        v50[3] = v13;
        v50[4] = this;
        v50[5] = *((_QWORD *)this + 8);
        WdLogEvent5_WdError(v50);
        v35 = 1;
        goto LABEL_21;
      }
      if ( CCD_SET_STRING_ID::IsSubsetOf(this, (const struct CCD_SET_STRING_ID *)&v62) )
      {
        if ( (v5 & 0x40000000) != 0 )
        {
LABEL_8:
          if ( (int)v5 < 0 )
          {
            v35 = 4;
          }
          else
          {
            v19 = CCD_BTL::Global(v15, v14, v16, v17);
            if ( *((struct CCD_BTL **)v19 + 14) != (struct CCD_BTL *)((char *)v19 + 112) )
            {
              v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
              v43[3] = v5;
              LODWORD(v5) = v5 | 1;
              v43[4] = this;
              v44 = *((_QWORD *)this + 8);
              v43[5] = v44;
              v48 = CCD_BTL::Global(v44, v45, v46, v47);
              CCD_BTL::CDS_JOURNAL::Purge((struct CCD_BTL *)((char *)v48 + 88));
            }
            if ( (v5 & 1) == 0 )
            {
              v37 = CCD_STORE::ForTopology(
                      this,
                      (int (*)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *))`anonymous namespace'::_UpdateTimestampTopologySetCallback,
                      this,
                      0);
              v42 = v37;
              if ( v37 >= 0 )
              {
LABEL_15:
                if ( CCD_SET_STRING_ID::IsSubsetOf(this, (const struct CCD_SET_STRING_ID *)&v62) )
                {
                  v30 = CCD_STORE::ForConnectedSet(
                          (const struct CCD_SET_STRING_ID *)&v62,
                          anonymous_namespace_::_UpdateConnectedSetCallback,
                          this,
                          v29);
                  v31 = v30;
                  if ( v30 < 0 )
                  {
                    v59 = (_QWORD *)WdLogNewEntry5_WdError(v27);
                    v59[4] = v63;
                    v59[3] = v31;
                    v59[5] = this;
                    v59[6] = *((_QWORD *)this + 8);
                    WdLogEvent5_WdError(v59);
                    DxgkLogCodePointPacket(0x3Fu, 6u, v5, v31);
                  }
                }
                v32 = CCD_BTL::Global(v27, v26, v28, v29);
                v33 = CCD_TOPOLOGY::CopyInheritScope(v32, this);
                v13 = v33;
                if ( v33 < 0 )
                {
                  v60 = (_QWORD *)WdLogNewEntry5_WdError(v34);
                  v60[3] = v13;
                  v60[4] = this;
                  v60[5] = *((_QWORD *)this + 8);
                  WdLogEvent5_WdError(v60);
                  DxgkLogCodePointPacket(0x3Fu, 7u, v5, v13);
                  LODWORD(v13) = 0;
                }
                v35 = 8;
                goto LABEL_21;
              }
              v55 = (_QWORD *)WdLogNewEntry5_WdTrace(v39, v38, v40, v41);
              v55[3] = v42;
              v55[4] = this;
              v55[5] = *((_QWORD *)this + 8);
            }
            v24 = CCD_STORE::ForTopology(
                    this,
                    (int (*)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *))`anonymous namespace'::_SaveTopologySetCallback,
                    this,
                    1);
            v13 = v24;
            if ( v24 >= 0 )
            {
              if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 768) )
              {
                ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr(this);
                v58 = (struct _D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
                v61 = *ConnectedSetStr;
                LogCddDatabaseAccessPacket(0, v13, v58, &v61, 0);
              }
              goto LABEL_15;
            }
            v56 = (_QWORD *)WdLogNewEntry5_WdError(v25);
            v56[3] = v13;
            v56[4] = this;
            v56[5] = *((_QWORD *)this + 8);
            WdLogEvent5_WdError(v56);
            v35 = 5;
          }
LABEL_21:
          DxgkLogCodePointPacket(0x3Fu, v35, v5, v13);
LABEL_22:
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v62);
          return (unsigned int)v13;
        }
        v18 = CCD_TOPOLOGY::VerifyConnectivityHash(this, (const struct CCD_SET_STRING_ID *)&v62);
        v13 = v18;
        if ( v18 != -1073741266 )
        {
          if ( v18 < 0 )
          {
            v54 = (_QWORD *)WdLogNewEntry5_WdError(v15);
            v54[3] = v13;
            v54[4] = *((_QWORD *)this + 8);
            v54[5] = v5;
            WdLogEvent5_WdError(v54);
            v35 = 3;
            goto LABEL_21;
          }
          goto LABEL_8;
        }
        v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
        v53[3] = -1073741266LL;
        v53[4] = *((_QWORD *)this + 8);
        v53[5] = v5;
        WdLogEvent5_WdWarning(v53);
        v52 = 3;
      }
      else
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
        v51[3] = -1073741266LL;
        v51[4] = *((_QWORD *)this + 8);
        v51[5] = v5;
        WdLogEvent5_WdWarning(v51);
        v52 = 2;
      }
      DxgkLogCodePointPacket(0x3Fu, v52, v5, -1073741266);
      LODWORD(v13) = -1073741266;
      goto LABEL_22;
    }
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v49[3] = this;
    v49[4] = *((_QWORD *)this + 8);
    v49[5] = *(int *)this;
    WdLogEvent5_WdError(v49);
    DxgkLogCodePointPacket(0x3Fu, 0, v5, -1073741823);
    return 3221225473LL;
  }
}
