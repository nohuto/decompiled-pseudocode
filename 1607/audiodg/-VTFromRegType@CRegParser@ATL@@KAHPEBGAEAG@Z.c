/*
 * XREFs of ?VTFromRegType@CRegParser@ATL@@KAHPEBGAEAG@Z @ 0x140038330
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140035890 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CRegParser::VTFromRegType(LPCWSTR lpString1, unsigned __int16 *a2)
{
  int v4; // ebx
  LPCWSTR *i; // rdi
  __int64 result; // rax

  if ( (`ATL::CRegParser::VTFromRegType'::`2'::`local static guard' & 1) == 0 )
  {
    `ATL::CRegParser::VTFromRegType'::`2'::`local static guard' |= 1u;
    `ATL::CRegParser::VTFromRegType'::`2'::map[0] = (__int64)L"S";
    word_140054FE8 = 8;
    qword_140054FF0 = (__int64)L"M";
    word_140054FF8 = 16392;
    qword_140055000 = (__int64)L"D";
    word_140055008 = 19;
    qword_140055010 = (__int64)L"B";
    word_140055018 = 17;
  }
  v4 = 0;
  for ( i = (LPCWSTR *)`ATL::CRegParser::VTFromRegType'::`2'::map; lstrcmpiW(lpString1, *i); i += 2 )
  {
    if ( (unsigned __int64)++v4 >= 4 )
      return 0LL;
  }
  result = 1LL;
  *a2 = `ATL::CRegParser::VTFromRegType'::`2'::map[2 * v4 + 1];
  return result;
}
