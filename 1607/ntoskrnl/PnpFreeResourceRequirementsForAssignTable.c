/*
 * XREFs of PnpFreeResourceRequirementsForAssignTable @ 0x1405560E4
 * Callers:
 *     PnpAllocateResources @ 0x1404C82A4 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1404C866C (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpRebalance @ 0x1406303D0 (PnpRebalance.c)
 *     PnpReallocateResources @ 0x14064BC7C (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x14064BE48 (PnpRestoreResourcesInternal.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopFreeReqList @ 0x14055630C (IopFreeReqList.c)
 */

void __fastcall PnpFreeResourceRequirementsForAssignTable(unsigned __int64 a1, unsigned __int64 a2)
{
  PVOID *v2; // rdi
  unsigned __int64 v3; // rbx

  if ( a1 < a2 )
  {
    v2 = (PVOID *)(a1 + 24);
    v3 = ((a2 - a1 - 1) >> 6) + 1;
    do
    {
      IopFreeReqList(v2[1]);
      v2[1] = 0LL;
      if ( (*(_DWORD *)(v2 - 2) & 0x200) != 0 )
      {
        if ( *v2 )
        {
          ExFreePoolWithTag(*v2, 0);
          *v2 = 0LL;
        }
      }
      v2 += 8;
      --v3;
    }
    while ( v3 );
  }
}
