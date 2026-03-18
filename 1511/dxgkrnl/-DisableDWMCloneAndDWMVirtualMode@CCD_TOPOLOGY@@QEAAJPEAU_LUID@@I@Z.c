/*
 * XREFs of ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C00C933C
 * Callers:
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00ADD28 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00C9138 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000AC34 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode(CCD_TOPOLOGY *this, struct _LUID *a2, int a3)
{
  unsigned int i; // ebx
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v10; // rcx
  int v11; // ebp
  unsigned int j; // ebx
  __int64 v13; // rax
  unsigned __int16 v14; // cx
  unsigned int k; // ebx
  __int64 v16; // rax
  unsigned __int16 v17; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rdx
  int v20; // eax
  int v21; // eax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v22; // rax

  for ( i = 0; ; ++i )
  {
    v7 = *((_QWORD *)this + 8);
    if ( v7 )
      v8 = *(_WORD *)(v7 + 20);
    else
      v8 = 0;
    if ( i >= v8 )
      return 3221225473LL;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( CCD_TOPOLOGY::IsMatchingSource(PathDescriptor, a2, a3) )
      break;
  }
  v11 = *(_DWORD *)(v10 + 200);
  if ( v11 == -1 )
    return 3221225473LL;
  for ( j = 0; ; ++j )
  {
    v13 = *((_QWORD *)this + 8);
    v14 = v13 ? *(_WORD *)(v13 + 20) : 0;
    if ( j >= v14 )
      break;
    v22 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( *((_DWORD *)v22 + 50) == v11 && (*((_DWORD *)v22 + 2) != a2->LowPart || *((_DWORD *)v22 + 3) != a2->HighPart) )
      return 3221225473LL;
  }
  for ( k = 0; ; ++k )
  {
    v16 = *((_QWORD *)this + 8);
    v17 = v16 ? *(_WORD *)(v16 + 20) : 0;
    if ( k >= v17 )
      break;
    v18 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
    v19 = v18;
    if ( *((_DWORD *)v18 + 50) == v11 )
    {
      *((_DWORD *)v18 + 4) = a3;
      *((_BYTE *)v18 + 117) = 0;
      v20 = *(_DWORD *)v18;
      if ( (v20 & 0x20100) == 0x20100 )
      {
        if ( (v20 & 0x200) != 0 && ((*((_DWORD *)v19 + 30) - 2) & 0xFFFFFFFD) == 0 )
        {
          *((_DWORD *)v19 + 21) = *((_DWORD *)v19 + 36);
          v21 = *((_DWORD *)v19 + 35);
        }
        else
        {
          *((_DWORD *)v19 + 21) = *((_DWORD *)v19 + 35);
          v21 = *((_DWORD *)v19 + 36);
        }
        *((_DWORD *)v19 + 1) |= 0x100u;
        *((_DWORD *)v19 + 22) = v21;
      }
    }
  }
  return 0LL;
}
