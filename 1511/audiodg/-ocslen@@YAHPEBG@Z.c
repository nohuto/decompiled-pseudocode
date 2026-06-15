/*
 * XREFs of ?ocslen@@YAHPEBG@Z @ 0x140039574
 * Callers:
 *     ?Add@CExpansionVector@ATL@@QEAAHPEBG0@Z @ 0x14003635C (-Add@CExpansionVector@ATL@@QEAAHPEBG0@Z.c)
 *     ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x1400391C4 (-UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ocslen(const unsigned __int16 *a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 0LL;
  result = -1LL;
  do
    ++result;
  while ( a1[result] );
  return result;
}
