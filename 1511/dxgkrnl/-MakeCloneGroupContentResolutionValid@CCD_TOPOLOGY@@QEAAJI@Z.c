/*
 * XREFs of ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A3190
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00A3104 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00A8EB0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00AE3E4 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@_N.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupContentResolutionValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  char v2; // r12
  _QWORD *v3; // rbx
  char v4; // r13
  unsigned int v6; // r15d
  unsigned __int64 v7; // rcx
  UINT v8; // edi
  UINT cy; // esi
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  unsigned int v11; // edx
  unsigned int v13; // r12d
  unsigned int v14; // r13d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v15; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // rbx
  __int64 v17; // rcx
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v19; // r15
  unsigned int v20; // r15d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r15
  unsigned int v26; // ebx
  char cx; // r12
  int *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdx
  UINT v31; // eax
  __int64 v32; // rax
  _QWORD *v33; // rax
  struct _D3DKMDT_2DREGION v34; // [rsp+70h] [rbp+40h] BYREF
  unsigned int v35; // [rsp+80h] [rbp+50h] BYREF
  struct _D3DKMDT_2DREGION v36; // [rsp+88h] [rbp+58h] BYREF

  v2 = 1;
  v3 = 0LL;
  LOBYTE(v34.cx) = 1;
  v4 = 0;
  v6 = 0;
  v35 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 50);
  v8 = 0x7FFFFFFF;
  cy = 0x7FFFFFFF;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_47;
  while ( 1 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v6);
    v7 = v35;
    if ( *((_DWORD *)PathDescriptor + 50) == v35 )
      break;
LABEL_11:
    ++v6;
    v7 = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
    if ( v6 >= (unsigned int)v7 )
      goto LABEL_12;
  }
  if ( (*(_DWORD *)PathDescriptor & 0x20000) == 0 )
  {
    v2 = 0;
    v4 = 1;
LABEL_12:
    if ( !v2 )
    {
      if ( v4 )
        goto LABEL_16;
      return 0LL;
    }
LABEL_47:
    v25 = 0x3FFFFFFF00000001LL;
    v26 = 0;
    if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
      goto LABEL_66;
    cx = v34.cx;
    v14 = v35;
    while ( 1 )
    {
      v28 = (int *)CCD_TOPOLOGY::GetPathDescriptor(this, v26);
      v7 = (unsigned __int64)v28;
      if ( v28[50] == v14 )
      {
        if ( cx )
        {
          v29 = v28[38];
          v30 = v28[35] * (__int64)v28[36] - v29 * v28[37];
          if ( v30 < 0 )
            v30 = v29 * v28[37] - v28[35] * (__int64)v28[36];
          if ( v30 < v25 )
          {
            v8 = v28[37];
            cy = v28[38];
            v25 = v30;
          }
        }
        else if ( v28[35] == v28[37] )
        {
          v31 = v28[38];
          if ( *(_DWORD *)(v7 + 144) == v31 )
          {
            v8 = *(_DWORD *)(v7 + 148);
            cy = v31;
            goto LABEL_27;
          }
        }
      }
      ++v26;
      v7 = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
      if ( v26 >= (unsigned int)v7 )
        goto LABEL_27;
    }
  }
  if ( !v3 )
    v3 = (_QWORD *)((char *)PathDescriptor + 140);
  v7 = *((unsigned int *)PathDescriptor + 35);
  if ( (_DWORD)v7 )
  {
    v11 = *((_DWORD *)PathDescriptor + 36);
    if ( v11 )
    {
      if ( *v3 == __PAIR64__(v11, v7) )
      {
        if ( (*(_DWORD *)PathDescriptor & 0x200000) != 0 )
        {
          if ( __PAIR64__(v11, v7) == *(_QWORD *)((char *)PathDescriptor + 148) )
            LOBYTE(v34.cx) = 0;
        }
        else
        {
          v2 = 0;
        }
        goto LABEL_11;
      }
    }
  }
  *((_DWORD *)PathDescriptor + 46) |= 0x400u;
LABEL_16:
  v13 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_66;
  v14 = v35;
  while ( 2 )
  {
    v15 = CCD_TOPOLOGY::GetPathDescriptor(this, v13);
    v16 = v15;
    if ( *((_DWORD *)v15 + 50) != v14 )
    {
LABEL_26:
      ++v13;
      v7 = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
      if ( v13 >= (unsigned int)v7 )
        goto LABEL_27;
      continue;
    }
    break;
  }
  CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v15, 1, &v36);
  IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                        *(_QWORD *)(v17 + 8),
                                        *(_DWORD *)(v17 + 20),
                                        (unsigned int)&v34,
                                        (unsigned int)&v35,
                                        0LL);
  v19 = IsVirtualizationDisabledForTarget;
  if ( IsVirtualizationDisabledForTarget < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v24 + 24) = v19;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v19;
  }
  if ( LOBYTE(v34.cx) && !(_BYTE)v35 )
    goto LABEL_43;
  if ( !IsInternalVideoOutput(*((_DWORD *)v16 + 20)) )
  {
    if ( v36.cx < v8 )
    {
      v8 = v36.cx;
      *((_DWORD *)v16 + 46) |= 0x4000u;
    }
    if ( v36.cy < cy )
    {
      cy = v36.cy;
      *((_DWORD *)v16 + 46) |= 0x4000u;
    }
    goto LABEL_26;
  }
  if ( (*(_DWORD *)v16 & 0x20000) == 0 )
  {
LABEL_43:
    v34 = v36;
    v8 = v36.cx;
    cy = v36.cy;
    goto LABEL_27;
  }
  v8 = *((_DWORD *)v16 + 35);
  cy = *((_DWORD *)v16 + 36);
LABEL_27:
  if ( !v8 || !cy || v8 == 0x7FFFFFFF || cy == 0x7FFFFFFF )
    goto LABEL_66;
  v20 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 2 )
  {
    v21 = CCD_TOPOLOGY::GetPathDescriptor(this, v20);
    v22 = v21;
    if ( *((_DWORD *)v21 + 50) != v14
      || (v7 = *(unsigned int *)v21, (v7 & 0x20000) != 0) && *((_DWORD *)v21 + 35) == v8 && *((_DWORD *)v21 + 36) == cy )
    {
LABEL_37:
      if ( ++v20 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
        return 0LL;
      continue;
    }
    break;
  }
  if ( (*((_DWORD *)v21 + 1) & 0x20000) == 0 )
  {
    *((_DWORD *)v21 + 35) = v8;
    *((_DWORD *)v21 + 36) = cy;
    *(_DWORD *)v21 = v7 & 0xFF7DFFFF | 0x20000;
    v23 = *((_QWORD *)v21 + 22);
    if ( v23 )
    {
      *(_DWORD *)(v23 + 172) = v8;
      *(_DWORD *)(*((_QWORD *)v22 + 22) + 176LL) = cy;
    }
    goto LABEL_37;
  }
  if ( (v7 & 0x20000) == 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v32);
  }
  *((_DWORD *)v22 + 46) |= 0x80000000;
LABEL_66:
  v33 = (_QWORD *)WdLogNewEntry5_WdError(v7);
  v33[3] = *((_QWORD *)this + 8);
  v33[4] = v8;
  v33[5] = cy;
  WdLogEvent5_WdError(v33);
  return 3221225473LL;
}
