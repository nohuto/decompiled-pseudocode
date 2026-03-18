/*
 * XREFs of ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006646C
 * Callers:
 *     DxgkFunctionalizePathsModality @ 0x1C0062660 (DxgkFunctionalizePathsModality.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00B3D34 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0150824 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0151318 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C0064388 (-ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00646A0 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0064B1C (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0064D90 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z @ 0x1C0065090 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0065B34 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C0065BC0 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00660CC (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0066138 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0066174 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00663CC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C009C2D8 (-BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_OR.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C017DDB8 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
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
  int v12; // edi
  unsigned int i; // ecx
  unsigned __int16 v14; // ax
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned int v17; // esi
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
  int v28; // eax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // r8
  unsigned __int16 v33; // si
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rsi
  unsigned int v45; // ebp
  __int64 v46; // r14
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v48; // rax
  bool v49; // si
  CCD_TOPOLOGY *v50; // rcx
  __int64 v51; // rax
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v52; // rdx
  int v53; // r10d
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  int v57; // eax
  _BYTE v58[96]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int16 v59; // [rsp+C0h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 8);
  v5 = a2;
  if ( v4 )
    v7 = *(_WORD *)(v4 + 20);
  else
    v7 = 0;
  if ( !v7 )
  {
    v30 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v30 + 24) = this;
    *(_QWORD *)(v30 + 32) = *((_QWORD *)this + 8);
    WdLogEvent5_WdWarning(v30);
    return 3221225473LL;
  }
  CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(this);
  v8 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(this);
  v10 = v8;
  if ( v8 >= 0 )
  {
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
      CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v58, 8u, 0);
      v59 = 8;
      while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v58, v33, v34, v35) >= v33 )
      {
        LOBYTE(v39) = 1;
        LOBYTE(v36) = 1;
        v40 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v58, v36, 0LL, v39, &v59);
        if ( v40 != -1073741789 )
          goto LABEL_40;
        v33 = v59;
      }
      v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v37, v36, v38, v39);
      v43[3] = v33;
      v43[4] = this;
      v42 = *((_QWORD *)this + 8);
      v43[5] = v42;
      v40 = -1073741801;
LABEL_40:
      if ( v40 >= 0 )
      {
        v44 = *((_QWORD *)this + 8);
        v45 = 0;
        if ( *(_WORD *)(v44 + 20) )
        {
          while ( 1 )
          {
            v46 = 216LL * v45;
            Global = DXGGLOBAL::GetGlobal();
            v48 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(v46 + v44 + 56));
            if ( !v48 )
              break;
            v49 = *((_QWORD *)v48 + 248) == 0LL;
            DXGADAPTER::ReleaseReference(v48);
            v51 = *((_QWORD *)this + 8);
            if ( *(_BYTE *)(v46 + v51 + 165) )
            {
              if ( !v49 )
              {
                v52 = (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v46 + v51 + 48);
                if ( (*(_DWORD *)v52 & 0x20101) == 0x20000 )
                  CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v50, v52, (const struct CCD_TOPOLOGY *)v58);
              }
            }
            v44 = *((_QWORD *)this + 8);
            if ( ++v45 >= *(unsigned __int16 *)(v44 + 20) )
              goto LABEL_51;
          }
          v12 = 0;
        }
      }
      else
      {
        WdLogNewEntry5_WdTrace(v42, v41, v34, v35);
        v12 = 0;
      }
LABEL_51:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v58);
    }
    CCD_TOPOLOGY::LogFunctionalizePacket(this, 1);
    v16 = *((_QWORD *)this + 8);
    v17 = 0;
    LOWORD(v18) = *(_WORD *)(v16 + 20);
    if ( (_WORD)v18 )
    {
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
LABEL_23:
        v16 = *((_QWORD *)this + 8);
        ++v17;
        v18 = *(unsigned __int16 *)(v16 + 20);
        if ( v17 >= v18 )
          goto LABEL_24;
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
        v10 = PathModalityForAdapter;
        if ( PathModalityForAdapter != -1071774970 )
          break;
        if ( !v19 )
          goto LABEL_29;
        v27 = *((_QWORD *)this + 8);
        v53 = 0;
        LODWORD(v54) = 0;
        v55 = v22 + v27;
        if ( !*(_WORD *)(v27 + 20) )
          goto LABEL_29;
        do
        {
          v56 = 216LL * (unsigned int)v54;
          if ( *(_DWORD *)(v56 + v27 + 56) == *(_DWORD *)(v55 + 56)
            && *(_DWORD *)(v56 + v27 + 60) == *(_DWORD *)(v55 + 60) )
          {
            v57 = *(_DWORD *)(v56 + v27 + 48);
            if ( (v57 & 0x100000) != 0 )
            {
              *(_DWORD *)(v56 + v27 + 48) = v57 & 0xFFFFFEFE;
              *(_DWORD *)(v56 + *((_QWORD *)this + 8) + 52) &= 0xFFFFFEFE;
              v53 = 1;
              *(_DWORD *)(v56 + *((_QWORD *)this + 8) + 48) &= ~0x100000u;
            }
          }
          v27 = *((_QWORD *)this + 8);
          v54 = (unsigned int)(v54 + 1);
        }
        while ( (unsigned int)v54 < *(unsigned __int16 *)(v27 + 20) );
        if ( !v53 || j )
          goto LABEL_29;
        WdLogNewEntry5_WdTrace(v27, v56, v54, v55);
      }
      if ( PathModalityForAdapter >= 0 )
        goto LABEL_23;
LABEL_29:
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v31[3] = v10;
      v31[4] = *((_QWORD *)this + 8);
      v32 = 216LL * v17;
      v31[5] = v17;
      v31[6] = *(int *)(v32 + *((_QWORD *)this + 8) + 60);
      v31[7] = *(unsigned int *)(v32 + *((_QWORD *)this + 8) + 56);
      goto LABEL_30;
    }
LABEL_24:
    CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x100000);
    v28 = CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(this);
    v10 = v28;
    if ( v28 >= 0 )
    {
      CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x200000);
      CCD_TOPOLOGY::AdjustDesktopLayout(this);
      CCD_TOPOLOGY::FillScalingIntent(this);
      CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
      return 0LL;
    }
  }
  v31 = (_QWORD *)WdLogNewEntry5_WdError(v9);
  v31[3] = *((_QWORD *)this + 8);
  v31[4] = v10;
LABEL_30:
  WdLogEvent5_WdError(v31);
  return (unsigned int)v10;
}
