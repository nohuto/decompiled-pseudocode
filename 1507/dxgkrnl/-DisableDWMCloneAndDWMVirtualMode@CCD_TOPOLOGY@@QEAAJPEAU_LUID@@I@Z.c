/*
 * XREFs of ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C00B3F38
 * Callers:
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C005E9F8 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00B3D34 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0001188 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0066084 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode(
        CCD_TOPOLOGY *this,
        struct _LUID *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // r14d
  unsigned int i; // ebx
  __int64 v8; // rax
  unsigned __int16 v9; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v11; // rcx
  int v12; // ebp
  unsigned int j; // ebx
  __int64 v14; // rax
  unsigned __int16 v15; // cx
  unsigned int k; // ebx
  __int64 v17; // rax
  unsigned __int16 v18; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // rdx
  int v21; // eax
  int v22; // eax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // rax

  v4 = a3;
  for ( i = 0; ; ++i )
  {
    v8 = *((_QWORD *)this + 8);
    if ( v8 )
      v9 = *(_WORD *)(v8 + 20);
    else
      v9 = 0;
    if ( i >= v9 )
      return 3221225473LL;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i, a3, a4);
    if ( CCD_TOPOLOGY::IsMatchingSource(PathDescriptor, a2, v4) )
      break;
  }
  v12 = *(_DWORD *)(v11 + 200);
  if ( v12 == -1 )
    return 3221225473LL;
  for ( j = 0; ; ++j )
  {
    v14 = *((_QWORD *)this + 8);
    v15 = v14 ? *(_WORD *)(v14 + 20) : 0;
    if ( j >= v15 )
      break;
    v23 = CCD_TOPOLOGY::GetPathDescriptor(this, j, a3, a4);
    if ( *((_DWORD *)v23 + 50) == v12 && (*((_DWORD *)v23 + 2) != a2->LowPart || *((_DWORD *)v23 + 3) != a2->HighPart) )
      return 3221225473LL;
  }
  for ( k = 0; ; ++k )
  {
    v17 = *((_QWORD *)this + 8);
    v18 = v17 ? *(_WORD *)(v17 + 20) : 0;
    if ( k >= v18 )
      break;
    v19 = CCD_TOPOLOGY::GetPathDescriptor(this, k, a3, a4);
    v20 = v19;
    if ( *((_DWORD *)v19 + 50) == v12 )
    {
      *((_DWORD *)v19 + 4) = v4;
      *((_BYTE *)v19 + 117) = 0;
      v21 = *(_DWORD *)v19;
      if ( (v21 & 0x20100) == 0x20100 )
      {
        if ( (v21 & 0x200) != 0 && ((*((_DWORD *)v20 + 30) - 2) & 0xFFFFFFFD) == 0 )
        {
          *((_DWORD *)v20 + 21) = *((_DWORD *)v20 + 36);
          v22 = *((_DWORD *)v20 + 35);
        }
        else
        {
          *((_DWORD *)v20 + 21) = *((_DWORD *)v20 + 35);
          v22 = *((_DWORD *)v20 + 36);
        }
        *((_DWORD *)v20 + 1) |= 0x100u;
        *((_DWORD *)v20 + 22) = v22;
      }
    }
  }
  return 0LL;
}
