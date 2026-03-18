/*
 * XREFs of ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C008CD28
 * Callers:
 *     ?_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00B68E0 (-_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     DxgkGetPathsModality @ 0x1C00C2810 (DxgkGetPathsModality.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179100 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C008ADF0 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C008BDAC (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C008C930 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C008CC64 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C008DF00 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C008E13C (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C008E470 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x1C00B6B84 (-RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAU_D3DKMT_HASH@@@Z @ 0x1C00B7750 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAU_D3DKMT_HASH@@@Z.c)
 *     ??1CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@XZ @ 0x1C00B8A44 (--1CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@XZ.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C00B8A64 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C00B8AF0 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z @ 0x1C00B8B6C (--0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B8BD4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?CommitTo@CDS_JOURNAL@CCD_BTL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C00B93CC (-CommitTo@CDS_JOURNAL@CCD_BTL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C00C0F88 (-LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     _CCD_TOPOLOGY::RetrievePersisted_::_2_::RecordRetrievalFlags::_RecordRetrievalFlags @ 0x1C00DA330 (_CCD_TOPOLOGY--RetrievePersisted_--_2_--RecordRetrievalFlags--_RecordRetrievalFlags.c)
 *     ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C01AC218 (--0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01AC31C (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrievePersisted(CCD_TOPOLOGY *this, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // r15
  int v5; // esi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r14
  CCD_BTL *v10; // rcx
  int ConnectivitySetId; // eax
  __int64 v12; // rcx
  int v13; // ebx
  int v14; // eax
  __int64 v15; // r12
  __m128i *ConnectedSetStr; // rax
  struct _D3DKMT_GETPATHSMODALITY *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  bool v23; // zf
  struct CCD_BTL *v24; // rax
  bool v25; // r8
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  unsigned int i; // r14d
  __int64 v38; // r12
  int TopologyClass; // eax
  __int64 v40; // rcx
  __int64 v41; // rbx
  int v42; // ecx
  int active; // eax
  struct _D3DKMT_HASH *v44; // rbx
  struct _STRING *v45; // rax
  int StringHash; // eax
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rax
  int v54; // ebx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  _QWORD *v59; // rax
  _QWORD *v60; // rcx
  _QWORD *v61; // rax
  _DWORD *v62; // rax
  _DWORD *v63; // rbx
  size_t v64; // r8
  PCHAR v65; // rdx
  _QWORD *v66; // rax
  BTL_TOPOLOGY_CONSTRUCTOR *v67; // rax
  int v68; // eax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  unsigned int v76; // [rsp+38h] [rbp-D0h] BYREF
  int v77; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v78; // [rsp+40h] [rbp-C8h]
  size_t Size; // [rsp+48h] [rbp-C0h]
  __m128i Size_8; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v81[4]; // [rsp+60h] [rbp-A8h] BYREF
  __int16 v82; // [rsp+80h] [rbp-88h]
  __int64 v83; // [rsp+88h] [rbp-80h]
  __int64 v84; // [rsp+90h] [rbp-78h]
  int v85; // [rsp+98h] [rbp-70h] BYREF
  __int64 v86; // [rsp+A0h] [rbp-68h]
  __int64 v87; // [rsp+A8h] [rbp-60h]
  __int64 v88; // [rsp+B0h] [rbp-58h]
  __int16 v89; // [rsp+B8h] [rbp-50h]
  __int64 v90; // [rsp+C0h] [rbp-48h]
  __int64 v91; // [rsp+C8h] [rbp-40h]
  _BYTE v92[12]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int16 v93; // [rsp+E4h] [rbp-24h]
  char v94; // [rsp+1E0h] [rbp+D8h] BYREF

  v3 = a2;
  v5 = 0;
  v76 = 0;
  v94 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v94, 0);
  v9 = v7;
  if ( v7 < 0 )
  {
    v50 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v50 + 24) = v9;
    WdLogEvent5_WdError(v50);
    goto LABEL_26;
  }
  LODWORD(v81[0]) = 0;
  memset(&v81[1], 0, 24);
  v83 = 0LL;
  v84 = 0LL;
  v82 = 0;
  CCD_BTL::Global();
  ConnectivitySetId = CCD_BTL::RetrieveConnectivitySetId(v10, (struct CCD_SET_STRING_ID *)v81);
  v9 = ConnectivitySetId;
  if ( ConnectivitySetId < 0 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v51[3] = v9;
    v51[4] = this;
    v51[5] = *((_QWORD *)this + 8);
    v51[6] = v3;
    WdLogEvent5_WdError(v51);
    goto LABEL_25;
  }
  if ( (v3 & 0x20) == 0 )
  {
    CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v92, this);
    v13 = 1;
    LODWORD(v78) = v3 & 0xF;
    v14 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v92,
            (const struct CCD_SET_STRING_ID *)v81,
            0LL,
            v78,
            (v3 & 0x1000) != 0);
    v15 = v14;
    LODWORD(v9) = -1073741789;
    if ( v14 == -1073741789 )
    {
      if ( a3 )
        *a3 = v93;
      goto LABEL_29;
    }
    if ( v14 < 0 )
    {
      Size_8 = *(__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v81);
      v77 = _mm_cvtsi128_si32(Size_8);
      v76 = (unsigned __int16)v77 + 57;
      Size = v76;
      v62 = operator new(v76, 0x63644356u, PagedPool);
      v63 = v62;
      if ( v62 )
      {
        memset(v62, 0, Size);
        v64 = (unsigned __int16)v77;
        v65 = (PCHAR)Size_8.m128i_i64[1];
        v63[1] = v76;
        *v63 = 9;
        v63[10] = 0;
        *((_QWORD *)v63 + 4) = 0LL;
        *((_QWORD *)v63 + 1) = 0LL;
        *((_QWORD *)v63 + 2) = 0LL;
        *((_QWORD *)v63 + 3) = 0LL;
        v63[12] = v15;
        v63[13] = v3;
        memmove(v63 + 14, v65, v64);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v63);
        operator delete(v63);
      }
      else
      {
        DxgkLogCodePointPacket(0x1Bu, v3, v15, 0);
      }
      v13 = 2;
    }
    else if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 752) )
    {
      ConnectedSetStr = (__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v81);
      v17 = (struct _D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
      Size_8 = *ConnectedSetStr;
      LogCddDatabaseAccessPacket(1, v15, v17, (struct _STRING *)&Size_8, v3);
    }
    else
    {
      DxgkLogCodePointPacket(9u, v3, v15, 0);
    }
    v76 = v13;
    if ( (int)v15 >= 0 )
    {
LABEL_9:
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
      v23 = (_DWORD)v78 == 15;
      v22[3] = this;
      v22[4] = *((_QWORD *)this + 8);
      v22[5] = v3;
      if ( v23 )
      {
        v24 = CCD_BTL::Global();
        v26 = CCD_BTL::CDS_JOURNAL::CommitTo((struct CCD_BTL *)((char *)v24 + 88), this, v25, a3);
        v31 = v26;
        if ( v26 != -1073741789 )
        {
          if ( v26 == -1073741266 )
          {
            v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
            v71[3] = -1073741266LL;
            v71[4] = this;
            v71[5] = *((_QWORD *)this + 8);
            v71[6] = v3;
            WdLogEvent5_WdWarning(v71);
          }
          else if ( v26 < 0 )
          {
            v72 = (_QWORD *)WdLogNewEntry5_WdError(v28);
            v72[3] = v31;
            v72[4] = this;
            v72[5] = *((_QWORD *)this + 8);
            v72[6] = v3;
            WdLogEvent5_WdError(v72);
          }
          goto LABEL_14;
        }
        v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
        v60 = v70;
        if ( a3 )
          v5 = *a3;
        v70[3] = v5;
        v70[4] = -1073741789LL;
        v70[5] = this;
        v70[6] = *((_QWORD *)this + 8);
        v70[7] = v3;
        goto LABEL_41;
      }
LABEL_14:
      CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v92);
      v36 = *((_QWORD *)this + 8);
      for ( i = 0; i < *(unsigned __int16 *)(v36 + 20); v36 = *((_QWORD *)this + 8) )
      {
        v38 = 216LL * i;
        if ( *(_DWORD *)(v38 + v36 + 156) != 21 )
        {
          v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
          v73[3] = *(int *)(v38 + v36 + 156);
          v73[4] = this;
          v73[5] = *((_QWORD *)this + 8);
          WdLogEvent5_WdWarning(v73);
        }
        *(_DWORD *)(v38 + v36 + 156) = 21;
        ++i;
      }
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(this, (enum CCD_TOPOLOGY_CLASS *)&v77);
      v41 = TopologyClass;
      if ( TopologyClass < 0 )
      {
        v74 = (_QWORD *)WdLogNewEntry5_WdError(v40);
        v74[3] = v41;
        v74[4] = this;
        v74[5] = *((_QWORD *)this + 8);
        WdLogEvent5_WdError(v74);
        v42 = 0;
      }
      else
      {
        v42 = v77;
      }
      *(_DWORD *)(*((_QWORD *)this + 8) + 32LL) = v42;
      active = CCD_TOPOLOGY::_FillPathsActiveFlags(this);
      if ( active < 0 || (active = CCD_TOPOLOGY::FillPathsTargetFlags(this), active < 0) )
      {
        LODWORD(v9) = active;
      }
      else
      {
        v44 = (struct _D3DKMT_HASH *)*((_QWORD *)this + 8);
        v45 = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v81);
        StringHash = CCD_SET_STRING_ID::_QueryStringHash(v45, v44);
        v48 = StringHash;
        if ( StringHash < 0 )
        {
          v75 = (_QWORD *)WdLogNewEntry5_WdError(v47);
          v75[3] = v48;
          v75[4] = this;
          v75[5] = *((_QWORD *)this + 8);
          v75[6] = v3;
          WdLogEvent5_WdError(v75);
        }
        LODWORD(v9) = v48;
      }
      goto LABEL_25;
    }
    if ( (v3 & 0x80u) == 0LL )
    {
      v66 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
      v66[3] = v15;
      v66[4] = this;
      v66[5] = *((_QWORD *)this + 8);
      v66[6] = v3;
      CCD_BTL::Global();
      v67 = BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)&v85);
      v68 = BTL_TOPOLOGY_CONSTRUCTOR::operator()(v67);
      v15 = v68;
      if ( v68 == -1073741789 )
      {
        if ( a3 )
          *a3 = v76;
        CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        CCD_TOPOLOGY::FillPathsTargetFlags(this);
        v76 = 0;
        goto LABEL_29;
      }
      if ( v68 < 0 )
      {
        v76 = v13 | 8;
        v69 = (_QWORD *)WdLogNewEntry5_WdError(v19);
        v69[3] = v15;
        v69[4] = this;
        v69[5] = *((_QWORD *)this + 8);
        v69[6] = v3;
        goto LABEL_60;
      }
      v76 = v13 | 4;
    }
    if ( (int)v15 >= 0 )
      goto LABEL_9;
    v69 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v69[3] = (int)v15;
    v69[4] = this;
    v69[5] = *((_QWORD *)this + 8);
    v69[6] = v3;
LABEL_60:
    WdLogEvent5_WdError(v69);
    LODWORD(v9) = v15;
    goto LABEL_29;
  }
  if ( !*((_WORD *)CCD_TOPOLOGY::GetModalitySetId((void **)this) + 4) )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v52);
    v53[3] = this;
    v53[4] = *((_QWORD *)this + 8);
    v53[5] = *(int *)this;
    WdLogEvent5_WdError(v53);
    LODWORD(v9) = -1073741823;
    goto LABEL_25;
  }
  CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v92, this);
  if ( (v3 & 0x2000) != 0 )
  {
    CCD_TOPOLOGY::GetModalitySetId((void **)this);
    v85 = 0;
    v86 = 0LL;
    v87 = 0LL;
    v90 = 0LL;
    v91 = 0LL;
    v88 = 0LL;
    v89 = 0;
    CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)&v85);
    v54 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v92,
            (const struct CCD_SET_STRING_ID *)v81,
            (const struct CCD_SET_STRING_ID *)&v85,
            v3 & 0xF,
            (v3 & 0x1000) != 0);
    CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v85);
  }
  else
  {
    v54 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v92,
            this,
            v3 & 0xF,
            (v3 & 0x1000) != 0);
  }
  LODWORD(v9) = -1073741275;
  if ( v54 != -1073741275 )
  {
    if ( v54 < 0 )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdError(v56);
      v61[3] = v54;
      v61[4] = this;
      v61[5] = *((_QWORD *)this + 8);
      v61[6] = v3;
      WdLogEvent5_WdError(v61);
      LODWORD(v9) = v54;
      goto LABEL_29;
    }
    v76 = 1;
    goto LABEL_14;
  }
  v76 = 2;
  v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55, v57, v58);
  v59[3] = this;
  v59[4] = *((_QWORD *)this + 8);
  v60 = v59;
  v59[5] = v3;
LABEL_41:
  WdLogEvent5_WdWarning(v60);
LABEL_29:
  CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v92);
LABEL_25:
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v81);
LABEL_26:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v94);
  CCD_TOPOLOGY::RetrievePersisted_::_2_::RecordRetrievalFlags::_RecordRetrievalFlags(&v76);
  return (unsigned int)v9;
}
