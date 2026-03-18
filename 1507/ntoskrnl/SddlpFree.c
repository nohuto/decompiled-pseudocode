/*
 * XREFs of SddlpFree @ 0x14070A4E0
 * Callers:
 *     LocalConvertAclToString @ 0x140708CD8 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407097E4 (LocalConvertSDToStringSD_Rev1.c)
 *     EncloseSubCondition @ 0x14070A658 (EncloseSubCondition.c)
 *     GetPrintableAttributeName @ 0x14070A860 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x14070AA38 (GetPrintableOperandValue.c)
 *     LocalGetStringForRelativeAttribute @ 0x14070B070 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x14070B8B8 (LocalpGetStringForCondition.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
