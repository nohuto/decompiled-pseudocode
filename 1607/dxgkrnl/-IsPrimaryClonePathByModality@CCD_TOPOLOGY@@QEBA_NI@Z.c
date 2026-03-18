/*
 * XREFs of ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0006E1C
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C008AE98 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C008AFEC (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C008B470 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00D5604 (-_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00D5748 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z @ 0x1C01AE170 (-_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_TOPOLOGY::IsPrimaryClonePathByModality(CCD_TOPOLOGY *this, unsigned int a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  int v4; // r10d
  unsigned int v5; // ecx
  _DWORD *v6; // r8
  __int64 result; // rax

  v2 = *((_QWORD *)this + 8);
  v3 = *(unsigned __int16 *)(v2 + 20);
  v4 = *(_DWORD *)(216LL * a2 + v2 + 248);
  v5 = 0;
  if ( !*(_WORD *)(v2 + 20) )
    return 0LL;
  v6 = (_DWORD *)(v2 + 248);
  result = 1LL;
  while ( *v6 != v4 )
  {
    ++v5;
    v6 += 54;
    if ( v5 >= v3 )
      return 0LL;
  }
  if ( v5 != a2 )
    return 0LL;
  return result;
}
