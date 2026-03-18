/*
 * XREFs of ?RemoveSegmentsAtEnd@CPencilMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C00E5D78
 * Callers:
 *     ?SetIntegerProperty@CPencilMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00E5F90 (-SetIntegerProperty@CPencilMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 * Callees:
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C00E4D5C (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 */

__int64 __fastcall DirectComposition::CPencilMarshaler::RemoveSegmentsAtEnd(
        DirectComposition::CPencilMarshaler *this,
        unsigned int a2,
        bool *a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // r9

  result = DirectComposition::CDCompDynamicArrayBase::Shrink(
             (DirectComposition::CPencilMarshaler *)((char *)this + 144),
             a2);
  if ( (int)result >= 0 )
  {
    v6 = *((_QWORD *)this + 22);
    if ( *((unsigned int *)this + 48) < v6 )
      LODWORD(v6) = *((_DWORD *)this + 48);
    *((_DWORD *)this + 4) &= ~0x80u;
    *((_DWORD *)this + 48) = v6;
    *a3 = 1;
  }
  return result;
}
