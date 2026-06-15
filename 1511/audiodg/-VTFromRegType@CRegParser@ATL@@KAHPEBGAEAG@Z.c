/*
 * XREFs of ?VTFromRegType@CRegParser@ATL@@KAHPEBGAEAG@Z @ 0x140039474
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x1400366B0 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
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
    word_140055E68 = 8;
    qword_140055E70 = (__int64)L"M";
    word_140055E78 = 16392;
    qword_140055E80 = (__int64)L"D";
    word_140055E88 = 19;
    qword_140055E90 = (__int64)L"B";
    word_140055E98 = 17;
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
