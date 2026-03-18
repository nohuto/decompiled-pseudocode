/*
 * XREFs of ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00A23F8
 * Callers:
 *     ?_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C0060194 (-_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     DxgkGetPathsModality @ 0x1C00A6630 (DxgkGetPathsModality.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01548FC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 * Callees:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000A1C4 (DxgkLogCodePointPacket.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??1CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@XZ @ 0x1C005DEC4 (--1CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@XZ.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C005DEE4 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C005DF70 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z @ 0x1C005DFEC (--0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAU_D3DKMT_HASH@@@Z @ 0x1C005F5B4 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAU_D3DKMT_HASH@@@Z.c)
 *     ?RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x1C00602F8 (-RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0061B74 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C0061EA8 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00620B8 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00A2334 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00A2A8C (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00A3A3C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00A4538 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00A5B24 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     ?CommitTo@CDS_JOURNAL@CCD_BTL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C00AE0F0 (-CommitTo@CDS_JOURNAL@CCD_BTL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     sub_1C00C4E20 @ 0x1C00C4E20 (sub_1C00C4E20.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C0181DE4 (-LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C018305C (--0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01830C8 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
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
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  bool v22; // zf
  struct CCD_BTL *v23; // rax
  bool v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  unsigned int i; // r14d
  __int64 v37; // r12
  int TopologyClass; // eax
  __int64 v39; // rcx
  __int64 v40; // rbx
  int v41; // ecx
  int active; // eax
  struct _D3DKMT_HASH *v43; // rbx
  struct _STRING *v44; // rax
  int StringHash; // eax
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  const struct CCD_SET_STRING_ID *ModalitySetId; // rax
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
  const void *v65; // rdx
  const struct _STRING *ConnectedSetStr; // rax
  struct _D3DKMT_GETPATHSMODALITY *v67; // r8
  _QWORD *v68; // rax
  BTL_TOPOLOGY_CONSTRUCTOR *v69; // rax
  int v70; // eax
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  unsigned int v78; // [rsp+38h] [rbp-D0h] BYREF
  int v79; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v80; // [rsp+40h] [rbp-C8h]
  size_t Size; // [rsp+48h] [rbp-C0h]
  _QWORD v82[4]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v83; // [rsp+70h] [rbp-98h]
  __int64 v84; // [rsp+78h] [rbp-90h]
  __int64 v85; // [rsp+80h] [rbp-88h]
  void *Src[2]; // [rsp+88h] [rbp-80h] BYREF
  int v87; // [rsp+98h] [rbp-70h] BYREF
  __int64 v88; // [rsp+A0h] [rbp-68h]
  __int64 v89; // [rsp+A8h] [rbp-60h]
  __int64 v90; // [rsp+B0h] [rbp-58h]
  __int16 v91; // [rsp+B8h] [rbp-50h]
  __int64 v92; // [rsp+C0h] [rbp-48h]
  __int64 v93; // [rsp+C8h] [rbp-40h]
  _BYTE v94[12]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int16 v95; // [rsp+E4h] [rbp-24h]
  char v96; // [rsp+1E0h] [rbp+D8h] BYREF

  v3 = a2;
  v5 = 0;
  v78 = 0;
  v96 = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v96, 0);
  v9 = v7;
  if ( v7 < 0 )
  {
    v49 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v49 + 24) = v9;
    WdLogEvent5_WdError(v49);
    goto LABEL_26;
  }
  LODWORD(v82[0]) = 0;
  memset(&v82[1], 0, 24);
  v84 = 0LL;
  v85 = 0LL;
  LOWORD(v83) = 0;
  CCD_BTL::Global();
  ConnectivitySetId = CCD_BTL::RetrieveConnectivitySetId(v10, (struct CCD_SET_STRING_ID *)v82);
  v9 = ConnectivitySetId;
  if ( ConnectivitySetId < 0 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v50[3] = v9;
    v50[4] = this;
    v50[5] = *((_QWORD *)this + 8);
    v50[6] = v3;
    WdLogEvent5_WdError(v50);
    goto LABEL_25;
  }
  if ( (v3 & 0x20) == 0 )
  {
    CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v94, this);
    v13 = 1;
    LODWORD(v80) = v3 & 0xF;
    v14 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v94,
            (const struct CCD_SET_STRING_ID *)v82,
            0LL,
            v80,
            (v3 & 0x1000) != 0);
    v16 = v14;
    LODWORD(v9) = -1073741789;
    if ( v14 == -1073741789 )
    {
      if ( a3 )
        *a3 = v95;
      goto LABEL_29;
    }
    if ( v14 < 0 )
    {
      *(struct _STRING *)Src = *CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v82);
      v79 = _mm_cvtsi128_si32(*(__m128i *)Src);
      v78 = (unsigned __int16)v79 + 57;
      Size = v78;
      v62 = operator new[](v78, 0x63644356u, PagedPool);
      v63 = v62;
      if ( v62 )
      {
        memset(v62, 0, Size);
        v64 = (unsigned __int16)v79;
        v65 = Src[1];
        v63[1] = v78;
        *v63 = 9;
        v63[10] = 0;
        *((_QWORD *)v63 + 4) = 0LL;
        *((_QWORD *)v63 + 1) = 0LL;
        *((_QWORD *)v63 + 2) = 0LL;
        *((_QWORD *)v63 + 3) = 0LL;
        v63[12] = v16;
        v63[13] = v3;
        memmove(v63 + 14, v65, v64);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v63);
        operator delete(v63);
      }
      else
      {
        DxgkLogCodePointPacket(0x1Bu, v3, v16, 0);
      }
      v13 = 2;
    }
    else if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v15) + 912) )
    {
      ConnectedSetStr = CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v82);
      v67 = (struct _D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
      *(struct _STRING *)Src = *ConnectedSetStr;
      LogCddDatabaseAccessPacket(1, v16, v67, (struct _STRING *)Src, v3);
    }
    else
    {
      DxgkLogCodePointPacket(9u, v3, v16, 0);
    }
    v78 = v13;
    if ( (int)v16 >= 0 )
    {
LABEL_9:
      v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
      v22 = (_DWORD)v80 == 15;
      v21[3] = this;
      v21[4] = *((_QWORD *)this + 8);
      v21[5] = v3;
      if ( v22 )
      {
        v23 = CCD_BTL::Global();
        v25 = CCD_BTL::CDS_JOURNAL::CommitTo((struct CCD_BTL *)((char *)v23 + 88), this, v24, a3);
        v30 = v25;
        if ( v25 != -1073741789 )
        {
          if ( v25 == -1073741266 )
          {
            v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
            v73[3] = -1073741266LL;
            v73[4] = this;
            v73[5] = *((_QWORD *)this + 8);
            v73[6] = v3;
            WdLogEvent5_WdWarning(v73);
          }
          else if ( v25 < 0 )
          {
            v74 = (_QWORD *)WdLogNewEntry5_WdError(v27);
            v74[3] = v30;
            v74[4] = this;
            v74[5] = *((_QWORD *)this + 8);
            v74[6] = v3;
            WdLogEvent5_WdError(v74);
          }
          goto LABEL_14;
        }
        v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
        v60 = v72;
        if ( a3 )
          v5 = *a3;
        v72[3] = v5;
        v72[4] = -1073741789LL;
        v72[5] = this;
        v72[6] = *((_QWORD *)this + 8);
        v72[7] = v3;
        goto LABEL_41;
      }
LABEL_14:
      CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v94);
      v35 = *((_QWORD *)this + 8);
      for ( i = 0; i < *(unsigned __int16 *)(v35 + 20); v35 = *((_QWORD *)this + 8) )
      {
        v37 = 216LL * i;
        if ( *(_DWORD *)(v37 + v35 + 152) != 21 )
        {
          v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
          v75[3] = *(int *)(v37 + v35 + 152);
          v75[4] = this;
          v75[5] = *((_QWORD *)this + 8);
          WdLogEvent5_WdWarning(v75);
        }
        *(_DWORD *)(v37 + v35 + 152) = 21;
        ++i;
      }
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(this, (enum CCD_TOPOLOGY_CLASS *)&v79);
      v40 = TopologyClass;
      if ( TopologyClass < 0 )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdError(v39);
        v76[3] = v40;
        v76[4] = this;
        v76[5] = *((_QWORD *)this + 8);
        WdLogEvent5_WdError(v76);
        v41 = 0;
      }
      else
      {
        v41 = v79;
      }
      *(_DWORD *)(*((_QWORD *)this + 8) + 32LL) = v41;
      active = CCD_TOPOLOGY::_FillPathsActiveFlags(this);
      if ( active < 0 || (active = CCD_TOPOLOGY::FillPathsTargetFlags(this), active < 0) )
      {
        LODWORD(v9) = active;
      }
      else
      {
        v43 = (struct _D3DKMT_HASH *)*((_QWORD *)this + 8);
        v44 = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)v82);
        StringHash = CCD_SET_STRING_ID::_QueryStringHash(v44, v43);
        v47 = StringHash;
        if ( StringHash < 0 )
        {
          v77 = (_QWORD *)WdLogNewEntry5_WdError(v46);
          v77[3] = v47;
          v77[4] = this;
          v77[5] = *((_QWORD *)this + 8);
          v77[6] = v3;
          WdLogEvent5_WdError(v77);
        }
        LODWORD(v9) = v47;
      }
      goto LABEL_25;
    }
    if ( (v3 & 0x80u) == 0LL )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
      v68[3] = v16;
      v68[4] = this;
      v68[5] = *((_QWORD *)this + 8);
      v68[6] = v3;
      CCD_BTL::Global();
      v69 = BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)&v87);
      v70 = BTL_TOPOLOGY_CONSTRUCTOR::operator()(v69);
      v16 = v70;
      if ( v70 == -1073741789 )
      {
        if ( a3 )
          *a3 = v78;
        CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        CCD_TOPOLOGY::FillPathsTargetFlags(this);
        v78 = 0;
        goto LABEL_29;
      }
      if ( v70 < 0 )
      {
        v78 = v13 | 8;
        v71 = (_QWORD *)WdLogNewEntry5_WdError(v18);
        v71[3] = v16;
        v71[4] = this;
        v71[5] = *((_QWORD *)this + 8);
        v71[6] = v3;
        goto LABEL_60;
      }
      v78 = v13 | 4;
    }
    if ( (int)v16 >= 0 )
      goto LABEL_9;
    v71 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v71[3] = (int)v16;
    v71[4] = this;
    v71[5] = *((_QWORD *)this + 8);
    v71[6] = v3;
LABEL_60:
    WdLogEvent5_WdError(v71);
    LODWORD(v9) = v16;
    goto LABEL_29;
  }
  if ( !*((_WORD *)CCD_TOPOLOGY::GetModalitySetId(this) + 4) )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v51);
    v52[3] = this;
    v52[4] = *((_QWORD *)this + 8);
    v52[5] = *(int *)this;
    WdLogEvent5_WdError(v52);
    LODWORD(v9) = -1073741823;
    goto LABEL_25;
  }
  CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v94, this);
  if ( (v3 & 0x2000) != 0 )
  {
    ModalitySetId = CCD_TOPOLOGY::GetModalitySetId(this);
    v87 = 0;
    v88 = 0LL;
    v89 = 0LL;
    v92 = 0LL;
    v93 = 0LL;
    v90 = 0LL;
    v91 = 0;
    CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)&v87, (__int64)ModalitySetId);
    v54 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v94,
            (const struct CCD_SET_STRING_ID *)v82,
            (const struct CCD_SET_STRING_ID *)&v87,
            v3 & 0xF,
            (v3 & 0x1000) != 0);
    CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v87);
  }
  else
  {
    v54 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
            (CCD_RECENT_TOPOLOGY_RETRIEVER *)v94,
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
    v78 = 1;
    goto LABEL_14;
  }
  v78 = 2;
  v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55, v57, v58);
  v59[3] = this;
  v59[4] = *((_QWORD *)this + 8);
  v60 = v59;
  v59[5] = v3;
LABEL_41:
  WdLogEvent5_WdWarning(v60);
LABEL_29:
  CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v94);
LABEL_25:
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v82);
LABEL_26:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v96);
  sub_1C00C4E20(&v78);
  return (unsigned int)v9;
}
