/*
 * XREFs of ?AdjustHwProtectedEntityCount@CComposition@@SAX_N@Z @ 0x18014D308
 * Callers:
 *     ?UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180046A90 (-UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CComposition::AdjustHwProtectedEntityCount(char a1)
{
  if ( a1 )
    ++CComposition::s_cHwProtectedEntities;
  else
    CComposition::s_bHwProtectionTempDisabled = --CComposition::s_cHwProtectedEntities != 0
                                             && CComposition::s_bHwProtectionTempDisabled;
}
