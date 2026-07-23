/*
 * XREFs of CmpLightWeightCleanupSetValueKeyUoW @ 0x14053B590
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x14053AF14 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14053B470 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14060E6E4 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 */

void __fastcall CmpLightWeightCleanupSetValueKeyUoW(ULONG_PTR a1, unsigned int *a2)
{
  ULONG_PTR v4; // rdx

  if ( (*a2)-- == 1 )
  {
    v4 = a2[2];
    if ( (_DWORD)v4 != -1 )
      HvFreeCell(a1, v4);
    ExFreePoolWithTag(a2, 0x77554D43u);
  }
}
