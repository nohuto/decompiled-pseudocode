/*
 * XREFs of HvpGetCellContextReinitialize @ 0x140040CE8
 * Callers:
 *     HvReallocateCell @ 0x1403D87A8 (HvReallocateCell.c)
 *     CmpFindValueByNameFromCache @ 0x1403FBA30 (CmpFindValueByNameFromCache.c)
 *     CmpCheckRegistry2 @ 0x140405850 (CmpCheckRegistry2.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     HvpReleaseCellPaged @ 0x140406530 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1404BE1FC (HvpReleaseCellFlat.c)
 *     CmpBuildVirtualReplicationStack @ 0x1405E1DAC (CmpBuildVirtualReplicationStack.c)
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
