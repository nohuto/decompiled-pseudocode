/*
 * XREFs of RtlMapGenericMask @ 0x140472860
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x140043450 (SepCreateAccessStateFromSubjectContext.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     ObDuplicateObject @ 0x1404246E0 (ObDuplicateObject.c)
 *     AlpcpCheckConnectionSecurity @ 0x14046ACE4 (AlpcpCheckConnectionSecurity.c)
 *     RtlpCopyEffectiveAce @ 0x140471F40 (RtlpCopyEffectiveAce.c)
 *     ObCaptureObjectStateForDuplication @ 0x14047D164 (ObCaptureObjectStateForDuplication.c)
 *     ObpAdjustCreatorAccessState @ 0x1404A95A0 (ObpAdjustCreatorAccessState.c)
 *     IoCheckDesiredAccess @ 0x1405F9AE0 (IoCheckDesiredAccess.c)
 *     CMFCheckAccess @ 0x140675D24 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x140675F40 (CMFCreateSecurityDescriptor.c)
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
