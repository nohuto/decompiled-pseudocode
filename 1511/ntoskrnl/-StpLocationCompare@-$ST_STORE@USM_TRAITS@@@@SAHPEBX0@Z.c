/*
 * XREFs of ?StpLocationCompare@?$ST_STORE@USM_TRAITS@@@@SAHPEBX0@Z @ 0x140207714
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StpLocationCompare(_DWORD *a1, _DWORD *a2)
{
  return *a1 < *a2 ? -1 : 1;
}
