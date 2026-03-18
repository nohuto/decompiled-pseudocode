/*
 * XREFs of ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00A2C88
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4C38 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0183414 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0009F58 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0009FC0 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C000A2D4 (-GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00AE3E4 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@_N.c)
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
  __int64 v38; // rcx
  __int64 v39; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v40; // rbx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v41; // r15
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // r11d
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v46; // ecx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  struct _D3DKMDT_2DREGION v57; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v58; // [rsp+30h] [rbp-D8h]
  struct _D3DKMDT_2DREGION v59; // [rsp+38h] [rbp-D0h] BYREF
  int v60; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v61[63]; // [rsp+4Ch] [rbp-BCh] BYREF

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
        v44 = WdLogNewEntry5_WdAssertion(v38);
        *(_QWORD *)(v44 + 24) = 6362LL;
        WdLogEvent5_WdAssertion(v44);
      }
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(PathDescriptor, 0, &v59);
      v39 = *((_QWORD *)PathDescriptor + 22);
      if ( v39 )
      {
        *(_QWORD *)(v39 + 76) = *(_QWORD *)((char *)PathDescriptor + 132);
        *(_DWORD *)(*((_QWORD *)PathDescriptor + 22) + 72LL) |= 0x20u;
      }
      if ( (signed int)(v59.cx + *((_DWORD *)PathDescriptor + 33)) > v2 )
        v2 = v59.cx + *((_DWORD *)PathDescriptor + 33);
    }
  }
  for ( j = 0; ; ++j )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    if ( j >= v8 )
      break;
    v40 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( (*(_DWORD *)v40 & 0x800) == 0 && (unsigned __int8)CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j) )
    {
      v46 = *((_DWORD *)v40 + 30);
      *(_DWORD *)v40 = v45 | 0x800;
      *((_DWORD *)v40 + 33) = v2;
      *((_DWORD *)v40 + 34) = 0;
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v46) != D3DKMDT_VPPR_IDENTITY )
      {
        v48 = WdLogNewEntry5_WdAssertion(v47);
        *(_QWORD *)(v48 + 24) = 6407LL;
        WdLogEvent5_WdAssertion(v48);
      }
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v40, 0, &v59);
      v49 = *((_QWORD *)v40 + 22);
      if ( v49 )
      {
        *(_DWORD *)(v49 + 76) = v2;
        *(_DWORD *)(*((_QWORD *)v40 + 22) + 80LL) = 0;
        *(_DWORD *)(*((_QWORD *)v40 + 22) + 72LL) |= 0x20u;
      }
      v2 += v59.cx;
    }
  }
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v10 = *((_QWORD *)Current + 10);
    if ( v10 )
    {
      v11 = -1;
      v60 = 0;
      v12 = 0;
      memset(v61, 0, sizeof(v61));
      for ( k = 0; ; ++k )
      {
        v17 = *((_QWORD *)this + 8);
        v18 = v17 ? *(unsigned __int16 *)(v17 + 20) : 0LL;
        if ( k >= (unsigned __int16)v18 )
          break;
        v41 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
        if ( (unsigned __int8)CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, k) )
        {
          if ( v12 == 16 )
          {
            v51 = WdLogNewEntry5_WdError(v42);
            *(_QWORD *)(v51 + 24) = 16LL;
            WdLogEvent5_WdError(v51);
            break;
          }
          if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v41 + 30)) != D3DKMDT_VPPR_IDENTITY )
          {
            v50 = WdLogNewEntry5_WdAssertion(v43);
            *(_QWORD *)(v50 + 24) = 6468LL;
            WdLogEvent5_WdAssertion(v50);
          }
          CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v41, 0, &v57);
          v13 = 2LL * v12;
          v61[2 * v13 - 1] = *((_DWORD *)v41 + 33);
          v61[2 * v13] = *((_DWORD *)v41 + 34);
          v61[2 * v13 + 1] = v57.cx + *((_DWORD *)v41 + 33);
          v61[2 * v13 + 2] = v57.cy + *((_DWORD *)v41 + 34);
          if ( v11 == -1 && !*((_DWORD *)v41 + 33) && !*((_DWORD *)v41 + 34) )
            v11 = v12;
          ++v12;
        }
      }
      if ( v11 == -1 )
      {
        v52 = WdLogNewEntry5_WdWarning(v18, v13, v14, v15);
        WdLogEvent5_WdWarning(v52);
        v11 = 0;
      }
      (*(void (__fastcall **)(int *, _QWORD, _QWORD))(v10 + 336))(&v60, v12, v11);
      v19 = 0;
      LODWORD(v58) = 0;
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
          v30 = v61[4 * v20 + 2];
          cx = v61[4 * v20 - 1];
          v32 = v61[4 * v20 + 1] - cx;
          cy = v61[2 * v29];
          v34 = v30 - cy;
          LODWORD(v58) = v58 + 1;
          v57 = (struct _D3DKMDT_2DREGION)__PAIR64__(v34, v32);
          v35.cy = v34;
        }
        else
        {
          v59 = *(struct _D3DKMDT_2DREGION *)((char *)CCD_TOPOLOGY::GetPathDescriptor(this, PrimaryPathInCloneGroup)
                                            + 132);
          v53 = CCD_TOPOLOGY::GetPathDescriptor(this, v28);
          cy = v59.cy;
          cx = v59.cx;
          v35 = *(struct _D3DKMDT_2DREGION *)((char *)v53 + 140);
          v57 = v35;
          v34 = v35.cy;
          v32 = v35.cx;
        }
        if ( *(_QWORD *)((char *)v23 + 140) != __PAIR64__(v35.cy, v32) )
        {
          v54 = WdLogNewEntry5_WdAssertion(v29);
          WdLogEvent5_WdAssertion(v54);
        }
        if ( *((_DWORD *)v23 + 33) != cx )
        {
          v55 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v25, v26, v27);
          v55[3] = v19;
          v55[4] = *((int *)v23 + 33);
          v29 = cx;
          v55[5] = cx;
        }
        *((_DWORD *)v23 + 33) = cx;
        if ( *((_DWORD *)v23 + 34) != cy )
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v25, v26, v27);
          v56[3] = v19;
          v56[4] = *((int *)v23 + 34);
          v56[5] = cy;
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
        v20 = v58;
        ++v19;
      }
    }
  }
}
