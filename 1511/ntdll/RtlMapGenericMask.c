/*
 * XREFs of RtlMapGenericMask @ 0x180060FB0
 * Callers:
 *     RtlpApplyAclToObject @ 0x18005DB84 (RtlpApplyAclToObject.c)
 *     RtlpCopyEffectiveAce @ 0x180060A18 (RtlpCopyEffectiveAce.c)
 *     RtlpCopyAces @ 0x18006192C (RtlpCopyAces.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800CCB20 (RtlNewSecurityGrantedAccess.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800D7628 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlMapGenericMask(PACCESS_MASK AccessMask, PGENERIC_MAPPING GenericMapping)
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
