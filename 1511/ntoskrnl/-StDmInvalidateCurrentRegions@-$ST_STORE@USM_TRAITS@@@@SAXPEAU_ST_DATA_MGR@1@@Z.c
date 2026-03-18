/*
 * XREFs of ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x1400F6B34
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400F6DB0 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010C0A8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1400F6B80 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // edi
  __int64 result; // rax

  v1 = 0;
  v3 = 8;
  if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
    v3 = 1;
  do
    result = ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, v1++, 0xFFFFFFFFLL);
  while ( v1 < v3 );
  return result;
}
