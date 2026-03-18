/*
 * XREFs of SddlpAlloc @ 0x140687AFC
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x14021B6F0 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     LocalConvertAclToString @ 0x140684128 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140684C48 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertSidToStringSidW @ 0x140685258 (LocalConvertSidToStringSidW.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14068530C (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1406859BC (LocalGetAclForString.c)
 *     LocalGetStringForControl @ 0x140686A00 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x140686B20 (LocalGetStringForSid.c)
 *     LocalpConvertStringSidToSid @ 0x140686C0C (LocalpConvertStringSidToSid.c)
 *     LookupSidInTable @ 0x1406872B8 (LookupSidInTable.c)
 *     AppendCondition @ 0x140687D98 (AppendCondition.c)
 *     DecodeAttributeName @ 0x140687E60 (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x140688040 (EncloseSubCondition.c)
 *     EncodeAttributeName @ 0x1406880F0 (EncodeAttributeName.c)
 *     GetAttributeName @ 0x14068823C (GetAttributeName.c)
 *     GetOperandValue @ 0x1406886A0 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x140688CDC (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x140688E80 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x140689058 (GetPrintableOperandValue.c)
 *     GetStringOperandValue @ 0x14068969C (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x1406898FC (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x14068A048 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x14068ABD4 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x14068B44C (LocalpGetStringForCondition.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SddlpAlloc(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x64536553u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, Size);
  return v3;
}
