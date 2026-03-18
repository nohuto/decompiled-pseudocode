/*
 * XREFs of ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C00E4D5C
 * Callers:
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C00E4D28 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?RemoveSegmentsAtEnd@CInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C00E55D8 (-RemoveSegmentsAtEnd@CInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z.c)
 *     ?RemoveSegmentsAtEnd@CPencilMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C00E5D78 (-RemoveSegmentsAtEnd@CPencilMarshaler@DirectComposition@@AEAAJIPEA_N@Z.c)
 * Callees:
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall DirectComposition::CDCompDynamicArrayBase::Shrink(
        DirectComposition::CDCompDynamicArrayBase *this,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi

  v2 = *((_QWORD *)this + 4);
  if ( v2 < a2 )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v4 = v2 - a2;
    v5 = 0;
    memset((void *)(*((_QWORD *)this + 1) + (v2 - a2) * *((_QWORD *)this + 5)), 0, *((_QWORD *)this + 5) * a2);
    *((_QWORD *)this + 4) = v4;
  }
  return v5;
}
