/*
 * XREFs of ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C01832EC
 * Callers:
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0183414 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0009FA8 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000AC34 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00A1DEC (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 */

int __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DMMVIDPN *a2)
{
  int result; // eax
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // r10
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v7; // eax
  __int64 v8; // r11
  int v9; // ecx
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // r9d
  const struct _LUID *v13; // rdx
  __int64 v14; // rdi
  _DWORD *v15; // rcx
  int v16; // r9d

  result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, a2, 0);
  if ( result >= 0 )
  {
    v4 = *(_QWORD *)this;
    v5 = 0;
    v6 = *(_QWORD *)(v4 + 64);
    if ( *(_WORD *)(v6 + 20) )
    {
      do
      {
        v7 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(216LL * v5 + v6 + 168));
        v9 = *(_DWORD *)(v8 + v6 + 136);
        v10 = ((v7 - 1) & 0xFFFFFFFD) == 0;
        v11 = *(_DWORD *)(v8 + v6 + 132);
        if ( v10 )
        {
          *(_DWORD *)(v8 + v6 + 188) = v11;
          *(_DWORD *)(v8 + v6 + 192) = v9;
        }
        else
        {
          *(_DWORD *)(v8 + v6 + 192) = v11;
          *(_DWORD *)(v8 + v6 + 188) = v9;
        }
        *(_DWORD *)(v8 + v6 + 48) |= 0x820000u;
        v10 = (*(_DWORD *)(v8 + v6 + 48) & 0x40000) == 0;
        *(_QWORD *)(v8 + v6 + 204) = 0LL;
        *(_DWORD *)(v8 + v6 + 212) = v11;
        *(_DWORD *)(v8 + v6 + 216) = v9;
        if ( v10 )
        {
          v12 = v5;
          if ( v5 < *(unsigned __int16 *)(v6 + 20) )
          {
            v13 = (const struct _LUID *)(v8 + v6 + 56);
            do
            {
              v14 = 216LL * v12;
              if ( CCD_TOPOLOGY::IsMatchingSource(
                     (const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v14 + v6 + 48),
                     v13,
                     *(_DWORD *)(v8 + v6 + 64)) )
              {
                *v15 |= 0x40000u;
                *(_DWORD *)(v14 + v6 + 248) = v5 | 0xFE57A000;
              }
              v12 = v16 + 1;
            }
            while ( v12 < *(unsigned __int16 *)(v6 + 20) );
          }
        }
        ++v5;
      }
      while ( v5 < *(unsigned __int16 *)(v6 + 20) );
    }
    return 0;
  }
  return result;
}
