/*
 * XREFs of SddlpFree @ 0x1404D6ABC
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x1404D67F8 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1404D6D44 (LocalGetAclForString.c)
 *     LocalConvertAclToString @ 0x1406CA388 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406CAE68 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalpConvertStringSidToSid @ 0x1406CB8F8 (LocalpConvertStringSidToSid.c)
 *     AppendCondition @ 0x1406CC618 (AppendCondition.c)
 *     DecodeAttributeName @ 0x1406CC6E0 (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1406CC8C0 (EncloseSubCondition.c)
 *     FreeOperandValue @ 0x1406CCA8C (FreeOperandValue.c)
 *     GetOperandValue @ 0x1406CCF20 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1406CD520 (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1406CD6C4 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1406CD89C (GetPrintableOperandValue.c)
 *     LocalGetConditionForString @ 0x1406CE13C (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1406CE88C (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1406CF418 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1406CFC88 (LocalpGetStringForCondition.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
