/*
 * XREFs of ?StDmSparseBitmapAlloc@?$ST_STORE@USM_TRAITS@@@@SAPEAX_K@Z @ 0x140255B74
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall ST_STORE<SM_TRAITS>::StDmSparseBitmapAlloc(unsigned int a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, a1, 0x74536D73u);
}
