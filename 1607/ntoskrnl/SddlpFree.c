/*
 * XREFs of SddlpFree @ 0x1404BA0C0
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x1404B9DFC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1404BA348 (LocalGetAclForString.c)
 *     LocalConvertAclToString @ 0x1406CA4C0 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406CAFA0 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalpConvertStringSidToSid @ 0x1406CBA30 (LocalpConvertStringSidToSid.c)
 *     AppendCondition @ 0x1406CC750 (AppendCondition.c)
 *     DecodeAttributeName @ 0x1406CC818 (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1406CC9F8 (EncloseSubCondition.c)
 *     FreeOperandValue @ 0x1406CCBC4 (FreeOperandValue.c)
 *     GetOperandValue @ 0x1406CD058 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1406CD658 (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1406CD7FC (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1406CD9D4 (GetPrintableOperandValue.c)
 *     LocalGetConditionForString @ 0x1406CE274 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1406CE9C4 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1406CF550 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1406CFDC0 (LocalpGetStringForCondition.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
