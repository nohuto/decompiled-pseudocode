/*
 * XREFs of IopFreeReqList @ 0x14052A0BC
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x140135FE4 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140529EB4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x140529F90 (IopAllocateBootResourcesInternal.c)
 *     IopResourceRequirementsListToReqList @ 0x14052A814 (IopResourceRequirementsListToReqList.c)
 *     IopQueryConflictListInternal @ 0x140619448 (IopQueryConflictListInternal.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopFreeReqAlternative @ 0x14052A10C (IopFreeReqAlternative.c)
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
