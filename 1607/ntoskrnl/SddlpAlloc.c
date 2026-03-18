/*
 * XREFs of SddlpAlloc @ 0x1404D7574
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140235A58 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1404D67F8 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1404D6D44 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x1404D72E0 (LookupSidInTable.c)
 *     LocalConvertAclToString @ 0x1406CA388 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406CAE68 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertSidToStringSidW @ 0x1406CB414 (LocalConvertSidToStringSidW.c)
 *     LocalGetStringForControl @ 0x1406CB6F8 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x1406CB818 (LocalGetStringForSid.c)
 *     LocalpConvertStringSidToSid @ 0x1406CB8F8 (LocalpConvertStringSidToSid.c)
 *     AppendCondition @ 0x1406CC618 (AppendCondition.c)
 *     DecodeAttributeName @ 0x1406CC6E0 (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1406CC8C0 (EncloseSubCondition.c)
 *     EncodeAttributeName @ 0x1406CC970 (EncodeAttributeName.c)
 *     GetAttributeName @ 0x1406CCABC (GetAttributeName.c)
 *     GetOperandValue @ 0x1406CCF20 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1406CD520 (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1406CD6C4 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1406CD89C (GetPrintableOperandValue.c)
 *     GetStringOperandValue @ 0x1406CDEDC (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x1406CE13C (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1406CE88C (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1406CF418 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1406CFC88 (LocalpGetStringForCondition.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
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
