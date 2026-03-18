/*
 * XREFs of PnpFreeResourceRequirementsForAssignTable @ 0x140529EB4
 * Callers:
 *     PnpGetResourceRequirementsForAssignTable @ 0x1404F189C (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpAllocateResources @ 0x1404F213C (PnpAllocateResources.c)
 *     PnpRebalance @ 0x140606198 (PnpRebalance.c)
 *     PnpReallocateResources @ 0x140617258 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x140617684 (PnpRestoreResourcesInternal.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopFreeReqList @ 0x14052A0BC (IopFreeReqList.c)
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
