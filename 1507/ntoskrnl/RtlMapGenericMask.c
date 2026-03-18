/*
 * XREFs of RtlMapGenericMask @ 0x140435530
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x14004E2C0 (SepCreateAccessStateFromSubjectContext.c)
 *     ObDuplicateObject @ 0x1404243A0 (ObDuplicateObject.c)
 *     RtlpCopyEffectiveAce @ 0x140435120 (RtlpCopyEffectiveAce.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     ObpAdjustCreatorAccessState @ 0x1404D0C60 (ObpAdjustCreatorAccessState.c)
 *     AlpcpCheckConnectionSecurity @ 0x14050BAF0 (AlpcpCheckConnectionSecurity.c)
 *     ObCaptureObjectStateForDuplication @ 0x14053B60C (ObCaptureObjectStateForDuplication.c)
 *     IoCheckDesiredAccess @ 0x140673D6C (IoCheckDesiredAccess.c)
 *     CMFCheckAccess @ 0x1406FA4F4 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x1406FA710 (CMFCreateSecurityDescriptor.c)
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
