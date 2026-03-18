/*
 * XREFs of ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A118
 * Callers:
 *     DxgkFunctionalizePathsModality @ 0x1C00D8FA0 (DxgkFunctionalizePathsModality.c)
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00DB89C (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00DE56C (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179100 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179C4C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0089D68 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0089DE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0089E20 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C008A078 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C008ACC8 (-ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C008AFEC (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C008B470 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C008B754 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z @ 0x1C008BB94 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C008C6D0 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C008C75C (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00BC468 (-BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_OR.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C01AB428 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
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
  bool v30; // dl
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int16 v34; // di
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rdi
  unsigned int v46; // ebp
  __int64 v47; // r14
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v49; // rax
  BOOL v50; // r15d
  __int64 v51; // rcx
  bool v52; // di
  CCD_TOPOLOGY *v53; // rcx
  __int64 v54; // rax
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v55; // rdx
  int v56; // r10d
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  int v60; // eax
  _QWORD *v61; // rax
  __int64 v62; // r8
  _BYTE v63[152]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int16 v64; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 v65; // [rsp+E0h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 8);
  v5 = a2;
  if ( v4 )
    v7 = *(_WORD *)(v4 + 20);
  else
    v7 = 0;
  if ( !v7 )
  {
    v32 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v32 + 24) = this;
    *(_QWORD *)(v32 + 32) = *((_QWORD *)this + 8);
    WdLogEvent5_WdWarning(v32);
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
    if ( *(_BYTE *)(v15 + v11 + 169) )
    {
      if ( (*(_DWORD *)(v15 + v11 + 48) & 0x20101) == 0x20000 )
        v12 = 1;
    }
  }
  if ( v12 )
  {
    v34 = 8;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v63, 8u, 0);
    v64 = 8;
    while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v63, v34, v35, v36) >= v34 )
    {
      v41 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v63, 1, 0, 1, &v64);
      if ( v41 != -1073741789 )
        goto LABEL_37;
      v34 = v64;
    }
    v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v38, v37, v39, v40);
    v44[3] = v34;
    v44[4] = this;
    v43 = *((_QWORD *)this + 8);
    v44[5] = v43;
    v41 = -1073741801;
LABEL_37:
    if ( v41 >= 0 )
    {
      v45 = *((_QWORD *)this + 8);
      v46 = 0;
      if ( *(_WORD *)(v45 + 20) )
      {
        while ( 1 )
        {
          v47 = 216LL * v46;
          Global = DXGGLOBAL::GetGlobal();
          v49 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(v47 + v45 + 56), &v65);
          if ( !v49 )
            break;
          v50 = *((_QWORD *)v49 + 267) == 0LL;
          v51 = *((_QWORD *)v49 + 266);
          v52 = *(_BYTE *)(v51 + 134) && !*(_BYTE *)(v51 + 133);
          DXGADAPTER::ReleaseReference(v49);
          v54 = *((_QWORD *)this + 8);
          if ( *(_BYTE *)(v47 + v54 + 169) )
          {
            if ( !v50 && !v52 )
            {
              v55 = (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v47 + v54 + 48);
              if ( (*(_DWORD *)v55 & 0x20101) == 0x20000 )
                CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v53, v55, (const struct CCD_TOPOLOGY *)v63);
            }
          }
          v45 = *((_QWORD *)this + 8);
          if ( ++v46 >= *(unsigned __int16 *)(v45 + 20) )
            goto LABEL_53;
        }
        v12 = 0;
      }
    }
    else
    {
      WdLogNewEntry5_WdTrace(v43, v42, v35, v36);
      v12 = 0;
    }
LABEL_53:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v63);
  }
  CCD_TOPOLOGY::LogFunctionalizePacket(this, 1);
  v16 = *((_QWORD *)this + 8);
  v17 = 0;
  LOWORD(v18) = *(_WORD *)(v16 + 20);
  if ( !(_WORD)v18 )
  {
LABEL_26:
    CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x100000u);
    v29 = CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(this);
    v10 = v29;
    if ( v29 >= 0 )
    {
      CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x200000u);
      CCD_TOPOLOGY::AdjustDesktopLayout(this);
      CCD_TOPOLOGY::FillScalingIntent(this, v30);
      CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
      return 0LL;
    }
LABEL_30:
    v33 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v33 + 24) = *((_QWORD *)this + 8);
    *(_QWORD *)(v33 + 32) = v10;
    WdLogEvent5_WdError(v33);
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
    v56 = 0;
    LODWORD(v57) = 0;
    v58 = v22 + v27;
    if ( !*(_WORD *)(v27 + 20) )
      goto LABEL_65;
    do
    {
      v59 = 216LL * (unsigned int)v57;
      if ( *(_DWORD *)(v59 + v27 + 56) == *(_DWORD *)(v58 + 56) && *(_DWORD *)(v59 + v27 + 60) == *(_DWORD *)(v58 + 60) )
      {
        v60 = *(_DWORD *)(v59 + v27 + 48);
        if ( (v60 & 0x100000) != 0 )
        {
          *(_DWORD *)(v59 + v27 + 48) = v60 & 0xFFFFFEFE;
          *(_DWORD *)(v59 + *((_QWORD *)this + 8) + 52) &= 0xFFFFFEFE;
          v56 = 1;
          *(_DWORD *)(v59 + *((_QWORD *)this + 8) + 48) &= ~0x100000u;
        }
      }
      v27 = *((_QWORD *)this + 8);
      v57 = (unsigned int)(v57 + 1);
    }
    while ( (unsigned int)v57 < *(unsigned __int16 *)(v27 + 20) );
    if ( !v56 || j )
      goto LABEL_65;
    WdLogNewEntry5_WdTrace(v27, v59, v57, v58);
  }
  if ( PathModalityForAdapter >= 0 )
    goto LABEL_25;
LABEL_65:
  v61 = (_QWORD *)WdLogNewEntry5_WdError(v27);
  v61[3] = v28;
  v61[4] = *((_QWORD *)this + 8);
  v62 = 216LL * v17;
  v61[5] = v17;
  v61[6] = *(int *)(v62 + *((_QWORD *)this + 8) + 60);
  v61[7] = *(unsigned int *)(v62 + *((_QWORD *)this + 8) + 56);
  WdLogEvent5_WdError(v61);
  return (unsigned int)v28;
}
