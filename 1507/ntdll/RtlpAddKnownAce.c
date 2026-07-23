/*
 * XREFs of RtlpAddKnownAce @ 0x180020084
 * Callers:
 *     RtlAddAccessAllowedAce @ 0x18001FD50 (RtlAddAccessAllowedAce.c)
 *     RtlCheckTokenMembershipEx @ 0x18004AF00 (RtlCheckTokenMembershipEx.c)
 *     RtlAddAccessAllowedAceEx @ 0x180070FC0 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAccessDeniedObjectAce @ 0x180073C70 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x180073CC0 (RtlAddAuditAccessObjectAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x180073D20 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAuditAccessAceEx @ 0x180077760 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessAce @ 0x180078780 (RtlAddAuditAccessAce.c)
 *     RtlAddAccessDeniedAceEx @ 0x180078D60 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAccessDeniedAce @ 0x1800792E0 (RtlAddAccessDeniedAce.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18007F924 (RtlpSysVolCreateSecurityDescriptor.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F9C9C (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x1800201C0 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x180020320 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180020360 (RtlValidAcl.c)
 *     memmove @ 0x180098200 (memmove.c)
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
