/*
 * XREFs of IopFreeReqList @ 0x14059C9E8
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x140164074 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14059C7B4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x14059C8BC (IopAllocateBootResourcesInternal.c)
 *     IopResourceRequirementsListToReqList @ 0x14059D140 (IopResourceRequirementsListToReqList.c)
 *     IopQueryConflictListInternal @ 0x140697A64 (IopQueryConflictListInternal.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopFreeReqAlternative @ 0x14059CA38 (IopFreeReqAlternative.c)
 */

void __fastcall IopFreeReqList(_QWORD *P)
{
  __int64 i; // rsi

  if ( P )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 8); i = (unsigned int)(i + 1) )
    {
      IopFreeReqAlternative(P[i + 5]);
      P[i + 5] = 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
}
