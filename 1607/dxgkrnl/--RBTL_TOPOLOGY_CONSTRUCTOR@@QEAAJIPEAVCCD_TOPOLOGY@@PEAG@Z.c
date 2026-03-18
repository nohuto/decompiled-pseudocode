/*
 * XREFs of ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01AC31C
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C008CD28 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1C0006E58 (-GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ.c)
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0089D20 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0089D68 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0089DE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C008AB70 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C008CC40 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C00B7318 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B8BD4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00C0D60 (DxgkIsVirtualizationDisabledForTarget.c)
 *     DxgkIsMonitorConnected @ 0x1C014EC30 (DxgkIsMonitorConnected.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01AAD64 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C01AB614 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     _lambda_ec93b9281a0787a19e343340c0b05f1f_::operator() @ 0x1C01AC284 (_lambda_ec93b9281a0787a19e343340c0b05f1f_--operator().c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01AD420 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01ADE04 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01ADEEC (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01ADF20 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01ADFB8 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01AE048 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C01AE088 (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::operator()(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        unsigned int a2,
        CCD_TOPOLOGY *a3,
        unsigned __int16 *a4)
{
  __int64 v5; // r15
  unsigned __int16 *v6; // r13
  CCD_TOPOLOGY *v7; // r14
  unsigned int v8; // esi
  char *v9; // r12
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  unsigned __int16 v17; // r15
  __int64 v18; // rcx
  struct CCD_BTL *v19; // rax
  unsigned int v20; // r14d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v22; // rbx
  __int64 v23; // r8
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v24; // rax
  __int128 v25; // xmm1
  char *v26; // rbx
  unsigned int v27; // r15d
  unsigned int j; // r15d
  unsigned int v29; // r14d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v30; // r15
  unsigned int v31; // ebx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v32; // rax
  unsigned int v33; // ebx
  CCD_TOPOLOGY *v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v38; // r14
  const struct _LUID *v39; // r15
  bool *v40; // r12
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int128 v44; // xmm1
  void **v45; // rcx
  __int128 v46; // xmm0
  __int64 v47; // rcx
  int v48; // eax
  bool v49; // zf
  bool v50; // dl
  int v51; // eax
  __int64 v52; // rcx
  void **v53; // rcx
  int v54; // eax
  __int64 v55; // rax
  void **v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // eax
  _QWORD *v62; // rax
  void **v63; // rcx
  int v64; // eax
  __int64 v65; // rcx
  unsigned __int16 v66; // cx
  unsigned __int16 v67; // ax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v68; // rax
  unsigned int v69; // ecx
  __int16 v71; // [rsp+38h] [rbp-89h]
  __int16 v72; // [rsp+3Ch] [rbp-85h]
  int v73; // [rsp+40h] [rbp-81h]
  _BYTE v74[64]; // [rsp+48h] [rbp-79h] BYREF
  __int64 v75; // [rsp+88h] [rbp-39h]
  __int128 v76; // [rsp+A8h] [rbp-19h]
  __int128 v77; // [rsp+B8h] [rbp-9h]
  __int128 v78; // [rsp+C8h] [rbp+7h]
  CCD_TOPOLOGY *i; // [rsp+128h] [rbp+67h] BYREF
  unsigned int v80; // [rsp+130h] [rbp+6Fh]
  CCD_TOPOLOGY *v81; // [rsp+138h] [rbp+77h]
  unsigned __int16 *v82; // [rsp+140h] [rbp+7Fh]

  v82 = a4;
  v81 = a3;
  v80 = a2;
  *(_QWORD *)this = a3;
  *((_WORD *)this + 4) = 0;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = 0;
  CCD_TOPOLOGY::Clear((void **)a3);
  v9 = (char *)this + 12;
  v10 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query((BTL_TOPOLOGY_CONSTRUCTOR *)((char *)this + 12));
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = v12;
    v13[4] = v5;
    goto LABEL_3;
  }
  v14 = 1LL;
  switch ( (_DWORD)v5 )
  {
    case 1:
      v64 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
      goto LABEL_82;
    case 2:
      v64 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 1);
      goto LABEL_82;
    case 4:
      v64 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 1);
      goto LABEL_82;
    case 8:
      v64 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
LABEL_82:
      LODWORD(i) = v64;
      LODWORD(v12) = v64;
      goto LABEL_83;
  }
  if ( (_DWORD)v5 != 15 )
  {
    LODWORD(v12) = -1073741811;
    goto LABEL_84;
  }
  v15 = *(_OWORD *)((char *)this + 28);
  v73 = *((_DWORD *)this + 15);
  v76 = *(_OWORD *)v9;
  v16 = *(_OWORD *)((char *)this + 44);
  v77 = v15;
  v78 = v16;
  v71 = BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(this);
  v72 = v71;
  v17 = v71;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v74, 8u, 0);
  v19 = CCD_BTL::Global(v18);
  if ( (int)CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v74, v19) < 0 )
    goto LABEL_46;
  v20 = 0;
  if ( (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v74) )
  {
    do
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v74, v20);
      LOBYTE(i) = 0;
      v22 = PathDescriptor;
      if ( (int)DxgkIsMonitorConnected(*((_QWORD *)PathDescriptor + 1), *((_DWORD *)PathDescriptor + 5), v23, &i) >= 0
        && (_BYTE)i )
      {
        *((_DWORD *)v22 + 1) = 0;
        if ( v20 != v8 )
        {
          v24 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v74, v8);
          *(_OWORD *)v24 = *(_OWORD *)v22;
          *((_OWORD *)v24 + 1) = *((_OWORD *)v22 + 1);
          *((_OWORD *)v24 + 2) = *((_OWORD *)v22 + 2);
          *((_OWORD *)v24 + 3) = *((_OWORD *)v22 + 3);
          *((_OWORD *)v24 + 4) = *((_OWORD *)v22 + 4);
          *((_OWORD *)v24 + 5) = *((_OWORD *)v22 + 5);
          *((_OWORD *)v24 + 6) = *((_OWORD *)v22 + 6);
          v25 = *((_OWORD *)v22 + 7);
          v26 = (char *)v22 + 128;
          *((_OWORD *)v24 + 7) = v25;
          *((_OWORD *)v24 + 8) = *(_OWORD *)v26;
          *((_OWORD *)v24 + 9) = *((_OWORD *)v26 + 1);
          *((_OWORD *)v24 + 10) = *((_OWORD *)v26 + 2);
          *((_OWORD *)v24 + 11) = *((_OWORD *)v26 + 3);
          *((_OWORD *)v24 + 12) = *((_OWORD *)v26 + 4);
          *((_QWORD *)v24 + 26) = *((_QWORD *)v26 + 10);
        }
        ++v8;
      }
      else
      {
        v27 = 0;
        for ( i = (CCD_TOPOLOGY *)v74; v27 < v8; ++v27 )
          lambda_ec93b9281a0787a19e343340c0b05f1f_::operator()(&i, v22, v27);
        for ( j = v20 + 1; j < (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v74); ++j )
          lambda_ec93b9281a0787a19e343340c0b05f1f_::operator()(&i, v22, j);
      }
      ++v20;
    }
    while ( v20 < (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v74) );
    v9 = (char *)this + 12;
  }
  v29 = v8;
  *(_WORD *)(v75 + 20) = v8;
  if ( !v8 )
  {
LABEL_64:
    LODWORD(v12) = -1073741637;
    LODWORD(i) = -1073741637;
    goto LABEL_44;
  }
  do
  {
    v30 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v74, v29 - 1);
    if ( (*(_DWORD *)v30 & 0x40000) != 0 )
    {
      v31 = 0;
      if ( !v29 )
        goto LABEL_34;
      while ( 1 )
      {
        v32 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v74, v31);
        if ( (*(_DWORD *)v32 & 0x40000) != 0 && *((_DWORD *)v30 + 50) == *((_DWORD *)v32 + 50) )
          break;
        if ( ++v31 >= v29 )
          goto LABEL_34;
      }
      v33 = v31 | 0xFE530000;
    }
    else
    {
      v33 = (v29 - 1) | 0xFE530000;
      *(_DWORD *)v30 |= 0x40000u;
    }
    *((_DWORD *)v30 + 50) = v33;
LABEL_34:
    --v29;
  }
  while ( v29 );
  if ( (unsigned __int16)(v71 - 1) <= 1u )
    goto LABEL_64;
  v34 = *(CCD_TOPOLOGY **)this;
  *((_WORD *)this + 4) = v8;
  v35 = CCD_TOPOLOGY::CopyInheritScope(v34, (const struct CCD_TOPOLOGY *)v74);
  v12 = v35;
  LODWORD(i) = v35;
  if ( v35 < 0 )
  {
    v37 = WdLogNewEntry5_WdError(v36);
    *(_QWORD *)(v37 + 24) = v12;
    WdLogEvent5_WdError(v37);
    goto LABEL_44;
  }
  if ( v8 != 1 )
    v72 = 4;
  v38 = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, 0);
  v39 = (const struct _LUID *)((char *)v38 + 8);
  *(_QWORD *)v9 = *((_QWORD *)v38 + 1);
  v40 = (bool *)this + 60;
  *((_DWORD *)this + 5) = *((_DWORD *)v38 + 4);
  *((_DWORD *)this + 6) = *((_DWORD *)v38 + 5);
  *((_DWORD *)this + 7) = *((_DWORD *)v38 + 20);
  *((_DWORD *)this + 8) = *((_DWORD *)v38 + 21);
  IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                        *((_QWORD *)v38 + 1),
                                        *((_DWORD *)v38 + 5),
                                        (bool *)this + 53,
                                        (bool *)this + 60,
                                        0LL,
                                        0LL);
  v42 = 0LL;
  v12 = IsVirtualizationDisabledForTarget;
  LODWORD(i) = IsVirtualizationDisabledForTarget;
  if ( IsVirtualizationDisabledForTarget < 0 )
  {
LABEL_41:
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v42);
    v43[3] = *((unsigned int *)v38 + 5);
    v43[4] = *((int *)v38 + 3);
    v43[5] = v39->LowPart;
    v43[6] = v12;
    goto LABEL_42;
  }
  v49 = !*v40;
  *((_BYTE *)this + 53) = *((_BYTE *)this + 53) == 0;
  *v40 = v49;
  *((_BYTE *)this + 11) = v72 == 3;
  v50 = v72 == 3 && v49;
  *((_BYTE *)this + 10) = v50;
  if ( v49 || v72 != 3 )
  {
    v54 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(this, 0);
    v12 = v54;
    LODWORD(i) = v54;
    if ( v54 < 0 )
      goto LABEL_41;
    goto LABEL_77;
  }
  *((_BYTE *)this + 10) = 0;
  v51 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(this, 0, v39, *((_DWORD *)v38 + 4));
  v12 = v51;
  LODWORD(i) = v51;
  if ( v51 >= 0 )
  {
    if ( IsInternalVideoOutput(*((_DWORD *)v38 + 20))
      && (unsigned __int16)CCD_TOPOLOGY::GetPathsCount(*(CCD_TOPOLOGY **)this) >= 2u )
    {
      CCD_TOPOLOGY::SwapPathsDescriptors(v53, 0, 1u);
    }
  }
  else
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v52);
    v43[3] = v12;
    v43[4] = *((int *)v38 + 3);
    v43[5] = v39->LowPart;
    v43[6] = *((unsigned int *)v38 + 4);
    v43[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
LABEL_42:
    WdLogEvent5_WdError(v43);
  }
  v9 = (char *)this + 12;
LABEL_44:
  if ( (int)v12 < 0 )
  {
    v17 = v71;
LABEL_46:
    v44 = v77;
    v45 = *(void ***)this;
    *(_OWORD *)v9 = v76;
    v46 = v78;
    *((_OWORD *)v9 + 1) = v44;
    *((_OWORD *)v9 + 2) = v46;
    *((_DWORD *)v9 + 12) = v73;
    v8 = 0;
    *((_WORD *)this + 4) = 0;
    CCD_TOPOLOGY::Clear(v45);
    switch ( v17 )
    {
      case 1u:
        v48 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
        break;
      case 2u:
        v48 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
        break;
      case 3u:
        v48 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
        break;
      default:
        if ( (unsigned int)v17 - 4 <= 1 )
        {
          v48 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
          break;
        }
        v55 = WdLogNewEntry5_WdAssertion(v47);
        *(_QWORD *)(v55 + 24) = v17;
        WdLogEvent5_WdAssertion(v55);
        LODWORD(v12) = -1073741823;
        LODWORD(i) = -1073741823;
LABEL_70:
        v56 = *(void ***)this;
        *((_WORD *)this + 4) = 0;
        CCD_TOPOLOGY::Clear(v56);
        if ( v17 == 3 )
        {
          v61 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
LABEL_74:
          LODWORD(i) = v61;
          LODWORD(v12) = v61;
        }
        else if ( (unsigned int)v17 - 4 <= 1 )
        {
          v61 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
          goto LABEL_74;
        }
        if ( (int)v12 < 0 )
        {
          v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v57, v59, v60);
          v62[3] = (int)v12;
          v62[4] = 15LL;
          v62[5] = *(_QWORD *)this;
          v62[6] = v17;
          WdLogEvent5_WdWarning(v62);
          v63 = *(void ***)this;
          *((_WORD *)this + 4) = 0;
          CCD_TOPOLOGY::Clear(v63);
          LODWORD(v12) = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
          LODWORD(i) = v12;
        }
        goto LABEL_77;
    }
    LODWORD(i) = v48;
    LODWORD(v12) = v48;
    if ( v48 < 0 )
      goto LABEL_70;
  }
LABEL_77:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v74);
  v7 = v81;
  LODWORD(v5) = v80;
  v6 = v82;
LABEL_83:
  if ( (int)v12 >= 0 )
  {
    v65 = *(_QWORD *)(*(_QWORD *)this + 64LL);
    if ( v65 )
      v66 = *(_WORD *)(v65 + 22);
    else
      v66 = 0;
    v67 = *((_WORD *)this + 4);
    if ( v67 <= v66 )
    {
      if ( v8 < (unsigned __int16)CCD_TOPOLOGY::GetPathsCount(v7) )
      {
        do
        {
          v68 = CCD_TOPOLOGY::GetPathDescriptor(v7, v8);
          v69 = v8;
          if ( *((_BYTE *)this + 11) )
            v69 = 0;
          ++v8;
          *(_DWORD *)v68 |= 0x40000u;
          *((_DWORD *)v68 + 50) = v69 | 0xFE530000;
        }
        while ( v8 < (unsigned __int16)CCD_TOPOLOGY::GetPathsCount(v7) );
        LODWORD(v12) = (_DWORD)i;
      }
    }
    else
    {
      if ( v6 )
        *v6 = v67;
      LODWORD(v12) = -1073741789;
    }
  }
  else
  {
LABEL_84:
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v13[3] = (int)v12;
    v13[4] = (unsigned int)v5;
LABEL_3:
    v13[5] = *(_QWORD *)this;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v12;
}
