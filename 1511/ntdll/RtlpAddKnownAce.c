/*
 * XREFs of RtlpAddKnownAce @ 0x180019524
 * Callers:
 *     RtlAddAccessAllowedAce @ 0x1800191F0 (RtlAddAccessAllowedAce.c)
 *     RtlCheckTokenMembershipEx @ 0x18005E3A0 (RtlCheckTokenMembershipEx.c)
 *     RtlAddAccessAllowedAceEx @ 0x18007D4C0 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAccessDeniedAceEx @ 0x180084F60 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAccessDeniedAce @ 0x180085940 (RtlAddAccessDeniedAce.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x180088194 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlAddAuditAccessAceEx @ 0x180088A30 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessAce @ 0x180088C40 (RtlAddAuditAccessAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x18008AFA0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x18008AFF0 (RtlAddAuditAccessObjectAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x18008B050 (RtlAddAccessAllowedObjectAce.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F95B4 (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180019670 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1800196D0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180019A30 (RtlValidSid.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlpAddKnownAce(char *a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, char a6)
{
  __int64 result; // rax
  unsigned __int8 v11; // bp
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned __int16 v14; // r8
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !(unsigned __int8)RtlValidSid(Src) )
    return 3221225592LL;
  if ( (unsigned __int8)*a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v11 = a2;
  if ( (unsigned __int8)*a1 > (unsigned __int8)a2 )
    v11 = *a1;
  v12 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
      v12 = a3 & 0xFFFFFF20;
    if ( v12 )
      return 3221225485LL;
  }
  if ( !(unsigned __int8)RtlValidAcl(a1) || !(unsigned __int8)RtlFirstFreeAce(a1, v15) )
    return 3221225591LL;
  v13 = v15[0];
  v14 = 4 * (Src[1] + 4);
  if ( !v15[0] || v15[0] + (unsigned __int64)v14 > (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
    return 3221225625LL;
  *(_WORD *)(v15[0] + 2LL) = v14;
  *(_BYTE *)(v13 + 1) = a3;
  *(_BYTE *)v13 = a6;
  *(_DWORD *)(v13 + 4) = a4;
  memmove((void *)(v13 + 8), Src, 4 * (unsigned int)Src[1] + 8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v11;
  return result;
}
