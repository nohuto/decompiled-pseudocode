/*
 * XREFs of RtlAddMandatoryAce @ 0x18006B4B0
 * Callers:
 *     RtlpNewSecurityObject @ 0x180044AC8 (RtlpNewSecurityObject.c)
 *     RtlCheckSandboxedToken @ 0x1800D4640 (RtlCheckSandboxedToken.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180014E10 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x180014F70 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180014FB0 (RtlValidAcl.c)
 *     RtlCopySid @ 0x18006B620 (RtlCopySid.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlAddMandatoryAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        PSID Sid,
        UCHAR AceType,
        ACCESS_MASK AccessMask)
{
  int v10; // ecx
  unsigned __int8 AclRevision; // bp
  char *v12; // rdx
  unsigned __int16 v13; // r8
  NTSTATUS result; // eax
  PVOID FirstFree; // [rsp+20h] [rbp-38h] BYREF

  LODWORD(FirstFree) = 0;
  WORD2(FirstFree) = 4096;
  if ( !Acl )
    return -1073741705;
  if ( AceType != 17 )
    return -1073741811;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v10 = *(_DWORD *)((char *)Sid + 2) - (_DWORD)FirstFree;
  if ( !v10 )
    v10 = *((unsigned __int16 *)Sid + 3) - WORD2(FirstFree);
  if ( v10 )
    return -1073741811;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  AclRevision = AceRevision;
  if ( Acl->AclRevision > (unsigned __int8)AceRevision )
    AclRevision = Acl->AclRevision;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || (AccessMask & 0xFFFFFFF8) != 0 )
    return -1073741811;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v12 = (char *)FirstFree;
  v13 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  if ( !FirstFree || (char *)FirstFree + v13 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_WORD *)FirstFree + 1) = v13;
  v12[1] = AceFlags;
  *v12 = 17;
  *((_DWORD *)v12 + 1) = AccessMask;
  RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v12 + 8, Sid);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
