/*
 * XREFs of ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0064BA8
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0064B1C (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C0062D9C (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@_N.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0066084 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupContentResolutionValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  char v2; // r12
  char v3; // r15
  _QWORD *v4; // rbx
  char v5; // r13
  unsigned int v7; // r14d
  int *cx; // rcx
  UINT v9; // edi
  UINT cy; // esi
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  unsigned int v12; // ebx
  UINT v13; // r15d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // r11
  unsigned int v17; // r14d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v22; // rbx
  __int64 v23; // rax
  unsigned int v25; // edx
  __int64 v26; // r14
  unsigned int v27; // ebx
  int *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdx
  UINT v31; // eax
  __int64 v32; // rax
  _QWORD *v33; // rax
  struct _D3DKMDT_2DREGION v34; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 1;
  v4 = 0LL;
  v5 = 1;
  v7 = 0;
  v34.cx = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 50);
  v9 = 0x7FFFFFFF;
  cy = 0x7FFFFFFF;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_43;
  while ( 1 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v7);
    cx = (int *)v34.cx;
    if ( *((_DWORD *)PathDescriptor + 50) == v34.cx )
      break;
LABEL_37:
    ++v7;
    cx = (int *)*(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
    if ( v7 >= (unsigned int)cx )
      goto LABEL_5;
  }
  if ( (*(_DWORD *)PathDescriptor & 0x20000) == 0 )
  {
    v3 = 0;
    v2 = 1;
LABEL_5:
    if ( !v3 )
    {
      if ( v2 )
        goto LABEL_7;
      return 0LL;
    }
LABEL_43:
    v26 = 0x3FFFFFFF00000001LL;
    v27 = 0;
    if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
      goto LABEL_62;
    v13 = v34.cx;
    while ( 1 )
    {
      v28 = (int *)CCD_TOPOLOGY::GetPathDescriptor(this, v27);
      cx = v28;
      if ( v28[50] == v13 )
      {
        if ( v5 )
        {
          v29 = v28[38];
          v30 = v28[35] * (__int64)v28[36] - v29 * v28[37];
          if ( v30 < 0 )
            v30 = v29 * v28[37] - v28[35] * (__int64)v28[36];
          if ( v30 < v26 )
          {
            v9 = v28[37];
            cy = v28[38];
            v26 = v30;
          }
        }
        else if ( v28[35] == v28[37] )
        {
          v31 = v28[38];
          if ( cx[36] == v31 )
          {
            v9 = cx[37];
            cy = v31;
            goto LABEL_16;
          }
        }
      }
      ++v27;
      cx = (int *)*(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
      if ( v27 >= (unsigned int)cx )
        goto LABEL_16;
    }
  }
  if ( !v4 )
    v4 = (_QWORD *)((char *)PathDescriptor + 140);
  cx = (int *)*((unsigned int *)PathDescriptor + 35);
  if ( (_DWORD)cx )
  {
    v25 = *((_DWORD *)PathDescriptor + 36);
    if ( v25 )
    {
      if ( *v4 == __PAIR64__(v25, (unsigned int)cx) )
      {
        if ( (*(_DWORD *)PathDescriptor & 0x200000) != 0 )
        {
          if ( __PAIR64__(v25, (unsigned int)cx) == *(_QWORD *)((char *)PathDescriptor + 148) )
            v5 = 0;
        }
        else
        {
          v3 = 0;
        }
        goto LABEL_37;
      }
    }
  }
  *((_DWORD *)PathDescriptor + 46) |= 0x400u;
LABEL_7:
  v12 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_62;
  v13 = v34.cx;
  while ( 2 )
  {
    v14 = CCD_TOPOLOGY::GetPathDescriptor(this, v12);
    if ( *((_DWORD *)v14 + 50) != v13 )
    {
LABEL_15:
      ++v12;
      cx = (int *)*(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
      if ( v12 >= (unsigned int)cx )
        goto LABEL_16;
      continue;
    }
    break;
  }
  CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v14, 1, &v34);
  if ( !IsInternalVideoOutput(*(_DWORD *)(v15 + 80)) )
  {
    if ( v34.cx < v9 )
    {
      v9 = v34.cx;
      v16[46] |= 0x4000u;
    }
    if ( v34.cy < cy )
    {
      cy = v34.cy;
      v16[46] |= 0x4000u;
    }
    goto LABEL_15;
  }
  if ( (*v16 & 0x20000) != 0 )
  {
    v9 = v16[35];
    cy = v16[36];
  }
  else
  {
    v9 = v34.cx;
    cy = v34.cy;
  }
LABEL_16:
  if ( !v9 || !cy || v9 == 0x7FFFFFFF || cy == 0x7FFFFFFF )
    goto LABEL_62;
  v17 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 2 )
  {
    v18 = CCD_TOPOLOGY::GetPathDescriptor(this, v17);
    v22 = v18;
    if ( *((_DWORD *)v18 + 50) != v13
      || (cx = (int *)*(unsigned int *)v18, ((unsigned int)cx & 0x20000) != 0)
      && *((_DWORD *)v18 + 35) == v9
      && *((_DWORD *)v18 + 36) == cy )
    {
LABEL_26:
      if ( ++v17 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
        return 0LL;
      continue;
    }
    break;
  }
  if ( (*((_DWORD *)v18 + 1) & 0x20000) == 0 )
  {
    *((_DWORD *)v18 + 35) = v9;
    *((_DWORD *)v18 + 36) = cy;
    *(_DWORD *)v18 = (unsigned int)cx & 0xFF7DFFFF | 0x20000;
    v23 = *((_QWORD *)v18 + 22);
    if ( v23 )
    {
      *(_DWORD *)(v23 + 172) = v9;
      *(_DWORD *)(*((_QWORD *)v22 + 22) + 176LL) = cy;
    }
    goto LABEL_26;
  }
  if ( ((unsigned int)cx & 0x20000) == 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(cx, v19, v20, v21);
    WdLogEvent5_WdAssertion(v32);
  }
  *((_DWORD *)v22 + 46) |= 0x80000000;
LABEL_62:
  v33 = (_QWORD *)WdLogNewEntry5_WdError(cx);
  v33[3] = *((_QWORD *)this + 8);
  v33[4] = v9;
  v33[5] = cy;
  WdLogEvent5_WdError(v33);
  return 3221225473LL;
}
