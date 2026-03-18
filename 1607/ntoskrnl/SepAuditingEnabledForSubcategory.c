/*
 * XREFs of SepAuditingEnabledForSubcategory @ 0x14000F540
 * Callers:
 *     SepAdtAuditThisEventWithContext @ 0x140414D50 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1406909C0 (SepAdtClassifyObjectIntoSubCategory.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepAuditingEnabledForSubcategory(int a1, char a2, char a3)
{
  __int64 v3; // rax

  v3 = (unsigned int)(a1 - 100);
  return SeAuditingState[2 * v3] && a2 || SeAuditingState[2 * v3 + 1] && a3;
}
