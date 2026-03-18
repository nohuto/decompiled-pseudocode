/*
 * XREFs of ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C008AFEC
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A118 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01ACB90 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0005D38 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0006E1C (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C000B43C (-GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0089D20 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00D55B4 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@_N.c)
 */

void __fastcall CCD_TOPOLOGY::AdjustDesktopLayout(CCD_TOPOLOGY *this)
{
  signed int v1; // esi
  unsigned int i; // r14d
  __int64 v4; // rax
  unsigned __int16 v5; // cx
  unsigned int j; // r14d
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v12; // r13
  unsigned int v13; // ebx
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int k; // r14d
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // esi
  unsigned int v22; // r15d
  __int64 v23; // rax
  unsigned __int16 v24; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v25; // rbx
  unsigned int PrimaryPathInCloneGroup; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // r14d
  __int64 v31; // rcx
  int v32; // r13d
  signed int cx; // r14d
  UINT v34; // r15d
  signed int cy; // r12d
  UINT v36; // r13d
  struct _D3DKMDT_2DREGION v37; // rax
  __int64 v38; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v40; // rcx
  __int64 v41; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v42; // rbx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v43; // r15
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // r11d
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v48; // ecx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  struct _D3DKMDT_2DREGION v59; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v60; // [rsp+30h] [rbp-D8h]
  struct _D3DKMDT_2DREGION v61; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v62[64]; // [rsp+48h] [rbp-C0h] BYREF

  v1 = 0;
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
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)PathDescriptor + 31)) != D3DKMDT_VPPR_IDENTITY )
      {
        v46 = WdLogNewEntry5_WdAssertion(v40);
        *(_QWORD *)(v46 + 24) = 6412LL;
        WdLogEvent5_WdAssertion(v46);
      }
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(PathDescriptor, 0, &v61);
      v41 = *((_QWORD *)PathDescriptor + 22);
      if ( v41 )
      {
        *(_QWORD *)(v41 + 76) = *((_QWORD *)PathDescriptor + 17);
        *(_DWORD *)(*((_QWORD *)PathDescriptor + 22) + 72LL) |= 0x20u;
      }
      if ( (signed int)(v61.cx + *((_DWORD *)PathDescriptor + 34)) > v1 )
        v1 = v61.cx + *((_DWORD *)PathDescriptor + 34);
    }
  }
  for ( j = 0; ; ++j )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    if ( j >= v8 )
      break;
    v42 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( (*(_DWORD *)v42 & 0x800) == 0 && (unsigned __int8)CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j) )
    {
      v48 = *((_DWORD *)v42 + 31);
      *((_DWORD *)v42 + 35) = 0;
      *(_DWORD *)v42 = v47 | 0x800;
      *((_DWORD *)v42 + 34) = v1;
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v48) != D3DKMDT_VPPR_IDENTITY )
      {
        v50 = WdLogNewEntry5_WdAssertion(v49);
        *(_QWORD *)(v50 + 24) = 6457LL;
        WdLogEvent5_WdAssertion(v50);
      }
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v42, 0, &v61);
      v51 = *((_QWORD *)v42 + 22);
      if ( v51 )
      {
        *(_DWORD *)(v51 + 76) = v1;
        *(_DWORD *)(*((_QWORD *)v42 + 22) + 80LL) = 0;
        *(_DWORD *)(*((_QWORD *)v42 + 22) + 72LL) |= 0x20u;
      }
      v1 += v61.cx;
    }
  }
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v10);
  if ( ProcessDxgProcess )
  {
    v12 = *(_QWORD *)(ProcessDxgProcess + 72);
    if ( v12 )
    {
      v13 = -1;
      v14 = 0;
      memset(v62, 0, sizeof(v62));
      for ( k = 0; ; ++k )
      {
        v19 = *((_QWORD *)this + 8);
        v20 = v19 ? *(unsigned __int16 *)(v19 + 20) : 0LL;
        if ( k >= (unsigned __int16)v20 )
          break;
        v43 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
        if ( (unsigned __int8)CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, k) )
        {
          if ( v14 == 16 )
          {
            v53 = WdLogNewEntry5_WdError(v44);
            *(_QWORD *)(v53 + 24) = 16LL;
            WdLogEvent5_WdError(v53);
            break;
          }
          if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v43 + 31)) != D3DKMDT_VPPR_IDENTITY )
          {
            v52 = WdLogNewEntry5_WdAssertion(v45);
            *(_QWORD *)(v52 + 24) = 6518LL;
            WdLogEvent5_WdAssertion(v52);
          }
          CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v43, 0, &v59);
          v15 = 2LL * v14;
          v62[2 * v15] = *((_DWORD *)v43 + 34);
          v62[2 * v15 + 1] = *((_DWORD *)v43 + 35);
          v62[2 * v15 + 2] = v59.cx + *((_DWORD *)v43 + 34);
          v62[2 * v15 + 3] = v59.cy + *((_DWORD *)v43 + 35);
          if ( v13 == -1 && !*((_DWORD *)v43 + 34) && !*((_DWORD *)v43 + 35) )
            v13 = v14;
          ++v14;
        }
      }
      if ( v13 == -1 )
      {
        v54 = WdLogNewEntry5_WdWarning(v20, v15, v16, v17);
        WdLogEvent5_WdWarning(v54);
        v13 = 0;
      }
      (*(void (__fastcall **)(_DWORD *, _QWORD, _QWORD))(v12 + 336))(v62, v14, v13);
      v21 = 0;
      v22 = 0;
      LODWORD(v60) = 0;
      while ( 1 )
      {
        v23 = *((_QWORD *)this + 8);
        v24 = v23 ? *(_WORD *)(v23 + 20) : 0;
        if ( v21 >= v24 || v22 >= 0x10 )
          break;
        v25 = CCD_TOPOLOGY::GetPathDescriptor(this, v21);
        PrimaryPathInCloneGroup = GetPrimaryPathInCloneGroup(*((const struct _D3DKMT_GETPATHSMODALITY **)this + 8), v21);
        v30 = PrimaryPathInCloneGroup;
        if ( PrimaryPathInCloneGroup == v21 )
        {
          v31 = 2LL * v22;
          v32 = v62[4 * v22 + 3];
          cx = v62[4 * v22];
          v34 = v62[4 * v22 + 2] - cx;
          cy = v62[2 * v31 + 1];
          v36 = v32 - cy;
          LODWORD(v60) = v60 + 1;
          v59 = (struct _D3DKMDT_2DREGION)__PAIR64__(v36, v34);
          v37.cy = v36;
        }
        else
        {
          v61 = (struct _D3DKMDT_2DREGION)*((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, PrimaryPathInCloneGroup) + 17);
          v55 = CCD_TOPOLOGY::GetPathDescriptor(this, v30);
          cy = v61.cy;
          cx = v61.cx;
          v37 = (struct _D3DKMDT_2DREGION)*((_QWORD *)v55 + 18);
          v59 = v37;
          v36 = v37.cy;
          v34 = v37.cx;
        }
        if ( *((_QWORD *)v25 + 18) != __PAIR64__(v37.cy, v34) )
        {
          v56 = WdLogNewEntry5_WdAssertion(v31);
          WdLogEvent5_WdAssertion(v56);
        }
        if ( *((_DWORD *)v25 + 34) != cx )
        {
          v57 = (_QWORD *)WdLogNewEntry5_WdTrace(v31, v27, v28, v29);
          v57[3] = v21;
          v57[4] = *((int *)v25 + 34);
          v31 = cx;
          v57[5] = cx;
        }
        *((_DWORD *)v25 + 34) = cx;
        if ( *((_DWORD *)v25 + 35) != cy )
        {
          v58 = (_QWORD *)WdLogNewEntry5_WdTrace(v31, v27, v28, v29);
          v58[3] = v21;
          v58[4] = *((int *)v25 + 35);
          v58[5] = cy;
        }
        *(_DWORD *)v25 |= 0x800u;
        v38 = *((_QWORD *)v25 + 22);
        *((_DWORD *)v25 + 35) = cy;
        if ( v38 )
        {
          *(_QWORD *)(v38 + 76) = *((_QWORD *)v25 + 17);
          *(_DWORD *)(*((_QWORD *)v25 + 22) + 172LL) = v34;
          *(_DWORD *)(*((_QWORD *)v25 + 22) + 176LL) = v36;
          *(_DWORD *)(*((_QWORD *)v25 + 22) + 72LL) |= 0x180020u;
        }
        v22 = v60;
        ++v21;
      }
    }
  }
}
