/*
 * XREFs of ?CanForceRemoveKey@CRegParser@ATL@@IEAAHPEBG@Z @ 0x140036CFC
 * Callers:
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140038774 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CRegParser::CanForceRemoveKey(ATL::CRegParser *this, const unsigned __int16 *a2)
{
  LPCWSTR *v3; // rbx

  v3 = (LPCWSTR *)&ATL::CRegParser::rgszNeverDelete;
  while ( lstrcmpiW(a2, *v3) )
  {
    if ( (__int64)++v3 >= (__int64)&GUID_06b2132b_5b99_42a6_b8b6_a1709e191c70 )
      return 1LL;
  }
  return 0LL;
}
