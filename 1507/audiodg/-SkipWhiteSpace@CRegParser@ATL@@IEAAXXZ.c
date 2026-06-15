/*
 * XREFs of ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x140038FA4
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x1400364E0 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140037A4C (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x1400382B8 (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140038F18 (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CRegParser::SkipWhiteSpace(LPCWSTR *this)
{
  unsigned int v2; // eax

  while ( 1 )
  {
    v2 = **this;
    if ( v2 < 9 || **this > 0xAu && v2 != 13 && v2 != 32 )
      break;
    *this = CharNextW(*this);
  }
}
