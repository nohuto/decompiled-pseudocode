/*
 * XREFs of ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A2778
 * Callers:
 *     ?Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00ADF9C (-Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     DxgkPersistPathsModality @ 0x1C00C5EB0 (DxgkPersistPathsModality.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01548FC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01553A0 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000A1C4 (DxgkLogCodePointPacket.c)
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C005E0E0 (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C005E110 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x1C00602F8 (-RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0061B74 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C0061DC8 (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00620B8 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00A39CC (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00A4538 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00A5694 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00A5B24 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?Purge@CDS_JOURNAL@CCD_BTL@@QEAAJXZ @ 0x1C00AE1C8 (-Purge@CDS_JOURNAL@CCD_BTL@@QEAAJXZ.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C0181DE4 (-LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
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
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdi
  CCD_TOPOLOGY *v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // edx
  _QWORD *v35; // rax
  struct CCD_BTL *v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdi
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  unsigned int v46; // edx
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  struct _STRING *ConnectedSetStr; // rax
  struct _D3DKMT_GETPATHSMODALITY *v52; // r8
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  struct _STRING v55; // [rsp+30h] [rbp-50h] BYREF
  int v56; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v57[3]; // [rsp+48h] [rbp-38h] BYREF
  __int16 v58; // [rsp+60h] [rbp-20h]
  __int64 v59; // [rsp+68h] [rbp-18h]
  __int64 v60; // [rsp+70h] [rbp-10h]

  v5 = (unsigned int)a2;
  if ( g_bDMgrIsSetupRunning == 1 )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    return 0LL;
  }
  else
  {
    if ( *((_WORD *)CCD_TOPOLOGY::GetModalitySetId((CCD_TOPOLOGY *)this) + 4) )
    {
      v56 = 0;
      memset(v57, 0, sizeof(v57));
      v59 = 0LL;
      v60 = 0LL;
      v58 = 0;
      CCD_BTL::Global();
      ConnectivitySetId = CCD_BTL::RetrieveConnectivitySetId(v7, (struct CCD_SET_STRING_ID *)&v56);
      v10 = ConnectivitySetId;
      if ( ConnectivitySetId < 0 )
      {
        v44 = (_QWORD *)WdLogNewEntry5_WdError(v9);
        v44[3] = v10;
        v44[4] = this;
        v44[5] = this[8];
        WdLogEvent5_WdError(v44);
        v33 = 1;
        goto LABEL_21;
      }
      if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v56) )
      {
        if ( (v5 & 0x40000000) != 0 )
        {
LABEL_8:
          if ( (int)v5 < 0 )
          {
            v33 = 4;
          }
          else
          {
            v20 = CCD_BTL::Global();
            if ( *((struct CCD_BTL **)v20 + 14) != (struct CCD_BTL *)((char *)v20 + 112) )
            {
              v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
              v35[3] = v5;
              LODWORD(v5) = v5 | 1;
              v35[4] = this;
              v35[5] = this[8];
              v36 = CCD_BTL::Global();
              CCD_BTL::CDS_JOURNAL::Purge((struct CCD_BTL *)((char *)v36 + 88));
            }
            if ( (v5 & 1) == 0 )
            {
              v37 = CCD_STORE::ForTopology(
                      (const struct CCD_SET_STRING_ID *)this,
                      (int (*)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *))`anonymous namespace'::_UpdateTimestampTopologySetCallback,
                      this,
                      0);
              v42 = v37;
              if ( v37 >= 0 )
              {
LABEL_15:
                if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v56) )
                {
                  v27 = CCD_STORE::ForConnectedSet(
                          (const struct CCD_SET_STRING_ID *)&v56,
                          (int (*)(struct CCD_STORE::CONNECTED_SET_DESCRIPTOR *, void *))sub_1C005CCE0,
                          this);
                  v29 = v27;
                  if ( v27 < 0 )
                  {
                    v53 = (_QWORD *)WdLogNewEntry5_WdError(v28);
                    v53[4] = v57;
                    v53[3] = v29;
                    v53[5] = this;
                    v53[6] = this[8];
                    WdLogEvent5_WdError(v53);
                    DxgkLogCodePointPacket(0x3Fu, 6u, v5, v29);
                  }
                }
                v30 = CCD_BTL::Global();
                v31 = CCD_TOPOLOGY::CopyInheritScope(v30, (const struct CCD_TOPOLOGY *)this);
                v10 = v31;
                if ( v31 < 0 )
                {
                  v54 = (_QWORD *)WdLogNewEntry5_WdError(v32);
                  v54[3] = v10;
                  v54[4] = this;
                  v54[5] = this[8];
                  WdLogEvent5_WdError(v54);
                  DxgkLogCodePointPacket(0x3Fu, 7u, v5, v10);
                  LODWORD(v10) = 0;
                }
                v33 = 8;
                goto LABEL_21;
              }
              v49 = (_QWORD *)WdLogNewEntry5_WdTrace(v39, v38, v40, v41);
              v49[3] = v42;
              v49[4] = this;
              v49[5] = this[8];
            }
            v25 = CCD_STORE::ForTopology(
                    (const struct CCD_SET_STRING_ID *)this,
                    (int (*)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *))`anonymous namespace'::_SaveTopologySetCallback,
                    this,
                    1);
            v10 = v25;
            if ( v25 >= 0 )
            {
              if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v26) + 912) )
              {
                ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)this);
                v52 = this[8];
                v55 = *ConnectedSetStr;
                LogCddDatabaseAccessPacket(0, v10, v52, &v55, 0);
              }
              goto LABEL_15;
            }
            v50 = (_QWORD *)WdLogNewEntry5_WdError(v26);
            v50[3] = v10;
            v50[4] = this;
            v50[5] = this[8];
            WdLogEvent5_WdError(v50);
            v33 = 5;
          }
LABEL_21:
          DxgkLogCodePointPacket(0x3Fu, v33, v5, v10);
LABEL_22:
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v56);
          return (unsigned int)v10;
        }
        v15 = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)this, (const struct CCD_SET_STRING_ID *)&v56);
        v10 = v15;
        if ( v15 != -1073741266 )
        {
          if ( v15 < 0 )
          {
            v48 = (_QWORD *)WdLogNewEntry5_WdError(v17);
            v48[3] = v10;
            v48[4] = this[8];
            v48[5] = v5;
            WdLogEvent5_WdError(v48);
            v33 = 3;
            goto LABEL_21;
          }
          goto LABEL_8;
        }
        v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
        v47[3] = -1073741266LL;
        v47[4] = this[8];
        v47[5] = v5;
        WdLogEvent5_WdWarning(v47);
        v46 = 3;
      }
      else
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
        v45[3] = -1073741266LL;
        v45[4] = this[8];
        v45[5] = v5;
        WdLogEvent5_WdWarning(v45);
        v46 = 2;
      }
      DxgkLogCodePointPacket(0x3Fu, v46, v5, -1073741266);
      LODWORD(v10) = -1073741266;
      goto LABEL_22;
    }
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    v43[3] = this;
    v43[4] = this[8];
    v43[5] = *(int *)this;
    WdLogEvent5_WdError(v43);
    DxgkLogCodePointPacket(0x3Fu, 0, v5, -1073741823);
    return 3221225473LL;
  }
}
