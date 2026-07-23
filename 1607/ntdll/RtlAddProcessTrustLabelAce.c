/*
 * XREFs of RtlAddProcessTrustLabelAce @ 0x18008D740
 * Callers:
 *     RtlpNewSecurityObject @ 0x180044AC8 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180014E10 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x180014F70 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180014FB0 (RtlValidAcl.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x18006B440 (RtlIsValidProcessTrustLabelSid.c)
 *     RtlCopySid @ 0x18006B620 (RtlCopySid.c)
 */

NTSTATUS __cdecl RtlAddProcessTrustLabelAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        PSID ProcessTrustLabelSid,
        UCHAR AceType,
        ACCESS_MASK AccessMask)
{
  unsigned __int8 AclRevision; // bp
  ACCESS_MASK v11; // esi
  char *v12; // rdx
  unsigned __int16 v13; // r8
  NTSTATUS result; // eax
  PVOID FirstFree; // [rsp+40h] [rbp+8h] BYREF

  if ( !Acl || !RtlValidAcl(Acl) )
    return -1073741705;
  if ( AceType != 20 )
    return -1073741811;
  if ( !RtlValidSid(ProcessTrustLabelSid) )
    return -1073741704;
  if ( !RtlIsValidProcessTrustLabelSid(ProcessTrustLabelSid) )
    return -1073741811;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  AclRevision = AceRevision;
  if ( Acl->AclRevision > AceRevision )
    AclRevision = Acl->AclRevision;
  if ( (AceFlags & 0xFFFFFFE0) != 0 )
    return -1073741811;
  v11 = AccessMask;
  if ( (AccessMask & 0xFF000000) != 0 )
    return -1073741811;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v12 = (char *)FirstFree;
  v13 = 4 * (*((unsigned __int8 *)ProcessTrustLabelSid + 1) + 4);
  if ( !FirstFree || (char *)FirstFree + v13 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_WORD *)FirstFree + 1) = v13;
  v12[1] = AceFlags;
  *v12 = 20;
  *((_DWORD *)v12 + 1) = v11;
  RtlCopySid(4 * *((unsigned __int8 *)ProcessTrustLabelSid + 1) + 8, v12 + 8, ProcessTrustLabelSid);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
