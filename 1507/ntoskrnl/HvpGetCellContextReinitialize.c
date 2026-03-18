/*
 * XREFs of HvpGetCellContextReinitialize @ 0x1400CA874
 * Callers:
 *     HvReallocateCell @ 0x1404A1290 (HvReallocateCell.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     HvpReleaseCellPaged @ 0x1404C2900 (HvpReleaseCellPaged.c)
 *     CmpFindValueByNameFromCache @ 0x1404CABB0 (CmpFindValueByNameFromCache.c)
 *     HvpReleaseCellFlat @ 0x140554810 (HvpReleaseCellFlat.c)
 *     CmpBuildVirtualReplicationStack @ 0x140657EBC (CmpBuildVirtualReplicationStack.c)
 *     CmpDoBuildVirtualStack @ 0x1406584F0 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellContextReinitialize(_DWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0;
  *a1 = -1;
  return result;
}
