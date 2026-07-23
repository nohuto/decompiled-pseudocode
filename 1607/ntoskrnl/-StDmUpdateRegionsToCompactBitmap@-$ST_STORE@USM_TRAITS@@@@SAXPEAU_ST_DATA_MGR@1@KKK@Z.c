/*
 * XREFs of ?StDmUpdateRegionsToCompactBitmap@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14011CE24
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140004700 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x14011C75C (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 * Callees:
 *     <none>
 */

signed __int32 *__fastcall ST_STORE<SM_TRAITS>::StDmUpdateRegionsToCompactBitmap(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  signed __int32 *result; // rax

  result = (signed __int32 *)((unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1);
  if ( a3 < (unsigned int)result && a3 )
  {
    if ( a4 >= (unsigned int)result || !a4 )
    {
      result = *(signed __int32 **)(a1 + 1048);
      --*(_DWORD *)(a1 + 1056);
      _bittestandset(result, a2);
    }
  }
  else if ( a4 < (unsigned int)result )
  {
    if ( a4 )
    {
      result = *(signed __int32 **)(a1 + 1048);
      _bittestandreset(result, a2);
      ++*(_DWORD *)(a1 + 1056);
    }
  }
  return result;
}
