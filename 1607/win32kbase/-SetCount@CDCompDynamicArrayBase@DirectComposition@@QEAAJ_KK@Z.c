/*
 * XREFs of ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C00E4D28
 * Callers:
 *     ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C00E57E0 (-SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?SetSegments@CPencilMarshaler@DirectComposition@@AEAAJIPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z @ 0x1C00E6060 (-SetSegments@CPencilMarshaler@DirectComposition@@AEAAJIPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z.c)
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C004CD34 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C00E4D5C (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 */

__int64 __fastcall DirectComposition::CDCompDynamicArrayBase::SetCount(
        DirectComposition::CDCompDynamicArrayBase *this,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // r9d

  v2 = *((_QWORD *)this + 4);
  v3 = 0;
  if ( a2 < v2 )
    return (unsigned int)DirectComposition::CDCompDynamicArrayBase::Shrink(this, v2 - a2);
  if ( a2 > v2 )
    return (unsigned int)DirectComposition::CDCompDynamicArrayBase::Grow(this, a2 - v2);
  return v3;
}
