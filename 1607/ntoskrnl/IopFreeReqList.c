/*
 * XREFs of IopFreeReqList @ 0x14055630C
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1401CE0DC (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1405560E4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x1405561C0 (IopAllocateBootResourcesInternal.c)
 *     IopResourceRequirementsListToReqList @ 0x140556A60 (IopResourceRequirementsListToReqList.c)
 *     IopQueryConflictListInternal @ 0x14064E5F8 (IopQueryConflictListInternal.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopFreeReqAlternative @ 0x14055635C (IopFreeReqAlternative.c)
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
