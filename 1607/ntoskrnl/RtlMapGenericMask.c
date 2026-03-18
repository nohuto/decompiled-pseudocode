/*
 * XREFs of RtlMapGenericMask @ 0x140400910
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x14000F860 (SepCreateAccessStateFromSubjectContext.c)
 *     AlpcpCheckConnectionSecurity @ 0x1404007A0 (AlpcpCheckConnectionSecurity.c)
 *     ObpAdjustCreatorAccessState @ 0x140404050 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     RtlpCopyEffectiveAce @ 0x140421A80 (RtlpCopyEffectiveAce.c)
 *     ObCaptureObjectStateForDuplication @ 0x1404CA3FC (ObCaptureObjectStateForDuplication.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1404DB888 (CmpVEPerformOpenAccessCheck.c)
 *     ObDuplicateObject @ 0x14050CBB0 (ObDuplicateObject.c)
 *     IoCheckDesiredAccess @ 0x140623458 (IoCheckDesiredAccess.c)
 *     CMFCheckAccess @ 0x1406B8680 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x1406B889C (CMFCreateSecurityDescriptor.c)
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
