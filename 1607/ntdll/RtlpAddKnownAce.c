/*
 * XREFs of RtlpAddKnownAce @ 0x180014CE4
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180011040 (RtlCheckTokenMembershipEx.c)
 *     RtlAddAccessAllowedAce @ 0x1800149B0 (RtlAddAccessAllowedAce.c)
 *     RtlAddAccessAllowedAceEx @ 0x1800815E0 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAccessDeniedAceEx @ 0x180088EC0 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAccessDeniedAce @ 0x180089940 (RtlAddAccessDeniedAce.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008C3E4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlAddAuditAccessAceEx @ 0x18008CF30 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessAce @ 0x18008D4B0 (RtlAddAuditAccessAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x18008F940 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x18008F990 (RtlAddAuditAccessObjectAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x18008F9F0 (RtlAddAccessAllowedObjectAce.c)
 *     _ResCreateSecurityDescriptor @ 0x180103F4C (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180014E20 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x180014F80 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180014FC0 (RtlValidAcl.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlpAddKnownAce(char *a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, char a6)
{
  unsigned __int8 v10; // bp
  unsigned int v11; // eax
  __int64 v12; // r9
  unsigned __int16 v13; // r8
  __int64 result; // rax
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !(unsigned __int8)RtlValidSid(Src) )
    return 3221225592LL;
  if ( (unsigned __int8)*a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = a2;
  if ( (unsigned __int8)*a1 > (unsigned __int8)a2 )
    v10 = *a1;
  v11 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
      v11 = a3 & 0xFFFFFF20;
    if ( v11 )
      return 3221225485LL;
  }
  if ( !(unsigned __int8)RtlValidAcl(a1) || !(unsigned __int8)RtlFirstFreeAce(a1, v15) )
    return 3221225591LL;
  v12 = v15[0];
  v13 = 4 * (Src[1] + 4);
  if ( !v15[0] || v15[0] + (unsigned __int64)v13 > (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
    return 3221225625LL;
  *(_WORD *)(v15[0] + 2LL) = v13;
  *(_BYTE *)(v12 + 1) = a3;
  *(_BYTE *)v12 = a6;
  *(_DWORD *)(v12 + 4) = a4;
  memmove((void *)(v12 + 8), Src, 4 * (unsigned int)Src[1] + 8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v10;
  return result;
}
