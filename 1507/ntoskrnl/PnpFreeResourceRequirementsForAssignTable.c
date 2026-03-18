/*
 * XREFs of PnpFreeResourceRequirementsForAssignTable @ 0x14059C7B4
 * Callers:
 *     PnpAllocateResources @ 0x14045C42C (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14045C80C (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpRebalance @ 0x140680EDC (PnpRebalance.c)
 *     PnpReallocateResources @ 0x140695AF8 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x140695F48 (PnpRestoreResourcesInternal.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopFreeReqList @ 0x14059C9E8 (IopFreeReqList.c)
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
