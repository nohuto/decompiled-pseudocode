/*
 * XREFs of ?StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z @ 0x140039060
 * Callers:
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x140037DB4 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140038774 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     <none>
 */

LPWSTR __fastcall ATL::CRegParser::StrChrW(unsigned __int16 *lpsz, __int16 a2)
{
  __int64 v2; // rbx
  LPWSTR result; // rax
  WCHAR i; // cx

  v2 = 0LL;
  result = lpsz;
  if ( lpsz )
  {
    for ( i = *lpsz; i; i = *result )
    {
      if ( i == a2 )
        return result;
      result = CharNextW(result);
    }
    return (LPWSTR)v2;
  }
  return result;
}
