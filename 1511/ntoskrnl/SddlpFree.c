/*
 * XREFs of SddlpFree @ 0x140687B40
 * Callers:
 *     LocalConvertAclToString @ 0x140684128 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140684C48 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14068530C (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1406859BC (LocalGetAclForString.c)
 *     LocalpConvertStringSidToSid @ 0x140686C0C (LocalpConvertStringSidToSid.c)
 *     AppendCondition @ 0x140687D98 (AppendCondition.c)
 *     DecodeAttributeName @ 0x140687E60 (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x140688040 (EncloseSubCondition.c)
 *     FreeOperandValue @ 0x14068820C (FreeOperandValue.c)
 *     GetOperandValue @ 0x1406886A0 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x140688CDC (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x140688E80 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x140689058 (GetPrintableOperandValue.c)
 *     LocalGetConditionForString @ 0x1406898FC (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x14068A048 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x14068ABD4 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x14068B44C (LocalpGetStringForCondition.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
