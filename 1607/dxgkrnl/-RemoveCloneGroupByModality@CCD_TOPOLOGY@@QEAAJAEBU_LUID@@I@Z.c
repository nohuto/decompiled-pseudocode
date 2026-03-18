/*
 * XREFs of ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01AB2B0
 * Callers:
 *     ?_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00D5604 (-_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00D5748 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000CD24 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C008C8D4 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C01AB614 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RemoveCloneGroupByModality(CCD_TOPOLOGY *this, const struct _LUID *a2, int a3)
{
  __int64 v3; // rax
  int v4; // ebp
  unsigned int v5; // ebx
  __int16 v9; // ax
  __int64 v10; // r9
  unsigned int v11; // r10d
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  unsigned int v14; // edi

  v3 = *((_QWORD *)this + 8);
  v4 = -1;
  v5 = 0;
  if ( v3 )
    v9 = *(_WORD *)(v3 + 20);
  else
    v9 = 0;
  if ( v9 )
  {
    CCD_TOPOLOGY::ClearModalitySetId((void **)this);
    v10 = *((_QWORD *)this + 8);
    v11 = 0;
    v12 = *(unsigned __int16 *)(v10 + 20);
    if ( *(_WORD *)(v10 + 20) )
    {
      while ( !CCD_TOPOLOGY::IsMatchingSource(
                 (const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v10 + 216LL * v11 + 48),
                 a2,
                 a3) )
      {
        v11 = v13 + 1;
        if ( v11 >= v12 )
          goto LABEL_10;
      }
      v4 = *(_DWORD *)(216LL * v13 + v10 + 248);
    }
LABEL_10:
    v14 = 0;
    if ( v12 )
    {
      do
      {
        if ( v4 != *(_DWORD *)(216LL * v14 + v10 + 248) )
        {
          if ( v5 != v14 )
            CCD_TOPOLOGY::SwapPathsDescriptors(this, v14, v5);
          ++v5;
        }
        v10 = *((_QWORD *)this + 8);
        ++v14;
      }
      while ( v14 < *(unsigned __int16 *)(v10 + 20) );
    }
    *(_WORD *)(*((_QWORD *)this + 8) + 20LL) = v5;
  }
  return 0LL;
}
