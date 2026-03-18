/*
 * XREFs of ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00D55B4
 * Callers:
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C008AFEC (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008B4F0 (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(
        const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        char a2,
        struct _D3DKMDT_2DREGION *a3)
{
  UINT v3; // eax
  int v4; // edx

  if ( (*(_DWORD *)a1 & 0x20000) != 0 && !a2 )
  {
    a3->cx = *((_DWORD *)a1 + 36);
    v3 = *((_DWORD *)a1 + 37);
LABEL_4:
    a3->cy = v3;
    return;
  }
  v4 = *((_DWORD *)a1 + 31);
  if ( (unsigned int)(v4 - 5) <= 0xB )
    v4 = (v4 - 1) % 4 + 1;
  if ( (*(_DWORD *)a1 & 0x200) != 0 && ((v4 - 1) & 0xFFFFFFFD) != 0 )
  {
    a3->cx = *((_DWORD *)a1 + 23);
    v3 = *((_DWORD *)a1 + 22);
    goto LABEL_4;
  }
  *a3 = *(struct _D3DKMDT_2DREGION *)((char *)a1 + 88);
}
