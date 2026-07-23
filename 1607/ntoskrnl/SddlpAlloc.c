/*
 * XREFs of SddlpAlloc @ 0x1404BAB78
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140235884 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1404B9DFC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1404BA348 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x1404BA8E4 (LookupSidInTable.c)
 *     LocalConvertAclToString @ 0x1406CA4C0 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406CAFA0 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertSidToStringSidW @ 0x1406CB54C (LocalConvertSidToStringSidW.c)
 *     LocalGetStringForControl @ 0x1406CB830 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x1406CB950 (LocalGetStringForSid.c)
 *     LocalpConvertStringSidToSid @ 0x1406CBA30 (LocalpConvertStringSidToSid.c)
 *     AppendCondition @ 0x1406CC750 (AppendCondition.c)
 *     DecodeAttributeName @ 0x1406CC818 (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1406CC9F8 (EncloseSubCondition.c)
 *     EncodeAttributeName @ 0x1406CCAA8 (EncodeAttributeName.c)
 *     GetAttributeName @ 0x1406CCBF4 (GetAttributeName.c)
 *     GetOperandValue @ 0x1406CD058 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1406CD658 (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1406CD7FC (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1406CD9D4 (GetPrintableOperandValue.c)
 *     GetStringOperandValue @ 0x1406CE014 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x1406CE274 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1406CE9C4 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1406CF550 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1406CFDC0 (LocalpGetStringForCondition.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
