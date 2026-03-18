/*
 * XREFs of ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@E@Z @ 0x1C0183C84
 * Callers:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0183700 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C0183CC0 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C018492C (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@PEAPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@E@Z @ 0x1C00A4768 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@PEAPEAU_.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        const struct _LUID *a2,
        int a3,
        int a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a5,
        char a6)
{
  __int64 result; // rax

  ++*((_WORD *)this + 4);
  result = CCD_TOPOLOGY::AddPathDescriptor(*(void ***)this, a2, a3, a4, a6, a5, 0LL, 0);
  if ( (_DWORD)result == -1073741789 )
    return 0LL;
  return result;
}
