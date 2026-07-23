/*
 * XREFs of RtlpAddKnownAce @ 0x180014CD4
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180011030 (RtlCheckTokenMembershipEx.c)
 *     RtlAddAccessAllowedAce @ 0x1800149A0 (RtlAddAccessAllowedAce.c)
 *     RtlAddAccessAllowedAceEx @ 0x1800815D0 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAccessDeniedAceEx @ 0x180088EB0 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAccessDeniedAce @ 0x180089930 (RtlAddAccessDeniedAce.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008C3D4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlAddAuditAccessAceEx @ 0x18008CF20 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessAce @ 0x18008D4A0 (RtlAddAuditAccessAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x18008F930 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x18008F980 (RtlAddAuditAccessObjectAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x18008F9E0 (RtlAddAccessAllowedObjectAce.c)
 *     _ResCreateSecurityDescriptor @ 0x180103E8C (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180014E10 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x180014F70 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180014FB0 (RtlValidAcl.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlpAddKnownAce(PACL Acl, unsigned int a2, int a3, int a4, unsigned __int8 *Sid, char a6)
{
  unsigned __int8 AclRevision; // bp
  unsigned int v11; // eax
  char *v12; // r9
  unsigned __int16 v13; // r8
  __int64 result; // rax
  PVOID FirstFree; // [rsp+20h] [rbp-28h] BYREF

  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  AclRevision = a2;
  if ( Acl->AclRevision > (unsigned __int8)a2 )
    AclRevision = Acl->AclRevision;
  v11 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
      v11 = a3 & 0xFFFFFF20;
    if ( v11 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v12 = (char *)FirstFree;
  v13 = 4 * (Sid[1] + 4);
  if ( !FirstFree || (char *)FirstFree + v13 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_WORD *)FirstFree + 1) = v13;
  v12[1] = a3;
  *v12 = a6;
  *((_DWORD *)v12 + 1) = a4;
  memmove(v12 + 8, Sid, 4 * (unsigned int)Sid[1] + 8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
