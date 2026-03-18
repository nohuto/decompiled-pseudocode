/*
 * XREFs of ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1C000D530
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A2E8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CCD_TOPOLOGY::IsMatchingSource(
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a2)
{
  return *((_DWORD *)a1 + 4) == *((_DWORD *)a2 + 4)
      && *((_DWORD *)a1 + 2) == *((_DWORD *)a2 + 2)
      && *((_DWORD *)a1 + 3) == *((_DWORD *)a2 + 3);
}
