/*
 * XREFs of ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C01AE818
 * Callers:
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01AD420 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C01AE5A4 (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C01AE63C (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 * Callees:
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C01AE780 (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

bool __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(
        const struct DXGADAPTER *a1,
        const struct DMMVIDEOPRESENTTARGET *a2,
        const struct DMMVIDEOPRESENTTARGET *a3)
{
  unsigned int v6; // ecx
  unsigned int v7; // edx
  int VotPreference; // eax
  int v9; // r10d

  if ( !a3 )
    return 1;
  if ( *((_QWORD *)a2 + 12) )
  {
    if ( !*((_QWORD *)a3 + 12) )
      return 1;
    if ( !*((_BYTE *)a2 + 397) )
    {
      if ( !*((_BYTE *)a3 + 397) )
      {
LABEL_7:
        v6 = *((_DWORD *)a2 + 27);
        v7 = *((_DWORD *)a3 + 27);
        goto LABEL_14;
      }
      return 1;
    }
    if ( *((_BYTE *)a3 + 397) )
      goto LABEL_7;
    return 0;
  }
  if ( *((_QWORD *)a3 + 12) )
    return 0;
  v6 = *((_DWORD *)a2 + 28);
  v7 = *((_DWORD *)a3 + 28);
LABEL_14:
  if ( v6 < v7 )
    return 1;
  if ( v6 > v7 )
    return 0;
  BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference((__int64)a1, *((_DWORD *)a3 + 19), *((_DWORD *)a3 + 20), 0);
  VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                    (__int64)a1,
                    *((_DWORD *)a2 + 19),
                    *((_DWORD *)a2 + 20),
                    0);
  return VotPreference < v9;
}
