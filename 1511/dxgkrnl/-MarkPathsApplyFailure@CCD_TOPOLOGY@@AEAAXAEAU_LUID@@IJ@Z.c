/*
 * XREFs of ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEAU_LUID@@IJ@Z @ 0x1C0181FE0
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C00A3CD0 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00A423C (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4E18 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::MarkPathsApplyFailure(CCD_TOPOLOGY *this, struct _LUID *a2, int a3, int a4)
{
  unsigned __int16 i; // r11
  __int64 v6; // rdx
  __int64 v7; // r10

  for ( i = 0; ; ++i )
  {
    v7 = *((_QWORD *)this + 8);
    if ( i >= *(_WORD *)(v7 + 20) )
      break;
    v6 = 216LL * i;
    if ( *(_DWORD *)(v6 + v7 + 56) == a2->LowPart
      && *(_DWORD *)(v6 + v7 + 60) == a2->HighPart
      && (a3 == -1 || *(_DWORD *)(v6 + v7 + 64) == a3) )
    {
      *(_DWORD *)(v6 + v7 + 256) = a4;
    }
  }
}
