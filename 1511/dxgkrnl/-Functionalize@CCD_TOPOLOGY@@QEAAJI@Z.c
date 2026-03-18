/*
 * XREFs of ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4C38
 * Callers:
 *     DxgkFunctionalizePathsModality @ 0x1C00C31E0 (DxgkFunctionalizePathsModality.c)
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00C6908 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00C9138 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01548FC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01553A0 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C00A2964 (-ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00A2C88 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00A3104 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00A33EC (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z @ 0x1C00A382C (-FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00A42E0 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00A436C (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00A4894 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00A4904 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00A4940 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00A4B98 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00A93F4 (-BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_OR.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C018225C (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Functionalize(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v5; // r12d
  __int16 v7; // ax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  int v12; // esi
  unsigned int i; // ecx
  unsigned __int16 v14; // ax
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned int v17; // edi
  unsigned int v18; // ecx
  __int64 v19; // r15
  __int64 v20; // rdx
  unsigned __int16 v21; // cx
  __int64 v22; // r14
  __int64 v23; // r8
  int j; // ebp
  __int64 v25; // r8
  int PathModalityForAdapter; // eax
  __int64 v27; // rcx
  __int64 v28; // rsi
  int v29; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int16 v33; // di
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // eax
  __int64 v41; // rdx
  CCD_TOPOLOGY *v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rdi
  unsigned int v45; // ebp
  __int64 v46; // r14
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v48; // rax
  BOOL v49; // r15d
  __int64 v50; // rcx
  bool v51; // di
  __int64 v52; // rax
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v53; // rdx
  int v54; // r10d
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  int v58; // eax
  _QWORD *v59; // rax
  __int64 v60; // r8
  _BYTE v61[96]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int16 v62; // [rsp+C0h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 8);
  v5 = a2;
  if ( v4 )
    v7 = *(_WORD *)(v4 + 20);
  else
    v7 = 0;
  if ( !v7 )
  {
    v31 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v31 + 24) = this;
    *(_QWORD *)(v31 + 32) = *((_QWORD *)this + 8);
    WdLogEvent5_WdWarning(v31);
    return 3221225473LL;
  }
  CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(this);
  v8 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(this);
  v10 = v8;
  if ( v8 < 0 )
    goto LABEL_30;
  v11 = *((_QWORD *)this + 8);
  v12 = 0;
  for ( i = 0; ; ++i )
  {
    v14 = v11 ? *(_WORD *)(v11 + 20) : 0;
    if ( i >= v14 )
      break;
    v15 = 216LL * i;
    if ( *(_BYTE *)(v15 + v11 + 165) )
    {
      if ( (*(_DWORD *)(v15 + v11 + 48) & 0x20101) == 0x20000 )
        v12 = 1;
    }
  }
  if ( v12 )
  {
    v33 = 8;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v61, 8u, 0);
    v62 = 8;
    while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v61, v33, v34, v35) >= v33 )
    {
      v40 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v61, 1, 0, 1, &v62);
      if ( v40 != -1073741789 )
        goto LABEL_37;
      v33 = v62;
    }
    v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v37, v36, v38, v39);
    v43[3] = v33;
    v43[4] = this;
    v42 = (CCD_TOPOLOGY *)*((_QWORD *)this + 8);
    v43[5] = v42;
    v40 = -1073741801;
LABEL_37:
    if ( v40 >= 0 )
    {
      v44 = *((_QWORD *)this + 8);
      v45 = 0;
      if ( *(_WORD *)(v44 + 20) )
      {
        while ( 1 )
        {
          v46 = 216LL * v45;
          Global = DXGGLOBAL::GetGlobal((__int64)v42);
          v48 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(v46 + v44 + 56));
          if ( !v48 )
            break;
          v49 = *((_QWORD *)v48 + 249) == 0LL;
          v50 = *((_QWORD *)v48 + 248);
          v51 = *(_BYTE *)(v50 + 158) && !*(_BYTE *)(v50 + 157);
          DXGADAPTER::ReleaseReference(v48);
          v52 = *((_QWORD *)this + 8);
          if ( *(_BYTE *)(v46 + v52 + 165) )
          {
            if ( !v49 && !v51 )
            {
              v53 = (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v46 + v52 + 48);
              if ( (*(_DWORD *)v53 & 0x20101) == 0x20000 )
                CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v42, v53, (const struct CCD_TOPOLOGY *)v61);
            }
          }
          v44 = *((_QWORD *)this + 8);
          if ( ++v45 >= *(unsigned __int16 *)(v44 + 20) )
            goto LABEL_53;
        }
        v12 = 0;
      }
    }
    else
    {
      WdLogNewEntry5_WdTrace(v42, v41, v34, v35);
      v12 = 0;
    }
LABEL_53:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v61);
  }
  CCD_TOPOLOGY::LogFunctionalizePacket(this, 1);
  v16 = *((_QWORD *)this + 8);
  v17 = 0;
  LOWORD(v18) = *(_WORD *)(v16 + 20);
  if ( !(_WORD)v18 )
  {
LABEL_26:
    CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x100000);
    v29 = CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(this);
    v10 = v29;
    if ( v29 >= 0 )
    {
      CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x200000);
      CCD_TOPOLOGY::AdjustDesktopLayout(this);
      CCD_TOPOLOGY::FillScalingIntent(this);
      CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
      return 0LL;
    }
LABEL_30:
    v32 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v32 + 24) = *((_QWORD *)this + 8);
    *(_QWORD *)(v32 + 32) = v10;
    WdLogEvent5_WdError(v32);
    return (unsigned int)v10;
  }
  v19 = v12;
  while ( 1 )
  {
    if ( v16 && (_WORD)v18 )
    {
      v20 = *((_QWORD *)this + 8);
      v21 = 0;
      v22 = 216LL * v17;
      while ( 1 )
      {
        v23 = 216LL * v21;
        if ( *(_DWORD *)(v23 + v20 + 56) == *(_DWORD *)(v22 + v20 + 56)
          && *(_DWORD *)(v23 + v20 + 60) == *(_DWORD *)(v22 + v20 + 60) )
        {
          break;
        }
        ++v21;
      }
      if ( v21 == v17 )
        break;
    }
LABEL_25:
    v16 = *((_QWORD *)this + 8);
    ++v17;
    v18 = *(unsigned __int16 *)(v16 + 20);
    if ( v17 >= v18 )
      goto LABEL_26;
  }
  for ( j = 0; ; j = 1 )
  {
    v25 = *((unsigned int *)this + 19);
    LOBYTE(v25) = v25 & 1;
    PathModalityForAdapter = BmlGetPathModalityForAdapter(
                               *((_QWORD *)this + 8),
                               *(_QWORD *)(v22 + *((_QWORD *)this + 8) + 56),
                               v25,
                               *((unsigned int *)this + 20),
                               v5);
    v28 = PathModalityForAdapter;
    if ( PathModalityForAdapter != -1071774970 )
      break;
    if ( !v19 )
      goto LABEL_65;
    v27 = *((_QWORD *)this + 8);
    v54 = 0;
    LODWORD(v55) = 0;
    v56 = v22 + v27;
    if ( !*(_WORD *)(v27 + 20) )
      goto LABEL_65;
    do
    {
      v57 = 216LL * (unsigned int)v55;
      if ( *(_DWORD *)(v57 + v27 + 56) == *(_DWORD *)(v56 + 56) && *(_DWORD *)(v57 + v27 + 60) == *(_DWORD *)(v56 + 60) )
      {
        v58 = *(_DWORD *)(v57 + v27 + 48);
        if ( (v58 & 0x100000) != 0 )
        {
          *(_DWORD *)(v57 + v27 + 48) = v58 & 0xFFFFFEFE;
          *(_DWORD *)(v57 + *((_QWORD *)this + 8) + 52) &= 0xFFFFFEFE;
          v54 = 1;
          *(_DWORD *)(v57 + *((_QWORD *)this + 8) + 48) &= ~0x100000u;
        }
      }
      v27 = *((_QWORD *)this + 8);
      v55 = (unsigned int)(v55 + 1);
    }
    while ( (unsigned int)v55 < *(unsigned __int16 *)(v27 + 20) );
    if ( !v54 || j )
      goto LABEL_65;
    WdLogNewEntry5_WdTrace(v27, v57, v55, v56);
  }
  if ( PathModalityForAdapter >= 0 )
    goto LABEL_25;
LABEL_65:
  v59 = (_QWORD *)WdLogNewEntry5_WdError(v27);
  v59[3] = v28;
  v59[4] = *((_QWORD *)this + 8);
  v60 = 216LL * v17;
  v59[5] = v17;
  v59[6] = *(int *)(v60 + *((_QWORD *)this + 8) + 60);
  v59[7] = *(unsigned int *)(v60 + *((_QWORD *)this + 8) + 56);
  WdLogEvent5_WdError(v59);
  return (unsigned int)v28;
}
