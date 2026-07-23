/*
 * XREFs of RtlpAddKnownObjectAce @ 0x18008B09C
 * Callers:
 *     RtlAddAccessDeniedObjectAce @ 0x18008AFA0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x18008AFF0 (RtlAddAuditAccessObjectAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x18008B050 (RtlAddAccessAllowedObjectAce.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180019670 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1800196D0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180019A30 (RtlValidSid.c)
 *     RtlCopySid @ 0x180062220 (RtlCopySid.c)
 */

__int64 __fastcall RtlpAddKnownObjectAce(
        PACL Acl,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6,
        unsigned __int8 *Sid,
        char a8)
{
  int v12; // esi
  unsigned int v13; // eax
  int v14; // eax
  unsigned __int16 v15; // dx
  char *v16; // r8
  _OWORD *v17; // rdx
  __int64 result; // rax
  PVOID FirstFree; // [rsp+20h] [rbp-38h] BYREF

  v12 = 0;
  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 != 4 )
    return 3221225561LL;
  v13 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a8 == 7 )
      v13 = a3 & 0xFFFFFF20;
    if ( v13 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v14 = Sid[1];
  v15 = 4 * v14 + 20;
  if ( a5 )
  {
    v12 = 1;
    v15 = 4 * v14 + 36;
  }
  if ( a6 )
  {
    v12 |= 2u;
    v15 += 16;
  }
  v16 = (char *)FirstFree;
  if ( !FirstFree || (char *)FirstFree + v15 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_WORD *)FirstFree + 1) = v15;
  v17 = v16 + 12;
  v16[1] = a3;
  *v16 = a8;
  *((_DWORD *)v16 + 1) = a4;
  *((_DWORD *)v16 + 2) = v12;
  if ( a5 )
  {
    *v17 = *a5;
    v17 = v16 + 28;
  }
  if ( a6 )
    *v17++ = *a6;
  RtlCopySid(4 * v14 + 8, v17, Sid);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = 4;
  return result;
}
