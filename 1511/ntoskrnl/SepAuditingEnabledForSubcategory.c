/*
 * XREFs of SepAuditingEnabledForSubcategory @ 0x14009E930
 * Callers:
 *     SepAdtAuditThisEventWithContext @ 0x140478BB0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140651738 (SepAdtClassifyObjectIntoSubCategory.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepAuditingEnabledForSubcategory(int a1, char a2, char a3)
{
  __int64 v3; // rax

  v3 = (unsigned int)(a1 - 100);
  return SeAuditingState[2 * v3] && a2 || SeAuditingState[2 * v3 + 1] && a3;
}
