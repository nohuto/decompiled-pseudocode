/*
 * XREFs of ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C017EE60
 * Callers:
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C017EF88 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0001188 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C00085FC (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C0063868 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 */

int __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DMMVIDPN *a2,
        __int64 a3,
        __int64 a4)
{
  int result; // eax
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // r10
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v9; // eax
  __int64 v10; // r11
  int v11; // ecx
  bool v12; // zf
  int v13; // eax
  unsigned int v14; // r9d
  const struct _LUID *v15; // rdx
  __int64 v16; // rdi
  _DWORD *v17; // rcx
  int v18; // r9d

  result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, a2, 0LL, a4);
  if ( result >= 0 )
  {
    v6 = *(_QWORD *)this;
    v7 = 0;
    v8 = *(_QWORD *)(v6 + 64);
    if ( *(_WORD *)(v8 + 20) )
    {
      do
      {
        v9 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(216LL * v7 + v8 + 168));
        v11 = *(_DWORD *)(v10 + v8 + 136);
        v12 = ((v9 - 1) & 0xFFFFFFFD) == 0;
        v13 = *(_DWORD *)(v10 + v8 + 132);
        if ( v12 )
        {
          *(_DWORD *)(v10 + v8 + 188) = v13;
          *(_DWORD *)(v10 + v8 + 192) = v11;
        }
        else
        {
          *(_DWORD *)(v10 + v8 + 192) = v13;
          *(_DWORD *)(v10 + v8 + 188) = v11;
        }
        *(_DWORD *)(v10 + v8 + 48) |= 0x820000u;
        v12 = (*(_DWORD *)(v10 + v8 + 48) & 0x40000) == 0;
        *(_QWORD *)(v10 + v8 + 204) = 0LL;
        *(_DWORD *)(v10 + v8 + 212) = v13;
        *(_DWORD *)(v10 + v8 + 216) = v11;
        if ( v12 )
        {
          v14 = v7;
          if ( v7 < *(unsigned __int16 *)(v8 + 20) )
          {
            v15 = (const struct _LUID *)(v10 + v8 + 56);
            do
            {
              v16 = 216LL * v14;
              if ( CCD_TOPOLOGY::IsMatchingSource(
                     (const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v16 + v8 + 48),
                     v15,
                     *(_DWORD *)(v10 + v8 + 64)) )
              {
                *v17 |= 0x40000u;
                *(_DWORD *)(v16 + v8 + 248) = v7 | 0xFE57A000;
              }
              v14 = v18 + 1;
            }
            while ( v14 < *(unsigned __int16 *)(v8 + 20) );
          }
        }
        ++v7;
      }
      while ( v7 < *(unsigned __int16 *)(v8 + 20) );
    }
    return 0;
  }
  return result;
}
