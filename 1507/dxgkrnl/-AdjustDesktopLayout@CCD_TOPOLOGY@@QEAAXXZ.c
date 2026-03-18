/*
 * XREFs of ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00646A0
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006646C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C017EF88 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C0001308 (-GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000136C (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C00085E0 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C0062D9C (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@_N.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0066084 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall CCD_TOPOLOGY::AdjustDesktopLayout(CCD_TOPOLOGY *this)
{
  signed int v2; // esi
  unsigned int i; // r14d
  __int64 v4; // rax
  unsigned __int16 v5; // cx
  unsigned int j; // r14d
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  struct DXGPROCESS *Current; // rax
  __int64 v10; // r13
  unsigned int v11; // ebx
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int k; // r14d
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // esi
  unsigned int v20; // r15d
  __int64 v21; // rax
  unsigned __int16 v22; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // rbx
  unsigned int PrimaryPathInCloneGroup; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // r14d
  __int64 v29; // rcx
  int v30; // r13d
  signed int cx; // r14d
  UINT v32; // r15d
  signed int cy; // r12d
  UINT v34; // r13d
  struct _D3DKMDT_2DREGION v35; // rax
  __int64 v36; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v43; // rbx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v44; // r15
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  int v51; // r11d
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v52; // ecx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  struct _D3DKMDT_2DREGION v66; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v67; // [rsp+30h] [rbp-D8h]
  struct _D3DKMDT_2DREGION v68; // [rsp+38h] [rbp-D0h] BYREF
  int v69; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v70[63]; // [rsp+4Ch] [rbp-BCh] BYREF

  v2 = 0;
  for ( i = 0; ; ++i )
  {
    v4 = *((_QWORD *)this + 8);
    v5 = v4 ? *(_WORD *)(v4 + 20) : 0;
    if ( i >= v5 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( (*(_DWORD *)PathDescriptor & 0x800) != 0
      && (unsigned __int8)CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i) )
    {
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)PathDescriptor + 30)) != D3DKMDT_VPPR_IDENTITY )
      {
        v50 = WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
        *(_QWORD *)(v50 + 24) = 6215LL;
        WdLogEvent5_WdAssertion(v50);
      }
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(PathDescriptor, 0, &v68);
      v42 = *((_QWORD *)PathDescriptor + 22);
      if ( v42 )
      {
        *(_QWORD *)(v42 + 76) = *(_QWORD *)((char *)PathDescriptor + 132);
        *(_DWORD *)(*((_QWORD *)PathDescriptor + 22) + 72LL) |= 0x20u;
      }
      if ( (signed int)(v68.cx + *((_DWORD *)PathDescriptor + 33)) > v2 )
        v2 = v68.cx + *((_DWORD *)PathDescriptor + 33);
    }
  }
  for ( j = 0; ; ++j )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    if ( j >= v8 )
      break;
    v43 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( (*(_DWORD *)v43 & 0x800) == 0 && (unsigned __int8)CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j) )
    {
      v52 = *((_DWORD *)v43 + 30);
      *(_DWORD *)v43 = v51 | 0x800;
      *((_DWORD *)v43 + 33) = v2;
      *((_DWORD *)v43 + 34) = 0;
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v52) != D3DKMDT_VPPR_IDENTITY )
      {
        v57 = WdLogNewEntry5_WdAssertion(v54, v53, v55, v56);
        *(_QWORD *)(v57 + 24) = 6260LL;
        WdLogEvent5_WdAssertion(v57);
      }
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v43, 0, &v68);
      v58 = *((_QWORD *)v43 + 22);
      if ( v58 )
      {
        *(_DWORD *)(v58 + 76) = v2;
        *(_DWORD *)(*((_QWORD *)v43 + 22) + 80LL) = 0;
        *(_DWORD *)(*((_QWORD *)v43 + 22) + 72LL) |= 0x20u;
      }
      v2 += v68.cx;
    }
  }
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v10 = *((_QWORD *)Current + 10);
    if ( v10 )
    {
      v11 = -1;
      v69 = 0;
      v12 = 0;
      memset(v70, 0, sizeof(v70));
      for ( k = 0; ; ++k )
      {
        v17 = *((_QWORD *)this + 8);
        v18 = v17 ? *(unsigned __int16 *)(v17 + 20) : 0LL;
        if ( k >= (unsigned __int16)v18 )
          break;
        v44 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
        if ( (unsigned __int8)CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, k) )
        {
          if ( v12 == 16 )
          {
            v60 = WdLogNewEntry5_WdError(v45);
            *(_QWORD *)(v60 + 24) = 16LL;
            WdLogEvent5_WdError(v60);
            break;
          }
          if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v44 + 30)) != D3DKMDT_VPPR_IDENTITY )
          {
            v59 = WdLogNewEntry5_WdAssertion(v47, v46, v48, v49);
            *(_QWORD *)(v59 + 24) = 6321LL;
            WdLogEvent5_WdAssertion(v59);
          }
          CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v44, 0, &v66);
          v13 = 2LL * v12;
          v70[2 * v13 - 1] = *((_DWORD *)v44 + 33);
          v70[2 * v13] = *((_DWORD *)v44 + 34);
          v70[2 * v13 + 1] = v66.cx + *((_DWORD *)v44 + 33);
          v70[2 * v13 + 2] = v66.cy + *((_DWORD *)v44 + 34);
          if ( v11 == -1 && !*((_DWORD *)v44 + 33) && !*((_DWORD *)v44 + 34) )
            v11 = v12;
          ++v12;
        }
      }
      if ( v11 == -1 )
      {
        v61 = WdLogNewEntry5_WdWarning(v18, v13, v14, v15);
        WdLogEvent5_WdWarning(v61);
        v11 = 0;
      }
      (*(void (__fastcall **)(int *, _QWORD, _QWORD))(v10 + 336))(&v69, v12, v11);
      v19 = 0;
      LODWORD(v67) = 0;
      v20 = 0;
      while ( 1 )
      {
        v21 = *((_QWORD *)this + 8);
        v22 = v21 ? *(_WORD *)(v21 + 20) : 0;
        if ( v19 >= v22 || v20 >= 0x10 )
          break;
        v23 = CCD_TOPOLOGY::GetPathDescriptor(this, v19);
        PrimaryPathInCloneGroup = GetPrimaryPathInCloneGroup(*((const struct _D3DKMT_GETPATHSMODALITY **)this + 8), v19);
        v28 = PrimaryPathInCloneGroup;
        if ( PrimaryPathInCloneGroup == v19 )
        {
          v29 = 2LL * v20;
          v30 = v70[4 * v20 + 2];
          cx = v70[4 * v20 - 1];
          v32 = v70[4 * v20 + 1] - cx;
          cy = v70[2 * v29];
          v34 = v30 - cy;
          LODWORD(v67) = v67 + 1;
          v66 = (struct _D3DKMDT_2DREGION)__PAIR64__(v34, v32);
          v35.cy = v34;
        }
        else
        {
          v68 = *(struct _D3DKMDT_2DREGION *)((char *)CCD_TOPOLOGY::GetPathDescriptor(this, PrimaryPathInCloneGroup)
                                            + 132);
          v62 = CCD_TOPOLOGY::GetPathDescriptor(this, v28);
          cy = v68.cy;
          cx = v68.cx;
          v35 = *(struct _D3DKMDT_2DREGION *)((char *)v62 + 140);
          v66 = v35;
          v34 = v35.cy;
          v32 = v35.cx;
        }
        if ( *(_QWORD *)((char *)v23 + 140) != __PAIR64__(v35.cy, v32) )
        {
          v63 = WdLogNewEntry5_WdAssertion(v29, v25, v26, v27);
          WdLogEvent5_WdAssertion(v63);
        }
        if ( *((_DWORD *)v23 + 33) != cx )
        {
          v64 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v25, v26, v27);
          v64[3] = v19;
          v64[4] = *((int *)v23 + 33);
          v29 = cx;
          v64[5] = cx;
        }
        *((_DWORD *)v23 + 33) = cx;
        if ( *((_DWORD *)v23 + 34) != cy )
        {
          v65 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v25, v26, v27);
          v65[3] = v19;
          v65[4] = *((int *)v23 + 34);
          v65[5] = cy;
        }
        *(_DWORD *)v23 |= 0x800u;
        v36 = *((_QWORD *)v23 + 22);
        *((_DWORD *)v23 + 34) = cy;
        if ( v36 )
        {
          *(_QWORD *)(v36 + 76) = *(_QWORD *)((char *)v23 + 132);
          *(_DWORD *)(*((_QWORD *)v23 + 22) + 172LL) = v32;
          *(_DWORD *)(*((_QWORD *)v23 + 22) + 176LL) = v34;
          *(_DWORD *)(*((_QWORD *)v23 + 22) + 72LL) |= 0x180020u;
        }
        v20 = v67;
        ++v19;
      }
    }
  }
}
