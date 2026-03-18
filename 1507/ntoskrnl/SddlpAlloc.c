/*
 * XREFs of SddlpAlloc @ 0x14070A49C
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x14026B244 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     LocalConvertAclToString @ 0x140708CD8 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407097E4 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertSidToStringSidW @ 0x140709DE4 (LocalConvertSidToStringSidW.c)
 *     LocalGetStringForControl @ 0x140709FDC (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x14070A0FC (LocalGetStringForSid.c)
 *     EncloseSubCondition @ 0x14070A658 (EncloseSubCondition.c)
 *     EncodeAttributeName @ 0x14070A708 (EncodeAttributeName.c)
 *     GetPrintableAttributeName @ 0x14070A860 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x14070AA38 (GetPrintableOperandValue.c)
 *     LocalGetStringForRelativeAttribute @ 0x14070B070 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x14070B8B8 (LocalpGetStringForCondition.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
