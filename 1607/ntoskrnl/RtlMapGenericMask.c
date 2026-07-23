/*
 * XREFs of RtlMapGenericMask @ 0x1403FF7D0
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x14000F3E0 (SepCreateAccessStateFromSubjectContext.c)
 *     AlpcpCheckConnectionSecurity @ 0x1403FF660 (AlpcpCheckConnectionSecurity.c)
 *     ObpAdjustCreatorAccessState @ 0x140402F10 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     RtlpCopyEffectiveAce @ 0x140420940 (RtlpCopyEffectiveAce.c)
 *     ObCaptureObjectStateForDuplication @ 0x1404B017C (ObCaptureObjectStateForDuplication.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1404BEE8C (CmpVEPerformOpenAccessCheck.c)
 *     ObDuplicateObject @ 0x1404EFB40 (ObDuplicateObject.c)
 *     IoCheckDesiredAccess @ 0x14062350C (IoCheckDesiredAccess.c)
 *     CMFCheckAccess @ 0x1406B87B8 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x1406B89D4 (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlMapGenericMask(PACCESS_MASK AccessMask, PGENERIC_MAPPING GenericMapping)
{
  if ( (*AccessMask & 0x80000000) != 0 )
    *AccessMask |= GenericMapping->GenericRead;
  if ( (*AccessMask & 0x40000000) != 0 )
    *AccessMask |= GenericMapping->GenericWrite;
  if ( (*AccessMask & 0x20000000) != 0 )
    *AccessMask |= GenericMapping->GenericExecute;
  if ( (*AccessMask & 0x10000000) != 0 )
    *AccessMask |= GenericMapping->GenericAll;
  *AccessMask &= 0xFFFFFFFu;
}
