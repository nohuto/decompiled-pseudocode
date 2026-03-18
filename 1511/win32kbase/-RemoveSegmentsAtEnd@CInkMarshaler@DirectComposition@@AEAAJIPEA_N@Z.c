/*
 * XREFs of ?RemoveSegmentsAtEnd@CInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C00D7D48
 * Callers:
 *     ?SetIntegerProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00D7F50 (-SetIntegerProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z.c)
 * Callees:
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C00D758C (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::RemoveSegmentsAtEnd(
        DirectComposition::CInkMarshaler *this,
        unsigned int a2,
        bool *a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // r9

  result = DirectComposition::CDCompDynamicArrayBase::Shrink(
             (DirectComposition::CInkMarshaler *)((char *)this + 96),
             a2);
  if ( (int)result >= 0 )
  {
    v6 = *((_QWORD *)this + 16);
    if ( *((unsigned int *)this + 36) < v6 )
      LODWORD(v6) = *((_DWORD *)this + 36);
    *((_DWORD *)this + 4) &= ~0x100u;
    *((_DWORD *)this + 36) = v6;
    *a3 = 1;
  }
  return result;
}
