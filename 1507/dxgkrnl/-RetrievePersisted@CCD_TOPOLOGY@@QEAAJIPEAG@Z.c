/*
 * XREFs of ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0063E1C
 * Callers:
 *     DxgkGetPathsModality @ 0x1C0062B00 (DxgkGetPathsModality.c)
 *     ?_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C0062F18 (-_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0150824 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 * Callees:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?CommitTo@CDS_JOURNAL@CCD_BTL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C0062510 (-CommitTo@CDS_JOURNAL@CCD_BTL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     _CCD_TOPOLOGY::RetrievePersisted_::_2_::RecordRetrievalFlags::_RecordRetrievalFlags @ 0x1C0062640 (_CCD_TOPOLOGY--RetrievePersisted_--_2_--RecordRetrievalFlags--_RecordRetrievalFlags.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0062EFC (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x1C006307C (-RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0063D58 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00644B0 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00652A0 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C0065D8C (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0067128 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C006745C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C006766C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAU_D3DKMT_HASH@@@Z @ 0x1C009DEA8 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAU_D3DKMT_HASH@@@Z.c)
 *     ??1CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@XZ @ 0x1C009F180 (--1CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@XZ.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C009F1A0 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C009F22C (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z @ 0x1C009F2A8 (--0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C017D96C (-LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?GetTopologyForClass@CCD_BTL@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C017F13C (-GetTopologyForClass@CCD_BTL@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrievePersisted(CCD_TOPOLOGY *this, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // r15
  int v5; // esi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  CCD_BTL *v13; // rcx
  int ConnectivitySetId; // eax
  __int64 v15; // rcx
  int v16; // ebx
  int v17; // eax
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  bool v27; // zf
  __int64 v28; // rcx
  struct CCD_BTL *v29; // rax
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rbx
  unsigned int i; // r14d
  __int64 v43; // r12
  int TopologyClass; // eax
  __int64 v45; // rcx
  __int64 v46; // rbx
  int v47; // ecx
  int active; // eax
  struct _D3DKMT_HASH *v49; // rbx
  struct _STRING *v50; // rax
  int StringHash; // eax
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rax
  int v59; // ebx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  _QWORD *v64; // rax
  _QWORD *v65; // rcx
  _QWORD *v66; // rax
  _DWORD *v67; // rax
  _DWORD *v68; // rbx
  size_t v69; // r8
  const void *v70; // rdx
  const struct _STRING *ConnectedSetStr; // rax
  struct _D3DKMT_GETPATHSMODALITY *v72; // r8
  _QWORD *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  CCD_BTL *v77; // rcx
  int TopologyForClass; // eax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  unsigned __int16 v86[2]; // [rsp+38h] [rbp-D0h] BYREF
  int v87; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v88[2]; // [rsp+40h] [rbp-C8h]
  size_t Size; // [rsp+48h] [rbp-C0h]
  _QWORD v90[4]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v91; // [rsp+70h] [rbp-98h]
  __int64 v92; // [rsp+78h] [rbp-90h]
  __int64 v93; // [rsp+80h] [rbp-88h]
  void *Src[2]; // [rsp+88h] [rbp-80h] BYREF
  int v95; // [rsp+98h] [rbp-70h] BYREF
  __int64 v96; // [rsp+A0h] [rbp-68h]
  __int64 v97; // [rsp+A8h] [rbp-60h]
  __int64 v98; // [rsp+B0h] [rbp-58h]
  __int16 v99; // [rsp+B8h] [rbp-50h]
  __int64 v100; // [rsp+C0h] [rbp-48h]
  __int64 v101; // [rsp+C8h] [rbp-40h]
  _BYTE v102[12]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int16 v103; // [rsp+E4h] [rbp-24h]
  char v104; // [rsp+1E0h] [rbp+D8h] BYREF

  v3 = a2;
  v5 = 0;
  *(_DWORD *)v86 = 0;
  v104 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v104, 0);
  v12 = v7;
  if ( v7 < 0 )
  {
    v55 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v55 + 24) = v12;
    WdLogEvent5_WdError(v55);
    goto LABEL_26;
  }
  LODWORD(v90[0]) = 0;
  memset(&v90[1], 0, 24);
  v92 = 0LL;
  v93 = 0LL;
  LOWORD(v91) = 0;
  CCD_BTL::Global(v9, v8, v10, v11);
  ConnectivitySetId = CCD_BTL::RetrieveConnectivitySetId(v13, (struct CCD_SET_STRING_ID *)v90);
  v12 = ConnectivitySetId;
  if ( ConnectivitySetId < 0 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v56[3] = v12;
    v56[4] = this;
    v56[5] = *((_QWORD *)this + 8);
    v56[6] = v3;
    WdLogEvent5_WdError(v56);
    goto LABEL_25;
  }
  if ( (v3 & 0x20) == 0 )
  {
    CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v102, this);
    v16 = 1;
    v88[0] = v3 & 0xF;
    v17 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v102,
            (const struct CCD_SET_STRING_ID *)v90,
            0LL,
            v88[0],
            (v3 & 0x1000) != 0);
    v18 = v17;
    LODWORD(v12) = -1073741789;
    if ( v17 == -1073741789 )
    {
      if ( a3 )
        *a3 = v103;
      goto LABEL_29;
    }
    if ( v17 < 0 )
    {
      *(struct _STRING *)Src = *CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v90);
      v87 = _mm_cvtsi128_si32(*(__m128i *)Src);
      *(_DWORD *)v86 = (unsigned __int16)v87 + 57;
      Size = *(unsigned int *)v86;
      v67 = operator new[](*(unsigned int *)v86, 0x63644356u, PagedPool);
      v68 = v67;
      if ( v67 )
      {
        memset(v67, 0, Size);
        v69 = (unsigned __int16)v87;
        v70 = Src[1];
        v68[1] = *(_DWORD *)v86;
        *v68 = 9;
        v68[10] = 0;
        *((_QWORD *)v68 + 4) = 0LL;
        *((_QWORD *)v68 + 1) = 0LL;
        *((_QWORD *)v68 + 2) = 0LL;
        *((_QWORD *)v68 + 3) = 0LL;
        v68[12] = v18;
        v68[13] = v3;
        memmove(v68 + 14, v70, v69);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v68);
        operator delete(v68);
      }
      else
      {
        DxgkLogCodePointPacket(0x1Bu, v3, v18, 0);
      }
      v16 = 2;
    }
    else if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 768) )
    {
      ConnectedSetStr = CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v90);
      v72 = (struct _D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
      *(struct _STRING *)Src = *ConnectedSetStr;
      LogCddDatabaseAccessPacket(1, v18, v72, (struct _STRING *)Src, v3);
    }
    else
    {
      DxgkLogCodePointPacket(9u, v3, v18, 0);
    }
    *(_DWORD *)v86 = v16;
    if ( (int)v18 >= 0 )
    {
LABEL_9:
      v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
      v27 = v88[0] == 15;
      v23[3] = this;
      v28 = *((_QWORD *)this + 8);
      v23[4] = v28;
      v23[5] = v3;
      if ( v27 )
      {
        v29 = CCD_BTL::Global(v28, v24, v25, v26);
        v31 = CCD_BTL::CDS_JOURNAL::CommitTo((struct CCD_BTL *)((char *)v29 + 88), this, v30, a3);
        v36 = v31;
        if ( v31 != -1073741789 )
        {
          if ( v31 == -1073741266 )
          {
            v81 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
            v81[3] = -1073741266LL;
            v81[4] = this;
            v81[5] = *((_QWORD *)this + 8);
            v81[6] = v3;
            WdLogEvent5_WdWarning(v81);
          }
          else if ( v31 < 0 )
          {
            v82 = (_QWORD *)WdLogNewEntry5_WdError(v33);
            v82[3] = v36;
            v82[4] = this;
            v82[5] = *((_QWORD *)this + 8);
            v82[6] = v3;
            WdLogEvent5_WdError(v82);
          }
          goto LABEL_14;
        }
        v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
        v65 = v80;
        if ( a3 )
          v5 = *a3;
        v80[3] = v5;
        v80[4] = -1073741789LL;
        v80[5] = this;
        v80[6] = *((_QWORD *)this + 8);
        v80[7] = v3;
        goto LABEL_41;
      }
LABEL_14:
      CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v102);
      v41 = *((_QWORD *)this + 8);
      for ( i = 0; i < *(unsigned __int16 *)(v41 + 20); v41 = *((_QWORD *)this + 8) )
      {
        v43 = 216LL * i;
        if ( *(_DWORD *)(v43 + v41 + 152) != 21 )
        {
          v83 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
          v83[3] = *(int *)(v43 + v41 + 152);
          v83[4] = this;
          v83[5] = *((_QWORD *)this + 8);
          WdLogEvent5_WdWarning(v83);
        }
        *(_DWORD *)(v43 + v41 + 152) = 21;
        ++i;
      }
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(this, (enum CCD_TOPOLOGY_CLASS *)&v87);
      v46 = TopologyClass;
      if ( TopologyClass < 0 )
      {
        v84 = (_QWORD *)WdLogNewEntry5_WdError(v45);
        v84[3] = v46;
        v84[4] = this;
        v84[5] = *((_QWORD *)this + 8);
        WdLogEvent5_WdError(v84);
        v47 = 0;
      }
      else
      {
        v47 = v87;
      }
      *(_DWORD *)(*((_QWORD *)this + 8) + 32LL) = v47;
      active = CCD_TOPOLOGY::_FillPathsActiveFlags(this);
      if ( active < 0 || (active = CCD_TOPOLOGY::FillPathsTargetFlags(this), active < 0) )
      {
        LODWORD(v12) = active;
      }
      else
      {
        v49 = (struct _D3DKMT_HASH *)*((_QWORD *)this + 8);
        v50 = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v90);
        StringHash = CCD_SET_STRING_ID::_QueryStringHash(v50, v49);
        v53 = StringHash;
        if ( StringHash < 0 )
        {
          v85 = (_QWORD *)WdLogNewEntry5_WdError(v52);
          v85[3] = v53;
          v85[4] = this;
          v85[5] = *((_QWORD *)this + 8);
          v85[6] = v3;
          WdLogEvent5_WdError(v85);
        }
        LODWORD(v12) = v53;
      }
      goto LABEL_25;
    }
    if ( (v3 & 0x80u) == 0LL )
    {
      v73 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
      v73[3] = v18;
      v73[4] = this;
      v73[5] = *((_QWORD *)this + 8);
      v73[6] = v3;
      CCD_BTL::Global(v3, v74, v75, v76);
      TopologyForClass = CCD_BTL::GetTopologyForClass(v77, v88[0], this, v86);
      v18 = TopologyForClass;
      if ( TopologyForClass == -1073741789 )
      {
        if ( a3 )
          *a3 = v86[0];
        CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        CCD_TOPOLOGY::FillPathsTargetFlags(this);
        *(_DWORD *)v86 = 0;
        goto LABEL_29;
      }
      if ( TopologyForClass < 0 )
      {
        *(_DWORD *)v86 = v16 | 8;
        v79 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v79[3] = v18;
        v79[4] = this;
        v79[5] = *((_QWORD *)this + 8);
        v79[6] = v3;
        goto LABEL_60;
      }
      *(_DWORD *)v86 = v16 | 4;
    }
    if ( (int)v18 >= 0 )
      goto LABEL_9;
    v79 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v79[3] = (int)v18;
    v79[4] = this;
    v79[5] = *((_QWORD *)this + 8);
    v79[6] = v3;
LABEL_60:
    WdLogEvent5_WdError(v79);
    LODWORD(v12) = v18;
    goto LABEL_29;
  }
  if ( !*((_WORD *)CCD_TOPOLOGY::GetModalitySetId(this) + 4) )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdError(v57);
    v58[3] = this;
    v58[4] = *((_QWORD *)this + 8);
    v58[5] = *(int *)this;
    WdLogEvent5_WdError(v58);
    LODWORD(v12) = -1073741823;
    goto LABEL_25;
  }
  CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v102, this);
  if ( (v3 & 0x2000) != 0 )
  {
    CCD_TOPOLOGY::GetModalitySetId(this);
    v95 = 0;
    v96 = 0LL;
    v97 = 0LL;
    v100 = 0LL;
    v101 = 0LL;
    v98 = 0LL;
    v99 = 0;
    CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)&v95);
    v59 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v102,
            (const struct CCD_SET_STRING_ID *)v90,
            (const struct CCD_SET_STRING_ID *)&v95,
            v3 & 0xF,
            (v3 & 0x1000) != 0);
    CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v95);
  }
  else
  {
    v59 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v102,
            this,
            v3 & 0xF,
            (v3 & 0x1000) != 0);
  }
  LODWORD(v12) = -1073741275;
  if ( v59 != -1073741275 )
  {
    if ( v59 < 0 )
    {
      v66 = (_QWORD *)WdLogNewEntry5_WdError(v61);
      v66[3] = v59;
      v66[4] = this;
      v66[5] = *((_QWORD *)this + 8);
      v66[6] = v3;
      WdLogEvent5_WdError(v66);
      LODWORD(v12) = v59;
      goto LABEL_29;
    }
    *(_DWORD *)v86 = 1;
    goto LABEL_14;
  }
  *(_DWORD *)v86 = 2;
  v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v61, v60, v62, v63);
  v64[3] = this;
  v64[4] = *((_QWORD *)this + 8);
  v65 = v64;
  v64[5] = v3;
LABEL_41:
  WdLogEvent5_WdWarning(v65);
LABEL_29:
  CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v102);
LABEL_25:
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v90);
LABEL_26:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v104);
  CCD_TOPOLOGY::RetrievePersisted_::_2_::RecordRetrievalFlags::_RecordRetrievalFlags(v86);
  return (unsigned int)v12;
}
